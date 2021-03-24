using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Ozmoz
{
    [System.Serializable]
    public class TutorialControllerEvent
    {
        public Image image;
        public float startDelay;
        public float fadeDuration;
        public float duration;
    }

    public class TutorialController : MonoBehaviour
    {
        public List<TutorialControllerEvent> events;
        public GameObject ozPortal;
        public GameObject mozPortal;
        public float portalDelay;
        public float bottonImageDelay;
        public Image ozBottonImage;
        public Image mozBottonImage;

        private bool imageFixed;

        // Start is called before the first frame update
        void Start()
        {
            foreach (TutorialControllerEvent evt in events)
            {
                StartCoroutine(EventWaiting(evt));
            }

            StartCoroutine(PortalWaiting());
            StartCoroutine(BottonImageWaiting());
        }

        private void Update()
        {
            if (!imageFixed)
            {
                foreach (var player in PlayerExecutor.GetPlayers(PlayerExecutor.PlayerReceiverType.MINE))
                {
                    imageFixed = true;
                    if (player.transform.position.y > 0)
                    {
                        mozBottonImage.CrossFadeAlpha(0, 0f, true);
                    }
                    else
                    {
                        ozBottonImage.CrossFadeAlpha(0, 0f, true);
                    }
                    break;
                }
            }
        }

        IEnumerator EventWaiting(TutorialControllerEvent evt)
        {
            evt.image.CrossFadeAlpha(0, 0, true);
            yield return new WaitForSeconds(evt.startDelay);
            evt.image.CrossFadeAlpha(1, evt.fadeDuration, true);
            yield return new WaitForSeconds(evt.duration);
            evt.image.CrossFadeAlpha(0, evt.fadeDuration, true);
        }

        IEnumerator PortalWaiting()
        {
            yield return new WaitForSeconds(portalDelay);
            ozPortal.SetActive(true);
            mozPortal.SetActive(true);
        }

        IEnumerator BottonImageWaiting()
        {
            yield return new WaitForSeconds(bottonImageDelay);

            foreach (var player in PlayerExecutor.GetPlayers(PlayerExecutor.PlayerReceiverType.MINE))
            {
                if (player.transform.position.y > 0)
                {
                    ozBottonImage.CrossFadeAlpha(0, 4f, true);
                }
                else
                {
                    mozBottonImage.CrossFadeAlpha(0, 4f, true);
                }
                break;
            }
        }
    }
}