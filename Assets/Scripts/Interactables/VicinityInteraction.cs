using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Ozmoz
{
    [System.Serializable]
    public class VicinityInteraction : Interaction
    {
        public Vector2 size;
        public LayerMask layer;

        public override bool Check()
        {
            if (Physics2D.OverlapBox((Vector2)transform.position, size, 0f, layer) != null)
            {
                if (inverted)
                {
                    Disactivate();
                    return false;
                }

                Activate();
                return true;
            }

            if (inverted)
            {
                Activate();
                return true;
            }

            Disactivate();
            return false;
        }

        private void OnDrawGizmosSelected()
        {
            Gizmos.color = Color.green;
            Gizmos.DrawWireCube(transform.position, (Vector3)size);
        }
    }
}