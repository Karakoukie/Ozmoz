using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Ozmoz
{
    public class BooleanInteraction : Interaction
    {
        public enum BooleanInteractionType
        {
            Or,
            And
        }

        public BooleanInteractionType type;
        public List<Interaction> interactables = new List<Interaction>();

        public override bool Check()
        {
            if (type == BooleanInteractionType.And)
            {
                foreach (var interactable in interactables)
                {
                    if (interactable != null)
                    {
                        if (!interactable.IsActivated())
                        {
                            Disactivate();
                            return false;
                        }
                    }
                }

                Activate();
                return true;
            }
            else
            {
                foreach (var interactable in interactables)
                {
                    if (interactable != null)
                    {
                        if (interactable.IsActivated())
                        {
                            Activate();
                            return true;
                        }
                    }
                }

                Disactivate();
                return false;
            }
        }

        private void OnDrawGizmosSelected()
        {
            Gizmos.color = Color.yellow;

            if (type == BooleanInteractionType.And)
            {
                Gizmos.color = Color.red;
            }

            foreach (var interactable in interactables)
            {
                if (interactable != null)
                {
                    Gizmos.DrawLine(transform.position, interactable.transform.position);
                }
            }
        }
    }
}