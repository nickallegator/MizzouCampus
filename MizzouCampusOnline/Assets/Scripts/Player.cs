using Mirror;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Player : NetworkBehaviour
{
    float movementSpeed = 6.0f;
    float horizontalSpeed = 2.0f;
    float verticalSpeed = 2.0f;
    private Vector3 moveDirection = Vector3.zero;
    private CharacterController controller;

    private float xRotation = 0.0f;
    private float yRotation = 0.0f;
    public Camera cam;

    private bool bPlaying = true;
    void HandleMovement()
    {
        if(isLocalPlayer && bPlaying)
        {
            // player movement - forward, backward, left, right
            float horizontal = Input.GetAxis("Horizontal") * movementSpeed;
            float vertical = Input.GetAxis("Vertical") * movementSpeed;
            controller.Move((cam.transform.right * horizontal + cam.transform.forward * vertical) * Time.deltaTime);

        }
    }

    void HandleCamera()
    {
        if(isLocalPlayer && bPlaying)
        {
            float mouseX = Input.GetAxis("Mouse X") * horizontalSpeed;
            float mouseY = Input.GetAxis("Mouse Y") * verticalSpeed;

            yRotation += mouseX;
            xRotation -= mouseY;
            xRotation = Mathf.Clamp(xRotation, -90, 90);

            cam.transform.eulerAngles = new Vector3(xRotation, yRotation, 0.0f);

            
        }
    }

    void HandlePause()
    {
        if (isLocalPlayer)
        {
            if (Input.GetKeyDown(KeyCode.Escape))
            {
                //Mistake happened here vvvv
                Cursor.lockState = CursorLockMode.None;
                Cursor.visible = true;
                bPlaying = false;
            }

            if (Cursor.visible && Input.GetMouseButtonDown(1))
            {
                Cursor.lockState = CursorLockMode.Locked;
                Cursor.visible = false;
                bPlaying = true;
            }
        }
    }
    private void Start()
    {
        controller = GetComponent<CharacterController>();
        Cursor.lockState = CursorLockMode.Locked;
        Cursor.visible = false;
    }
    private void Update()
    {
        HandlePause();
        HandleMovement();
        HandleCamera();
    }
}

