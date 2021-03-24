using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using UnityEngine.Events;

namespace Ozmoz
{
    [RequireComponent(typeof(CapsuleCollider2D))]
    [RequireComponent(typeof(Rigidbody2D))]
    public class Player : MonoBehaviourPun
    {
        [Header("Movement settings")]
        public float moveSpeed;
        public float moveAcceleration;
        public float jumpForce;
        public float doubleJumpForce;
        public float gravityMultiplier;
        public float groundDistance;
        public LayerMask groundLayer;

        [Header("Characters")]
        public Character ozCharacter;
        public Character mozCharacter;

        [Header("Screams")]
        public ScreamSelector screamSelector;
        public ScreamGettingUI screamGettingUI;
        public UnityEvent onPrideScream = new UnityEvent();
        public UnityEvent onCorneredScream = new UnityEvent();
        public UnityEvent onCuriosityScream = new UnityEvent();
        public UnityEvent onSolitudeScream = new UnityEvent();
        public UnityEvent onJoyScream = new UnityEvent();
        public UnityEvent onSadnessScream = new UnityEvent();
        public UnityEvent onTutorialOzScream = new UnityEvent();
        public UnityEvent onTutorialMozScream = new UnityEvent();
        public GameObject curiosityCirclePrefab;
        public GameObject sadnessCirclePrefab;
        public float circlesSpawnHeight;

        [Header("Capsule sizes")]
        public Vector4 normalCapsule;
        public Vector4 littleCapsule;
        public Vector4 bigCapsule;

        private bool prideAndCorneredEnabled;
        private bool curiosityAndSolitudeEnabled;
        private bool joyAndSadnessEnabled;

        private CapsuleCollider2D m_capsuleCollider;
        private Rigidbody2D m_rigidbody;

        private bool grounded;
        private bool doubleJumpEnabled;
        private bool prideActivated;
        private bool corneredActivated;
        private bool curiosityAndSolitudeActivated;
        private bool joyAndSadnessActivated;
        private float currentGroundDistance;
        private bool tutorialMode;

        private List<ScreamInteraction> screamInteractables = new List<ScreamInteraction>();

        // Start is called before the first frame update
        void Start()
        {
            m_capsuleCollider = GetComponent<CapsuleCollider2D>();
            m_rigidbody = GetComponent<Rigidbody2D>();
            currentGroundDistance = groundDistance;
        }

