using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Ozmoz
{
    public class ScreamGettingUI : MonoBehaviour
    {
        public Image prideScreamPanel;
        public Image joyScreamPanel;
        public Image curiosityScreamPanel;
        public Image corneredScreamPanel;
        public Image solitudeScreamPanel;
        public Image sadnessScreamPanel;
        public AudioPlayer unlockAudioPlayer;

        private bool waiting;

        void Start()
        {
            prideScreamPanel.CrossFadeAlpha(0f, 0f, true);
            joyScreamPanel.CrossFadeAlpha(0f, 0f, true);
            curiosityScreamPanel.CrossFadeAlpha(0f, 0f, true);
            corneredScreamPanel.CrossFadeAlpha(0f, 0f, true);
            solitudeScreamPanel.CrossFadeAlpha(0f, 0f, true);
            sadnessScreamPanel.CrossFadeAlpha(0f, 0f, true);
        }

        public void GetPride()
        {
            StartCoroutine(FadeIn(prideScreamPanel));
        }

        public void GetJoy()
        {
            StartCoroutine(FadeIn(joyScreamPanel));
        }

        public void GetCuriosity()
        {
            StartCoroutine(FadeIn(curiosityScreamPanel));
        }

        public void GetCornered()
        {
            StartCoroutine(FadeIn(corneredScreamPanel));
        }

        public void GetSolitude()
        {
            StartCoroutine(FadeIn(solitudeScreamPanel));
        }

        public void GetSadness()
        {
            StartCoroutine(FadeIn(sadnessScreamPanel));
        }

        private IEnumerator FadeIn(Image image)
        {
            while(waiting)
            {
                yield return null;
            }

            waiting = true;
            yield return new WaitForSeconds(1);
            if (unlockAudioPlayer)
            {
                unlockAudioPlayer.PlayRandomClip();
            }
            image.CrossFadeAlpha(0f, 0f, true);
            image.CrossFadeAlpha(0.75f, 2f, true);
            yield return new WaitForSeconds(3);
            image.CrossFadeAlpha(0f, 2f, true);
            yield return new WaitForSeconds(3);
            waiting = false;
        }
    }
}