using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;

public class MainMenu : MonoBehaviourPunCallbacks
{
    public enum MenuType
    {
        TITLE,
        LOBBY,
        ROOM
    }

    public MenuType defaultMenu = MenuType.TITLE;
    public Text statusText;

    [Header("Menu containers")]
    public RectTransform titleMenu;
    public RectTransform lobbyMenu;
    public RectTransform roomMenu;

    [Header("Lobby")]
    public InputField roomsNameField;

    [Header("Room")]
    public Text roomNameText;
    public Image Player1Label;
    public Image Player1ReadyLabel;
    public Text Player1StatusText;
    public RectTransform Player1_Oz;
    public RectTransform Player1_Moz;
    public Image Player2Label;
    public Image Player2ReadyLabel;
    public Text Player2StatusText;
    public RectTransform Player2_Oz;
    public RectTransform Player2_Moz;
    public RectTransform Player2_OzCharacter;
    public RectTransform Player2_MozCharacter;
    public Toggle player1ReadyToggle;
    public Toggle player2ReadyToggle;
    public Button playButton;
    public AudioPlayer readyPlayer;
    public AudioPlayer unreadyPlayer;

    private bool swapped;

    private void Start()
    {
        if (PhotonNetwork.InRoom)
        {
            PhotonNetwork.LeaveRoom();
        }

        if (titleMenu)
            titleMenu.gameObject.SetActive(false);
        if (lobbyMenu)
            lobbyMenu.gameObject.SetActive(false);
        if (roomMenu)
            roomMenu.gameObject.SetActive(false);

        switch (defaultMenu)
        {
            case MenuType.TITLE:
                if (titleMenu)
                    titleMenu.gameObject.SetActive(true);
                break;
            case MenuType.LOBBY:
                if (lobbyMenu)
                    lobbyMenu.gameObject.SetActive(true);
                break;
            case MenuType.ROOM:
                if (roomMenu)
                    roomMenu.gameObject.SetActive(true);
                break;
        }
    }

    public void SwitchToTitleMenu()
    {
        if (titleMenu)
            titleMenu.gameObject.SetActive(true);
        if (lobbyMenu)
            lobbyMenu.gameObject.SetActive(false);
        if (roomMenu)
            roomMenu.gameObject.SetActive(false);
    }

    public void SwitchToNoMenu()
    {
        if (titleMenu)
            titleMenu.gameObject.SetActive(false);
        if (lobbyMenu)
            lobbyMenu.gameObject.SetActive(false);
        if (roomMenu)
            roomMenu.gameObject.SetActive(false);
    }

    public void SwitchToLobbyMenu()
    {
        if (titleMenu)
            titleMenu.gameObject.SetActive(false);
        if (lobbyMenu)
            lobbyMenu.gameObject.SetActive(true);
        if (roomMenu)
            roomMenu.gameObject.SetActive(false);
    }

    public void SwitchToRoomMenu()
    {
        if (titleMenu)
            titleMenu.gameObject.SetActive(false);
        if (lobbyMenu)
            lobbyMenu.gameObject.SetActive(false);
        if (roomMenu)
            roomMenu.gameObject.SetActive(true);

        if (roomNameText)
            roomNameText.text = PhotonNetwork.CurrentRoom.Name;
    }

    public void ConnectToMaster()
    {
        if (PhotonNetwork.IsConnected)
        {
            return;
        }

        SwitchToNoMenu();

        statusText.text = "Connecting to the lobby...";

        if (!PhotonNetwork.ConnectUsingSettings())
        {
            statusText.text = "Connection to the lobby failed";
        }
    }

    public void LeaveMaster()
    {
        if (!PhotonNetwork.InLobby)
        {
            return;
        }

        statusText.text = "Disconnecting...";

        if (!PhotonNetwork.LeaveLobby())
        {
            statusText.text = "Not possible to leave the lobby";
        }
    }

    public void LeaveRoom()
    {
        if (!PhotonNetwork.InRoom)
        {
            return;
        }

        statusText.text = "Leave room...";

        if (!PhotonNetwork.LeaveRoom())
        {
            statusText.text = "Not possible to leave the room";
        }
    }

    public void Disconnect()
    {
        if (!PhotonNetwork.IsConnected)
        {
            return;
        }

        PhotonNetwork.Disconnect();
        statusText.text = "Disconnected";
        SwitchToTitleMenu();
    }

