using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Ozmoz
{
    [System.Serializable]
    public class ScreamInteraction : Interaction
    {
        public enum ScreamType
        {
            Pride,
            Cornered,
            Curiosity,
            Solitude,
            Joy,
            Sadness
        }

        public ScreamType screamType = ScreamType.Solitude;

        private bool listened;

        public override bool Check()
        {
            if (!listened)
            {
                List<Player> players = PlayerExecutor.GetPlayers(PlayerExecutor.PlayerReceiverType.MINE);

                if (players.Count == 1)
                {
                    listened = true;
                    players[0].AddScreamInteraction(this);
                }
            }

            return IsActivated();
        }
    }
}