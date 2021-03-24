using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;

public class ScreenFade : MonoBehaviourPun
{
    [Header("Fade in")]
    public Image fadeInImage;
    public float fadeInDuration;
    public bool fadeInOnStart;

    [Header("Fade out")]
    public Image fadeOutImage;
    public float fadeOutDuration;

    private void Start()
    {
        if (fadeInOnStart)
        {
            FadeIn();
        }
    }

    public void FadeIn()
    {
        StartCoroutine(IFadeIn());
    }

    public void FadeOut()
    {
        StartCoroutine(IFadeOut());
    }

    public void QuitFade()
    {
        StartCoroutine(IQuitFade());
    }

    public IEnumerator IFadeIn()
    {
        if (fadeOutImage)
        {
            fadeOutImage.CrossFadeAlpha(0f, 0f, true);
        }

        if (fadeInImage)
        {
            fadeInImage.CrossFadeAlpha(1f, 0f, true);
            fadeInImage.CrossFadeAlpha(0f, fadeInDuration, true);
            yield return new WaitForSeconds(fadeInDuration);
        }
    }

    public IEnumerator IFadeOut()
    {
        if (fadeInImage)
        {
            fadeInImage.CrossFadeAlpha(0f, 0f, true);
        }

        if (fadeOutImage)
        {
            fadeOutImage.CrossFadeAlpha(0f, 0f, true);
            fadeOutImage.CrossFadeAlpha(1f, fadeOutDuration, true);
            yield return new WaitForSeconds(fadeOutDuration);
        }
    }

    public IEnumerator IQuitFade()
    {
        if (fadeInImage)
        {
            fadeInImage.CrossFadeAlpha(0f, 0f, true);
        }

        if (fadeOutImage)
        {
            fadeOutImage.CrossFadeAlpha(0f, 0f, true);
            fadeOutImage.CrossFadeAlpha(1f, fadeOutDuration, true);
            yield return new WaitForSeconds(fadeOutDuration);
            Application.Quit();
        }
    }
}
