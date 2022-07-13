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

    public Device editorDevice;

    public override void OnStartServer()
    {
        base.OnStartServer();
        NetworkServer.RegisterHandler<CharacterCreatorMessage>(OnCreateCharacter);
    }

    public override void OnClientConnect()
    {
        base.OnClientConnect();

        //send the message here
        //the message should be defined above this class in a NetworkMessage
        CharacterCreatorMessage characterMessage = new CharacterCreatorMessage
        {
            device = editorDevice
        };

        NetworkClient.connection.Send(characterMessage);

    }

    void OnCreateCharacter(NetworkConnectionToClient conn, CharacterCreatorMessage message)
    {

        Debug.Log("Create character");
        if (message.device.Equals(Device.HoloLens))
        {
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
