### Hololens 2 Emulator with Unity

## Requirements 
1. Windows 10 Pro, Enterprise, or Education
2. Enable virtualization in BIOS. The virtual setting can have different names. 
   - Check virtualization is enable by going to task manager and click performance
3. Enable Hyper-V. Go to Control Panel -> Programs -> Programs and Features -> Turn Windows Features on or off and find Hyper-V is check.

## Installing Hyper-V on Windows 11 Home
1. Paste the following in NotePad and save as hv.bat: pushd "%~dp0"dir /b %SystemRoot%\servicing\Packages\*Hyper-V*.mum >hv.txtfor /f %%i in ('findstr /i . hv.txt 2^>nul') do dism /online /norestart /add-package:"%SystemRoot%\servicing\Packages\%%i"del hv.txtDism /online /enable-feature /featurename:Microsoft-Hyper-V -All /LimitAccess /ALLpause
2. Right-click and run the file as administrator 
3. Hyper-V Manager will be install and can be find by searching it in start menu

## Download Hololens Emulator 
https://docs.microsoft.com/en-us/windows/mixed-reality/develop/advanced-concepts/hololens-emulator-archive
 
### Mixed Reality Toolkit
Import Mixed Reality Toolkit to start using all the UX and features on the Hololens 2 Emulator

## MRTK Installtion and Setup
1. https://www.microsoft.com/en-us/download/details.aspx?id=102778
2. Right-Click on the folder and extract all
3. In the folder open up the *MixedRealityFeatureTool* application
4. Find your unity project and select on discover features
5. Open up Mixed Reality Toolkit(0 of 10) and select Mixed Reality Toolkit Foundation
6. Open Platform Support(0 of 5) and select Mixed Reality OpenXR Plugin
7. Import the features

## Set up Plug-in Management
1. Go to Project Setting and find XR Plug-in Management
2. Click the Windows Logo and check the box for OpenXR
3. Click on the orange triangle and select fix issue and then edit
4. Under Interaction Profiles add eye gaze interaction, microsoft hand interaction and mircosoft motion controller
5. Check the Mircosoft Hololens under OpenXR Feature Groups 
6. Select a Depth Submission Mode of 16

## Deploying Hololens 2 Emulator
1. Go to Build Setting and switch to Universal Window Platform
2. Leave the setting to default and build the project
3. Find the build folder and open .sln file
4. Set Solution Platform to x64 or x86
5. Select the Hololens 2 Emulator from the drop down from the list of device next to the green play button
6. Select Debug at the top and Start Debugging or click on the green play button
  - The Hololens Emulator may take a minute to load the Unity Project

*Issues* 
1. If Hololens 2 Emulator does not show under device from drop down, right-click your Universal Windows project in the Solution Explorer and click Set as Startup Project
2. If is still doesn't appear, download Windows 10/11 SDK
