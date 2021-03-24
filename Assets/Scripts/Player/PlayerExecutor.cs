using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using UnityEngine.Events;

namespace Ozmoz
{
    public class PlayerExecutor : MonoBehaviourPun
    {
        public enum PlayerReceiverType
        {
            OZ,
            MOZ,
            BOTH,
            MINE
        }

        public UnityEvent onStartEvent = new UnityEvent();
        public float startDelay;
        public PlayerReceiverType playerReceiver;
        private bool started;

        private void Start()
        {

        }

        private void Update()
        {
            if (started)
            {
                return;
            }

            if (GameObject.FindGameObjectsWithTag("Player").Length > 0)
            {
                StartCoroutine(DelayedStart());
                started = true;
            }
        }

        IEnumerator DelayedStart()
        {
            yield return new WaitForSeconds(startDelay);
            onStartEvent.Invoke();
        }

        public static List<Player> GetPlayers(PlayerReceiverType playerReceiver)
        {
            List<Player> players = new List<Player>();

            foreach (GameObject player in GameObject.FindGameObjectsWithTag("Player"))
            {
                if (playerReceiver == PlayerReceiverType.MINE)
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
                                if (player.transform.position.y > 0)
                                {
                                    if (player.GetComponent<Player>())
                                    {
                                        players.Add(player.GetComponent<Player>());
                                    }
                                }
                            }
                            else
                            {
                                if (player.transform.position.y < 0)
                                {
                                    if (player.GetComponent<Player>())
                                    {
                                        players.Add(player.GetComponent<Player>());
                                    }
                                }
                            }
                        }
                        else
                        {
                            if (PhotonNetwork.IsMasterClient)
                            {
                                if (player.transform.position.y < 0)
                                {
                                    if (player.GetComponent<Player>())
                                    {
                                        players.Add(player.GetComponent<Player>());
                                    }
                                }
                            }
                            else
                            {
                                if (player.transform.position.y > 0)
                                {
                                    if (player.GetComponent<Player>())
                                    {
                                        players.Add(player.GetComponent<Player>());
                                    }
                                }
                            }
                        }
                    }
                    else
                    {
                        if (player.GetComponent<Player>())
                        {
                            players.Add(player.GetComponent<Player>());
                        }
                    }
                }

                if (playerReceiver == PlayerReceiverType.OZ || playerReceiver == PlayerReceiverType.BOTH)
                {
                    if (player.transform.position.y < 0)
                    {
                        if (player.GetComponent<Player>())
                        {
                            players.Add(player.GetComponent<Player>());
                        }
                    }
                }

                if (playerReceiver == PlayerReceiverType.MOZ || playerReceiver == PlayerReceiverType.BOTH)
                {
                    if (player.transform.position.y > 0)
                    {
                        if (player.GetComponent<Player>())
                        {
                            players.Add(player.GetComponent<Player>());
                        }
                    }
                }
            }

            return players;
        }

        public void EnablePrideAndCorneredScream(bool enabled)
        {
            foreach (Player player in GetPlayers(playerReceiver))
            {
                player.EnablePrideAndCorneredScream(enabled);
            }
        }

        public void EnablecCuriosityAndSolitudeScream(bool enabled)
        {
            foreach (Player player in GetPlayers(playerReceiver))
            {
                player.EnablecCuriosityAndSolitudeScream(enabled);
            }
        }

        public void EnableJoyAndSadnessScream(bool enabled)
        {
            foreach (Player player in GetPlayers(playerReceiver))
            {
                player.EnableJoyAndSadnessScream(enabled);
            }
        }

        public void SetTurorialMode(bool tutorialMode)
        {
            foreach (Player player in GetPlayers(playerReceiver))
            {
                player.SetTurorialMode(tutorialMode);
            }
        }
    }
}