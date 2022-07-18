using Mirror;
using Microsoft;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.UX;


public class HololensHUD : MonoBehaviour
{
    CrossPlayNetworkManager manager;

    [SerializeField]
    private TouchScreenKeyboard keyboard;

    [SerializeField]
    private Dialog dialogPrefabMedium;

    public Dialog DialogPrefabMedium
    {
        get => dialogPrefabMedium;
        set => dialogPrefabMedium = value;
    }

    private string address;

    private void Start()
    {
        address = "";
    }
    void Awake()
    {
        manager = GetComponent<CrossPlayNetworkManager>();
    }

    private void Update()
    {
        if (keyboard != null)
        {
            address = keyboard.text;
        }
    }

    public void Host()
    {
        if (!NetworkClient.active)
        {
            manager.StartHost();
            Debug.LogWarning(manager.isNetworkActive);
            //Dialog myDialog = Dialog.InstantiateFromPrefab(DialogPrefabMedium, new DialogProperty("Choice Dialog, Medium, Near", "Are you sure you want to reset?", DialogButtonHelpers.YesNo), true, true);
        }
    }

    public void ConnectToAddress()
    {
        //keyboard = TouchScreenKeyboard.Open(address, TouchScreenKeyboardType.Default, false, false, false, false);
        keyboard = TouchScreenKeyboard.Open(address, TouchScreenKeyboardType.Search, false, false, false, false, "Enter Address", 0);

        CharacterCreatorMessage characterMessage = new CharacterCreatorMessage
        {
            device = Device.HoloLens
        };
        NetworkClient.connection.Send(characterMessage);

    }

    //Funtion with a preset network address to test connecting hololens and desktop
    public void TestConnectionUI()
    {
        manager.networkAddress = "172.22.48.1";
        Debug.LogWarning(manager.isNetworkActive);
        manager.StartClient();
        


    }
}
