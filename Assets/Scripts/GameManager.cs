using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

namespace Ozmoz
{
    public class GameManager : MonoBehaviourPunCallbacks
    {
        public Transform ozPlayerStart;
        public Transform mozPlayerStart;

        public SceneReference mainMenuScene;
        public SceneLoader sceneLoader;

        public Player playerPrefab;

        // Start is called before the first frame update
        void Start()
        {
            if (PhotonNetwork.IsConnected)
            {
                bool swapped = false;

                if (PhotonNetwork.LocalPlayer.CustomProperties.Count > 0)
                {
                    if ((bool) PhotonNetwork.LocalPlayer.CustomProperties["swapped"])
                    {
                        swapped = true;
                    }
                }

                if (swapped)
                {
                    if (PhotonNetwork.IsMasterClient)
                    {
                        PhotonNetwork.Instantiate(playerPrefab.name, ozPlayerStart.transform.position, Quaternion.identity, 0);
                    }
                    else
                    {
                        PhotonNetwork.Instantiate(playerPrefab.name, mozPlayerStart.transform.position, Quaternion.identity, 0);
                    }
                }
                else
                {
                    if (PhotonNetwork.IsMasterClient)
                    {
                        PhotonNetwork.Instantiate(playerPrefab.name, mozPlayerStart.transform.position, Quaternion.identity, 0);
                    }
                    else
                    {
                        PhotonNetwork.Instantiate(playerPrefab.name, ozPlayerStart.transform.position, Quaternion.identity, 0);
                    }
                }
            }
            else
            {
                Instantiate(playerPrefab, ozPlayerStart.transform.position, Quaternion.identity);
            }
        }

        public override void OnPlayerLeftRoom(Photon.Realtime.Player otherPlayer)
        {
            if (mainMenuScene != null && sceneLoader)
            {
                sceneLoader.scene = mainMenuScene;
                sceneLoader.Load();
            }
        }
    }
}