        // Update is called once per frame
        void Update()
        {
            if (!m_rigidbody)
            {
                return;
            }

            /*
            if (grounded)
            {
                m_rigidbody.drag = 1f;

                if (m_rigidbody.sharedMaterial)
                {
                    PhysicsMaterial2D mat = new PhysicsMaterial2D();
                    mat.friction = 0.5f;
                    m_rigidbody.sharedMaterial = mat;
                }
            }
            else
            {
                m_rigidbody.drag = 0f;

                if (m_rigidbody.sharedMaterial)
                {
                    PhysicsMaterial2D mat = new PhysicsMaterial2D();
                    mat.friction = 0.0f;
                    m_rigidbody.sharedMaterial = mat;
                }
            }*/

            if (transform.position.y > 0f)
            {
                m_rigidbody.gravityScale = gravityMultiplier;
                transform.localScale = new Vector3(1, 1, 1);

                if (mozCharacter)
                {
                    mozCharacter.gameObject.SetActive(true);
                    mozCharacter.SetMoveSpeed(Mathf.Abs(m_rigidbody.velocity.x));
                    mozCharacter.SetGrounded(grounded);
                }

                if (ozCharacter)
                {
                    ozCharacter.gameObject.SetActive(false);
                }

                if (!PhotonNetwork.IsConnected || photonView.IsMine)
                {
                    Camera.main.GetComponent<FlipCamera>().flipped = false;
                }

                if (screamSelector)
                {
                    screamSelector.SwitchToMoz();

                    if (transform.position.y >= 3.75)
                    {
                        screamSelector.MoveToBack();
                    }
                    else
                    {
                        screamSelector.MoveToTop();
                    }
                }
            }
            else
            {
                m_rigidbody.gravityScale = -gravityMultiplier;
                transform.localScale = new Vector3(1, -1, 1);

                if (mozCharacter)
                {
                    mozCharacter.gameObject.SetActive(false);
                }

                if (ozCharacter)
                {
                    ozCharacter.gameObject.SetActive(true);
                    ozCharacter.SetMoveSpeed(Mathf.Abs(m_rigidbody.velocity.x));
                    ozCharacter.SetGrounded(grounded);
                }

                if (!PhotonNetwork.IsConnected || photonView.IsMine)
                {
                    Camera.main.GetComponent<FlipCamera>().flipped = true;
                }

                if (screamSelector)
                {
                    screamSelector.SwitchToOz();

                    if (transform.position.y <= -3.75)
                    {
                        screamSelector.MoveToBack();
                    }
                    else
                    {
                        screamSelector.MoveToTop();
                    }
                }
            }

            if (ozCharacter && (m_rigidbody.velocity.x > 0.1 || m_rigidbody.velocity.x < -0.1))
            {
                ozCharacter.Flip(m_rigidbody.velocity.x > 0);
            }

            if (mozCharacter && (m_rigidbody.velocity.x > 0.1 || m_rigidbody.velocity.x < -0.1))
            {
                mozCharacter.Flip(m_rigidbody.velocity.x < 0);
            }

            if (!PhotonNetwork.IsConnected || photonView.IsMine)
            {
                if (Input.GetKeyDown(KeyCode.Tab) && !PhotonNetwork.IsConnected)
                {
                    transform.position = new Vector3(transform.position.x, -transform.position.y, transform.position.z);
                }

                if (Input.GetButtonDown("Jump"))
                {
                    if (doubleJumpEnabled && !grounded)
                    {
                        m_rigidbody.AddForce(transform.up * transform.localScale.y * doubleJumpForce * gravityMultiplier * m_rigidbody.mass, ForceMode2D.Impulse);
                    }
                    else if (grounded)
                    {
                        m_rigidbody.AddForce(transform.up * transform.localScale.y * jumpForce * gravityMultiplier * m_rigidbody.mass, ForceMode2D.Impulse);
                    }
                }

                if (Input.GetButtonDown("NextScream"))
                {
                    if (screamSelector)
                    {
                        screamSelector.TurnToRight();
                        screamSelector.SetVisible(true);
                    }
                }

                if (Input.GetButtonDown("PreviousScream"))
                {
                    if (screamSelector)
                    {
                        screamSelector.TurnToLeft();
                        screamSelector.SetVisible(true);
                    }
                }

                if (Input.GetButtonDown("Scream"))
                {
                    if (screamSelector && !tutorialMode)
                    {
                        screamSelector.SetVisible(true);

                        switch (screamSelector.GetSelectedScream())
                        {
                            case 0: // cornered and pride
                                if (prideAndCorneredEnabled)
                                {
                                    if (transform.position.y < 0)
                                    {
                                        if (prideActivated)
                                        {
                                            return;
                                        }
                                        
                                        corneredActivated = false;
                                        prideActivated = true;

                                        if (PhotonNetwork.IsConnected)
                                        {
                                            photonView.RPC("PrideScreamRPC", RpcTarget.AllBuffered);
                                            photonView.RPC("ScreamCallbackRPC", RpcTarget.AllBuffered);
                                        }
                                        else
                                        {
                                            onPrideScream.Invoke();

                                            if (ozCharacter)
                                            {
                                                ozCharacter.SetLayer(1);
                                            }

                                            if (mozCharacter)
                                            {
                                                mozCharacter.SetLayer(1);
                                            }

                                            if (transform.position.y > 0)
                                            {
                                                m_capsuleCollider.offset = new Vector2(bigCapsule.x, bigCapsule.y);
                                                m_capsuleCollider.size = new Vector2(bigCapsule.z, bigCapsule.w);
                                                currentGroundDistance = groundDistance * 1.5f;
                                            }
                                            else
                                            {
                                                m_capsuleCollider.offset = new Vector2(littleCapsule.x, littleCapsule.y);
                                                m_capsuleCollider.size = new Vector2(littleCapsule.z, littleCapsule.w);
                                                currentGroundDistance = groundDistance * 0.5f;
                                            }
                                        }

                                        foreach (ScreamInteraction screamInteractable in screamInteractables)
                                        {
                                            if (screamInteractable.screamType == ScreamInteraction.ScreamType.Pride)
                                            {
                                                screamInteractable.Activate();
                                            }
                                        }

                                        StartCoroutine(WaitForScream(5, () =>
                                        {
                                            if (corneredActivated)
                                            {
                                                return;
                                            }

                                            prideActivated = false;

                                            if (PhotonNetwork.IsConnected)
                                            {
                                                photonView.RPC("NormalSizeRPC", RpcTarget.AllBuffered);
                                            }
                                            else
                                            {
                                                if (ozCharacter)
                                                {
                                                    ozCharacter.SetLayer(0);
                                                }

                                                if (mozCharacter)
                                                {
                                                    mozCharacter.SetLayer(0);
                                                }

                                                m_capsuleCollider.offset = new Vector2(normalCapsule.x, normalCapsule.y);
                                                m_capsuleCollider.size = new Vector2(normalCapsule.z, normalCapsule.w);
                                                currentGroundDistance = groundDistance;
                                            }

                                            foreach (ScreamInteraction screamInteractable in screamInteractables)
                                            {
                                                if (screamInteractable.screamType == ScreamInteraction.ScreamType.Pride)
                                                {
                                                    screamInteractable.Disactivate();
                                                }
                                            }
                                        }));
                                    }
                                    else
                                    {
                                        if (corneredActivated)
                                        {
                                            return;
                                        }

                                        prideActivated = false;
                                        corneredActivated = true;

                                        if (PhotonNetwork.IsConnected)
                                        {
                                            photonView.RPC("CorneredScreamRPC", RpcTarget.AllBuffered);
                                            photonView.RPC("ScreamCallbackRPC", RpcTarget.AllBuffered);
                                        }
                                        else
                                        {
                                            onCorneredScream.Invoke();

                                            if (ozCharacter)
                                            {
                                                ozCharacter.SetLayer(1);
                                            }

                                            if (mozCharacter)
                                            {
                                                mozCharacter.SetLayer(2);
                                            }

                                            if (transform.position.y > 0)
                                            {
                                                m_capsuleCollider.offset = new Vector2(bigCapsule.x, bigCapsule.y);
                                                m_capsuleCollider.size = new Vector2(bigCapsule.z, bigCapsule.w);
                                                currentGroundDistance = groundDistance * 1.5f;
                                            }
                                            else
                                            {
                                                m_capsuleCollider.offset = new Vector2(littleCapsule.x, littleCapsule.y);
                                                m_capsuleCollider.size = new Vector2(littleCapsule.z, littleCapsule.w);
                                                currentGroundDistance = groundDistance * 0.5f;
                                            }
                                        }

                                        foreach (ScreamInteraction screamInteractable in screamInteractables)
                                        {
                                            if (screamInteractable.screamType == ScreamInteraction.ScreamType.Cornered)
                                            {
                                                screamInteractable.Activate();
                                            }
                                        }

                                        StartCoroutine(WaitForScream(5, () =>
                                        {
                                            if (prideActivated)
                                            {
                                                return;
                                            }
                                            
                                            corneredActivated = false;

                                            if (PhotonNetwork.IsConnected)
                                            {
                                                photonView.RPC("NormalSizeRPC", RpcTarget.AllBuffered);
                                            }
                                            else
                                            {
                                                if (ozCharacter)
                                                {
                                                    ozCharacter.SetLayer(0);
                                                }

                                                if (mozCharacter)
                                                {
                                                    mozCharacter.SetLayer(0);
                                                }

                                                m_capsuleCollider.offset = new Vector2(normalCapsule.x, normalCapsule.y);
                                                m_capsuleCollider.size = new Vector2(normalCapsule.z, normalCapsule.w);
                                                currentGroundDistance = groundDistance;
                                            }

                                            foreach (ScreamInteraction screamInteractable in screamInteractables)
                                            {
                                                if (screamInteractable.screamType == ScreamInteraction.ScreamType.Cornered)
                                                {
                                                    screamInteractable.Disactivate();
                                                }
                                            }
                                        }));
                                    }
                                }
                                else
                                {
                                    return;
                                }
                                break;
                            case 1: // curiosity and solitude
                                if (curiosityAndSolitudeEnabled && !curiosityAndSolitudeActivated)
                                {
                                    curiosityAndSolitudeActivated = true;

                                    if (transform.position.y < 0)
                                    {
                                        if (PhotonNetwork.IsConnected)
                                        {
                                            PhotonNetwork.Instantiate(curiosityCirclePrefab.name, transform.position + Vector3.up * circlesSpawnHeight, Quaternion.identity);
                                            photonView.RPC("ScreamCallbackRPC", RpcTarget.AllBuffered);
                                        }
                                        else
                                        {
                                            Instantiate(curiosityCirclePrefab, transform.position + Vector3.up * circlesSpawnHeight, Quaternion.identity);
                                            onCuriosityScream.Invoke();
                                        }


                                        foreach (ScreamInteraction screamInteractable in screamInteractables)
                                        {
                                            if (screamInteractable.screamType == ScreamInteraction.ScreamType.Curiosity)
                                            {
                                                screamInteractable.Activate();
                                            }
                                        }

                                        StartCoroutine(WaitForScream(5, () =>
                                        {
                                            curiosityAndSolitudeActivated = false;

                                            foreach (ScreamInteraction screamInteractable in screamInteractables)
                                            {
                                                if (screamInteractable.screamType == ScreamInteraction.ScreamType.Curiosity)
                                                {
                                                    screamInteractable.Disactivate();
                                                }
                                            }
                                        }));
                                    }
                                    else
                                    {
                                        if (PhotonNetwork.IsConnected)
                                        {
                                            photonView.RPC("ScreamCallbackRPC", RpcTarget.AllBuffered);
                                        }
                                        else
                                        {
                                            onSolitudeScream.Invoke();
                                        }

                                        foreach (ScreamInteraction screamInteractable in screamInteractables)
                                        {
                                            if (screamInteractable.screamType == ScreamInteraction.ScreamType.Solitude)
                                            {
                                                screamInteractable.Activate();
                                            }
                                        }

                                        StartCoroutine(WaitForScream(5, () =>
                                        {
                                            curiosityAndSolitudeActivated = false;

                                            foreach (ScreamInteraction screamInteractable in screamInteractables)
                                            {
                                                if (screamInteractable.screamType == ScreamInteraction.ScreamType.Solitude)
                                                {
                                                    screamInteractable.Disactivate();
                                                }
                                            }
                                        }));
                                    }
                                }
                                else
                                {
                                    return;
                                }
                                break;
                            case 2: // joy and sadness
                                if (joyAndSadnessEnabled && !joyAndSadnessActivated)
                                {
                                    joyAndSadnessActivated = true;

                                    if (transform.position.y < 0)
                                    {
                                        if (PhotonNetwork.IsConnected)
                                        {
                                            photonView.RPC("ScreamCallbackRPC", RpcTarget.AllBuffered);
                                        }
                                        else
                                        {
                                            onJoyScream.Invoke();
                                        }

                                        doubleJumpEnabled = true;

                                        foreach (ScreamInteraction screamInteractable in screamInteractables)
                                        {
                                            if (screamInteractable.screamType == ScreamInteraction.ScreamType.Joy)
                                            {
                                                screamInteractable.Activate();
                                            }
                                        }

                                        StartCoroutine(WaitForScream(5, () =>
                                        {
                                            joyAndSadnessActivated = false;
                                            doubleJumpEnabled = false;

                                            foreach (ScreamInteraction screamInteractable in screamInteractables)
                                            {
                                                if (screamInteractable.screamType == ScreamInteraction.ScreamType.Joy)
                                                {
                                                    screamInteractable.Disactivate();
                                                }
                                            }
                                        }));
                                    }
                                    else
                                    {
                                        if (PhotonNetwork.IsConnected)
                                        {
                                            PhotonNetwork.Instantiate(sadnessCirclePrefab.name, transform.position + Vector3.up * circlesSpawnHeight, Quaternion.identity);
                                            photonView.RPC("ScreamCallbackRPC", RpcTarget.AllBuffered);
                                        }
                                        else
                                        {
                                            Instantiate(sadnessCirclePrefab, transform.position + Vector3.up * circlesSpawnHeight, Quaternion.identity);
                                            onSadnessScream.Invoke();
                                        }


                                        foreach (ScreamInteraction screamInteractable in screamInteractables)
                                        {
                                            if (screamInteractable.screamType == ScreamInteraction.ScreamType.Sadness)
                                            {
                                                screamInteractable.Activate();
                                            }
                                        }

                                        StartCoroutine(WaitForScream(5, () =>
                                        {
                                            joyAndSadnessActivated = false;

                                            foreach (ScreamInteraction screamInteractable in screamInteractables)
                                            {
                                                if (screamInteractable.screamType == ScreamInteraction.ScreamType.Sadness)
                                                {
                                                    screamInteractable.Disactivate();
                                                }
                                            }
                                        }));
                                    }
                                }
                                else
                                {
                                    return;
                                }
                                break;
                        }
                    }

                    if (ozCharacter)
                    {
                        ozCharacter.Scream();
                    }

                    if (mozCharacter)
                    {
                        mozCharacter.Scream();
                    }

                    if (PhotonNetwork.IsConnected)
                    {
                        photonView.RPC("ScreamCallbackRPC", RpcTarget.AllBuffered);
                    }
                    else
                    {
                        ScreamCallbackRPC();
                    }
                }
            }
        }

