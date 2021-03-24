using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;

namespace Ozmoz
{
    public class PauseMenu : MonoBehaviourPun
    {
        public UnityEvent onRestartEvent = new UnityEvent();
        public UnityEvent onDisconnectEvent = new UnityEvent();
        public RectTransform pauseMenuPanel;

        private void Update()
        {
            if (!pauseMenuPanel)
            {
                return;
            }

            if (Input.GetButtonDown("Cancel"))
            {
                pauseMenuPanel.gameObject.SetActive(!pauseMenuPanel.gameObject.activeSelf);
            }
        }

        public void Restart()
        {
            onRestartEvent.Invoke();
        }

        public void Disconnect()
        {
            onDisconnectEvent.Invoke();
        }
    }
}
