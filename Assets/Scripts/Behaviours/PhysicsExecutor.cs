using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace Ozmoz
{
    [RequireComponent(typeof(Rigidbody2D))]
    public class PhysicsExecutor : MonoBehaviour
    {
        public UnityEvent onRigidbodyMove = new UnityEvent();
        public UnityEvent onRigidbodyStopMove = new UnityEvent();
        public UnityEvent onCollisionEnter = new UnityEvent();
        public UnityEvent onCollisionExit = new UnityEvent();

        private Rigidbody2D m_rigidbody;
        private bool isRigidbodyMoving;

        // Start is called before the first frame update
        void Start()
        {
            m_rigidbody = GetComponent<Rigidbody2D>();
        }

        // Update is called once per frame
        void Update()
        {
            if ((m_rigidbody.velocity.magnitude >= 0.1f || m_rigidbody.velocity.magnitude <= -0.1f) && !isRigidbodyMoving)
            {
                isRigidbodyMoving = true;
                onRigidbodyMove.Invoke();
            }
            else if (isRigidbodyMoving)
            {
                onRigidbodyStopMove.Invoke();
                isRigidbodyMoving = false;
            }
        }

        private void OnCollisionEnter2D(Collision2D other)
        {
            onCollisionEnter.Invoke();
        }

        private void OnTriggerEnter2D(Collider2D other)
        {
            onCollisionEnter.Invoke();
        }

        private void OnCollisionExit2D(Collision2D other)
        {
            onCollisionExit.Invoke();
        }

        private void OnTriggerExit2D(Collider2D other)
        {
            onCollisionExit.Invoke();
        }
    }
}