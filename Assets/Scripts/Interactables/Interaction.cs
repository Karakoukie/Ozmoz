using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using Photon.Pun;
using Photon.Realtime;

namespace Ozmoz
{
    [RequireComponent(typeof(PhotonView))]
    public class Interaction : MonoBehaviourPun
    {
        [Header("Activation")]
        public UnityEvent onActivateEvent = new UnityEvent();
        public UnityEvent onDisactivateEvent = new UnityEvent();
        public bool inverted;

        [Header("Duetto params")]
        public DuettoConditioning duettoConditioning;
        public enum DuettoConditioning
        {
            Or,
            And,
            Oz,
            Oz_Only,
            Moz,
            Moz_Only
        }

        public bool activated;
        public bool activatedLocally;
        public Duetto m_duetto;

        private void Start()
        {
            m_duetto = GetComponent<Duetto>();
            onDisactivateEvent.Invoke();
        }

        private void Update()
        {
            Check();

            if (m_duetto && GetCloneInteraction())
            {
                if (duettoConditioning == DuettoConditioning.And)
                {
                    if (activatedLocally && GetCloneInteraction().IsActivatedLocally())
                    {
                        if (!activated)
                        {
                            activated = true;
                            onActivateEvent.Invoke();
                        }
                    }
                    else
                    {
                        if (activated)
                        {
                            activated = false;
                            onDisactivateEvent.Invoke();
                        }
                    }
                }
                else if (duettoConditioning == DuettoConditioning.Or)
                {
                    if (activatedLocally || GetCloneInteraction().IsActivatedLocally())
                    {
                        if (!activated)
                        {
                            activated = true;
                            onActivateEvent.Invoke();
                        }
                    }
                    else
                    {
                        if (activated)
                        {
                            activated = false;
                            onDisactivateEvent.Invoke();
                        }
                    }
                }
                else if (duettoConditioning == DuettoConditioning.Oz)
                {
                    if (transform.position.y > 0)
                    {
                        if (activatedLocally)
                        {
                            if (!activated)
                            {
                                activated = true;
                                onActivateEvent.Invoke();
                            }
                        }
                        else
                        {
                            if (activated)
                            {
                                activated = false;
                                onDisactivateEvent.Invoke();
                            }
                        }
                    }
                    else if (GetCloneInteraction().IsActivatedLocally())
                    {
                        if (!activated)
                        {
                            activated = true;
                            onActivateEvent.Invoke();
                        }
                    }
                    else
                    {
                        if (activated)
                        {
                            activated = false;
                            onDisactivateEvent.Invoke();
                        }
                    }
                }
                else if (duettoConditioning == DuettoConditioning.Oz_Only)
                {
                    if (transform.position.y > 0)
                    {
                        if (activatedLocally)
                        {
                            if (!activated)
                            {
                                activated = true;
                                onActivateEvent.Invoke();
                            }
                        }
                        else
                        {
                            if (activated)
                            {
                                activated = false;
                                onDisactivateEvent.Invoke();
                            }
                        }
                    }
                }
                else if (duettoConditioning == DuettoConditioning.Moz)
                {
                    if (transform.position.y < 0)
                    {
                        if (activatedLocally)
                        {
                            if (!activated)
                            {
                                activated = true;
                                onActivateEvent.Invoke();
                            }
                        }
                        else
                        {
                            if (activated)
                            {
                                activated = false;
                                onDisactivateEvent.Invoke();
                            }
                        }
                    }
                    else
                    {
                        if (GetCloneInteraction().IsActivatedLocally())
                        {
                            if (!activated)
                            {
                                activated = true;
                                onActivateEvent.Invoke();
                            }
                        }
                        else
                        {
                            if (activated)
                            {
                                activated = false;
                                onDisactivateEvent.Invoke();
                            }
                        }
                    }
                }
                else if (duettoConditioning == DuettoConditioning.Moz_Only)
                {
                    if (transform.position.y < 0)
                    {
                        if (activatedLocally)
                        {
                            if (!activated)
                            {
                                activated = true;
                                onActivateEvent.Invoke();
                            }
                        }
                        else
                        {
                            if (activated)
                            {
                                activated = false;
                                onDisactivateEvent.Invoke();
                            }
                        }
                    }
                }
            }
        }

        public virtual bool Check()
        {
            return false;
        }

        [PunRPC]
        protected void ActivateRPC()
        {
            activatedLocally = true;

            if (!m_duetto || !GetCloneInteraction())
            {
                activated = true;
                onActivateEvent.Invoke();
            }
        }

        public void Activate()
        {
            if (activatedLocally)
            {
                return;
            }

            if (PhotonNetwork.IsConnected)
            {
                photonView.RPC("ActivateRPC", RpcTarget.AllBuffered);
            }
            else
            {
                ActivateRPC();
            }
        }

        [PunRPC]
        protected void DisactivateRPC()
        {
            activatedLocally = false;

            if (!m_duetto || !GetCloneInteraction())
            {
                activated = false;
                onDisactivateEvent.Invoke();
            }
        }

        public void Disactivate()
        {
            if (!activatedLocally)
            {
                return;
            }

            if (PhotonNetwork.IsConnected)
            {
                photonView.RPC("DisactivateRPC", RpcTarget.AllBuffered);
            }
            else
            {
                DisactivateRPC();
            }
        }

        public bool IsActivated()
        {
            if (inverted)
            {
                return !activated;
            }

            return activated;
        }

        public bool IsActivatedLocally()
        {
            if (inverted)
            {
                return !activatedLocally;
            }

            return activatedLocally;
        }

        protected Interaction GetCloneInteraction()
        {
            if (m_duetto)
            {
                if (m_duetto.GetClone())
                {
                    if (m_duetto.GetClone().GetComponent<Interaction>())
                    {
                        return m_duetto.GetClone().GetComponent<Interaction>();
                    }
                }
            }

            return null;
        }
    }
}