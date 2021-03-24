using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

namespace Ozmoz
{
    public class LoadingUI : MonoBehaviour
    {
        public Image icon;
        public Text text;

        private void Start()
        {
            DontDestroyOnLoad(this);    

            if (icon)
                icon.CrossFadeAlpha(0f, 0f, true);
            if (text)
                text.CrossFadeAlpha(0f, 0f, true);
        }

        public void SetVisible(bool visible)
        {
            if (visible)
            {
                if (icon)
                    icon.CrossFadeAlpha(1f, 1f, true);
                if (text)
                    text.CrossFadeAlpha(1f, 1f, true);
            }
            else
            {
                if (icon)
                    icon.CrossFadeAlpha(0f, 1f, true);
                if (text)
                    text.CrossFadeAlpha(0f, 1f, true);
            }
        }

        public static LoadingUI Find()
        {
            var loadingUI = GameObject.FindGameObjectWithTag("LoadingUI");

            if (loadingUI)
            {
                if (loadingUI.GetComponent<LoadingUI>())
                {
                    return loadingUI.GetComponent<LoadingUI>();
                }
            }

            return null;
        }
    }
}