        [PunRPC]
        private void ScreamCallbackRPC()
        {
            if (tutorialMode)
            {
                if (transform.position.y < 0)
                {
                    onTutorialOzScream.Invoke();
                }
                else
                {
                    onTutorialMozScream.Invoke();
                }
            }
            else
            {
                switch (screamSelector.GetSelectedScream())
                {
                    case 0: // cornered and pride
                        if (transform.position.y < 0)
                        {
                            onPrideScream.Invoke();
                        }
                        else
                        {
                            onCorneredScream.Invoke();
                        }
                        break;
                    case 1: // curiosity and solitude
                        if (transform.position.y < 0)
                        {
                            onCuriosityScream.Invoke();
                        }
                        else
                        {
                            onSolitudeScream.Invoke();
                        }
                        break;
                    case 2: // joy and sadness
                        if (transform.position.y < 0)
                        {
                            onJoyScream.Invoke();
                        }
                        else
                        {
                            onSadnessScream.Invoke();
                        }
                        break;
                }
            }
        }

        [PunRPC]
        private void PrideScreamRPC()
        {
            foreach (Player player in PlayerExecutor.GetPlayers(PlayerExecutor.PlayerReceiverType.BOTH))
            {
                if (player)
                {
                    if (player.ozCharacter)
                    {
                        player.ozCharacter.SetLayer(2);
                    }

                    if (player.mozCharacter)
                    {
                        player.mozCharacter.SetLayer(1);
                    }

                    if (player.transform.position.y < 0)
                    {
                        player.m_capsuleCollider.offset = new Vector2(bigCapsule.x, bigCapsule.y);
                        player.m_capsuleCollider.size = new Vector2(bigCapsule.z, bigCapsule.w);
                        player.currentGroundDistance = groundDistance * 1.5f;
                    }
                    else
                    {
                        player.m_capsuleCollider.offset = new Vector2(littleCapsule.x, littleCapsule.y);
                        player.m_capsuleCollider.size = new Vector2(littleCapsule.z, littleCapsule.w);
                        player.currentGroundDistance = groundDistance * 0.5f;
                    }
                }
            }
        }

