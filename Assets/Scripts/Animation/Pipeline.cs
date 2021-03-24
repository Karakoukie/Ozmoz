using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace Ozmoz
{
    [ExecuteInEditMode]
    public class Pipeline : MonoBehaviour
    {
        [Header("Transformations")]
        public Transform target;
        public Vector2 startPosition;
        public Vector3 startRotation;
        public Vector2 startScale = Vector2.one;
        public Vector2 endPosition;
        public Vector2 endScale = Vector2.one;
        public Vector3 endRotation;

        [Header("Animation")]
        public float speed = 0;
        public AnimationCurve curve = new AnimationCurve();
        public bool playOnAwake = true;
        public bool loop = false;
        public bool playback = false;

        [Header("Optionnals events")]
        public UnityEvent onMoving = new UnityEvent();
        public UnityEvent onStopMoving = new UnityEvent();
        private bool isMoving;

        private bool animated;
        private float currentSpeed;
        private float currentPlayTime;

        public void SetSpeed(float speed)
        {
            this.speed = speed;
        }

        public void SetProgression(float progression)
        {
            this.currentPlayTime = progression;
        }

        public float GetProgression()
        {
            return currentPlayTime;
        }

        private void Start()
        {
            if (playOnAwake)
            {
                Play();
            }
        }

        void Update()
        {
            currentPlayTime += 0.01f * currentSpeed * Time.deltaTime;

            if (currentPlayTime > curve.keys[curve.length - 1].time)
            {
                isMoving = false;
                onStopMoving.Invoke();

                if (loop)
                {
                    if (playback)
                    {
                        currentPlayTime = curve.keys[curve.length - 1].time;
                        currentSpeed = -currentSpeed;
                    }
                    else
                    {
                        currentPlayTime = 0;
                    }
                }
                else
                {
                    currentPlayTime = curve.keys[curve.length - 1].time;
                    currentSpeed = 0;
                }
            }
            else if (currentPlayTime < curve.keys[0].time)
            {
                isMoving = false;
                onStopMoving.Invoke();

                if (loop)
                {
                    if (playback)
                    {
                        currentSpeed = -currentSpeed;
                    }
                    else
                    {
                        currentPlayTime = curve.keys[curve.length - 1].time;
                    }
                }
                else
                {
                    currentPlayTime = curve.keys[0].time;
                    currentSpeed = 0;
                }
            }
            else
            {
                if (!isMoving && currentSpeed != 0)
                {
                    onMoving.Invoke();
                    isMoving = true;
                }
                else if (currentSpeed == 0)
                {
                    onStopMoving.Invoke();
                    isMoving = false;
                }

                float value = curve.Evaluate(currentPlayTime);

                if (target)
                {
                    target.position = (Vector2)transform.position + startPosition * transform.localScale
                            + (((Vector2)transform.position + endPosition * transform.localScale - (Vector2)transform.position + startPosition * transform.localScale) * value);
                    /*target.rotation.eulerAngles = target.localRotation.eulerAngles + startRotation * transform.localScale
                            + ((transform.rotation.eulerAngles + endRotation * transform.localScale - transform.rotation.eulerAngles + startRotation * transform.localScale) * value);*/
                    target.rotation = Quaternion.Euler(startRotation + endRotation * value);
                    target.localScale = startScale + (endScale - startScale) * value;
                }
            }
        }

        public void Play()
        {
            if (currentSpeed <= 0)
            {
                currentSpeed = speed;
            }
        }

        public void PlayBack()
        {
            if (currentSpeed >= 0)
            {
                currentSpeed = -speed;
            }
        }

        public void Stop()
        {
            if (currentSpeed != 0)
            {
                currentSpeed = 0;
            }
        }

        private void OnRenderObject()
        {
            Update();
        }

        private void OnDrawGizmosSelected()
        {
            Gizmos.DrawLine((Vector2)transform.position + startPosition * transform.localScale, (Vector2)transform.position + endPosition * transform.localScale);
            Gizmos.DrawSphere((Vector2)transform.position + startPosition * transform.localScale, 0.1f * startScale.magnitude);
            Gizmos.DrawSphere((Vector2)transform.position + endPosition * transform.localScale, 0.1f * endScale.magnitude);
        }
    }
}