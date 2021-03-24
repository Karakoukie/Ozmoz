using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Photon.Pun;
using Photon.Realtime;

namespace Ozmoz
{
    public class SceneLoader : MonoBehaviourPun
    {
        [Header("Scenes")]
        public ScreenFade screenFade;
        public SceneReference scene;
        private static bool isLoading;

        void Start()
        {
            if (LoadingUI.Find())
                LoadingUI.Find().SetVisible(false);

            isLoading = false;

            if (PhotonNetwork.IsConnected)
            {
                PhotonNetwork.IsMessageQueueRunning = true;
            }
        }

        public void Load()
        {
            if (PhotonNetwork.IsConnected)
            {
                photonView.RPC("LoadRPC", RpcTarget.AllBuffered);
            }
            else
            {
                if (screenFade)
                {
                    if (LoadingUI.Find())
                        LoadingUI.Find().SetVisible(true);
                    StartCoroutine(WaitForFade());
                }
                else
                {
                    if (LoadingUI.Find())
                        LoadingUI.Find().SetVisible(true);
                    LoadScene(scene);
                }
            }
        }

        [PunRPC]
        private void LoadRPC()
        {
            if (screenFade)
            {
                if (LoadingUI.Find())
                    LoadingUI.Find().SetVisible(true);
                StartCoroutine(WaitForFade());
            }
            else
            {
                if (LoadingUI.Find())
                    LoadingUI.Find().SetVisible(true);
                LoadScene(scene);
            }
        }

        IEnumerator WaitForFade()
        {
            yield return StartCoroutine(screenFade.IFadeOut());
            LoadScene(scene.ScenePath);
        }

        public static void LoadScene(string sceneName)
        {
            if (!isLoading)
            {
                isLoading = true;

                if (PhotonNetwork.IsConnected)
                {
                    PhotonNetwork.IsMessageQueueRunning = false;
                    PhotonNetwork.LoadLevel(sceneName);
                }
                else
                {
                    SceneManager.LoadScene(sceneName, LoadSceneMode.Single);
                }
            }
        }
    }
}