        [PunRPC]
        private void CorneredScreamRPC()
        {
            foreach (Player player in PlayerExecutor.GetPlayers(PlayerExecutor.PlayerReceiverType.BOTH))
            {
                if (player)
                {
                    if (player.ozCharacter)
                    {
                        player.ozCharacter.SetLayer(1);
                    }

                    if (player.mozCharacter)
                    {
                        player.mozCharacter.SetLayer(2);
                    }

                    if (player.transform.position.y > 0)
                    {
                        player.m_capsuleCollider.offset = new Vector2(bigCapsule.x, bigCapsule.y);
                        player.m_capsuleCollider.size = new Vector2(bigCapsule.z, bigCapsule.w);
                        player.currentGroundDistance = groundDistance * 1.5f;
                    }
                    else
                    {
                        player.m_capsuleCollider.offset = new Vector2(littleCapsule.x, littleCapsule.y);
                        player.m_capsuleCollider.size = new Vector2(littleCapsule.z, littleCapsule.w);
                        player.currentGroundDistance = groundDistance * 0.5f;
                    }
                }
            }
        }

        [PunRPC]
        private void NormalSizeRPC()
        {
            foreach (Player player in PlayerExecutor.GetPlayers(PlayerExecutor.PlayerReceiverType.BOTH))
            {
                if (player)
                {
                    if (player.ozCharacter)
                    {
                        player.ozCharacter.SetLayer(0);
                    }

                    if (player.mozCharacter)
                    {
                        player.mozCharacter.SetLayer(0);
                    }

                    player.m_capsuleCollider.offset = new Vector2(normalCapsule.x, normalCapsule.y);
                    player.m_capsuleCollider.size = new Vector2(normalCapsule.z, normalCapsule.w);
                }
            }
        }

