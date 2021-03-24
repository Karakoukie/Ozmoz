using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Ozmoz
{
    [System.Serializable]
    public class DualClips
    {
        public AudioClip ozClip;
        public AudioClip mozClip;
    }

    public class DualMusicController : MonoBehaviour
    {
        public AudioSource ozMusic;
        public AudioSource mozMusic;
        public bool loop = true;

        public List<DualClips> dualClips = new List<DualClips>();
        public enum SynchronizationType
        {
            BY_MOVE_SPEED,
            IS_MINE
        }
        public SynchronizationType synchronizationType = SynchronizationType.BY_MOVE_SPEED;

        void Start()
        {
            if (ozMusic)
            {
                ozMusic.playOnAwake = false;
                ozMusic.loop = false;

                if (synchronizationType == SynchronizationType.BY_MOVE_SPEED)
                {
                    ozMusic.volume = 0.25f;
                }
                else
                {
                    ozMusic.volume = 0.0f;
                }
            }

            if (mozMusic)
            {
                mozMusic.loop = false;
                mozMusic.loop = false;
                if (synchronizationType == SynchronizationType.BY_MOVE_SPEED)
                {
                    mozMusic.volume = 0.25f;
                }
                else
                {
                    mozMusic.volume = 0.0f;
                }
            }

            if (ozMusic && mozMusic)
            {
                if (!loop)
                {
                    DualClips nextClip = dualClips[Random.Range(0, dualClips.Count)];

                    ozMusic.clip = nextClip.ozClip;
                    mozMusic.clip = nextClip.mozClip;

                    ozMusic.Play();
                    mozMusic.Play();
                }
            }
        }

        // Update is called once per frame
        void Update()
        {
            foreach (Player player in PlayerExecutor.GetPlayers(PlayerExecutor.PlayerReceiverType.BOTH))
            {
                if (player)
                {
                    if (synchronizationType == SynchronizationType.BY_MOVE_SPEED && player.GetRigidbody())
                    {
                        float velocityMagnitude = 0.25f + player.GetRigidbody().velocity.magnitude;

                        if (velocityMagnitude > 1f)
                        {
                            velocityMagnitude = 1f;
                        }

                        if (player.transform.position.y < 0)
                        {
                            if (ozMusic)
                            {
                                ozMusic.volume = Mathf.Lerp(ozMusic.volume, velocityMagnitude, Time.deltaTime);
                            }
                        }
                        else
                        {
                            if (mozMusic)
                            {
                                mozMusic.volume = Mathf.Lerp(mozMusic.volume, velocityMagnitude, Time.deltaTime);
                            }
                        }
                    }
                    else if (player.photonView.IsMine)
                    {
                        if (player.transform.position.y < 0)
                        {
                            if (ozMusic)
                            {
                                ozMusic.volume = Mathf.Lerp(ozMusic.volume, 1, Time.deltaTime);
                            }
                        }
                        else
                        {
                            if (mozMusic)
                            {
                                mozMusic.volume = Mathf.Lerp(mozMusic.volume, 1, Time.deltaTime);
                            }
                        }
                    }
                }
            }

            if (ozMusic && mozMusic)
            {
                if (!ozMusic.isPlaying && !mozMusic.isPlaying && loop)
                {
                    DualClips nextClip = dualClips[Random.Range(0, dualClips.Count)];

                    ozMusic.clip = nextClip.ozClip;
                    mozMusic.clip = nextClip.mozClip;

                    ozMusic.Play();
                    mozMusic.Play();
                }
            }
        }
    }
}