    public void Host()
    {
        if (!roomsNameField)
        {
            SwitchToLobbyMenu();
            return;
        }

        if (roomsNameField.text.Length == 0)
        {
            SwitchToLobbyMenu();
            statusText.text = "Please enter a room's name";
            return;
        }

        SwitchToNoMenu();
        statusText.text = "Start hosting...";

        RoomOptions roomOptions = new RoomOptions();
        roomOptions.MaxPlayers = 2;

        if (PhotonNetwork.CreateRoom(roomsNameField.text.ToUpper(), roomOptions))
        {
            statusText.text = "Hosting success !";

            swapped = false;

            if (Player1StatusText)
            {
                Player1StatusText.text = "Connected";
            }

            if (player1ReadyToggle)
            {
                player1ReadyToggle.interactable = true;
            }

            if (player2ReadyToggle)
            {
                player2ReadyToggle.interactable = false;
            }
        }
        else
        {
            statusText.text = "Hosting failed";
            SwitchToLobbyMenu();
        }
    }

    public void Join()
    {
        if (!roomsNameField)
        {
            SwitchToLobbyMenu();
            return;
        }

        if (roomsNameField.text.Length == 0)
        {
            SwitchToLobbyMenu();
            statusText.text = "Please enter a room's name";
            return;
        }

        SwitchToNoMenu();
        statusText.text = "Joining «" + roomsNameField.text + "» ...";

        if (PhotonNetwork.JoinRoom(roomsNameField.text.ToUpper()))
        {
            statusText.text = "Joining success !";

            if (player1ReadyToggle)
            {
                player1ReadyToggle.interactable = false;
            }

            if (player2ReadyToggle)
            {
                player2ReadyToggle.interactable = true;
            }
        }
        else
        {
            statusText.text = "Not possible to join the room";
            SwitchToLobbyMenu();
        }
    }

    public void Swap()
    {
        photonView.RPC("SwapRPCMasterClient", RpcTarget.MasterClient);
    }

    [PunRPC]
    private void SwapRPCMasterClient()
    {
        swapped = !swapped;
        photonView.RPC("SwapRPCOthersBuffered", RpcTarget.OthersBuffered, swapped);
        photonView.RPC("SwapRPCAllBuffered", RpcTarget.AllBuffered);

        if (swapped)
        {
            if (Player1Label)
            {
                Player1Label.color = Color.black;
            }
            if (Player2Label)
            {
                Player2Label.color = Color.white;
            }
            if (Player1ReadyLabel)
            {
                Player1ReadyLabel.color = Color.black;
            }
            if (Player2ReadyLabel)
            {
                Player2ReadyLabel.color = Color.white;
            }
            if (Player1StatusText)
            {
                Player1StatusText.color = Color.black;
            }
            if (Player2StatusText)
            {
                Player2StatusText.color = Color.white;
            }
        }
        else
        {
            if (Player1Label)
            {
                Player1Label.color = Color.white;
            }
            if (Player2Label)
            {
                Player2Label.color = Color.black;
            }
            if (Player1ReadyLabel)
            {
                Player1ReadyLabel.color = Color.white;
            }
            if (Player2ReadyLabel)
            {
                Player2ReadyLabel.color = Color.black;
            }
            if (Player1StatusText)
            {
                Player1StatusText.color = Color.white;
            }
            if (Player2StatusText)
            {
                Player2StatusText.color = Color.black;
            }
        }
    }

    [PunRPC]
    private void SwapRPCOthersBuffered(bool isSwapped)
    {
        swapped = isSwapped;
    }

    [PunRPC]
    private void SwapRPCAllBuffered()
    {
        PhotonNetwork.LocalPlayer.SetCustomProperties(new ExitGames.Client.Photon.Hashtable { { "swapped", swapped } });

        if (swapped)
        {
            if (Player1_Oz)
            {
                Player1_Oz.gameObject.SetActive(false);
            }

            if (Player1_Moz)
            {
                Player1_Moz.gameObject.SetActive(true);
            }

            if (Player2_Oz)
            {
                Player2_Oz.gameObject.SetActive(true);
            }

            if (Player2_Moz)
            {
                Player2_Moz.gameObject.SetActive(false);
            }
        }
        else
        {
            if (Player1_Oz)
            {
                Player1_Oz.gameObject.SetActive(true);
            }

            if (Player1_Moz)
            {
                Player1_Moz.gameObject.SetActive(false);
            }

            if (Player2_Oz)
            {
                Player2_Oz.gameObject.SetActive(false);
            }

            if (Player2_Moz)
            {
                Player2_Moz.gameObject.SetActive(true);
            }
        }

        photonView.RPC("UnreadyEvebody", RpcTarget.AllBuffered);
    }

