using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using Photon.Pun;

namespace Ozmoz
{
    [ExecuteInEditMode]
    public class DuettoBehaviour : MonoBehaviourPun
    {
        [Header("Duetto options")]
        public bool cloningEnabled = true;
        public bool synchronizationEnabled = true;
        public bool versionningEnabled = true;

        [Header("Duetto childs")]
        public GameObject ozChild;
        public GameObject mozChild;

        [Header("Duetto clone")]
        public DuettoBehaviour clone;

        [Header("Duetto events")]
        public UnityEvent onBecameOzVersion = new UnityEvent();
        public UnityEvent onBecameMozVersion = new UnityEvent();

        private Rigidbody2D m_rigidbody;
        private Pipeline m_Pipeline;
        private bool visible = true;

        // Start is called before the first frame update
        void Start()
        {
            if (GetComponent<Rigidbody2D>())
            {
                m_rigidbody = GetComponent<Rigidbody2D>();
            }

            if (GetComponent<Pipeline>())
            {
                m_Pipeline = GetComponent<Pipeline>();
            }
        }

        // Update is called once per frame
        void Update()
        {
            if (cloningEnabled)
            {
                if (clone == null)
                {
                    clone = Instantiate<DuettoBehaviour>(this, new Vector3(transform.position.x, -transform.position.y, transform.position.z), transform.rotation);
                    clone.SetClone(this);
                }
                else if (synchronizationEnabled)
                {
                    if (m_Pipeline)
                    {
                        if (transform.position.y > 0)
                        {
                            if (clone.GetPipeline())
                            {
                                clone.GetPipeline().SetProgression(m_Pipeline.GetProgression());
                            }
                        }
                    }

                    if (transform.hasChanged)
                    {
                        clone.transform.position = new Vector3(transform.position.x, -transform.position.y, transform.position.z);
                        clone.transform.rotation = transform.rotation;
                        
                        if (transform.position.y > 0)
                        {
                            if (transform.localScale.y > 0)
                            {
                                clone.transform.localScale = new Vector3(transform.localScale.x, -transform.localScale.y, transform.localScale.z);
                            }
                            else
                            {
                                clone.transform.localScale = new Vector3(transform.localScale.x, transform.localScale.y, transform.localScale.z);
                            }
                        }
                        else
                        {
                            if (transform.localScale.y < 0)
                            {
                                clone.transform.localScale = new Vector3(transform.localScale.x, -transform.localScale.y, transform.localScale.z);
                            }
                            else
                            {
                                clone.transform.localScale = new Vector3(transform.localScale.x, transform.localScale.y, transform.localScale.z);
                            }
                        }
                    }
                }
            }

            if (versionningEnabled)
            {
                if (transform.position.y > 0)
                {
                    onBecameOzVersion.Invoke();

                    if (ozChild)
                    {
                        ozChild.SetActive(visible);
                    }

                    if (mozChild)
                    {
                        mozChild.SetActive(false);
                    }

                    if (m_rigidbody)
                    {
                        m_rigidbody.gravityScale = 1;
                    }
                }

                if (transform.position.y < 0)
                {
                    onBecameMozVersion.Invoke();

                    if (ozChild)
                    {
                        ozChild.SetActive(false);
                    }

                    if (mozChild)
                    {
                        mozChild.SetActive(visible);
                    }

                    if (m_rigidbody)
                    {
                        m_rigidbody.gravityScale = -1;
                    }
                }
            }

            transform.hasChanged = false;
        }

        public void SetVisible(bool visible)
        {
            this.visible = visible;
        }

        public void SetClone(DuettoBehaviour newClone)
        {
            clone = newClone;
        }

        public Rigidbody2D GetRigidbody()
        {
            return m_rigidbody;
        }

        public Pipeline GetPipeline()
        {
            return m_Pipeline;
        }
    }
}
