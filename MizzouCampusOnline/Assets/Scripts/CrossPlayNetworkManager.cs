using Mirror;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public struct CharacterCreatorMessage : NetworkMessage
{
    public Device device;

}

public enum Device
{
    Desktop,
    HoloLens,
    Cave
}
public class CrossPlayNetworkManager : NetworkManager
{

    public GameObject HololensPlayerPrefab;

    public GameObject hololensPlayer;

    public Device editorDevice;

    public override void OnStartServer()
    {
        base.OnStartServer();
        NetworkServer.RegisterHandler<CharacterCreatorMessage>(OnCreateCharacter);
    }

    
    public override void OnClientConnect()
    {
        base.OnClientConnect();

        // Hololens2 is only ARM build target at the moument. If the project is expanded will
        // Need to differentiate between ARM devices
        CharacterCreatorMessage characterMessage;
        if (Application.platform == RuntimePlatform.WSAPlayerARM)
        {
            characterMessage = new CharacterCreatorMessage
            {
                device = Device.HoloLens
            };
        }
        // Defaults to editor device
        else
        {
            characterMessage = new CharacterCreatorMessage
            {
                device = editorDevice
            };
        }

        NetworkClient.connection.Send(characterMessage);

    }

    public override void OnStartHost()
    {
        Debug.Log(this.networkAddress);
    }

    void OnCreateCharacter(NetworkConnectionToClient conn, CharacterCreatorMessage message)
    {

        Debug.Log("Create character");
        if (message.device.Equals(Device.HoloLens))
        {
            Destroy(hololensPlayer);
            GameObject player = Instantiate(HololensPlayerPrefab);
            player.name = $"{HololensPlayerPrefab.name} [connId={conn.connectionId}]";
            NetworkServer.AddPlayerForConnection(conn, player);
            //Player2 player = gameobject.GetComponent<Player2>();
            //NetworkServer.AddPlayerForConnection(conn, gameobject);
            /*Player player = gameobject.GetComponent<Player>();
            NetworkServer.AddPlayerForConnection(conn, gameobject);*/
        }
        else if (message.device.Equals(Device.Desktop))
        {
            GameObject player = Instantiate(playerPrefab);
            player.name = $"{playerPrefab.name} [connId={conn.connectionId}]";
            NetworkServer.AddPlayerForConnection(conn, player);
            /*Player player = gameobject.GetComponent<Player>();
            NetworkServer.AddPlayerForConnection(conn, gameobject);*/
        }
    }
}