    [PunRPC]
    private void UnreadyEvebody()
    {
        if (player1ReadyToggle)
        {
            player1ReadyToggle.isOn = false;
        }

        if (player2ReadyToggle)
        {
            player2ReadyToggle.isOn = false;
        }

        if (playButton)
        {
            playButton.interactable = false;
        }
    }

    public void UpdatePlayer1Ready()
    {
        if (player1ReadyToggle)
        {
            if (PhotonNetwork.IsMasterClient)
            {
                photonView.RPC("UpdatePlayer1ReadyRPCOthersBuffered", RpcTarget.AllBuffered, player1ReadyToggle.isOn);
                photonView.RPC("UpdateReadyStates", RpcTarget.AllBuffered);
            }
        }
    }

    [PunRPC]
    private void UpdatePlayer1ReadyRPCOthersBuffered(bool isReady)
    {
        if (player1ReadyToggle)
        {
            player1ReadyToggle.isOn = isReady;
        }

        if (isReady)
        {
            if (readyPlayer)
            {
                readyPlayer.PlayRandomClip();
            }
        }
        else
        {
            if (unreadyPlayer)
            {
                unreadyPlayer.PlayRandomClip();
            }
        }
    }

    public void UpdatePlayer2Ready()
    {
        if (player2ReadyToggle)
        {
            if (!PhotonNetwork.IsMasterClient)
            {
                photonView.RPC("UpdatePlayer2ReadyRPCOthersBuffered", RpcTarget.AllBuffered, player2ReadyToggle.isOn);
                photonView.RPC("UpdateReadyStates", RpcTarget.AllBuffered);
            }
        }
    }

    [PunRPC]
    private void UpdatePlayer2ReadyRPCOthersBuffered(bool isReady)
    {
        if (player2ReadyToggle)
        {
            player2ReadyToggle.isOn = isReady;
        }

        if (isReady)
        {
            if (readyPlayer)
            {
                readyPlayer.PlayRandomClip();
            }
        }
        else
        {
            if (unreadyPlayer)
            {
                unreadyPlayer.PlayRandomClip();
            }
        }
    }

    [PunRPC]
    private void UpdateReadyStates()
    {
        if (player1ReadyToggle && player2ReadyToggle)
        {
            playButton.interactable = player1ReadyToggle.isOn && player2ReadyToggle.isOn && PhotonNetwork.IsMasterClient;
        }
    }

    public override void OnConnectedToMaster()
    {
        statusText.text = "Connected to the lobby";
        SwitchToLobbyMenu();
    }

    public override void OnRoomListUpdate(List<RoomInfo> roomList)
    {

    }

    public override void OnJoinedLobby()
    {
        statusText.text = "Lobby joined";
    }

    public override void OnLeftLobby()
    {
        statusText.text = "Disconnected";
        SwitchToLobbyMenu();
    }

    public override void OnCreateRoomFailed(short returnCode, string message)
    {
        statusText.text = "Room creation failed";
        SwitchToLobbyMenu();
    }

    public override void OnJoinRoomFailed(short returnCode, string message)
    {
        statusText.text = "Room joining failed";
        SwitchToLobbyMenu();
    }

    public override void OnJoinRandomFailed(short returnCode, string message)
    {
        SwitchToLobbyMenu();
    }

    public override void OnJoinedRoom()
    {
        statusText.text = "Room joined";
        SwitchToRoomMenu();
    }

    public override void OnLeftRoom()
    {
        statusText.text = "Room lefted, connected to the lobby";
        SwitchToLobbyMenu();
    }

    public override void OnPlayerEnteredRoom(Photon.Realtime.Player newPlayer)
    {
        photonView.RPC("Player2Connected", RpcTarget.AllBufferedViaServer);
    }

    [PunRPC]
    void Player2Connected()
    {
        if (Player2StatusText)
        {
            Player2StatusText.text = "Connected";
        }

        if (Player2_OzCharacter)
        {
            Player2_OzCharacter.gameObject.SetActive(true);
        }

        if (Player2_MozCharacter)
        {
            Player2_MozCharacter.gameObject.SetActive(true);
        }
    }

    public override void OnPlayerLeftRoom(Photon.Realtime.Player otherPlayer)
    {
        if (otherPlayer.IsMasterClient)
        {
            LeaveRoom();
        }
        else
        {
            if (Player2StatusText)
            {
                Player2StatusText.text = "Disconnected";
            }

            if (Player2_OzCharacter)
            {
                Player2_OzCharacter.gameObject.SetActive(false);
            }

            if (Player2_MozCharacter)
            {
                Player2_MozCharacter.gameObject.SetActive(false);
            }
        }
    }

    public override void OnMasterClientSwitched(Photon.Realtime.Player newMasterClient)
    {
        LeaveRoom();
    }
}
