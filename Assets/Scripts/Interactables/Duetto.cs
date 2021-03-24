using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using Photon.Pun;

namespace Ozmoz
{
    [ExecuteInEditMode]
    public class Duetto : MonoBehaviour
    {
        [Header("Cloning")]
        public Duetto clone;
        public bool synchronize = true;

        [Header("Versionning")]
        public UnityEvent onBeginOzVersionEvent = new UnityEvent();
        public UnityEvent onBeginMozVersionEvent = new UnityEvent();

        // Start is called before the first frame update
        void Update()
        {
            GetClone();

            if (transform.position.y > 0)
            {
                if (synchronize)
                {
                    clone.transform.position = new Vector3(transform.position.x, -transform.position.y, transform.position.z);
                    clone.transform.rotation = new Quaternion(transform.rotation.x, transform.rotation.y, -transform.rotation.z, transform.rotation.w);
                    if (transform.localScale.y < 0)
                    {
                        transform.localScale = new Vector3(transform.localScale.x, -transform.localScale.y, transform.localScale.z);
                    }

                    clone.transform.localScale = new Vector3(transform.localScale.x, -transform.localScale.y, transform.localScale.z);
                }

                onBeginOzVersionEvent.Invoke();
            }
            else
            {
                onBeginMozVersionEvent.Invoke();
            }
        }

        public void SetClone(Duetto clone)
        {
            this.clone = clone;
        }

        public Duetto GetClone()
        {
            if (!clone)
            {
                clone = Instantiate(this, new Vector3(transform.position.x, -transform.position.y, transform.position.z), transform.rotation);

                if (!name.Contains("Oz"))
                {
                    name = "Oz" + name;
                }

                clone.name = name.Replace("Oz", "Moz");

                clone.SetClone(this);
            }

            return clone;
        }
    }
}