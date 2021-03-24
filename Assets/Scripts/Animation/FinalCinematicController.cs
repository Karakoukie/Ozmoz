using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Timeline;
using UnityEngine.Playables;
using Photon.Pun;

namespace Ozmoz
{
    public class FinalCinematicController : MonoBehaviourPun
    {
        public PlayableDirector ozCinematic;
        public PlayableDirector mozCinematic;
        public SceneLoader sceneLoader;

        private bool initialized;

        // Start is called before the first frame update
        void Start()
        {
            if (PhotonNetwork.IsConnected)
            {
                bool swapped = false;

                if (PhotonNetwork.LocalPlayer.CustomProperties.Count > 0)
                {
                    if ((bool)PhotonNetwork.LocalPlayer.CustomProperties["swapped"])
                    {
                        swapped = true;
                    }
                }

                if (swapped)
                {
                    if (PhotonNetwork.IsMasterClient)
                    {
                        mozCinematic.gameObject.SetActive(false);
                        ozCinematic.Play();
                        StartCoroutine(WaitAfterLoadLevel((float)ozCinematic.duration));
                    }
                    else
                    {
                        ozCinematic.gameObject.SetActive(false);
                        mozCinematic.Play();
                        StartCoroutine(WaitAfterLoadLevel((float)mozCinematic.duration));
                    }
                }
                else
                {
                    if (PhotonNetwork.IsMasterClient)
                    {
                        ozCinematic.gameObject.SetActive(false);
                        mozCinematic.Play();
                        StartCoroutine(WaitAfterLoadLevel((float)mozCinematic.duration));
                    }
                    else
                    {
                        mozCinematic.gameObject.SetActive(false);
                        ozCinematic.Play();
                        StartCoroutine(WaitAfterLoadLevel((float)ozCinematic.duration));
                    }
                }
            }
            else
            {
                mozCinematic.gameObject.SetActive(false);
                ozCinematic.Play();
                StartCoroutine(WaitAfterLoadLevel((float)ozCinematic.duration));
            }
        }

        private IEnumerator WaitAfterLoadLevel(float duration)
        {
            yield return new WaitForSeconds(duration);

            if (sceneLoader)
            {
                sceneLoader.Load();
            }
        }
    }
}