        private IEnumerator WaitForScream(float duration, Action callback)
        {
            yield return new WaitForSeconds(duration);

            if (callback != null)
            {
                callback.Invoke();
            }
        }

        public void EnablePrideAndCorneredScream(bool enabled)
        {
            if (screamSelector)
            {
                screamSelector.ActivePrideAndCornered(enabled);
            }

            if (screamGettingUI)
            {
                if (transform.position.y < 0)
                {
                    screamGettingUI.GetPride();
                }
                else
                {
                    screamGettingUI.GetCornered();
                }
            }

            prideAndCorneredEnabled = enabled;
        }

        public void EnablecCuriosityAndSolitudeScream(bool enabled)
        {
            if (screamSelector)
            {
                screamSelector.ActiveCuriosityAndSolitude(enabled);
            }

            if (screamGettingUI)
            {
                if (transform.position.y < 0)
                {
                    screamGettingUI.GetCuriosity();
                }
                else
                {
                    screamGettingUI.GetSolitude();
                }
            }

            curiosityAndSolitudeEnabled = enabled;
        }

        public void EnableJoyAndSadnessScream(bool enabled)
        {
            if (screamSelector)
            {
                screamSelector.ActiveJoyAndSadness(enabled);
            }

            if (screamGettingUI)
            {
                if (transform.position.y < 0)
                {
                    screamGettingUI.GetJoy();
                }
                else
                {
                    screamGettingUI.GetSadness();
                }
            }

            joyAndSadnessEnabled = enabled;
        }

