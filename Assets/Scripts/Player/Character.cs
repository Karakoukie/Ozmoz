using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Ozmoz
{
    [RequireComponent(typeof(Animator))]
    [RequireComponent(typeof(SpriteRenderer))]
    public class Character : MonoBehaviour
    {
        private Animator m_animator;
        private SpriteRenderer m_spriteRenderer;
        public ParticleSystem fireflyParticles;

        // Start is called before the first frame update
        void Start()
        {
            m_animator = GetComponent<Animator>();
            m_spriteRenderer = GetComponent<SpriteRenderer>();
        }

        private void OnEnable()
        {
            if (fireflyParticles)
            {
                fireflyParticles.Play();
            }
        }

        public void SetMoveSpeed(float speed)
        {
            if (m_animator)
            {
                m_animator.SetFloat("Speed", speed);
            }
        }

        public void SetGrounded(bool grounded)
        {
            if (m_animator)
            {
                m_animator.SetBool("Grounded", grounded);
            }
        }

        public void SetLayer(int layer)
        {
            if (m_animator)
            {
                m_animator.SetLayerWeight(1, 0);
                m_animator.SetLayerWeight(2, 0);
                m_animator.SetLayerWeight(layer, 1);
            }
        }

        public void Scream()
        {
            if (m_animator)
            {
                if (Random.value >= 0.5f)
                {
                    m_animator.SetTrigger("Scream1");
                }
                else
                {
                    m_animator.SetTrigger("Scream2");
                }
            }
        }

        public void Flip(bool flipped)
        {
            if (m_spriteRenderer)
            {
                m_spriteRenderer.flipX = flipped;
            }
        }
    }
}