        public void AddScreamInteraction(ScreamInteraction screamInteractable)
        {
            screamInteractables.Add(screamInteractable);
        }

        public void SetTurorialMode(bool tutorialMode)
        {
            this.tutorialMode = tutorialMode;

            if (screamSelector)
            {
                screamSelector.enabled = !tutorialMode;
                screamSelector.ozBbackgroundSprite.enabled = !tutorialMode;
                screamSelector.mozBackgroundSprite.enabled = !tutorialMode;
            }
        }

        public Rigidbody2D GetRigidbody()
        {
            return m_rigidbody;
        }

        void FixedUpdate()
        {
            if (PhotonNetwork.IsConnected && !photonView.IsMine)
            {
                return;
            }

            RaycastHit2D hit = Physics2D.Raycast(transform.position, -transform.up * transform.localScale.y, currentGroundDistance, groundLayer);
            grounded = hit.collider != null;

            m_rigidbody.velocity = Vector2.MoveTowards(
                m_rigidbody.velocity,
                new Vector2(Input.GetAxis("Horizontal") * moveSpeed, m_rigidbody.velocity.y),
                moveAcceleration * Time.fixedDeltaTime);
        }

        void OnDrawGizmosSelected()
        {
            Gizmos.DrawLine(transform.position, transform.position - transform.up * transform.localScale.y * groundDistance);

            Gizmos.color = Color.gray;
            Gizmos.DrawWireCube((Vector2)transform.position + new Vector2(normalCapsule.x, normalCapsule.y), new Vector2(normalCapsule.z, normalCapsule.w));

            Gizmos.color = Color.blue;
            Gizmos.DrawWireCube((Vector2)transform.position + new Vector2(littleCapsule.x, littleCapsule.y), new Vector2(littleCapsule.z, littleCapsule.w));

            Gizmos.color = Color.red;
            Gizmos.DrawWireCube((Vector2)transform.position + new Vector2(bigCapsule.x, bigCapsule.y), new Vector2(bigCapsule.z, bigCapsule.w));

            Gizmos.color = Color.yellow;
            Gizmos.DrawSphere((Vector2)transform.position + Vector2.up * circlesSpawnHeight, 0.1f);
        }
    }
}
