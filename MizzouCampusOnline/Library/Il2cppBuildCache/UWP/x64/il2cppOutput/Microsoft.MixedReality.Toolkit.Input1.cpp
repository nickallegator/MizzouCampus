#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>
struct InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.InputSystem.XR.PoseState>
struct InputProcessor_1_tD234B7759A8C8888379215D9C740842DBF801EEE;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>
struct InputProcessor_1_t43B1AEC927E378D43D0207A4C031927E872280CE;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>
struct InputProcessor_1_tD1A40E0E5825AAABC3416EC96E087FF6E6351DD2;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>
struct InputProcessor_1_t10DFF33E2326C9CB9E156D4E45DB2D85EFD54C7F;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.InputActionAsset>
struct List_1_t3FD220D91A685A9242170EEF27EC5C0C50F2B5DF;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.InputSystem.XR.PoseState>[]
struct InputProcessor_1U5BU5D_t37ED9D8E6EA5F3F57C79D6A374699DBE2B1E4D2A;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>[]
struct InputProcessor_1U5BU5D_t8533CEA9A58C5C83EB993039C5E7601637DA4140;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>[]
struct InputProcessor_1U5BU5D_t5083205703ED9D1A4B8037E3BBE765389957231A;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>[]
struct InputProcessor_1U5BU5D_tBA73A89FF9ECD7F1DA5B139ABBA8609E7047B2FF;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>[]
struct KeyValuePair_2U5BU5D_tF8154B2302178CCE00D745DBF55F703880469DFC;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.InputSystem.InputActionAsset[]
struct InputActionAssetU5BU5D_t9051AB8F4003F062BCDFB20FD95FC859D910DB82;
// UnityEngine.InputSystem.InputActionMap[]
struct InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
// UnityEngine.InputSystem.InputControlScheme[]
struct InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.InputSystem.Controls.AxisControl
struct AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// Microsoft.MixedReality.Toolkit.Input.Simulation.CameraSimulationSettings
struct CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls
struct ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147;
// Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings
struct ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// Microsoft.MixedReality.Toolkit.Input.Simulation.EyeGazeSimulationSettings
struct EyeGazeSimulationSettings_t3C2AFE26CF2C423D622769D96E9F76A7B3C82A3A;
// Microsoft.MixedReality.Toolkit.Input.HandRay
struct HandRay_t5EA650FBE8E055EC84C362996DE079834E52486E;
// Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem
struct HandsAggregatorSubsystem_t2294604ECCC3071CADA69D1B9F999DC6936948CD;
// Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystemDescriptor
struct HandsAggregatorSubsystemDescriptor_tAD31FB9A23EAF46E7F4CBCDE79211EC40B94795D;
// Microsoft.MixedReality.Toolkit.Subsystems.HandsSubsystemDescriptor
struct HandsSubsystemDescriptor_t95E9FFB7C7F8CE77A059BF1C910A335216FD7336;
// Microsoft.MixedReality.Toolkit.Input.IHandRay
struct IHandRay_tB94975E01D485AE4D856C0305C10BF607355E9FE;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
// UnityEngine.XR.Interaction.Toolkit.Inputs.InputActionManager
struct InputActionManager_tCB367C1814B9264CDE8FA04AA916642BB2887D21;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// UnityEngine.InputSystem.InputControl
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
// UnityEngine.InputSystem.LowLevel.InputEvent
struct InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5;
// Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator
struct InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675;
// UnityEngine.InputSystem.Controls.IntegerControl
struct IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB;
// Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedController
struct MRTKSimulatedController_tBE8AB611B95B22BE5DD7115B4AFDE3020D7A0100;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.InputSystem.Mouse
struct Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.InputSystem.Pointer
struct Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A;
// UnityEngine.InputSystem.XR.PoseControl
struct PoseControl_t28571DE0327FBB52F360251074D1DA294A197862;
// UnityEngine.InputSystem.Controls.QuaternionControl
struct QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1;
// Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedCamera
struct SimulatedCamera_tDD65CFCB2C021ED5723B0D5118897FDED2C5EDB5;
// Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController
struct SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166;
// Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedEyeGaze
struct SimulatedEyeGaze_tC2D5707605893349BE19C4DD5B20CECFAFE42F53;
// Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedEyeGazeDevice
struct SimulatedEyeGazeDevice_t72AF4B2115C96AD9EE5CACAE763BA9D4F8394DC9;
// Microsoft.MixedReality.Toolkit.StabilizedRay
struct StabilizedRay_t1457F4C7AAA73AC72E52DF308C966DEAF7DC0801;
// System.String
struct String_t;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455;
// Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem
struct SyntheticHandsSubsystem_t6DEDC4D4EFB67E98325A20493DBB18105FA0AB3E;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.InputSystem.Controls.Vector2Control
struct Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432;
// UnityEngine.InputSystem.Controls.Vector3Control
struct Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController
struct XRSimulatedController_t44B51DE4F7BD07BE41450B9EF3AFBE65025FC6DA;
// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMD
struct XRSimulatedHMD_t7679B3251840703ACD265307EDB951D185079790;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem/Provider
struct Provider_t07AF49010029C2A008240F38CC51924C28BA321A;
// Microsoft.MixedReality.Toolkit.Subsystems.HandsSubsystem/Provider
struct Provider_t5B915ED8B573464095DF76B520031E7DAC709AC5;

IL2CPP_EXTERN_C RuntimeClass* CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandRay_t5EA650FBE8E055EC84C362996DE079834E52486E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Handedness_t3871B818901E431A761DF26D8F0D4372912651EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandsUtils_t26FAAE4299E16DC7420D7EE44E1CACC830607ED7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHandRay_tB94975E01D485AE4D856C0305C10BF607355E9FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputSimulatorControlSet_tEBDDDFFE6FE73B95955AEB7CC880C98CEBC026F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InspectorNameAttribute_t30287A92B113253B9E22924DD6FC4C7007545497_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimulatedCamera_tDD65CFCB2C021ED5723B0D5118897FDED2C5EDB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimulatedEyeGaze_tC2D5707605893349BE19C4DD5B20CECFAFE42F53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRDisplaySubsystemHelpers_tB70816F6057ACF313853D25EFB914DAAA2E57AB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00435861D6D058D74B680B29B0E3A2FBAFB3FB5A;
IL2CPP_EXTERN_C String_t* _stringLiteral00EF2B5B502CEA3DDD02B13EEE4079EEDE2A31C1;
IL2CPP_EXTERN_C String_t* _stringLiteral07B36BC4CA2960839C717E248211310A9BC81E9D;
IL2CPP_EXTERN_C String_t* _stringLiteral0B82102DC3A4D45D8CBA3044ED82894E4A9880D4;
IL2CPP_EXTERN_C String_t* _stringLiteral0CDF88C8EA618BD6520076A3ACC409488BEFEC9E;
IL2CPP_EXTERN_C String_t* _stringLiteral0D1852D03B2E4EA0826C25FDDEEA6154ABCD36D2;
IL2CPP_EXTERN_C String_t* _stringLiteral105BD51F43FBF9E9EFB8B2BCE2A071CEBDA8DDB4;
IL2CPP_EXTERN_C String_t* _stringLiteral178123D7D73B614FEB74C5215DFCEFE81048AC7E;
IL2CPP_EXTERN_C String_t* _stringLiteral1980181D26CE11B58F1BB35B21FB5869C7E82FB0;
IL2CPP_EXTERN_C String_t* _stringLiteral1BA60A934B71571567B9572D4F99F32C3A5E51E6;
IL2CPP_EXTERN_C String_t* _stringLiteral21B609899B7BE6142B6A72A31E93EDAEE711F9E6;
IL2CPP_EXTERN_C String_t* _stringLiteral3E02ED2483D8DEFE4C815807675DFE33ED69D7EF;
IL2CPP_EXTERN_C String_t* _stringLiteral48517603483B41CA54704BDF7E24E88EB3B9A5D0;
IL2CPP_EXTERN_C String_t* _stringLiteral4B6173546AB6460286A13FCDF79121073FBDFFE9;
IL2CPP_EXTERN_C String_t* _stringLiteral5658212A0372EFC0BBD629918C363B3F19AA143F;
IL2CPP_EXTERN_C String_t* _stringLiteral69578E6B53A7FA77E19016F5E5EF8782D0F73F08;
IL2CPP_EXTERN_C String_t* _stringLiteral6EB285741C33824C27024778C8BEE281153B4786;
IL2CPP_EXTERN_C String_t* _stringLiteral7FA731AB102A937F76D197B2958DE0F45790EC5F;
IL2CPP_EXTERN_C String_t* _stringLiteral9B7FD4479C3C7A9EDA5852AB2BF53306AAD8D042;
IL2CPP_EXTERN_C String_t* _stringLiteralA73B42CBCABB06F31023F52310E585C54B190051;
IL2CPP_EXTERN_C String_t* _stringLiteralABDC87134DD49FD239798081CB346CAF2E854CA3;
IL2CPP_EXTERN_C String_t* _stringLiteralAD7B1D8BF638D85ACD525C9BC41857FB11FB9C82;
IL2CPP_EXTERN_C String_t* _stringLiteralB1AB5646F9CD7F257EE4AE1179461434E713109F;
IL2CPP_EXTERN_C String_t* _stringLiteralC951EF4D75543B44D1068B9E64B6A42F836CD05A;
IL2CPP_EXTERN_C String_t* _stringLiteralCE44D299BFBA79BB0B8038A922ED28383E3A79BB;
IL2CPP_EXTERN_C String_t* _stringLiteralE5109E75EF5A92BD32FE4980A54DC4E709D0F399;
IL2CPP_EXTERN_C String_t* _stringLiteralE9D044E39F717E5D5E577F9DB481EE657960760A;
IL2CPP_EXTERN_C String_t* _stringLiteralEC65B53B4F9D7BFF81D48FF03A166E7FF6D61F08;
IL2CPP_EXTERN_C String_t* _stringLiteralEFC86221AAB7628EBCE554785B46AE44BE79305F;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisInputActionManager_tCB367C1814B9264CDE8FA04AA916642BB2887D21_m7CDC318799E29AEB5F00C9BEF4254FADBF3EA351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisRuntimeObject_m9A7C2BF942D2CE1640896A41290BBD682568B6C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisPoseControl_t28571DE0327FBB52F360251074D1DA294A197862_m7CFE3EFB8FB4FE6D93868C97F05FE58AACA38F1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputState_Change_TisMRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243_m0CBFA3E5C17E4BF35603577C6E10BCDB39720CC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputState_Change_TisPoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2_mA526BB0CADC4D1372B24F30FCD5BBBF31F4D5D79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputState_Change_TisXRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F_mDFF89C2BB2B6686A84CFA2BDAD4B0C1852F58F20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_AddDevice_TisMRTKSimulatedController_tBE8AB611B95B22BE5DD7115B4AFDE3020D7A0100_m209F67BCBCEA7C47FACDFAFA5376A785A390F65C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_AddDevice_TisSimulatedEyeGazeDevice_t72AF4B2115C96AD9EE5CACAE763BA9D4F8394DC9_m12AE2A5175A5A496185FF1ABAE4489BD399F8CAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_AddDevice_TisXRSimulatedHMD_t7679B3251840703ACD265307EDB951D185079790_mFD8F374434DB1AA12B5BB1EEF75463BCD89110FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_RegisterLayout_TisPoseControl_t28571DE0327FBB52F360251074D1DA294A197862_m16002B273139D4CA1AA399FB2C4AC91F398A705C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m57C2321B0C617CE2B157DD9A43918736AB1B0855_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB6E9EEFB6EA8785251C03D5FC740264070E9202B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m386E965F0E7A0EAFAED17B2CDDD4EC5FCFC21F5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m6EBB46D00BB60FC8F09A34060A4FF94C3437F2E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mA46EC6593BFA5F9AAA5FD184D482A6ECF0485D66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSubsystemHelpers_GetFirstRunningSubsystem_TisSyntheticHandsSubsystem_t6DEDC4D4EFB67E98325A20493DBB18105FA0AB3E_mA307BD25771198563D973B2F71CA0C4E21E93C91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* InputSimulatorControlSet_tEBDDDFFE6FE73B95955AEB7CC880C98CEBC026F7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* InspectorNameAttribute_t30287A92B113253B9E22924DD6FC4C7007545497_0_0_0_var;

struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.InputSystem.InputActionAsset>
struct List_1_t3FD220D91A685A9242170EEF27EC5C0C50F2B5DF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	InputActionAssetU5BU5D_t9051AB8F4003F062BCDFB20FD95FC859D910DB82* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t3FD220D91A685A9242170EEF27EC5C0C50F2B5DF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	InputActionAssetU5BU5D_t9051AB8F4003F062BCDFB20FD95FC859D910DB82* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls
struct ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147  : public RuntimeObject
{
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls::<IsTracked>k__BackingField
	bool ___U3CIsTrackedU3Ek__BackingField_0;
	// UnityEngine.XR.InputTrackingState Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls::<TrackingState>k__BackingField
	uint32_t ___U3CTrackingStateU3Ek__BackingField_1;
	// System.Single Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls::<TriggerAxis>k__BackingField
	float ___U3CTriggerAxisU3Ek__BackingField_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls::<TriggerButton>k__BackingField
	bool ___U3CTriggerButtonU3Ek__BackingField_3;
	// System.Single Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls::<GripAxis>k__BackingField
	float ___U3CGripAxisU3Ek__BackingField_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls::<GripButton>k__BackingField
	bool ___U3CGripButtonU3Ek__BackingField_5;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* ___U3CproviderBaseU3Ek__BackingField_1;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.InputSystem.XR.PoseState>>
struct InlinedArray_1_t6E2BC68EDE9604FC8F6F2882E41E78DEBFFC86C7 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tD234B7759A8C8888379215D9C740842DBF801EEE* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t37ED9D8E6EA5F3F57C79D6A374699DBE2B1E4D2A* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>>
struct InlinedArray_1_t209C5F9C876036B8C081C3E70D85ADAA2018197B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t43B1AEC927E378D43D0207A4C031927E872280CE* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t8533CEA9A58C5C83EB993039C5E7601637DA4140* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>>
struct InlinedArray_1_tE5F1062E65707D24360CEAC52E03D32C6E5BA8BB 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tD1A40E0E5825AAABC3416EC96E087FF6E6351DD2* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t5083205703ED9D1A4B8037E3BBE765389957231A* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>>
struct InlinedArray_1_t3C9FDC2B575450733517AE6D9168B8B7CDA52FBF 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t10DFF33E2326C9CB9E156D4E45DB2D85EFD54C7F* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_tBA73A89FF9ECD7F1DA5B139ABBA8609E7047B2FF* ___additionalValues_2;
};

// System.Nullable`1<System.Int32Enum>
struct Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<UnityEngine.XR.XRNode>
struct Nullable_1_tEC8F263BE70D6E8A7019A85EA809A9CFC7448F36 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystemDescriptor,Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem/Provider>
struct SubsystemWithProvider_3_t8551087362696B29D3F2C0A38502D4001458A6DF  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	HandsAggregatorSubsystemDescriptor_tAD31FB9A23EAF46E7F4CBCDE79211EC40B94795D* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t07AF49010029C2A008240F38CC51924C28BA321A* ___U3CproviderU3Ek__BackingField_3;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<Microsoft.MixedReality.Toolkit.Subsystems.HandsSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.HandsSubsystemDescriptor,Microsoft.MixedReality.Toolkit.Subsystems.HandsSubsystem/Provider>
struct SubsystemWithProvider_3_tE396E5A80D62992987D81E0961198A2E9E235E58  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	HandsSubsystemDescriptor_t95E9FFB7C7F8CE77A059BF1C910A335216FD7336* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t5B915ED8B573464095DF76B520031E7DAC709AC5* ___U3CproviderU3Ek__BackingField_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F 
{
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_InterfaceName
	String_t* ___m_InterfaceName_0;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_DeviceClass
	String_t* ___m_DeviceClass_1;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Manufacturer
	String_t* ___m_Manufacturer_2;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Product
	String_t* ___m_Product_3;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Serial
	String_t* ___m_Serial_4;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Version
	String_t* ___m_Version_5;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Capabilities
	String_t* ___m_Capabilities_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_pinvoke
{
	char* ___m_InterfaceName_0;
	char* ___m_DeviceClass_1;
	char* ___m_Manufacturer_2;
	char* ___m_Product_3;
	char* ___m_Serial_4;
	char* ___m_Version_5;
	char* ___m_Capabilities_6;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_com
{
	Il2CppChar* ___m_InterfaceName_0;
	Il2CppChar* ___m_DeviceClass_1;
	Il2CppChar* ___m_Manufacturer_2;
	Il2CppChar* ___m_Product_3;
	Il2CppChar* ___m_Serial_4;
	Il2CppChar* ___m_Version_5;
	Il2CppChar* ___m_Capabilities_6;
};

// UnityEngine.InputSystem.LowLevel.InputEventPtr
struct InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 
{
	// UnityEngine.InputSystem.LowLevel.InputEvent* UnityEngine.InputSystem.LowLevel.InputEventPtr::m_EventPtr
	InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5* ___m_EventPtr_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};

// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=104
struct __StaticArrayInitTypeSizeU3D104_tB8FCB58966E3C72FE51DA41A42ABC6D50B8EF3C9 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D104_tB8FCB58966E3C72FE51DA41A42ABC6D50B8EF3C9__padding[104];
	};
};

// UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E 
{
	// System.Boolean UnityEngine.InputSystem.InputActionMap/DeviceArray::m_HaveValue
	bool ___m_HaveValue_0;
	// System.Int32 UnityEngine.InputSystem.InputActionMap/DeviceArray::m_DeviceCount
	int32_t ___m_DeviceCount_1;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.InputActionMap/DeviceArray::m_DeviceArray
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E_marshaled_pinvoke
{
	int32_t ___m_HaveValue_0;
	int32_t ___m_DeviceCount_1;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E_marshaled_com
{
	int32_t ___m_HaveValue_0;
	int32_t ___m_DeviceCount_1;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray_2;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t53160D71866FCEBB478C0E17CEB6481BAD44F0A4  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t53160D71866FCEBB478C0E17CEB6481BAD44F0A4_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=104 <PrivateImplementationDetails>::341CD0BAA162E1D0B59B7AFBD24390BCE952A9C67915E0DD7905710C8624F136
	__StaticArrayInitTypeSizeU3D104_tB8FCB58966E3C72FE51DA41A42ABC6D50B8EF3C9 ___341CD0BAA162E1D0B59B7AFBD24390BCE952A9C67915E0DD7905710C8624F136_0;
};

// Microsoft.MixedReality.Toolkit.Input.Simulation.CameraSimulationSettings
struct CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9  : public RuntimeObject
{
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.Simulation.CameraSimulationSettings::simulationEnabled
	bool ___simulationEnabled_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.Simulation.CameraSimulationSettings::originOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___originOffset_1;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.Simulation.CameraSimulationSettings::isMovementSmoothed
	bool ___isMovementSmoothed_2;
	// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.CameraSimulationSettings::moveDepth
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___moveDepth_3;
	// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.CameraSimulationSettings::moveHorizontal
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___moveHorizontal_4;
	// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.CameraSimulationSettings::moveVertical
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___moveVertical_5;
	// System.Single Microsoft.MixedReality.Toolkit.Input.Simulation.CameraSimulationSettings::moveSpeed
	float ___moveSpeed_8;
	// System.Single Microsoft.MixedReality.Toolkit.Input.Simulation.CameraSimulationSettings::rotationSensitivity
	float ___rotationSensitivity_11;
	// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.CameraSimulationSettings::roll
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___roll_12;
	// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.CameraSimulationSettings::pitch
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___pitch_13;
	// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.CameraSimulationSettings::yaw
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___yaw_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.Simulation.CameraSimulationSettings::invertPitch
	bool ___invertPitch_15;
};

// UnityEngine.InputSystem.CommonUsages
struct CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78  : public RuntimeObject
{
};

struct CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_StaticFields
{
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Primary2DMotion
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Primary2DMotion_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Secondary2DMotion
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Secondary2DMotion_1;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::PrimaryAction
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___PrimaryAction_2;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::SecondaryAction
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___SecondaryAction_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::PrimaryTrigger
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___PrimaryTrigger_4;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::SecondaryTrigger
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___SecondaryTrigger_5;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Modifier
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Modifier_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Position
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Position_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Orientation
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Orientation_8;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Hatswitch
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Hatswitch_9;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Back
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Back_10;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Forward
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Forward_11;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Menu
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Menu_12;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Submit
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Submit_13;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Cancel
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Cancel_14;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Horizontal
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Horizontal_15;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Vertical
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Vertical_16;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Twist
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Twist_17;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Pressure
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Pressure_18;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::ScrollHorizontal
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___ScrollHorizontal_19;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::ScrollVertical
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___ScrollVertical_20;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Point
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Point_21;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::LowFreqMotor
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___LowFreqMotor_22;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::HighFreqMotor
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___HighFreqMotor_23;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::LeftHand
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___LeftHand_24;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::RightHand
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___RightHand_25;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::BatteryStrength
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___BatteryStrength_26;
};

// Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings
struct ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81  : public RuntimeObject
{
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::<ToggleState>k__BackingField
	bool ___U3CToggleStateU3Ek__BackingField_0;
	// Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationMode Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::simulationMode
	int32_t ___simulationMode_1;
	// Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerAnchorPoint Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::anchorPoint
	int32_t ___anchorPoint_2;
	// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::changeNeutralPose
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___changeNeutralPose_3;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::defaultPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___defaultPosition_4;
	// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::track
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___track_5;
	// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::toggle
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___toggle_6;
	// System.Single Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::depthSensitivity
	float ___depthSensitivity_9;
	// System.Single Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::jitterStrength
	float ___jitterStrength_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::isMovementSmoothed
	bool ___isMovementSmoothed_13;
	// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::moveDepth
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___moveDepth_14;
	// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::moveHorizontal
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___moveHorizontal_15;
	// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::moveVertical
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___moveVertical_16;
	// Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerRotationMode Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::<RotationMode>k__BackingField
	int32_t ___U3CRotationModeU3Ek__BackingField_17;
	// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::roll
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___roll_18;
	// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::pitch
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___pitch_19;
	// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::yaw
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___yaw_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::invertPitch
	bool ___invertPitch_21;
	// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::faceTheCamera
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___faceTheCamera_22;
	// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::triggerAxis
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___triggerAxis_23;
	// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::triggerButton
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___triggerButton_24;
	// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::gripAxis
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___gripAxis_25;
	// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::gripButton
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___gripButton_26;
};

// Microsoft.MixedReality.Toolkit.Input.Simulation.EyeGazeSimulationSettings
struct EyeGazeSimulationSettings_t3C2AFE26CF2C423D622769D96E9F76A7B3C82A3A  : public RuntimeObject
{
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.Simulation.EyeGazeSimulationSettings::<ToggleState>k__BackingField
	bool ___U3CToggleStateU3Ek__BackingField_0;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.Simulation.EyeGazeSimulationSettings::simulationEnabled
	bool ___simulationEnabled_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.Simulation.EyeGazeSimulationSettings::eyeOriginOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eyeOriginOffset_2;
	// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.EyeGazeSimulationSettings::lookHorizontal
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___lookHorizontal_3;
	// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.EyeGazeSimulationSettings::lookVertical
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___lookVertical_4;
	// System.Single Microsoft.MixedReality.Toolkit.Input.Simulation.EyeGazeSimulationSettings::sensitivity
	float ___sensitivity_7;
};

// UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 
{
	// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>[] UnityEngine.InputSystem.Layouts.InputDeviceMatcher::m_Patterns
	KeyValuePair_2U5BU5D_tF8154B2302178CCE00D745DBF55F703880469DFC* ___m_Patterns_0;
};

struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_StaticFields
{
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kInterfaceKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kInterfaceKey_1;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kDeviceClassKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kDeviceClassKey_2;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kManufacturerKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kManufacturerKey_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kProductKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kProductKey_4;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kVersionKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kVersionKey_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_pinvoke
{
	KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC* ___m_Patterns_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_com
{
	KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC* ___m_Patterns_0;
};

// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 
{
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField_33;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<byteOffset>k__BackingField
	uint32_t ___U3CbyteOffsetU3Ek__BackingField_34;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_35;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_36;
};

struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5_StaticFields
{
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatBit
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatBit_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSBit
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatSBit_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatInt
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatInt_6;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUInt
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatUInt_8;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatShort
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatShort_10;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUShort
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatUShort_12;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatByte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatByte_14;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSByte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatSByte_16;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatLong
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatLong_18;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatULong
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatULong_20;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatFloat
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatFloat_22;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatDouble
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatDouble_24;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2_26;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3_27;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatQuaternion
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatQuaternion_28;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Short
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2Short_29;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Short
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3Short_30;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Byte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2Byte_31;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Byte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3Byte_32;
};

// UnityEngine.InspectorNameAttribute
struct InspectorNameAttribute_t30287A92B113253B9E22924DD6FC4C7007545497  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.String UnityEngine.InspectorNameAttribute::displayName
	String_t* ___displayName_0;
};

// Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedControllerState
struct MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedControllerState::primary2DAxis
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___primary2DAxis_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___primary2DAxis_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trigger_1_OffsetPadding[8];
					// System.Single Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedControllerState::trigger
					float ___trigger_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___trigger_1_OffsetPadding_forAlignmentOnly[8];
					float ___trigger_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___grip_2_OffsetPadding[12];
					// System.Single Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedControllerState::grip
					float ___grip_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___grip_2_OffsetPadding_forAlignmentOnly[12];
					float ___grip_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___secondary2DAxis_3_OffsetPadding[16];
					// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedControllerState::secondary2DAxis
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___secondary2DAxis_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___secondary2DAxis_3_OffsetPadding_forAlignmentOnly[16];
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___secondary2DAxis_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___buttons_4_OffsetPadding[24];
					// System.UInt16 Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedControllerState::buttons
					uint16_t ___buttons_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___buttons_4_OffsetPadding_forAlignmentOnly[24];
					uint16_t ___buttons_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___batteryLevel_5_OffsetPadding[26];
					// System.Single Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedControllerState::batteryLevel
					float ___batteryLevel_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___batteryLevel_5_OffsetPadding_forAlignmentOnly[26];
					float ___batteryLevel_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trackingState_6_OffsetPadding[30];
					// System.Int32 Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedControllerState::trackingState
					int32_t ___trackingState_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___trackingState_6_OffsetPadding_forAlignmentOnly[30];
					int32_t ___trackingState_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___isTracked_7_OffsetPadding[34];
					// System.Boolean Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedControllerState::isTracked
					bool ___isTracked_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___isTracked_7_OffsetPadding_forAlignmentOnly[34];
					bool ___isTracked_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___devicePosition_8_OffsetPadding[35];
					// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedControllerState::devicePosition
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___devicePosition_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___devicePosition_8_OffsetPadding_forAlignmentOnly[35];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___devicePosition_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceRotation_9_OffsetPadding[47];
					// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedControllerState::deviceRotation
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___deviceRotation_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___deviceRotation_9_OffsetPadding_forAlignmentOnly[47];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___deviceRotation_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___pointerPosition_10_OffsetPadding[63];
					// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedControllerState::pointerPosition
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pointerPosition_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___pointerPosition_10_OffsetPadding_forAlignmentOnly[63];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pointerPosition_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___pointerRotation_11_OffsetPadding[75];
					// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedControllerState::pointerRotation
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___pointerRotation_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___pointerRotation_11_OffsetPadding_forAlignmentOnly[75];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___pointerRotation_11_forAlignmentOnly;
				};
			};
		};
		uint8_t MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243__padding[91];
	};
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedControllerState
struct MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243_marshaled_pinvoke
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___primary2DAxis_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___primary2DAxis_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trigger_1_OffsetPadding[8];
					float ___trigger_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___trigger_1_OffsetPadding_forAlignmentOnly[8];
					float ___trigger_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___grip_2_OffsetPadding[12];
					float ___grip_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___grip_2_OffsetPadding_forAlignmentOnly[12];
					float ___grip_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___secondary2DAxis_3_OffsetPadding[16];
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___secondary2DAxis_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___secondary2DAxis_3_OffsetPadding_forAlignmentOnly[16];
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___secondary2DAxis_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___buttons_4_OffsetPadding[24];
					uint16_t ___buttons_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___buttons_4_OffsetPadding_forAlignmentOnly[24];
					uint16_t ___buttons_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___batteryLevel_5_OffsetPadding[26];
					float ___batteryLevel_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___batteryLevel_5_OffsetPadding_forAlignmentOnly[26];
					float ___batteryLevel_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trackingState_6_OffsetPadding[30];
					int32_t ___trackingState_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___trackingState_6_OffsetPadding_forAlignmentOnly[30];
					int32_t ___trackingState_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___isTracked_7_OffsetPadding[34];
					int32_t ___isTracked_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___isTracked_7_OffsetPadding_forAlignmentOnly[34];
					int32_t ___isTracked_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___devicePosition_8_OffsetPadding[35];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___devicePosition_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___devicePosition_8_OffsetPadding_forAlignmentOnly[35];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___devicePosition_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceRotation_9_OffsetPadding[47];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___deviceRotation_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___deviceRotation_9_OffsetPadding_forAlignmentOnly[47];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___deviceRotation_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___pointerPosition_10_OffsetPadding[63];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pointerPosition_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___pointerPosition_10_OffsetPadding_forAlignmentOnly[63];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pointerPosition_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___pointerRotation_11_OffsetPadding[75];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___pointerRotation_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___pointerRotation_11_OffsetPadding_forAlignmentOnly[75];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___pointerRotation_11_forAlignmentOnly;
				};
			};
		};
		uint8_t MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243__padding[91];
	};
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedControllerState
struct MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243_marshaled_com
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___primary2DAxis_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___primary2DAxis_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trigger_1_OffsetPadding[8];
					float ___trigger_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___trigger_1_OffsetPadding_forAlignmentOnly[8];
					float ___trigger_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___grip_2_OffsetPadding[12];
					float ___grip_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___grip_2_OffsetPadding_forAlignmentOnly[12];
					float ___grip_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___secondary2DAxis_3_OffsetPadding[16];
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___secondary2DAxis_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___secondary2DAxis_3_OffsetPadding_forAlignmentOnly[16];
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___secondary2DAxis_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___buttons_4_OffsetPadding[24];
					uint16_t ___buttons_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___buttons_4_OffsetPadding_forAlignmentOnly[24];
					uint16_t ___buttons_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___batteryLevel_5_OffsetPadding[26];
					float ___batteryLevel_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___batteryLevel_5_OffsetPadding_forAlignmentOnly[26];
					float ___batteryLevel_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trackingState_6_OffsetPadding[30];
					int32_t ___trackingState_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___trackingState_6_OffsetPadding_forAlignmentOnly[30];
					int32_t ___trackingState_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___isTracked_7_OffsetPadding[34];
					int32_t ___isTracked_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___isTracked_7_OffsetPadding_forAlignmentOnly[34];
					int32_t ___isTracked_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___devicePosition_8_OffsetPadding[35];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___devicePosition_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___devicePosition_8_OffsetPadding_forAlignmentOnly[35];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___devicePosition_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceRotation_9_OffsetPadding[47];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___deviceRotation_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___deviceRotation_9_OffsetPadding_forAlignmentOnly[47];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___deviceRotation_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___pointerPosition_10_OffsetPadding[63];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pointerPosition_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___pointerPosition_10_OffsetPadding_forAlignmentOnly[63];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pointerPosition_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___pointerRotation_11_OffsetPadding[75];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___pointerRotation_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___pointerRotation_11_OffsetPadding_forAlignmentOnly[75];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___pointerRotation_11_forAlignmentOnly;
				};
			};
		};
		uint8_t MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243__padding[91];
	};
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.InputSystem.XR.PoseState
struct PoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Boolean UnityEngine.InputSystem.XR.PoseState::isTracked
					bool ___isTracked_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					bool ___isTracked_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trackingState_2_OffsetPadding[4];
					// UnityEngine.XR.InputTrackingState UnityEngine.InputSystem.XR.PoseState::trackingState
					uint32_t ___trackingState_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___trackingState_2_OffsetPadding_forAlignmentOnly[4];
					uint32_t ___trackingState_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___position_3_OffsetPadding[8];
					// UnityEngine.Vector3 UnityEngine.InputSystem.XR.PoseState::position
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___position_3_OffsetPadding_forAlignmentOnly[8];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___rotation_4_OffsetPadding[20];
					// UnityEngine.Quaternion UnityEngine.InputSystem.XR.PoseState::rotation
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___rotation_4_OffsetPadding_forAlignmentOnly[20];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___velocity_5_OffsetPadding[36];
					// UnityEngine.Vector3 UnityEngine.InputSystem.XR.PoseState::velocity
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___velocity_5_OffsetPadding_forAlignmentOnly[36];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___angularVelocity_6_OffsetPadding[48];
					// UnityEngine.Vector3 UnityEngine.InputSystem.XR.PoseState::angularVelocity
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___angularVelocity_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___angularVelocity_6_OffsetPadding_forAlignmentOnly[48];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___angularVelocity_6_forAlignmentOnly;
				};
			};
		};
		uint8_t PoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2__padding[60];
	};
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.XR.PoseState
struct PoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2_marshaled_pinvoke
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___isTracked_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___isTracked_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trackingState_2_OffsetPadding[4];
					uint32_t ___trackingState_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___trackingState_2_OffsetPadding_forAlignmentOnly[4];
					uint32_t ___trackingState_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___position_3_OffsetPadding[8];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___position_3_OffsetPadding_forAlignmentOnly[8];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___rotation_4_OffsetPadding[20];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___rotation_4_OffsetPadding_forAlignmentOnly[20];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___velocity_5_OffsetPadding[36];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___velocity_5_OffsetPadding_forAlignmentOnly[36];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___angularVelocity_6_OffsetPadding[48];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___angularVelocity_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___angularVelocity_6_OffsetPadding_forAlignmentOnly[48];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___angularVelocity_6_forAlignmentOnly;
				};
			};
		};
		uint8_t PoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2__padding[60];
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.XR.PoseState
struct PoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2_marshaled_com
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___isTracked_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___isTracked_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trackingState_2_OffsetPadding[4];
					uint32_t ___trackingState_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___trackingState_2_OffsetPadding_forAlignmentOnly[4];
					uint32_t ___trackingState_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___position_3_OffsetPadding[8];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___position_3_OffsetPadding_forAlignmentOnly[8];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___rotation_4_OffsetPadding[20];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___rotation_4_OffsetPadding_forAlignmentOnly[20];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___velocity_5_OffsetPadding[36];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___velocity_5_OffsetPadding_forAlignmentOnly[36];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___angularVelocity_6_OffsetPadding[48];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___angularVelocity_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___angularVelocity_6_OffsetPadding_forAlignmentOnly[48];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___angularVelocity_6_forAlignmentOnly;
				};
			};
		};
		uint8_t PoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2__padding[60];
	};
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState
struct XRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState::leftEyePosition
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftEyePosition_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftEyePosition_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___leftEyeRotation_1_OffsetPadding[12];
					// UnityEngine.Quaternion UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState::leftEyeRotation
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___leftEyeRotation_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___leftEyeRotation_1_OffsetPadding_forAlignmentOnly[12];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___leftEyeRotation_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___rightEyePosition_2_OffsetPadding[28];
					// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState::rightEyePosition
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightEyePosition_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___rightEyePosition_2_OffsetPadding_forAlignmentOnly[28];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightEyePosition_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___rightEyeRotation_3_OffsetPadding[40];
					// UnityEngine.Quaternion UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState::rightEyeRotation
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rightEyeRotation_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___rightEyeRotation_3_OffsetPadding_forAlignmentOnly[40];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rightEyeRotation_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___centerEyePosition_4_OffsetPadding[56];
					// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState::centerEyePosition
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___centerEyePosition_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___centerEyePosition_4_OffsetPadding_forAlignmentOnly[56];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___centerEyePosition_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___centerEyeRotation_5_OffsetPadding[68];
					// UnityEngine.Quaternion UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState::centerEyeRotation
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___centerEyeRotation_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___centerEyeRotation_5_OffsetPadding_forAlignmentOnly[68];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___centerEyeRotation_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trackingState_6_OffsetPadding[84];
					// System.Int32 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState::trackingState
					int32_t ___trackingState_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___trackingState_6_OffsetPadding_forAlignmentOnly[84];
					int32_t ___trackingState_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___isTracked_7_OffsetPadding[88];
					// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState::isTracked
					bool ___isTracked_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___isTracked_7_OffsetPadding_forAlignmentOnly[88];
					bool ___isTracked_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___devicePosition_8_OffsetPadding[89];
					// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState::devicePosition
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___devicePosition_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___devicePosition_8_OffsetPadding_forAlignmentOnly[89];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___devicePosition_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceRotation_9_OffsetPadding[101];
					// UnityEngine.Quaternion UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState::deviceRotation
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___deviceRotation_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___deviceRotation_9_OffsetPadding_forAlignmentOnly[101];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___deviceRotation_9_forAlignmentOnly;
				};
			};
		};
		uint8_t XRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F__padding[117];
	};
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState
struct XRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F_marshaled_pinvoke
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftEyePosition_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftEyePosition_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___leftEyeRotation_1_OffsetPadding[12];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___leftEyeRotation_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___leftEyeRotation_1_OffsetPadding_forAlignmentOnly[12];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___leftEyeRotation_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___rightEyePosition_2_OffsetPadding[28];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightEyePosition_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___rightEyePosition_2_OffsetPadding_forAlignmentOnly[28];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightEyePosition_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___rightEyeRotation_3_OffsetPadding[40];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rightEyeRotation_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___rightEyeRotation_3_OffsetPadding_forAlignmentOnly[40];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rightEyeRotation_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___centerEyePosition_4_OffsetPadding[56];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___centerEyePosition_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___centerEyePosition_4_OffsetPadding_forAlignmentOnly[56];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___centerEyePosition_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___centerEyeRotation_5_OffsetPadding[68];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___centerEyeRotation_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___centerEyeRotation_5_OffsetPadding_forAlignmentOnly[68];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___centerEyeRotation_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trackingState_6_OffsetPadding[84];
					int32_t ___trackingState_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___trackingState_6_OffsetPadding_forAlignmentOnly[84];
					int32_t ___trackingState_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___isTracked_7_OffsetPadding[88];
					int32_t ___isTracked_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___isTracked_7_OffsetPadding_forAlignmentOnly[88];
					int32_t ___isTracked_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___devicePosition_8_OffsetPadding[89];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___devicePosition_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___devicePosition_8_OffsetPadding_forAlignmentOnly[89];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___devicePosition_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceRotation_9_OffsetPadding[101];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___deviceRotation_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___deviceRotation_9_OffsetPadding_forAlignmentOnly[101];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___deviceRotation_9_forAlignmentOnly;
				};
			};
		};
		uint8_t XRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F__padding[117];
	};
};
// Native definition for COM marshalling of UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState
struct XRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F_marshaled_com
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftEyePosition_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftEyePosition_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___leftEyeRotation_1_OffsetPadding[12];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___leftEyeRotation_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___leftEyeRotation_1_OffsetPadding_forAlignmentOnly[12];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___leftEyeRotation_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___rightEyePosition_2_OffsetPadding[28];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightEyePosition_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___rightEyePosition_2_OffsetPadding_forAlignmentOnly[28];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightEyePosition_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___rightEyeRotation_3_OffsetPadding[40];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rightEyeRotation_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___rightEyeRotation_3_OffsetPadding_forAlignmentOnly[40];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rightEyeRotation_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___centerEyePosition_4_OffsetPadding[56];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___centerEyePosition_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___centerEyePosition_4_OffsetPadding_forAlignmentOnly[56];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___centerEyePosition_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___centerEyeRotation_5_OffsetPadding[68];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___centerEyeRotation_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___centerEyeRotation_5_OffsetPadding_forAlignmentOnly[68];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___centerEyeRotation_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trackingState_6_OffsetPadding[84];
					int32_t ___trackingState_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___trackingState_6_OffsetPadding_forAlignmentOnly[84];
					int32_t ___trackingState_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___isTracked_7_OffsetPadding[88];
					int32_t ___isTracked_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___isTracked_7_OffsetPadding_forAlignmentOnly[88];
					int32_t ___isTracked_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___devicePosition_8_OffsetPadding[89];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___devicePosition_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___devicePosition_8_OffsetPadding_forAlignmentOnly[89];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___devicePosition_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceRotation_9_OffsetPadding[101];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___deviceRotation_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___deviceRotation_9_OffsetPadding_forAlignmentOnly[101];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___deviceRotation_9_forAlignmentOnly;
				};
			};
		};
		uint8_t XRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F__padding[117];
	};
};

// Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker/AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;
};

// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystemDescriptor,Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem/Provider>
struct MRTKSubsystem_3_tBAE503519008C99BCEF1BDCE9F744D9A68BE7233  : public SubsystemWithProvider_3_t8551087362696B29D3F2C0A38502D4001458A6DF
{
};

struct MRTKSubsystem_3_tBAE503519008C99BCEF1BDCE9F744D9A68BE7233_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3::UpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdatePerfMarker_4;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3::LateUpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___LateUpdatePerfMarker_5;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3::FixedUpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___FixedUpdatePerfMarker_6;
};

// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<Microsoft.MixedReality.Toolkit.Subsystems.HandsSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.HandsSubsystemDescriptor,Microsoft.MixedReality.Toolkit.Subsystems.HandsSubsystem/Provider>
struct MRTKSubsystem_3_t694EAE92B0C1CED74FF283050FB5DB3EBCE84C4E  : public SubsystemWithProvider_3_tE396E5A80D62992987D81E0961198A2E9E235E58
{
};

struct MRTKSubsystem_3_t694EAE92B0C1CED74FF283050FB5DB3EBCE84C4E_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3::UpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdatePerfMarker_4;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3::LateUpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___LateUpdatePerfMarker_5;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3::FixedUpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___FixedUpdatePerfMarker_6;
};

// System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>
struct Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 ___value_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Microsoft.MixedReality.Toolkit.HandJointPose
struct HandJointPose_t82E47711F81612C8E37DC59CAC62E6557CC512A3 
{
	// UnityEngine.Pose Microsoft.MixedReality.Toolkit.HandJointPose::pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose_0;
	// System.Single Microsoft.MixedReality.Toolkit.HandJointPose::radius
	float ___radius_1;
};

// Microsoft.MixedReality.Toolkit.Input.HandRay
struct HandRay_t5EA650FBE8E055EC84C362996DE079834E52486E  : public RuntimeObject
{
	// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Input.HandRay::ray
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray_0;
	// Microsoft.MixedReality.Toolkit.StabilizedRay Microsoft.MixedReality.Toolkit.Input.HandRay::stabilizedRay
	StabilizedRay_t1457F4C7AAA73AC72E52DF308C966DEAF7DC0801* ___stabilizedRay_13;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.HandRay::palmNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___palmNormal_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.HandRay::headForward
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___headForward_15;
};

// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
};

// UnityEngine.InputSystem.InputControl
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E  : public RuntimeObject
{
	// UnityEngine.InputSystem.LowLevel.InputStateBlock UnityEngine.InputSystem.InputControl::m_StateBlock
	InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 ___m_StateBlock_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Name
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Name_1;
	// System.String UnityEngine.InputSystem.InputControl::m_Path
	String_t* ___m_Path_2;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayNameFromLayout
	String_t* ___m_DisplayNameFromLayout_4;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayName
	String_t* ___m_ShortDisplayName_5;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayNameFromLayout
	String_t* ___m_ShortDisplayNameFromLayout_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Layout
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Layout_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Variants
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Variants_8;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::m_Device
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___m_Device_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControl::m_Parent
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___m_Parent_10;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageCount
	int32_t ___m_UsageCount_11;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageStartIndex
	int32_t ___m_UsageStartIndex_12;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasCount
	int32_t ___m_AliasCount_13;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasStartIndex
	int32_t ___m_AliasStartIndex_14;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildCount
	int32_t ___m_ChildCount_15;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildStartIndex
	int32_t ___m_ChildStartIndex_16;
	// UnityEngine.InputSystem.InputControl/ControlFlags UnityEngine.InputSystem.InputControl::m_ControlFlags
	int32_t ___m_ControlFlags_17;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_DefaultState_18;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MinValue_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MaxValue_20;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedCamera
struct SimulatedCamera_tDD65CFCB2C021ED5723B0D5118897FDED2C5EDB5  : public RuntimeObject
{
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMD Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedCamera::simulatedHmd
	XRSimulatedHMD_t7679B3251840703ACD265307EDB951D185079790* ___simulatedHmd_0;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedCamera::simulatedHmdState
	XRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F ___simulatedHmdState_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedCamera::cameraRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cameraRotation_3;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedCamera::smoothedMoveDelta
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___smoothedMoveDelta_4;
};

struct SimulatedCamera_tDD65CFCB2C021ED5723B0D5118897FDED2C5EDB5_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedCamera::UpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdatePerfMarker_5;
};

// Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController
struct SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166  : public RuntimeObject
{
	// Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedController Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::simulatedController
	MRTKSimulatedController_tBE8AB611B95B22BE5DD7115B4AFDE3020D7A0100* ___simulatedController_0;
	// Microsoft.MixedReality.Toolkit.Input.IHandRay Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::handRay
	RuntimeObject* ___handRay_1;
	// Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedControllerState Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::simulatedControllerState
	MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243 ___simulatedControllerState_2;
	// Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::handSubsystem
	HandsAggregatorSubsystem_t2294604ECCC3071CADA69D1B9F999DC6936948CD* ___handSubsystem_3;
	// Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::synthHandsSubsystem
	SyntheticHandsSubsystem_t6DEDC4D4EFB67E98325A20493DBB18105FA0AB3E* ___synthHandsSubsystem_4;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::<SimulatedInputPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CSimulatedInputPositionU3Ek__BackingField_5;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::<SimulatedInputRotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CSimulatedInputRotationU3Ek__BackingField_6;
	// Microsoft.MixedReality.Toolkit.Handedness Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::<Handedness>k__BackingField
	int32_t ___U3CHandednessU3Ek__BackingField_7;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::smoothedMoveDelta
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___smoothedMoveDelta_11;
};

struct SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::ToggleNeutralPosePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___ToggleNeutralPosePerfMarker_8;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::UpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdatePerfMarker_9;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::UpdateAbsolutePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdateAbsolutePerfMarker_12;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::UpdateRelativeToPokePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdateRelativeToPokePerfMarker_13;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::ApplyStatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___ApplyStatePerfMarker_14;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::SetWorldPosePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___SetWorldPosePerfMarker_15;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::SetRigLocalPosePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___SetRigLocalPosePerfMarker_16;
};

// Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedEyeGaze
struct SimulatedEyeGaze_tC2D5707605893349BE19C4DD5B20CECFAFE42F53  : public RuntimeObject
{
	// Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedEyeGazeDevice Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedEyeGaze::simulatedEyeDevice
	SimulatedEyeGazeDevice_t72AF4B2115C96AD9EE5CACAE763BA9D4F8394DC9* ___simulatedEyeDevice_0;
	// UnityEngine.InputSystem.XR.PoseState Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedEyeGaze::poseState
	PoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2 ___poseState_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedEyeGaze::<CameraRelativeRotation>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CCameraRelativeRotationU3Ek__BackingField_2;
};

struct SimulatedEyeGaze_tC2D5707605893349BE19C4DD5B20CECFAFE42F53_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedEyeGaze::UpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdatePerfMarker_3;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// UnityEngine.InputSystem.InputControl`1<UnityEngine.InputSystem.XR.PoseState>
struct InputControl_1_t397D69C473620E11E58D59DB7685FDC86294B22A  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t6E2BC68EDE9604FC8F6F2882E41E78DEBFFC86C7 ___m_ProcessorStack_21;
};

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Quaternion>
struct InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t209C5F9C876036B8C081C3E70D85ADAA2018197B ___m_ProcessorStack_21;
};

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>
struct InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_tE5F1062E65707D24360CEAC52E03D32C6E5BA8BB ___m_ProcessorStack_21;
};

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector3>
struct InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t3C9FDC2B575450733517AE6D9168B8B7CDA52FBF ___m_ProcessorStack_21;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem
struct HandsAggregatorSubsystem_t2294604ECCC3071CADA69D1B9F999DC6936948CD  : public MRTKSubsystem_3_tBAE503519008C99BCEF1BDCE9F744D9A68BE7233
{
};

// Microsoft.MixedReality.Toolkit.Subsystems.HandsSubsystem
struct HandsSubsystem_t2C5614B7C802BA563F7A30B5980709B24CCDB5F6  : public MRTKSubsystem_3_t694EAE92B0C1CED74FF283050FB5DB3EBCE84C4E
{
};

// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.InputSystem.InputActionMap[] UnityEngine.InputSystem.InputActionAsset::m_ActionMaps
	InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045* ___m_ActionMaps_5;
	// UnityEngine.InputSystem.InputControlScheme[] UnityEngine.InputSystem.InputActionAsset::m_ControlSchemes
	InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86* ___m_ControlSchemes_6;
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionAsset::m_SharedStateForAllMaps
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_SharedStateForAllMaps_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// UnityEngine.InputSystem.InputActionMap/DeviceArray UnityEngine.InputSystem.InputActionAsset::m_Devices
	DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E ___m_Devices_9;
};

// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionReference::m_Asset
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset_4;
	// System.String UnityEngine.InputSystem.InputActionReference::m_ActionId
	String_t* ___m_ActionId_5;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionReference::m_Action
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_6;
};

// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.InputDevice/DeviceFlags UnityEngine.InputSystem.InputDevice::m_DeviceFlags
	int32_t ___m_DeviceFlags_24;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceId
	int32_t ___m_DeviceId_25;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_ParticipantId
	int32_t ___m_ParticipantId_26;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceIndex
	int32_t ___m_DeviceIndex_27;
	// UnityEngine.InputSystem.Layouts.InputDeviceDescription UnityEngine.InputSystem.InputDevice::m_Description
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F ___m_Description_28;
	// System.Double UnityEngine.InputSystem.InputDevice::m_LastUpdateTimeInternal
	double ___m_LastUpdateTimeInternal_29;
	// System.UInt32 UnityEngine.InputSystem.InputDevice::m_CurrentUpdateStepCount
	uint32_t ___m_CurrentUpdateStepCount_30;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_AliasesForEachControl
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_AliasesForEachControl_31;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_UsagesForEachControl
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_UsagesForEachControl_32;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_UsageToControl
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_UsageToControl_33;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_ChildrenForEachControl
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_ChildrenForEachControl_34;
	// System.UInt32[] UnityEngine.InputSystem.InputDevice::m_StateOffsetToControlMap
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_StateOffsetToControlMap_35;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.InputSystem.Pointer
struct Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A  : public InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B
{
	// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.InputSystem.Pointer::<position>k__BackingField
	Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* ___U3CpositionU3Ek__BackingField_39;
	// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.InputSystem.Pointer::<delta>k__BackingField
	Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* ___U3CdeltaU3Ek__BackingField_40;
	// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.InputSystem.Pointer::<radius>k__BackingField
	Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* ___U3CradiusU3Ek__BackingField_41;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Pointer::<pressure>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CpressureU3Ek__BackingField_42;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Pointer::<press>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CpressU3Ek__BackingField_43;
};

struct Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A_StaticFields
{
	// UnityEngine.InputSystem.Pointer UnityEngine.InputSystem.Pointer::<current>k__BackingField
	Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A* ___U3CcurrentU3Ek__BackingField_44;
};

// UnityEngine.InputSystem.XR.PoseControl
struct PoseControl_t28571DE0327FBB52F360251074D1DA294A197862  : public InputControl_1_t397D69C473620E11E58D59DB7685FDC86294B22A
{
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.XR.PoseControl::<isTracked>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CisTrackedU3Ek__BackingField_22;
	// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.InputSystem.XR.PoseControl::<trackingState>k__BackingField
	IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* ___U3CtrackingStateU3Ek__BackingField_23;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.InputSystem.XR.PoseControl::<position>k__BackingField
	Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___U3CpositionU3Ek__BackingField_24;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.InputSystem.XR.PoseControl::<rotation>k__BackingField
	QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___U3CrotationU3Ek__BackingField_25;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.InputSystem.XR.PoseControl::<velocity>k__BackingField
	Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___U3CvelocityU3Ek__BackingField_26;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.InputSystem.XR.PoseControl::<angularVelocity>k__BackingField
	Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___U3CangularVelocityU3Ek__BackingField_27;
};

// UnityEngine.InputSystem.Controls.QuaternionControl
struct QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1  : public InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770
{
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<x>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CxU3Ek__BackingField_22;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<y>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CyU3Ek__BackingField_23;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<z>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CzU3Ek__BackingField_24;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<w>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CwU3Ek__BackingField_25;
};

// Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedEyeGazeDevice
struct SimulatedEyeGazeDevice_t72AF4B2115C96AD9EE5CACAE763BA9D4F8394DC9  : public InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B
{
	// UnityEngine.InputSystem.XR.PoseControl Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedEyeGazeDevice::<pose>k__BackingField
	PoseControl_t28571DE0327FBB52F360251074D1DA294A197862* ___U3CposeU3Ek__BackingField_39;
};

// Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem
struct SyntheticHandsSubsystem_t6DEDC4D4EFB67E98325A20493DBB18105FA0AB3E  : public HandsSubsystem_t2C5614B7C802BA563F7A30B5980709B24CCDB5F6
{
};

// UnityEngine.InputSystem.TrackedDevice
struct TrackedDevice_t9B8AC60AAD52E906174449ED57660F3F8A3599E9  : public InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B
{
	// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.InputSystem.TrackedDevice::<trackingState>k__BackingField
	IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* ___U3CtrackingStateU3Ek__BackingField_39;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.TrackedDevice::<isTracked>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CisTrackedU3Ek__BackingField_40;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.InputSystem.TrackedDevice::<devicePosition>k__BackingField
	Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___U3CdevicePositionU3Ek__BackingField_41;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.InputSystem.TrackedDevice::<deviceRotation>k__BackingField
	QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___U3CdeviceRotationU3Ek__BackingField_42;
};

// UnityEngine.InputSystem.Controls.Vector2Control
struct Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432  : public InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66
{
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector2Control::<x>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CxU3Ek__BackingField_22;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector2Control::<y>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CyU3Ek__BackingField_23;
};

// UnityEngine.InputSystem.Controls.Vector3Control
struct Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A  : public InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735
{
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector3Control::<x>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CxU3Ek__BackingField_22;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector3Control::<y>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CyU3Ek__BackingField_23;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector3Control::<z>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CzU3Ek__BackingField_24;
};

// UnityEngine.XR.Interaction.Toolkit.Inputs.InputActionManager
struct InputActionManager_tCB367C1814B9264CDE8FA04AA916642BB2887D21  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.InputSystem.InputActionAsset> UnityEngine.XR.Interaction.Toolkit.Inputs.InputActionManager::m_ActionAssets
	List_1_t3FD220D91A685A9242170EEF27EC5C0C50F2B5DF* ___m_ActionAssets_4;
};

// Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator
struct InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::isSimulating
	bool ___isSimulating_5;
	// Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedCamera Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::simulatedCamera
	SimulatedCamera_tDD65CFCB2C021ED5723B0D5118897FDED2C5EDB5* ___simulatedCamera_6;
	// Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulatorControlSet Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::controlSet
	int32_t ___controlSet_7;
	// Microsoft.MixedReality.Toolkit.Input.Simulation.CameraSimulationSettings Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::cameraSettings
	CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* ___cameraSettings_8;
	// Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedEyeGaze Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::simulatedEyeGaze
	SimulatedEyeGaze_tC2D5707605893349BE19C4DD5B20CECFAFE42F53* ___simulatedEyeGaze_10;
	// Microsoft.MixedReality.Toolkit.Input.Simulation.EyeGazeSimulationSettings Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::eyeGazeSettings
	EyeGazeSimulationSettings_t3C2AFE26CF2C423D622769D96E9F76A7B3C82A3A* ___eyeGazeSettings_11;
	// Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::simulatedLeftController
	SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* ___simulatedLeftController_13;
	// System.Single Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::leftTriggerSmoothVelocity
	float ___leftTriggerSmoothVelocity_14;
	// Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::simulatedRightController
	SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* ___simulatedRightController_15;
	// System.Single Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::rightTriggerSmoothVelocity
	float ___rightTriggerSmoothVelocity_16;
	// Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::leftControllerControls
	ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* ___leftControllerControls_17;
	// Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::rightControllerControls
	ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* ___rightControllerControls_18;
	// Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::leftControllerSettings
	ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* ___leftControllerSettings_19;
	// Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::rightControllerSettings
	ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* ___rightControllerSettings_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::shouldUseTriggerButton
	bool ___shouldUseTriggerButton_21;
	// System.Single Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::triggerSmoothTime
	float ___triggerSmoothTime_22;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.InputActionManager Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::actionManager
	InputActionManager_tCB367C1814B9264CDE8FA04AA916642BB2887D21* ___actionManager_26;
};

struct InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::UpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdatePerfMarker_4;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::UpdateSimulatedCameraPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdateSimulatedCameraPerfMarker_9;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::UpdateSimulatedEyesPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdateSimulatedEyesPerfMarker_12;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::UpdateSimulatedControllerPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdateSimulatedControllerPerfMarker_23;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::NoRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___NoRotation_24;
	// System.String Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::UnsupportedHandednessLog
	String_t* ___UnsupportedHandednessLog_25;
};

// UnityEngine.InputSystem.Mouse
struct Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F  : public Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A
{
	// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.InputSystem.Mouse::<scroll>k__BackingField
	Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* ___U3CscrollU3Ek__BackingField_45;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Mouse::<leftButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CleftButtonU3Ek__BackingField_46;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Mouse::<middleButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CmiddleButtonU3Ek__BackingField_47;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Mouse::<rightButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CrightButtonU3Ek__BackingField_48;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Mouse::<backButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CbackButtonU3Ek__BackingField_49;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Mouse::<forwardButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CforwardButtonU3Ek__BackingField_50;
	// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.InputSystem.Mouse::<clickCount>k__BackingField
	IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* ___U3CclickCountU3Ek__BackingField_51;
};

struct Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F_StaticFields
{
	// UnityEngine.InputSystem.Mouse UnityEngine.InputSystem.Mouse::<current>k__BackingField
	Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* ___U3CcurrentU3Ek__BackingField_52;
	// UnityEngine.InputSystem.Mouse UnityEngine.InputSystem.Mouse::s_PlatformMouseDevice
	Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* ___s_PlatformMouseDevice_53;
};

// UnityEngine.InputSystem.XR.XRController
struct XRController_tB7EBF72339C56C18DEB74B1176FD39B9C421F1E2  : public TrackedDevice_t9B8AC60AAD52E906174449ED57660F3F8A3599E9
{
};

// UnityEngine.InputSystem.XR.XRHMD
struct XRHMD_t2AB69188B210850F78044E5288C17FD173DB9B98  : public TrackedDevice_t9B8AC60AAD52E906174449ED57660F3F8A3599E9
{
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.InputSystem.XR.XRHMD::<leftEyePosition>k__BackingField
	Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___U3CleftEyePositionU3Ek__BackingField_43;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.InputSystem.XR.XRHMD::<leftEyeRotation>k__BackingField
	QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___U3CleftEyeRotationU3Ek__BackingField_44;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.InputSystem.XR.XRHMD::<rightEyePosition>k__BackingField
	Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___U3CrightEyePositionU3Ek__BackingField_45;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.InputSystem.XR.XRHMD::<rightEyeRotation>k__BackingField
	QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___U3CrightEyeRotationU3Ek__BackingField_46;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.InputSystem.XR.XRHMD::<centerEyePosition>k__BackingField
	Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___U3CcenterEyePositionU3Ek__BackingField_47;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.InputSystem.XR.XRHMD::<centerEyeRotation>k__BackingField
	QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___U3CcenterEyeRotationU3Ek__BackingField_48;
};

// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController
struct XRSimulatedController_t44B51DE4F7BD07BE41450B9EF3AFBE65025FC6DA  : public XRController_tB7EBF72339C56C18DEB74B1176FD39B9C421F1E2
{
	// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController::<primary2DAxis>k__BackingField
	Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* ___U3Cprimary2DAxisU3Ek__BackingField_43;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController::<trigger>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CtriggerU3Ek__BackingField_44;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController::<grip>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CgripU3Ek__BackingField_45;
	// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController::<secondary2DAxis>k__BackingField
	Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* ___U3Csecondary2DAxisU3Ek__BackingField_46;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController::<primaryButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CprimaryButtonU3Ek__BackingField_47;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController::<primaryTouch>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CprimaryTouchU3Ek__BackingField_48;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController::<secondaryButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CsecondaryButtonU3Ek__BackingField_49;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController::<secondaryTouch>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CsecondaryTouchU3Ek__BackingField_50;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController::<gripButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CgripButtonU3Ek__BackingField_51;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController::<triggerButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CtriggerButtonU3Ek__BackingField_52;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController::<menuButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CmenuButtonU3Ek__BackingField_53;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController::<primary2DAxisClick>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3Cprimary2DAxisClickU3Ek__BackingField_54;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController::<primary2DAxisTouch>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3Cprimary2DAxisTouchU3Ek__BackingField_55;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController::<secondary2DAxisClick>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3Csecondary2DAxisClickU3Ek__BackingField_56;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController::<secondary2DAxisTouch>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3Csecondary2DAxisTouchU3Ek__BackingField_57;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController::<batteryLevel>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CbatteryLevelU3Ek__BackingField_58;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController::<userPresence>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CuserPresenceU3Ek__BackingField_59;
};

// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMD
struct XRSimulatedHMD_t7679B3251840703ACD265307EDB951D185079790  : public XRHMD_t2AB69188B210850F78044E5288C17FD173DB9B98
{
};

// Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedController
struct MRTKSimulatedController_tBE8AB611B95B22BE5DD7115B4AFDE3020D7A0100  : public XRSimulatedController_t44B51DE4F7BD07BE41450B9EF3AFBE65025FC6DA
{
	// UnityEngine.InputSystem.Controls.Vector3Control Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedController::<PointerPosition>k__BackingField
	Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___U3CPointerPositionU3Ek__BackingField_60;
	// UnityEngine.InputSystem.Controls.QuaternionControl Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedController::<PointerRotation>k__BackingField
	QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___U3CPointerRotationU3Ek__BackingField_61;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053  : public RuntimeArray
{
	ALIGN_FIELD (8) MemberInfo_t* m_Items[1];

	inline MemberInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MemberInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MemberInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MemberInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MemberInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MemberInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// TDevice UnityEngine.InputSystem.InputSystem::AddDevice<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputSystem_AddDevice_TisRuntimeObject_m14C010215A2038F4F2CE809FFDD57319F89A30F9_gshared (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.LowLevel.InputState::Change<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState>(UnityEngine.InputSystem.InputControl,TState,UnityEngine.InputSystem.LowLevel.InputUpdateType,UnityEngine.InputSystem.LowLevel.InputEventPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputState_Change_TisXRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F_mDFF89C2BB2B6686A84CFA2BDAD4B0C1852F58F20_gshared (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___control0, XRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F ___state1, int32_t ___updateType2, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___eventPtr3, const RuntimeMethod* method) ;
// TControl UnityEngine.InputSystem.InputControl::GetChildControl<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputControl_GetChildControl_TisRuntimeObject_m5E81C3A512C444426EB15097CCF01D73CF1C614C_gshared (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, String_t* ___path0, const RuntimeMethod* method) ;
// T Microsoft.MixedReality.Toolkit.XRSubsystemHelpers::GetFirstRunningSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRSubsystemHelpers_GetFirstRunningSubsystem_TisRuntimeObject_m2A1767880A39EC8FE90272CF9D154FEDAAC7ECE6_gshared (const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32Enum>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32Enum>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m0E81D9B6F2BA5FA17AA4366C5179CD09524FCB60_gshared (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.LowLevel.InputState::Change<Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedControllerState>(UnityEngine.InputSystem.InputControl,TState,UnityEngine.InputSystem.LowLevel.InputUpdateType,UnityEngine.InputSystem.LowLevel.InputEventPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputState_Change_TisMRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243_m0CBFA3E5C17E4BF35603577C6E10BCDB39720CC0_gshared (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___control0, MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243 ___state1, int32_t ___updateType2, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___eventPtr3, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout<System.Object>(System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_RegisterLayout_TisRuntimeObject_m813B86BCE0AFC470691B88D57FB3281A47DF4913_gshared (String_t* ___name0, Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C ___matches1, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.LowLevel.InputState::Change<UnityEngine.InputSystem.XR.PoseState>(UnityEngine.InputSystem.InputControl,TState,UnityEngine.InputSystem.LowLevel.InputUpdateType,UnityEngine.InputSystem.LowLevel.InputEventPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputState_Change_TisPoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2_mA526BB0CADC4D1372B24F30FCD5BBBF31F4D5D79_gshared (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___control0, PoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2 ___state1, int32_t ___updateType2, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___eventPtr3, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>::ReadValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_gshared (InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.InputSystem.InputBinding>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m386E965F0E7A0EAFAED17B2CDDD4EC5FCFC21F5F_gshared (Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44* __this, InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value0, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_m9A7C2BF942D2CE1640896A41290BBD682568B6C8_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;

// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Utilities.FourCC::.ctor(System.Char,System.Char,System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FourCC__ctor_mFE3A3F80C6900CD18CB9BDD3C9B604823F2E791F (FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED* __this, Il2CppChar ___a0, Il2CppChar ___b1, Il2CppChar ___c2, Il2CppChar ___d3, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.FourCC Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedControllerState::get_FormatId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED MRTKSimulatedControllerState_get_FormatId_m9D52C0B91D610E5C4B5A4BAF0FD685A78ADCB15D (const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.FourCC Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedControllerState::UnityEngine.InputSystem.LowLevel.IInputStateTypeInfo.get_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED MRTKSimulatedControllerState_UnityEngine_InputSystem_LowLevel_IInputStateTypeInfo_get_format_mCFBF4FC2542D29A8BC6C7AF3BAD63724A52B36CA (MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedControllerState Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedControllerState::WithButton(UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243 MRTKSimulatedControllerState_WithButton_mF850B1FB276940CCEBF79B12397E5FB1E26624BE (MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243* __this, int32_t ___button0, bool ___state1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedControllerState::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKSimulatedControllerState_Reset_m6E4371F6B844F28106AF471954B525DDE66D6DE6 (MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// TDevice UnityEngine.InputSystem.InputSystem::AddDevice<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMD>(System.String)
inline XRSimulatedHMD_t7679B3251840703ACD265307EDB951D185079790* InputSystem_AddDevice_TisXRSimulatedHMD_t7679B3251840703ACD265307EDB951D185079790_mFD8F374434DB1AA12B5BB1EEF75463BCD89110FB (String_t* ___name0, const RuntimeMethod* method)
{
	return ((  XRSimulatedHMD_t7679B3251840703ACD265307EDB951D185079790* (*) (String_t*, const RuntimeMethod*))InputSystem_AddDevice_TisRuntimeObject_m14C010215A2038F4F2CE809FFDD57319F89A30F9_gshared)(___name0, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSimulatedHMDState_Reset_mF2E881F062465B441F929A6319E6843800A0B9BC (XRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F* __this, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedCamera::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedCamera_Dispose_mC8C915E4C12094580FED3D2221070FCB77D40FF3 (SimulatedCamera_tDD65CFCB2C021ED5723B0D5118897FDED2C5EDB5* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputDevice::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_get_added_m27CF78B0777E142AAF9139ABFD88F67BBAABA15C (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::RemoveDevice(UnityEngine.InputSystem.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_RemoveDevice_m41F154CEBE1EB94090D2980BEA684E58799EA8B3 (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.LowLevel.InputState::Change<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState>(UnityEngine.InputSystem.InputControl,TState,UnityEngine.InputSystem.LowLevel.InputUpdateType,UnityEngine.InputSystem.LowLevel.InputEventPtr)
inline void InputState_Change_TisXRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F_mDFF89C2BB2B6686A84CFA2BDAD4B0C1852F58F20 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___control0, XRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F ___state1, int32_t ___updateType2, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___eventPtr3, const RuntimeMethod* method)
{
	((  void (*) (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*, XRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F, int32_t, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0, const RuntimeMethod*))InputState_Change_TisXRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F_mDFF89C2BB2B6686A84CFA2BDAD4B0C1852F58F20_gshared)(___control0, ___state1, ___updateType2, ___eventPtr3, method);
}
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Smoothing::SmoothTo(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Smoothing_SmoothTo_m398BCABDC1C19B6D4964C963DD889CF07C357543 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___source0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___goal1, float ___lerpTime2, float ___deltaTime3, const RuntimeMethod* method) ;
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.PlayspaceUtilities::get_ReferenceTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* PlayspaceUtilities_get_ReferenceTransform_mF1DF2E87AACB47E02A84ED02D36F7CB5834206E7 (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* CameraCache_get_Main_mC37E77C91369434A080ED4B3EDBE4F0DA7041910 (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSimulatedController_FinishSetup_mC4F39D2415258871BDC77C81A34846D3D2BCB60C (XRSimulatedController_t44B51DE4F7BD07BE41450B9EF3AFBE65025FC6DA* __this, const RuntimeMethod* method) ;
// TControl UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.Vector3Control>(System.String)
inline Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* (*) (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m5E81C3A512C444426EB15097CCF01D73CF1C614C_gshared)(__this, ___path0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedController::set_PointerPosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MRTKSimulatedController_set_PointerPosition_mA54541958BCED4DEA69A08CA0126E90DEF6C31CE_inline (MRTKSimulatedController_tBE8AB611B95B22BE5DD7115B4AFDE3020D7A0100* __this, Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___value0, const RuntimeMethod* method) ;
// TControl UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.QuaternionControl>(System.String)
inline QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* (*) (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m5E81C3A512C444426EB15097CCF01D73CF1C614C_gshared)(__this, ___path0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedController::set_PointerRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MRTKSimulatedController_set_PointerRotation_m042BD059317F8763C54E4B52F19F0DD4D54DE98E_inline (MRTKSimulatedController_tBE8AB611B95B22BE5DD7115B4AFDE3020D7A0100* __this, QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSimulatedController__ctor_m3FD0B01E3EAF634756117453A5630363F71A5A28 (XRSimulatedController_t44B51DE4F7BD07BE41450B9EF3AFBE65025FC6DA* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem Microsoft.MixedReality.Toolkit.HandsUtils::GetSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandsAggregatorSubsystem_t2294604ECCC3071CADA69D1B9F999DC6936948CD* HandsUtils_GetSubsystem_mD1EBEBDEE2F6F31E397F7232E7682F0491B8390E (const RuntimeMethod* method) ;
// T Microsoft.MixedReality.Toolkit.XRSubsystemHelpers::GetFirstRunningSubsystem<Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem>()
inline SyntheticHandsSubsystem_t6DEDC4D4EFB67E98325A20493DBB18105FA0AB3E* XRSubsystemHelpers_GetFirstRunningSubsystem_TisSyntheticHandsSubsystem_t6DEDC4D4EFB67E98325A20493DBB18105FA0AB3E_mA307BD25771198563D973B2F71CA0C4E21E93C91 (const RuntimeMethod* method)
{
	return ((  SyntheticHandsSubsystem_t6DEDC4D4EFB67E98325A20493DBB18105FA0AB3E* (*) (const RuntimeMethod*))XRSubsystemHelpers_GetFirstRunningSubsystem_TisRuntimeObject_m2A1767880A39EC8FE90272CF9D154FEDAAC7ECE6_gshared)(method);
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::get_HandSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandsAggregatorSubsystem_t2294604ECCC3071CADA69D1B9F999DC6936948CD* SimulatedController_get_HandSubsystem_m7B41C84D0D6E3C1B412EBF968E949C48E3CEDFD6 (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Handedness Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::get_Handedness()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SimulatedController_get_Handedness_m68D073A06BFF58BEB8C9822544006CBD1F47F2F3_inline (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem::TryGetJoint(Microsoft.MixedReality.Toolkit.TrackedHandJoint,UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.HandJointPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandsAggregatorSubsystem_TryGetJoint_m024003ECA9B870E18BABAE9EBBD43A96752715B0 (HandsAggregatorSubsystem_t2294604ECCC3071CADA69D1B9F999DC6936948CD* __this, int32_t ___joint0, int32_t ___hand1, HandJointPose_t82E47711F81612C8E37DC59CAC62E6557CC512A3* ___jointPose2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.HandJointPose::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HandJointPose_get_Position_mACE7763C8A869495C9D27EC0C7E09EFE56A371A6 (HandJointPose_t82E47711F81612C8E37DC59CAC62E6557CC512A3* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem::TryGetPinchingPoint(UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.HandJointPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandsAggregatorSubsystem_TryGetPinchingPoint_mCE5DFC45C02AC7E78757DFB99119F0368D2A4E0E (HandsAggregatorSubsystem_t2294604ECCC3071CADA69D1B9F999DC6936948CD* __this, int32_t ___hand0, HandJointPose_t82E47711F81612C8E37DC59CAC62E6557CC512A3* ___jointPose1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.HandRay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandRay__ctor_m54766F30B7C9716B1E94504B7A4AFC2CE16FEBD1 (HandRay_t5EA650FBE8E055EC84C362996DE079834E52486E* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::set_Handedness(Microsoft.MixedReality.Toolkit.Handedness)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimulatedController_set_Handedness_m88D8188468218D53CEE7EDA12C4BD1D08213BB21_inline (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, int32_t ___value0, const RuntimeMethod* method) ;
// TDevice UnityEngine.InputSystem.InputSystem::AddDevice<Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedController>(System.String)
inline MRTKSimulatedController_tBE8AB611B95B22BE5DD7115B4AFDE3020D7A0100* InputSystem_AddDevice_TisMRTKSimulatedController_tBE8AB611B95B22BE5DD7115B4AFDE3020D7A0100_m209F67BCBCEA7C47FACDFAFA5376A785A390F65C (String_t* ___name0, const RuntimeMethod* method)
{
	return ((  MRTKSimulatedController_tBE8AB611B95B22BE5DD7115B4AFDE3020D7A0100* (*) (String_t*, const RuntimeMethod*))InputSystem_AddDevice_TisRuntimeObject_m14C010215A2038F4F2CE809FFDD57319F89A30F9_gshared)(___name0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::set_SimulatedInputPosition(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimulatedController_set_SimulatedInputPosition_mA79699A70D3D3AD3799BDBC036AC99530419F610_inline (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::SetUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedController_SetUsage_mAB18D6D232CF68179A453D52AE593DA7A9B43014 (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::SetRelativePoseWithOffset(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerRotationMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedController_SetRelativePoseWithOffset_mBF7F88707CF751DB690BD5EB0C89006B5F4AB641 (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset2, int32_t ___rotationMode3, bool ___shouldUseRayVector4, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedController_Dispose_m1D33E29BF57A03455CBE58BDF18F496CEE3C7039 (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::UnsetUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedController_UnsetUsage_mAAC8CCA8B83971DC2AB630084D0122D4E047DA74 (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, const RuntimeMethod* method) ;
// System.Nullable`1<UnityEngine.XR.XRNode> Microsoft.MixedReality.Toolkit.HandednessExtensions::ToXRNode(Microsoft.MixedReality.Toolkit.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tEC8F263BE70D6E8A7019A85EA809A9CFC7448F36 HandednessExtensions_ToXRNode_m30AFACB24E4DAC09672D1545AE3624C47E9B294E (int32_t ___hand0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.XR.XRNode>::get_HasValue()
inline bool Nullable_1_get_HasValue_m6EBB46D00BB60FC8F09A34060A4FF94C3437F2E2_inline (Nullable_1_tEC8F263BE70D6E8A7019A85EA809A9CFC7448F36* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tEC8F263BE70D6E8A7019A85EA809A9CFC7448F36*, const RuntimeMethod*))Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline)(__this, method);
}
// Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::get_SynthHands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SyntheticHandsSubsystem_t6DEDC4D4EFB67E98325A20493DBB18105FA0AB3E* SimulatedController_get_SynthHands_mA18B3430B4FD1A5BCFEEF456DAF3A044ADE690EC (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.XR.XRNode>::get_Value()
inline int32_t Nullable_1_get_Value_mA46EC6593BFA5F9AAA5FD184D482A6ECF0485D66 (Nullable_1_tEC8F263BE70D6E8A7019A85EA809A9CFC7448F36* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tEC8F263BE70D6E8A7019A85EA809A9CFC7448F36*, const RuntimeMethod*))Nullable_1_get_Value_m0E81D9B6F2BA5FA17AA4366C5179CD09524FCB60_gshared)(__this, method);
}
// Microsoft.MixedReality.Toolkit.Input.GestureTypes/GestureId Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem::GetNeutralPose(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyntheticHandsSubsystem_GetNeutralPose_mF197322B895D104BA9D9E9C1EB52959FEE14FB4A (SyntheticHandsSubsystem_t6DEDC4D4EFB67E98325A20493DBB18105FA0AB3E* __this, int32_t ___handNode0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem::SetNeutralPose(UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.Input.GestureTypes/GestureId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyntheticHandsSubsystem_SetNeutralPose_mD0F30CD8763DFE36F9F259AC04B0FDDDF9770155 (SyntheticHandsSubsystem_t6DEDC4D4EFB67E98325A20493DBB18105FA0AB3E* __this, int32_t ___handNode0, int32_t ___poseId1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls::get_IsTracked()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ControllerControls_get_IsTracked_mD1A58B3426C7E7C676034B5AE61ED4A556D05717_inline (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.Smoothing::SmoothTo(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Smoothing_SmoothTo_m01FDF561317D0E9562ABA70A0B93F0D50E54AF61 (float ___source0, float ___goal1, float ___lerpTime2, float ___deltaTime3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Random::get_insideUnitSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Random_get_insideUnitSphere_mDC65508F8B735E93612D4A1D482792B5DA4DC26C (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::get_SimulatedInputPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SimulatedController_get_SimulatedInputPosition_mCB0FB258133F3EEE5B8FC02DC8950C2364EB79FA_inline (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::get_SimulatedInputRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SimulatedController_get_SimulatedInputRotation_m07F06D7114979F81E1E9FCDC6CF0A1B64948F7ED_inline (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::set_SimulatedInputRotation(UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimulatedController_set_SimulatedInputRotation_m6CA56134DC29C54504D5FAE7187AFF149905A1EC_inline (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::get_WorldPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SimulatedController_get_WorldPosition_m4A8B742CC61D286E000603412B66DAAF67865052 (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::ApplyState(Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedController_ApplyState_mF8DC22C4A88C2A0E3A26EF06FF8336F0B2926923 (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* ___controls0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::SetWorldPose(UnityEngine.Vector3,UnityEngine.Quaternion,Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerRotationMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedController_SetWorldPose_mBDF6D511F1334020DD9334676E9C109BED8EBF24 (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, int32_t ___rotationMode2, bool ___shouldUseRayVector3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::get_PokePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SimulatedController_get_PokePosition_m53FFA21CF8928D3061ED0063F61695E64EFD4AC0 (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::UpdateAbsoluteWithAnchor(UnityEngine.Vector3,UnityEngine.Quaternion,Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls,Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerRotationMode,System.Boolean,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedController_UpdateAbsoluteWithAnchor_m0D24D7CDF6BFECF8942E3BD157F5B37308E9DF58 (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* ___controls2, int32_t ___rotationMode3, bool ___shouldUseRayVector4, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___anchorPoint5, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::get_GrabPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SimulatedController_get_GrabPosition_mA02B7E4B7426638E1E4B72C8AEB129BC751D8681 (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::UpdateAbsolute(UnityEngine.Vector3,UnityEngine.Quaternion,Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls,Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerRotationMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedController_UpdateAbsolute_mCD0EE24662F64C4F846BE6076F34F9D119675C35 (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* ___controls2, int32_t ___rotationMode3, bool ___shouldUseRayVector4, const RuntimeMethod* method) ;
// UnityEngine.XR.InputTrackingState Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls::get_TrackingState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ControllerControls_get_TrackingState_mA09795EE969CE8F9110FBFD76FF5F52C0485D5D4_inline (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls::get_TriggerAxis()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ControllerControls_get_TriggerAxis_mAA83674A37B52741586366DFDF20DCCA4A20C723_inline (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls::get_GripAxis()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ControllerControls_get_GripAxis_m88801EF3C9A9EB18C81921B8199E34F1464C3ABC_inline (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls::get_TriggerButton()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ControllerControls_get_TriggerButton_mF6DED59D59E2112AFE4F409EA76EA79683664379_inline (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls::get_GripButton()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ControllerControls_get_GripButton_mDCB15538E263CB04D75CDD1080A003D1305B1442_inline (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.LowLevel.InputState::Change<Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedControllerState>(UnityEngine.InputSystem.InputControl,TState,UnityEngine.InputSystem.LowLevel.InputUpdateType,UnityEngine.InputSystem.LowLevel.InputEventPtr)
inline void InputState_Change_TisMRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243_m0CBFA3E5C17E4BF35603577C6E10BCDB39720CC0 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___control0, MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243 ___state1, int32_t ___updateType2, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___eventPtr3, const RuntimeMethod* method)
{
	((  void (*) (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*, MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243, int32_t, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0, const RuntimeMethod*))InputState_Change_TisMRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243_m0CBFA3E5C17E4BF35603577C6E10BCDB39720CC0_gshared)(___control0, ___state1, ___updateType2, ___eventPtr3, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::SetRigLocalPose(UnityEngine.Vector3,UnityEngine.Quaternion,Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerRotationMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedController_SetRigLocalPose_m5567DB5646B67DD7E532D21CF922D91624E053B9 (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, int32_t ___rotationMode2, bool ___shouldUseRayVector3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Smoothing::SmoothTo(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Smoothing_SmoothTo_m196AD23893F948CE688C736D32A73DD2EE4418A9 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___source0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___goal1, float ___slerpTime2, float ___deltaTime3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem::TryGetHandCenter(UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.HandJointPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandsAggregatorSubsystem_TryGetHandCenter_m837710521D63A73AE57373FBC8B4FF4F986BE1EE (HandsAggregatorSubsystem_t2294604ECCC3071CADA69D1B9F999DC6936948CD* __this, int32_t ___hand0, HandJointPose_t82E47711F81612C8E37DC59CAC62E6557CC512A3* ___jointPose1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.HandJointPose::get_Up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HandJointPose_get_Up_mB0943E5CC79F23E17C29B6CE62857048A4B5CD38 (HandJointPose_t82E47711F81612C8E37DC59CAC62E6557CC512A3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::SetDeviceUsage(UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.Utilities.InternedString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_SetDeviceUsage_m7C10140ECC04AFB9F994DFBA16DBD078521F481F (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___usage1, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::RemoveDeviceUsage(UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.Utilities.InternedString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_RemoveDeviceUsage_mC8D7A2DCC88501191494490C69FCC0AA3C440C1F (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___usage1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls::set_IsTracked(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ControllerControls_set_IsTracked_m6F507D29A12A7F0EE595A466433C231E2AB848F0_inline (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls::set_TrackingState(UnityEngine.XR.InputTrackingState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ControllerControls_set_TrackingState_m763D926A40A0131C57ADB5498FF54B7BDCB8C21A_inline (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls::set_TriggerAxis(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ControllerControls_set_TriggerAxis_mD0D7D57F368F0536D7A9D87D1448820AF15D8014_inline (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls::set_TriggerButton(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ControllerControls_set_TriggerButton_m7E893FD78232307F870D8570D2C78876937C433A_inline (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls::set_GripAxis(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ControllerControls_set_GripAxis_mBC77BFB2B3616949566E840BE6663EDE9B6F6ABA_inline (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls::set_GripButton(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ControllerControls_set_GripButton_m528D53A30925D95048E9BD8125BACCD857AE79B0_inline (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputControl::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControl_FinishSetup_m46B682B124C6E127183D19E1BA86E966472C7C15 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, const RuntimeMethod* method) ;
// TControl UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.XR.PoseControl>(System.String)
inline PoseControl_t28571DE0327FBB52F360251074D1DA294A197862* InputControl_GetChildControl_TisPoseControl_t28571DE0327FBB52F360251074D1DA294A197862_m7CFE3EFB8FB4FE6D93868C97F05FE58AACA38F1E (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  PoseControl_t28571DE0327FBB52F360251074D1DA294A197862* (*) (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m5E81C3A512C444426EB15097CCF01D73CF1C614C_gshared)(__this, ___path0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedEyeGazeDevice::set_pose(UnityEngine.InputSystem.XR.PoseControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimulatedEyeGazeDevice_set_pose_mA9AEAF3A46C706C4192094DBEC408C3935CF15DD_inline (SimulatedEyeGazeDevice_t72AF4B2115C96AD9EE5CACAE763BA9D4F8394DC9* __this, PoseControl_t28571DE0327FBB52F360251074D1DA294A197862* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputDevice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevice__ctor_mAA72B9458CD588116A968FE54C2AD2B59C787E51 (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout<UnityEngine.InputSystem.XR.PoseControl>(System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
inline void InputSystem_RegisterLayout_TisPoseControl_t28571DE0327FBB52F360251074D1DA294A197862_m16002B273139D4CA1AA399FB2C4AC91F398A705C (String_t* ___name0, Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C ___matches1, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C, const RuntimeMethod*))InputSystem_RegisterLayout_TisRuntimeObject_m813B86BCE0AFC470691B88D57FB3281A47DF4913_gshared)(___name0, ___matches1, method);
}
// TDevice UnityEngine.InputSystem.InputSystem::AddDevice<Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedEyeGazeDevice>(System.String)
inline SimulatedEyeGazeDevice_t72AF4B2115C96AD9EE5CACAE763BA9D4F8394DC9* InputSystem_AddDevice_TisSimulatedEyeGazeDevice_t72AF4B2115C96AD9EE5CACAE763BA9D4F8394DC9_m12AE2A5175A5A496185FF1ABAE4489BD399F8CAF (String_t* ___name0, const RuntimeMethod* method)
{
	return ((  SimulatedEyeGazeDevice_t72AF4B2115C96AD9EE5CACAE763BA9D4F8394DC9* (*) (String_t*, const RuntimeMethod*))InputSystem_AddDevice_TisRuntimeObject_m14C010215A2038F4F2CE809FFDD57319F89A30F9_gshared)(___name0, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::RemoveLayout(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_RemoveLayout_m7AA59AD8EC2AA0BAA64FAA37B96CF00C2DA27A4D (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedEyeGaze::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedEyeGaze_Dispose_m9736F61744CEA1725791848685AFB03D8E9BE234 (SimulatedEyeGaze_tC2D5707605893349BE19C4DD5B20CECFAFE42F53* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedEyeGaze::get_CameraRelativeRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SimulatedEyeGaze_get_CameraRelativeRotation_m25A2026D88F60DE0418C660CB3DB4F8B59906B47_inline (SimulatedEyeGaze_tC2D5707605893349BE19C4DD5B20CECFAFE42F53* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedEyeGaze::set_CameraRelativeRotation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimulatedEyeGaze_set_CameraRelativeRotation_m54D2A14D3DE0D6B8E28C023BA23F33F3287D8A08_inline (SimulatedEyeGaze_tC2D5707605893349BE19C4DD5B20CECFAFE42F53* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.XR.PoseControl Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedEyeGazeDevice::get_pose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PoseControl_t28571DE0327FBB52F360251074D1DA294A197862* SimulatedEyeGazeDevice_get_pose_m460A0049868041C0C6F19800B1BCC4E0DC199664_inline (SimulatedEyeGazeDevice_t72AF4B2115C96AD9EE5CACAE763BA9D4F8394DC9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.LowLevel.InputState::Change<UnityEngine.InputSystem.XR.PoseState>(UnityEngine.InputSystem.InputControl,TState,UnityEngine.InputSystem.LowLevel.InputUpdateType,UnityEngine.InputSystem.LowLevel.InputEventPtr)
inline void InputState_Change_TisPoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2_mA526BB0CADC4D1372B24F30FCD5BBBF31F4D5D79 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___control0, PoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2 ___state1, int32_t ___updateType2, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___eventPtr3, const RuntimeMethod* method)
{
	((  void (*) (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*, PoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2, int32_t, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0, const RuntimeMethod*))InputState_Change_TisPoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2_mA526BB0CADC4D1372B24F30FCD5BBBF31F4D5D79_gshared)(___control0, ___state1, ___updateType2, ___eventPtr3, method);
}
// Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulatorControlSet Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::get_ControlSet()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputSimulator_get_ControlSet_m902AE58129E1652450D2F3234362D186E7AD7113_inline (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::ApplyControlSet(Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulatorControlSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSimulator_ApplyControlSet_m811A7EC69BF837122E48AFB2F9C7AC8BD2B62ADC (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, int32_t ___set0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Input.XRDisplaySubsystemHelpers::AreAnyActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystemHelpers_AreAnyActive_m357B277C6D27FDCAB6041BA3CE8E9FA6C88185FC (const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::DisableSimulatedCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSimulator_DisableSimulatedCamera_m5B46610BC1D685405D0DCEB79D587C615411289D (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::DisableSimulatedEyeGaze()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSimulator_DisableSimulatedEyeGaze_m09FC5B6A4968BAD05312D64B72F477D6364F2713 (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::DisableSimulatedController(Microsoft.MixedReality.Toolkit.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSimulator_DisableSimulatedController_m73144FBC9EC3CEF14A0C4E55905FEF2AB58B3457 (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, int32_t ___handedness0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Input.Simulation.CameraSimulationSettings::get_SimulationEnabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CameraSimulationSettings_get_SimulationEnabled_m1470DC10A623BF17C7C675EFF9961C247150BAA0_inline (CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::EnableSimulatedCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSimulator_EnableSimulatedCamera_mCB80F7E49DEDFA632FF04DA35EAC91E907582524 (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::UpdateSimulatedCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSimulator_UpdateSimulatedCamera_mA6A04FAB5B0C9A7D15896D92CCF80F5E96984BEC (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Input.Simulation.EyeGazeSimulationSettings::get_SimulationEnabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EyeGazeSimulationSettings_get_SimulationEnabled_m41545363A4B6821167977D4EC0219AA9CD49FF6D_inline (EyeGazeSimulationSettings_t3C2AFE26CF2C423D622769D96E9F76A7B3C82A3A* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::EnableSimulatedEyeGaze()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSimulator_EnableSimulatedEyeGaze_m02C07BA222AA6CC7087ABB2C31A403D105F0A27C (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::UpdateSimulatedEyeGaze()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSimulator_UpdateSimulatedEyeGaze_mD62234314E17960BBF5CD8DBC28B86C52C8DD25E (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationMode Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::get_SimulationMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ControllerSimulationSettings_get_SimulationMode_mFCB8DB4BA892D80F9F69BBD8EC9EC1380D973F23_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::UpdateSimulatedController(Microsoft.MixedReality.Toolkit.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSimulator_UpdateSimulatedController_m4B412F04854C24E5D80022B331C677EEC1D0FA64 (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, int32_t ___handedness0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedCamera__ctor_mD5D87341AF9FAD30B76549986897937F0A70A6A9 (SimulatedCamera_tDD65CFCB2C021ED5723B0D5118897FDED2C5EDB5* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.Simulation.CameraSimulationSettings Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::get_CameraSettings()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* InputSimulator_get_CameraSettings_mC46E389DCB7CAD50C826C6A42C56D18A3831E10C_inline (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.CameraSimulationSettings::get_MoveHorizontal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* CameraSimulationSettings_get_MoveHorizontal_m17E5E1F61AB157DC6456EE2793E198EA2E843A9F_inline (CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionReference::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<System.Single>()
inline float InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method)
{
	return ((  float (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.CameraSimulationSettings::get_MoveVertical()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* CameraSimulationSettings_get_MoveVertical_mFDDC5B796385360A3D138D020DE7CA3B512D481B_inline (CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.CameraSimulationSettings::get_MoveDepth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* CameraSimulationSettings_get_MoveDepth_m0F3C9E66B58DF631C8630224D3D309E16BFA66C1_inline (CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.CameraSimulationSettings::get_Pitch()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* CameraSimulationSettings_get_Pitch_mAA12571EB098CAB17A68875A557D875DA69D4A9C_inline (CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Input.Simulation.CameraSimulationSettings::get_InvertPitch()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CameraSimulationSettings_get_InvertPitch_mD6A262E280E63782DDD6BD0A13AB418852447C5B_inline (CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.CameraSimulationSettings::get_Yaw()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* CameraSimulationSettings_get_Yaw_m11D2EEA67BCC8BA3D3F3E02A7B0F7FC3B2A8273D_inline (CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.CameraSimulationSettings::get_Roll()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* CameraSimulationSettings_get_Roll_m25372ABD8C63A76F982DF6A6E63248D09B83A799_inline (CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Input.Simulation.CameraSimulationSettings::get_IsMovementSmoothed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CameraSimulationSettings_get_IsMovementSmoothed_mFEFEC39B621425C5989EAE6192979BF13E689036_inline (CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* __this, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.Input.Simulation.CameraSimulationSettings::get_MoveSpeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CameraSimulationSettings_get_MoveSpeed_mB6CEB3DA4BF4DF8EAF9E30C6B9FC772DB9D4ADB8_inline (CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* __this, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.Input.Simulation.CameraSimulationSettings::get_RotationSensitivity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CameraSimulationSettings_get_RotationSensitivity_m23F2B73B449285584DC2AFD9DCB578829728DE42_inline (CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedCamera::Update(UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedCamera_Update_mC6F3924B1B22F4F081F12B83FCCC9D09A3F5EB2F (SimulatedCamera_tDD65CFCB2C021ED5723B0D5118897FDED2C5EDB5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___moveDelta0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotationDelta1, bool ___isSmoothed2, float ___moveSpeed3, float ___rotationSensitivity4, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedEyeGaze::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedEyeGaze__ctor_mA6BA8FE0A1C128A250CC97BACE44D75535D81EFF (SimulatedEyeGaze_tC2D5707605893349BE19C4DD5B20CECFAFE42F53* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.EyeGazeSimulationSettings::get_LookVertical()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* EyeGazeSimulationSettings_get_LookVertical_m3B0E8F0F830748732398184AA8C2071081BB1E96_inline (EyeGazeSimulationSettings_t3C2AFE26CF2C423D622769D96E9F76A7B3C82A3A* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.EyeGazeSimulationSettings::get_LookHorizontal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* EyeGazeSimulationSettings_get_LookHorizontal_m4C3AB0D8EFEF7BDB72285A2A76FFDF960D3D663E_inline (EyeGazeSimulationSettings_t3C2AFE26CF2C423D622769D96E9F76A7B3C82A3A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.Simulation.EyeGazeSimulationSettings::get_EyeOriginOffset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 EyeGazeSimulationSettings_get_EyeOriginOffset_m7F1395524F9DEDE39E57D6A06653207C869A7A08_inline (EyeGazeSimulationSettings_t3C2AFE26CF2C423D622769D96E9F76A7B3C82A3A* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedEyeGaze::Update(System.Boolean,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedEyeGaze_Update_m0F2624FD52EB8EC404526869C44C61BE4A7B9AE5 (SimulatedEyeGaze_tC2D5707605893349BE19C4DD5B20CECFAFE42F53* __this, bool ___isTracked0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lookDelta1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eyeOffset2, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::IsSupportedHandedness(Microsoft.MixedReality.Toolkit.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputSimulator_IsSupportedHandedness_m9FFEEA47CD6195E18DFD00E6016EEA0E8D2CE6EA (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, int32_t ___handedness0, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController& Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::GetControllerReference(Microsoft.MixedReality.Toolkit.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166** InputSimulator_GetControllerReference_mED16A02E4AE69FAF9EE4BC07B00F7785A55BDA6E (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, int32_t ___handedness0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::.ctor(Microsoft.MixedReality.Toolkit.Handedness,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedController__ctor_m9DBC659A255F5DE00CD405BF83D7ECBC7198C4D7 (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, int32_t ___handedness0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initialRelativePosition1, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::GetControllerControls(Microsoft.MixedReality.Toolkit.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* InputSimulator_GetControllerControls_mF00CF651F06E315881C69F50FD741611360C6702 (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, int32_t ___handedness0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerControls_Reset_m2199371294626C8774C592497428CDABC85D235D (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::get_Toggle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ControllerSimulationSettings_get_Toggle_mB85A823140A946C802F63C23121BCFE7DA210A7A_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputAction::WasPerformedThisFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAction_WasPerformedThisFrame_m6EB7F845E109BB397BA5DB84FE80CB28F399D62E (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::get_ToggleState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ControllerSimulationSettings_get_ToggleState_m996B8AD6C291D144DC187728FF38D04EFBC4AD9B_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::set_ToggleState(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ControllerSimulationSettings_set_ToggleState_m3D9140FA57D0CC82A4BCCC447EECFD7105EFF0CC_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::get_Track()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ControllerSimulationSettings_get_Track_m51F7DBF61BD3D7EF31B91D1703CADB61EE68064C_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputAction::IsPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAction_IsPressed_m40DF920F0E7D18170B62666DA2A2131AD336A301 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::get_DefaultPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ControllerSimulationSettings_get_DefaultPosition_m18DAEE545417B11C63EADEAB9D9FC6AFD46F76EE_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Mouse UnityEngine.InputSystem.Mouse::get_current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* Mouse_get_current_m559AE408DFE4F44D811979FE592BBAF7A84CE6F3_inline (const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.InputSystem.Pointer::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* Pointer_get_position_m4286004169788483EEDA6AF833CEFDB04FEDF3D8_inline (Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>::ReadValue()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541 (InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66*, const RuntimeMethod*))InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_gshared)(__this, method);
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::ScreenToCameraRelative(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 InputSimulator_ScreenToCameraRelative_m37CD281855C4ABE1C6FE89824E8C30AA807DE6C3 (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___screenPos0, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::EnableSimulatedController(Microsoft.MixedReality.Toolkit.Handedness,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* InputSimulator_EnableSimulatedController_mF289DAE2C44A4EE2DD66E6CCD93106B08117340C (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, int32_t ___handedness0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPosition1, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::get_ChangeNeutralPose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ControllerSimulationSettings_get_ChangeNeutralPose_m3B7224C2638C070BD83957ADA4C2CE3996C2ECC7_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::ToggleNeutralPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedController_ToggleNeutralPose_mA41CE61C533EA6676D111D29077E7F0CFE85A487 (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::get_MoveHorizontal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ControllerSimulationSettings_get_MoveHorizontal_m0922CB519513571DBD470E91B6028A3B3B321C04_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputActionExtensions::RaisedByMouse(UnityEngine.InputSystem.InputAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputActionExtensions_RaisedByMouse_mF87B8223A551CE33C18DBAB7B8BAF6FA475FED69 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___action0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::get_MoveVertical()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ControllerSimulationSettings_get_MoveVertical_m112D1DA278DE8D1D5ECE1671086DB4B426D01BE9_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::get_MoveDepth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ControllerSimulationSettings_get_MoveDepth_m4FCCFBBE741A32CCA36853DB3DDA55907A4A5706_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::get_FaceTheCamera()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ControllerSimulationSettings_get_FaceTheCamera_m5400C65F1E118F4FE183592EA203EDBA86528105_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerRotationMode Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::get_RotationMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ControllerSimulationSettings_get_RotationMode_mCA783C64759669963A1677AD0CE75D1BE4787D74_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::set_RotationMode(Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerRotationMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ControllerSimulationSettings_set_RotationMode_m4706B2477E95051691A95A5E5B9160625EE581FA_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::get_Pitch()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ControllerSimulationSettings_get_Pitch_mCC9FE7335ADA7D51AD11B0939929136A8D635B8E_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::get_InvertPitch()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ControllerSimulationSettings_get_InvertPitch_mC4FF89BB52D19DB6FEA23CB15526DBD4EF13E7E1_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::get_Yaw()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ControllerSimulationSettings_get_Yaw_m1124B86D30F262A0A98390ACEE5CCE36A953BD1F_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::get_Roll()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ControllerSimulationSettings_get_Roll_m7ABA3D58669C859D99D840B71CAFA4167B660E12_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Inequality_mC1922F160B14F6F404E46FFCC10B282D913BE354_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::get_TriggerButton()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ControllerSimulationSettings_get_TriggerButton_m43AF2173D044F41B57335C100FB78FB8CF694279_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDamp_m4B8C5AACFEBF58E93FF2A33832C27EF1E5AF7AFD_inline (float ___current0, float ___target1, float* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::get_GripButton()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ControllerSimulationSettings_get_GripButton_mE5FFCDC79BD35FF21329D83D008241E3974AC580_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerAnchorPoint Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::get_AnchorPoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ControllerSimulationSettings_get_AnchorPoint_m87534173C5F618262C05CED70347851006BE076D_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::get_IsMovementSmoothed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ControllerSimulationSettings_get_IsMovementSmoothed_m1AA299E57D5D88E110AB648A9014DEC264AA0C8A_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::get_DepthSensitivity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ControllerSimulationSettings_get_DepthSensitivity_mBA7F96F9DE18F6995B0E2C7621DC42034710BE7E_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings::get_JitterStrength()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ControllerSimulationSettings_get_JitterStrength_mF2587C6E9D066E167BECFCB0653C7F4670F5AAA0_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::UpdateRelative(UnityEngine.Vector3,UnityEngine.Quaternion,Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls,Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerRotationMode,System.Boolean,UnityEngine.Vector3,System.Boolean,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedController_UpdateRelative_m32B5F0853A356345684D8EDB06B74E501796DFA0 (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___moveDelta0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotationDelta1, ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* ___controls2, int32_t ___rotationMode3, bool ___shouldUseRayVector4, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___anchorPosition5, bool ___isMovementSmoothed6, float ___depthSensitivity7, float ___jitterStrength8, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.Interaction.Toolkit.Inputs.InputActionManager>()
inline InputActionManager_tCB367C1814B9264CDE8FA04AA916642BB2887D21* Component_GetComponent_TisInputActionManager_tCB367C1814B9264CDE8FA04AA916642BB2887D21_m7CDC318799E29AEB5F00C9BEF4254FADBF3EA351 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  InputActionManager_tCB367C1814B9264CDE8FA04AA916642BB2887D21* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Collections.Generic.List`1<UnityEngine.InputSystem.InputActionAsset> UnityEngine.XR.Interaction.Toolkit.Inputs.InputActionManager::get_actionAssets()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t3FD220D91A685A9242170EEF27EC5C0C50F2B5DF* InputActionManager_get_actionAssets_mB7B35CC08659DF051DE9FC4968B973BF399CDEFF_inline (InputActionManager_tCB367C1814B9264CDE8FA04AA916642BB2887D21* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.InputSystem.InputActionAsset>::get_Count()
inline int32_t List_1_get_Count_m57C2321B0C617CE2B157DD9A43918736AB1B0855_inline (List_1_t3FD220D91A685A9242170EEF27EC5C0C50F2B5DF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3FD220D91A685A9242170EEF27EC5C0C50F2B5DF*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.InputSystem.InputActionAsset>::get_Item(System.Int32)
inline InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* List_1_get_Item_mB6E9EEFB6EA8785251C03D5FC740264070E9202B (List_1_t3FD220D91A685A9242170EEF27EC5C0C50F2B5DF* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* (*) (List_1_t3FD220D91A685A9242170EEF27EC5C0C50F2B5DF*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.String Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::GetControlSetName(Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulatorControlSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputSimulator_GetControlSetName_m83BB30FBECFD1ADD76F986044693C04133683157 (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, int32_t ___set0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputBinding::set_groups(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputBinding_set_groups_mF2767924C74B69A77893A53B9A49A42D101E59E0_inline (InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.InputSystem.InputBinding>::.ctor(T)
inline void Nullable_1__ctor_m386E965F0E7A0EAFAED17B2CDDD4EC5FCFC21F5F (Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44* __this, InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44*, InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5, const RuntimeMethod*))Nullable_1__ctor_m386E965F0E7A0EAFAED17B2CDDD4EC5FCFC21F5F_gshared)(__this, ___value0, method);
}
// System.Void UnityEngine.InputSystem.InputActionAsset::set_bindingMask(System.Nullable`1<UnityEngine.InputSystem.InputBinding>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_set_bindingMask_mD621370B859495F593CBE28019D84F44922C94A5 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___value0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Reflection.MemberInfo[] System.Type::GetMember(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* Type_GetMember_mC4456D1BA93A44CF021059F6D46237C0740A6229 (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_m9A7C2BF942D2CE1640896A41290BBD682568B6C8 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m9A7C2BF942D2CE1640896A41290BBD682568B6C8_gshared)(___source0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerControls__ctor_mA5E89E7FBBC219799AAA33B945AE61E1094F5613 (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m7F63A273E382CB6328736B6E7F321DDFA40EA9E3_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, intptr_t ___markerPtr0, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_mE2F7A0DB4C52105F7CD135ED8816A2BB98E663CC (intptr_t ___markerPtr0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_m27DDE00D41B95677982DBFCE074D45B79E50C7CC (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::op_Equality(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_m3DF1D708D3A0AFB11EACF42A9C068EF6DC508FBB_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_SmoothDamp_m00E482452BCED3FE0F16B4033B2B5323C7E30829 (float ___current0, float ___target1, float* ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, float ___deltaTime5, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::BeginSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_BeginSample_m1C6D6ED1C8E0CB2FD0934EB6EA333276F67C14F6 (intptr_t ___markerPtr0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::IsEqualUsingDot(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m5C6AC5F5C56B27C25DDF612BEEF40F28CA44CA31_inline (float ___dot0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Microsoft.MixedReality.Toolkit.Input.Simulation.EyeGazeSimulationSettings::get_ToggleState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EyeGazeSimulationSettings_get_ToggleState_m8C493B1C69B797E7CD338FA4D1AEC4DCB155639B (EyeGazeSimulationSettings_t3C2AFE26CF2C423D622769D96E9F76A7B3C82A3A* __this, const RuntimeMethod* method) 
{
	{
		// internal bool ToggleState { get; set; } = false;
		bool L_0 = __this->___U3CToggleStateU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.EyeGazeSimulationSettings::set_ToggleState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeGazeSimulationSettings_set_ToggleState_m7025D038EB7C9276750DB0F1FB9906DACEE6D283 (EyeGazeSimulationSettings_t3C2AFE26CF2C423D622769D96E9F76A7B3C82A3A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// internal bool ToggleState { get; set; } = false;
		bool L_0 = ___value0;
		__this->___U3CToggleStateU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.Simulation.EyeGazeSimulationSettings::get_SimulationEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EyeGazeSimulationSettings_get_SimulationEnabled_m41545363A4B6821167977D4EC0219AA9CD49FF6D (EyeGazeSimulationSettings_t3C2AFE26CF2C423D622769D96E9F76A7B3C82A3A* __this, const RuntimeMethod* method) 
{
	{
		// get => simulationEnabled;
		bool L_0 = __this->___simulationEnabled_1;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.EyeGazeSimulationSettings::set_SimulationEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeGazeSimulationSettings_set_SimulationEnabled_m7C9E18D8CE9136464ECF34A0FD065CDA2DF6A15A (EyeGazeSimulationSettings_t3C2AFE26CF2C423D622769D96E9F76A7B3C82A3A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => simulationEnabled = value;
		bool L_0 = ___value0;
		__this->___simulationEnabled_1 = L_0;
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.Simulation.EyeGazeSimulationSettings::get_EyeOriginOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 EyeGazeSimulationSettings_get_EyeOriginOffset_m7F1395524F9DEDE39E57D6A06653207C869A7A08 (EyeGazeSimulationSettings_t3C2AFE26CF2C423D622769D96E9F76A7B3C82A3A* __this, const RuntimeMethod* method) 
{
	{
		// get => eyeOriginOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___eyeOriginOffset_2;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.EyeGazeSimulationSettings::set_EyeOriginOffset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeGazeSimulationSettings_set_EyeOriginOffset_m20865B545E9807EF53E957D0A35FF6EBF89DF318 (EyeGazeSimulationSettings_t3C2AFE26CF2C423D622769D96E9F76A7B3C82A3A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// set => eyeOriginOffset = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___eyeOriginOffset_2 = L_0;
		return;
	}
}
// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.EyeGazeSimulationSettings::get_LookHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* EyeGazeSimulationSettings_get_LookHorizontal_m4C3AB0D8EFEF7BDB72285A2A76FFDF960D3D663E (EyeGazeSimulationSettings_t3C2AFE26CF2C423D622769D96E9F76A7B3C82A3A* __this, const RuntimeMethod* method) 
{
	{
		// get => lookHorizontal;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___lookHorizontal_3;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.EyeGazeSimulationSettings::set_LookHorizontal(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeGazeSimulationSettings_set_LookHorizontal_mC78EC6EC2DD9ED9627A9841FBB475B8528330C65 (EyeGazeSimulationSettings_t3C2AFE26CF2C423D622769D96E9F76A7B3C82A3A* __this, InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => lookHorizontal = value;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = ___value0;
		__this->___lookHorizontal_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lookHorizontal_3), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.Input.Simulation.EyeGazeSimulationSettings::get_LookVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* EyeGazeSimulationSettings_get_LookVertical_m3B0E8F0F830748732398184AA8C2071081BB1E96 (EyeGazeSimulationSettings_t3C2AFE26CF2C423D622769D96E9F76A7B3C82A3A* __this, const RuntimeMethod* method) 
{
	{
		// get => lookVertical;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___lookVertical_4;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.EyeGazeSimulationSettings::set_LookVertical(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeGazeSimulationSettings_set_LookVertical_m0244CDC68C4E0E3051B7BC6B9DD4376D9B4501CB (EyeGazeSimulationSettings_t3C2AFE26CF2C423D622769D96E9F76A7B3C82A3A* __this, InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => lookVertical = value;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = ___value0;
		__this->___lookVertical_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lookVertical_4), (void*)L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.Simulation.EyeGazeSimulationSettings::get_Sensitivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EyeGazeSimulationSettings_get_Sensitivity_m50F088A845E43BC8CDB640674652578C191F6D23 (EyeGazeSimulationSettings_t3C2AFE26CF2C423D622769D96E9F76A7B3C82A3A* __this, const RuntimeMethod* method) 
{
	{
		// get => sensitivity;
		float L_0 = __this->___sensitivity_7;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.EyeGazeSimulationSettings::set_Sensitivity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeGazeSimulationSettings_set_Sensitivity_m0C3DEFD8468D0DA3BF1BC713D733E40F9A6133B3 (EyeGazeSimulationSettings_t3C2AFE26CF2C423D622769D96E9F76A7B3C82A3A* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D1852D03B2E4EA0826C25FDDEEA6154ABCD36D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC65B53B4F9D7BFF81D48FF03A166E7FF6D61F08);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((value < MinimumSensitivity) ||
		//     (value > MaximumSensitivity))
		float L_0 = ___value0;
		if ((((float)L_0) < ((float)(0.100000001f))))
		{
			goto IL_0010;
		}
	}
	{
		float L_1 = ___value0;
		if ((!(((float)L_1) > ((float)(5.0f)))))
		{
			goto IL_0038;
		}
	}

IL_0010:
	{
		// Debug.LogWarning($"{nameof(Sensitivity)} out of range, altering to be {MinimumSensitivity} <= value <= {MaximumSensitivity}.");
		float L_2 = (0.100000001f);
		RuntimeObject* L_3 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_2);
		float L_4 = (5.0f);
		RuntimeObject* L_5 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteral0D1852D03B2E4EA0826C25FDDEEA6154ABCD36D2, _stringLiteralEC65B53B4F9D7BFF81D48FF03A166E7FF6D61F08, L_3, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_6, NULL);
	}

IL_0038:
	{
		// sensitivity = Mathf.Clamp(value, MinimumSensitivity, MaximumSensitivity);
		float L_7 = ___value0;
		float L_8;
		L_8 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_7, (0.100000001f), (5.0f), NULL);
		__this->___sensitivity_7 = L_8;
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.EyeGazeSimulationSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeGazeSimulationSettings__ctor_mFB5C4A0CD245D3C2DD60496008789DD2AEC463F3 (EyeGazeSimulationSettings_t3C2AFE26CF2C423D622769D96E9F76A7B3C82A3A* __this, const RuntimeMethod* method) 
{
	{
		// private bool simulationEnabled = true;
		__this->___simulationEnabled_1 = (bool)1;
		// private Vector3 eyeOriginOffset = new Vector3(0f, -0.2f, 0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (-0.200000003f), (0.0f), /*hidden argument*/NULL);
		__this->___eyeOriginOffset_2 = L_0;
		// private float sensitivity = 1.0f;
		__this->___sensitivity_7 = (1.0f);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedControllerState
IL2CPP_EXTERN_C void MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243_marshal_pinvoke(const MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243& unmarshaled, MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243_marshaled_pinvoke& marshaled)
{
	marshaled.___primary2DAxis_0 = unmarshaled.___primary2DAxis_0;
	marshaled.___trigger_1 = unmarshaled.___trigger_1;
	marshaled.___grip_2 = unmarshaled.___grip_2;
	marshaled.___secondary2DAxis_3 = unmarshaled.___secondary2DAxis_3;
	marshaled.___buttons_4 = unmarshaled.___buttons_4;
	marshaled.___batteryLevel_5 = unmarshaled.___batteryLevel_5;
	marshaled.___trackingState_6 = unmarshaled.___trackingState_6;
	marshaled.___isTracked_7 = static_cast<int32_t>(unmarshaled.___isTracked_7);
	marshaled.___devicePosition_8 = unmarshaled.___devicePosition_8;
	marshaled.___deviceRotation_9 = unmarshaled.___deviceRotation_9;
	marshaled.___pointerPosition_10 = unmarshaled.___pointerPosition_10;
	marshaled.___pointerRotation_11 = unmarshaled.___pointerRotation_11;
}
IL2CPP_EXTERN_C void MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243_marshal_pinvoke_back(const MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243_marshaled_pinvoke& marshaled, MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243& unmarshaled)
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 unmarshaledprimary2DAxis_temp_0;
	memset((&unmarshaledprimary2DAxis_temp_0), 0, sizeof(unmarshaledprimary2DAxis_temp_0));
	unmarshaledprimary2DAxis_temp_0 = marshaled.___primary2DAxis_0;
	unmarshaled.___primary2DAxis_0 = unmarshaledprimary2DAxis_temp_0;
	float unmarshaledtrigger_temp_1 = 0.0f;
	unmarshaledtrigger_temp_1 = marshaled.___trigger_1;
	unmarshaled.___trigger_1 = unmarshaledtrigger_temp_1;
	float unmarshaledgrip_temp_2 = 0.0f;
	unmarshaledgrip_temp_2 = marshaled.___grip_2;
	unmarshaled.___grip_2 = unmarshaledgrip_temp_2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 unmarshaledsecondary2DAxis_temp_3;
	memset((&unmarshaledsecondary2DAxis_temp_3), 0, sizeof(unmarshaledsecondary2DAxis_temp_3));
	unmarshaledsecondary2DAxis_temp_3 = marshaled.___secondary2DAxis_3;
	unmarshaled.___secondary2DAxis_3 = unmarshaledsecondary2DAxis_temp_3;
	uint16_t unmarshaledbuttons_temp_4 = 0;
	unmarshaledbuttons_temp_4 = marshaled.___buttons_4;
	unmarshaled.___buttons_4 = unmarshaledbuttons_temp_4;
	float unmarshaledbatteryLevel_temp_5 = 0.0f;
	unmarshaledbatteryLevel_temp_5 = marshaled.___batteryLevel_5;
	unmarshaled.___batteryLevel_5 = unmarshaledbatteryLevel_temp_5;
	int32_t unmarshaledtrackingState_temp_6 = 0;
	unmarshaledtrackingState_temp_6 = marshaled.___trackingState_6;
	unmarshaled.___trackingState_6 = unmarshaledtrackingState_temp_6;
	bool unmarshaledisTracked_temp_7 = false;
	unmarshaledisTracked_temp_7 = static_cast<bool>(marshaled.___isTracked_7);
	unmarshaled.___isTracked_7 = unmarshaledisTracked_temp_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaleddevicePosition_temp_8;
	memset((&unmarshaleddevicePosition_temp_8), 0, sizeof(unmarshaleddevicePosition_temp_8));
	unmarshaleddevicePosition_temp_8 = marshaled.___devicePosition_8;
	unmarshaled.___devicePosition_8 = unmarshaleddevicePosition_temp_8;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaleddeviceRotation_temp_9;
	memset((&unmarshaleddeviceRotation_temp_9), 0, sizeof(unmarshaleddeviceRotation_temp_9));
	unmarshaleddeviceRotation_temp_9 = marshaled.___deviceRotation_9;
	unmarshaled.___deviceRotation_9 = unmarshaleddeviceRotation_temp_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledpointerPosition_temp_10;
	memset((&unmarshaledpointerPosition_temp_10), 0, sizeof(unmarshaledpointerPosition_temp_10));
	unmarshaledpointerPosition_temp_10 = marshaled.___pointerPosition_10;
	unmarshaled.___pointerPosition_10 = unmarshaledpointerPosition_temp_10;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledpointerRotation_temp_11;
	memset((&unmarshaledpointerRotation_temp_11), 0, sizeof(unmarshaledpointerRotation_temp_11));
	unmarshaledpointerRotation_temp_11 = marshaled.___pointerRotation_11;
	unmarshaled.___pointerRotation_11 = unmarshaledpointerRotation_temp_11;
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedControllerState
IL2CPP_EXTERN_C void MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243_marshal_pinvoke_cleanup(MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedControllerState
IL2CPP_EXTERN_C void MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243_marshal_com(const MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243& unmarshaled, MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243_marshaled_com& marshaled)
{
	marshaled.___primary2DAxis_0 = unmarshaled.___primary2DAxis_0;
	marshaled.___trigger_1 = unmarshaled.___trigger_1;
	marshaled.___grip_2 = unmarshaled.___grip_2;
	marshaled.___secondary2DAxis_3 = unmarshaled.___secondary2DAxis_3;
	marshaled.___buttons_4 = unmarshaled.___buttons_4;
	marshaled.___batteryLevel_5 = unmarshaled.___batteryLevel_5;
	marshaled.___trackingState_6 = unmarshaled.___trackingState_6;
	marshaled.___isTracked_7 = static_cast<int32_t>(unmarshaled.___isTracked_7);
	marshaled.___devicePosition_8 = unmarshaled.___devicePosition_8;
	marshaled.___deviceRotation_9 = unmarshaled.___deviceRotation_9;
	marshaled.___pointerPosition_10 = unmarshaled.___pointerPosition_10;
	marshaled.___pointerRotation_11 = unmarshaled.___pointerRotation_11;
}
IL2CPP_EXTERN_C void MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243_marshal_com_back(const MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243_marshaled_com& marshaled, MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243& unmarshaled)
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 unmarshaledprimary2DAxis_temp_0;
	memset((&unmarshaledprimary2DAxis_temp_0), 0, sizeof(unmarshaledprimary2DAxis_temp_0));
	unmarshaledprimary2DAxis_temp_0 = marshaled.___primary2DAxis_0;
	unmarshaled.___primary2DAxis_0 = unmarshaledprimary2DAxis_temp_0;
	float unmarshaledtrigger_temp_1 = 0.0f;
	unmarshaledtrigger_temp_1 = marshaled.___trigger_1;
	unmarshaled.___trigger_1 = unmarshaledtrigger_temp_1;
	float unmarshaledgrip_temp_2 = 0.0f;
	unmarshaledgrip_temp_2 = marshaled.___grip_2;
	unmarshaled.___grip_2 = unmarshaledgrip_temp_2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 unmarshaledsecondary2DAxis_temp_3;
	memset((&unmarshaledsecondary2DAxis_temp_3), 0, sizeof(unmarshaledsecondary2DAxis_temp_3));
	unmarshaledsecondary2DAxis_temp_3 = marshaled.___secondary2DAxis_3;
	unmarshaled.___secondary2DAxis_3 = unmarshaledsecondary2DAxis_temp_3;
	uint16_t unmarshaledbuttons_temp_4 = 0;
	unmarshaledbuttons_temp_4 = marshaled.___buttons_4;
	unmarshaled.___buttons_4 = unmarshaledbuttons_temp_4;
	float unmarshaledbatteryLevel_temp_5 = 0.0f;
	unmarshaledbatteryLevel_temp_5 = marshaled.___batteryLevel_5;
	unmarshaled.___batteryLevel_5 = unmarshaledbatteryLevel_temp_5;
	int32_t unmarshaledtrackingState_temp_6 = 0;
	unmarshaledtrackingState_temp_6 = marshaled.___trackingState_6;
	unmarshaled.___trackingState_6 = unmarshaledtrackingState_temp_6;
	bool unmarshaledisTracked_temp_7 = false;
	unmarshaledisTracked_temp_7 = static_cast<bool>(marshaled.___isTracked_7);
	unmarshaled.___isTracked_7 = unmarshaledisTracked_temp_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaleddevicePosition_temp_8;
	memset((&unmarshaleddevicePosition_temp_8), 0, sizeof(unmarshaleddevicePosition_temp_8));
	unmarshaleddevicePosition_temp_8 = marshaled.___devicePosition_8;
	unmarshaled.___devicePosition_8 = unmarshaleddevicePosition_temp_8;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaleddeviceRotation_temp_9;
	memset((&unmarshaleddeviceRotation_temp_9), 0, sizeof(unmarshaleddeviceRotation_temp_9));
	unmarshaleddeviceRotation_temp_9 = marshaled.___deviceRotation_9;
	unmarshaled.___deviceRotation_9 = unmarshaleddeviceRotation_temp_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledpointerPosition_temp_10;
	memset((&unmarshaledpointerPosition_temp_10), 0, sizeof(unmarshaledpointerPosition_temp_10));
	unmarshaledpointerPosition_temp_10 = marshaled.___pointerPosition_10;
	unmarshaled.___pointerPosition_10 = unmarshaledpointerPosition_temp_10;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledpointerRotation_temp_11;
	memset((&unmarshaledpointerRotation_temp_11), 0, sizeof(unmarshaledpointerRotation_temp_11));
	unmarshaledpointerRotation_temp_11 = marshaled.___pointerRotation_11;
	unmarshaled.___pointerRotation_11 = unmarshaledpointerRotation_temp_11;
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedControllerState
IL2CPP_EXTERN_C void MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243_marshal_com_cleanup(MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243_marshaled_com& marshaled)
{
}
// UnityEngine.InputSystem.Utilities.FourCC Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedControllerState::get_FormatId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED MRTKSimulatedControllerState_get_FormatId_m9D52C0B91D610E5C4B5A4BAF0FD685A78ADCB15D (const RuntimeMethod* method) 
{
	{
		// public static FourCC FormatId => new FourCC('M', 'S', 'S', 'C');
		FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED L_0;
		memset((&L_0), 0, sizeof(L_0));
		FourCC__ctor_mFE3A3F80C6900CD18CB9BDD3C9B604823F2E791F((&L_0), ((int32_t)77), ((int32_t)83), ((int32_t)83), ((int32_t)67), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.InputSystem.Utilities.FourCC Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedControllerState::UnityEngine.InputSystem.LowLevel.IInputStateTypeInfo.get_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED MRTKSimulatedControllerState_UnityEngine_InputSystem_LowLevel_IInputStateTypeInfo_get_format_mCFBF4FC2542D29A8BC6C7AF3BAD63724A52B36CA (MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243* __this, const RuntimeMethod* method) 
{
	{
		// FourCC IInputStateTypeInfo.format => FormatId;
		FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED L_0;
		L_0 = MRTKSimulatedControllerState_get_FormatId_m9D52C0B91D610E5C4B5A4BAF0FD685A78ADCB15D(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED MRTKSimulatedControllerState_UnityEngine_InputSystem_LowLevel_IInputStateTypeInfo_get_format_mCFBF4FC2542D29A8BC6C7AF3BAD63724A52B36CA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243*>(__this + _offset);
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED _returnValue;
	_returnValue = MRTKSimulatedControllerState_UnityEngine_InputSystem_LowLevel_IInputStateTypeInfo_get_format_mCFBF4FC2542D29A8BC6C7AF3BAD63724A52B36CA(_thisAdjusted, method);
	return _returnValue;
}
// Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedControllerState Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedControllerState::WithButton(UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243 MRTKSimulatedControllerState_WithButton_mF850B1FB276940CCEBF79B12397E5FB1E26624BE (MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243* __this, int32_t ___button0, bool ___state1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// var bit = 1 << (int)button;
		int32_t L_0 = ___button0;
		V_0 = ((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))));
		// if (state)
		bool L_1 = ___state1;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// buttons |= (ushort)bit;
		uint16_t L_2 = __this->___buttons_4;
		int32_t L_3 = V_0;
		__this->___buttons_4 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_2|((int32_t)(uint16_t)L_3))));
		goto IL_002d;
	}

IL_001c:
	{
		// buttons &= (ushort)~bit;
		uint16_t L_4 = __this->___buttons_4;
		int32_t L_5 = V_0;
		__this->___buttons_4 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_4&((int32_t)(uint16_t)((~L_5))))));
	}

IL_002d:
	{
		// return this;
		MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243 L_6 = (*(MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243*)__this);
		return L_6;
	}
}
IL2CPP_EXTERN_C  MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243 MRTKSimulatedControllerState_WithButton_mF850B1FB276940CCEBF79B12397E5FB1E26624BE_AdjustorThunk (RuntimeObject* __this, int32_t ___button0, bool ___state1, const RuntimeMethod* method)
{
	MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243*>(__this + _offset);
	MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243 _returnValue;
	_returnValue = MRTKSimulatedControllerState_WithButton_mF850B1FB276940CCEBF79B12397E5FB1E26624BE(_thisAdjusted, ___button0, ___state1, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedControllerState::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKSimulatedControllerState_Reset_m6E4371F6B844F28106AF471954B525DDE66D6DE6 (MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243* __this, const RuntimeMethod* method) 
{
	{
		// primary2DAxis = default;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___primary2DAxis_0);
		il2cpp_codegen_initobj(L_0, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		// trigger = default;
		__this->___trigger_1 = (0.0f);
		// grip = default;
		__this->___grip_2 = (0.0f);
		// secondary2DAxis = default;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&__this->___secondary2DAxis_3);
		il2cpp_codegen_initobj(L_1, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		// buttons = default;
		__this->___buttons_4 = (uint16_t)0;
		// batteryLevel = default;
		__this->___batteryLevel_5 = (0.0f);
		// trackingState = default;
		__this->___trackingState_6 = 0;
		// isTracked = default;
		__this->___isTracked_7 = (bool)0;
		// devicePosition = default;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&__this->___devicePosition_8);
		il2cpp_codegen_initobj(L_2, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// deviceRotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		__this->___deviceRotation_9 = L_3;
		// pointerPosition = default;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___pointerPosition_10);
		il2cpp_codegen_initobj(L_4, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// pointerRotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		__this->___pointerRotation_11 = L_5;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void MRTKSimulatedControllerState_Reset_m6E4371F6B844F28106AF471954B525DDE66D6DE6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243*>(__this + _offset);
	MRTKSimulatedControllerState_Reset_m6E4371F6B844F28106AF471954B525DDE66D6DE6(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedCamera__ctor_mD5D87341AF9FAD30B76549986897937F0A70A6A9 (SimulatedCamera_tDD65CFCB2C021ED5723B0D5118897FDED2C5EDB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_AddDevice_TisXRSimulatedHMD_t7679B3251840703ACD265307EDB951D185079790_mFD8F374434DB1AA12B5BB1EEF75463BCD89110FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD7B1D8BF638D85ACD525C9BC41857FB11FB9C82);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 cameraRotation = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___cameraRotation_3 = L_0;
		// public SimulatedCamera()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// simulatedHmd = InputSystem.AddDevice<XRSimulatedHMD>();
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		XRSimulatedHMD_t7679B3251840703ACD265307EDB951D185079790* L_1;
		L_1 = InputSystem_AddDevice_TisXRSimulatedHMD_t7679B3251840703ACD265307EDB951D185079790_mFD8F374434DB1AA12B5BB1EEF75463BCD89110FB((String_t*)NULL, InputSystem_AddDevice_TisXRSimulatedHMD_t7679B3251840703ACD265307EDB951D185079790_mFD8F374434DB1AA12B5BB1EEF75463BCD89110FB_RuntimeMethod_var);
		__this->___simulatedHmd_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___simulatedHmd_0), (void*)L_1);
		// if (simulatedHmd == null)
		XRSimulatedHMD_t7679B3251840703ACD265307EDB951D185079790* L_2 = __this->___simulatedHmd_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		// Debug.LogError("Failed to create the simulated HMD.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralAD7B1D8BF638D85ACD525C9BC41857FB11FB9C82, NULL);
	}

IL_002f:
	{
		// simulatedHmdState.Reset();
		XRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F* L_3 = (&__this->___simulatedHmdState_1);
		XRSimulatedHMDState_Reset_mF2E881F062465B441F929A6319E6843800A0B9BC(L_3, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedCamera::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedCamera_Finalize_m137DEC968716C09A94C0BB78DBEB5ADDF5924AFC (SimulatedCamera_tDD65CFCB2C021ED5723B0D5118897FDED2C5EDB5* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0008:
			{// begin finally (depth: 1)
				// }
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Dispose();
			SimulatedCamera_Dispose_mC8C915E4C12094580FED3D2221070FCB77D40FF3(__this, NULL);
			goto IL_000f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedCamera::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedCamera_Dispose_mC8C915E4C12094580FED3D2221070FCB77D40FF3 (SimulatedCamera_tDD65CFCB2C021ED5723B0D5118897FDED2C5EDB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((simulatedHmd != null) && simulatedHmd.added)
		XRSimulatedHMD_t7679B3251840703ACD265307EDB951D185079790* L_0 = __this->___simulatedHmd_0;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		XRSimulatedHMD_t7679B3251840703ACD265307EDB951D185079790* L_1 = __this->___simulatedHmd_0;
		NullCheck(L_1);
		bool L_2;
		L_2 = InputDevice_get_added_m27CF78B0777E142AAF9139ABFD88F67BBAABA15C(L_1, NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// InputSystem.RemoveDevice(simulatedHmd);
		XRSimulatedHMD_t7679B3251840703ACD265307EDB951D185079790* L_3 = __this->___simulatedHmd_0;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_RemoveDevice_m41F154CEBE1EB94090D2980BEA684E58799EA8B3(L_3, NULL);
	}

IL_0020:
	{
		// GC.SuppressFinalize(this);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedCamera::ResetToOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedCamera_ResetToOrigin_m0F91C97CD6C0D5874548593EF1A351482799EA20 (SimulatedCamera_tDD65CFCB2C021ED5723B0D5118897FDED2C5EDB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputState_Change_TisXRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F_mDFF89C2BB2B6686A84CFA2BDAD4B0C1852F58F20_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// simulatedHmdState.Reset();
		XRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F* L_0 = (&__this->___simulatedHmdState_1);
		XRSimulatedHMDState_Reset_mF2E881F062465B441F929A6319E6843800A0B9BC(L_0, NULL);
		// InputState.Change(simulatedHmd, simulatedHmdState);
		XRSimulatedHMD_t7679B3251840703ACD265307EDB951D185079790* L_1 = __this->___simulatedHmd_0;
		XRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F L_2 = __this->___simulatedHmdState_1;
		il2cpp_codegen_initobj((&V_0), sizeof(InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0));
		InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 L_3 = V_0;
		InputState_Change_TisXRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F_mDFF89C2BB2B6686A84CFA2BDAD4B0C1852F58F20(L_1, L_2, 0, L_3, InputState_Change_TisXRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F_mDFF89C2BB2B6686A84CFA2BDAD4B0C1852F58F20_RuntimeMethod_var);
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedCamera::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SimulatedCamera_get_Position_m87ECA2695DED91E205290CD3EABCA6EBA974570D (SimulatedCamera_tDD65CFCB2C021ED5723B0D5118897FDED2C5EDB5* __this, const RuntimeMethod* method) 
{
	{
		// internal Vector3 Position => simulatedHmdState.devicePosition;
		XRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F* L_0 = (&__this->___simulatedHmdState_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0->___devicePosition_8;
		return L_1;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedCamera::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SimulatedCamera_get_Rotation_m2DAEEE24B20C32289193001C8FF0FC58C9BA728A (SimulatedCamera_tDD65CFCB2C021ED5723B0D5118897FDED2C5EDB5* __this, const RuntimeMethod* method) 
{
	{
		// internal Quaternion Rotation => simulatedHmdState.deviceRotation;
		XRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F* L_0 = (&__this->___simulatedHmdState_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = L_0->___deviceRotation_9;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedCamera::Update(UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedCamera_Update_mC6F3924B1B22F4F081F12B83FCCC9D09A3F5EB2F (SimulatedCamera_tDD65CFCB2C021ED5723B0D5118897FDED2C5EDB5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___moveDelta0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotationDelta1, bool ___isSmoothed2, float ___moveSpeed3, float ___rotationSensitivity4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputState_Change_TisXRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F_mDFF89C2BB2B6686A84CFA2BDAD4B0C1852F58F20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimulatedCamera_tDD65CFCB2C021ED5723B0D5118897FDED2C5EDB5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	SimulatedCamera_tDD65CFCB2C021ED5723B0D5118897FDED2C5EDB5* G_B5_0 = NULL;
	SimulatedCamera_tDD65CFCB2C021ED5723B0D5118897FDED2C5EDB5* G_B4_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	SimulatedCamera_tDD65CFCB2C021ED5723B0D5118897FDED2C5EDB5* G_B6_1 = NULL;
	{
		// using (UpdatePerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(SimulatedCamera_tDD65CFCB2C021ED5723B0D5118897FDED2C5EDB5_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((SimulatedCamera_tDD65CFCB2C021ED5723B0D5118897FDED2C5EDB5_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedCamera_tDD65CFCB2C021ED5723B0D5118897FDED2C5EDB5_il2cpp_TypeInfo_var))->___UpdatePerfMarker_5;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_011d:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (simulatedHmd == null) { return; }
				XRSimulatedHMD_t7679B3251840703ACD265307EDB951D185079790* L_2 = __this->___simulatedHmd_0;
				if (L_2)
				{
					goto IL_001b_1;
				}
			}
			{
				// if (simulatedHmd == null) { return; }
				goto IL_012b;
			}

IL_001b_1:
			{
				// simulatedHmdState.isTracked = true;
				XRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F* L_3 = (&__this->___simulatedHmdState_1);
				L_3->___isTracked_7 = (bool)1;
				// smoothedMoveDelta = isSmoothed ?
				//     Smoothing.SmoothTo(smoothedMoveDelta, moveDelta, moveSmoothingTime, Time.fixedDeltaTime) :
				//     moveDelta;
				bool L_4 = ___isSmoothed2;
				G_B4_0 = __this;
				if (L_4)
				{
					G_B5_0 = __this;
					goto IL_002e_1;
				}
			}
			{
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___moveDelta0;
				G_B6_0 = L_5;
				G_B6_1 = G_B4_0;
				goto IL_0044_1;
			}

IL_002e_1:
			{
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___smoothedMoveDelta_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___moveDelta0;
				float L_8;
				L_8 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
				L_9 = Smoothing_SmoothTo_m398BCABDC1C19B6D4964C963DD889CF07C357543(L_6, L_7, (0.0199999996f), L_8, NULL);
				G_B6_0 = L_9;
				G_B6_1 = G_B5_0;
			}

IL_0044_1:
			{
				NullCheck(G_B6_1);
				G_B6_1->___smoothedMoveDelta_4 = G_B6_0;
				// simulatedHmdState.trackingState = (int)(InputTrackingState.Position | InputTrackingState.Rotation);
				XRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F* L_10 = (&__this->___simulatedHmdState_1);
				L_10->___trackingState_6 = 3;
				// simulatedHmdState.centerEyePosition += Quaternion.Inverse(PlayspaceUtilities.ReferenceTransform.rotation) * CameraCache.Main.transform.rotation * (smoothedMoveDelta * moveSpeed);
				XRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F* L_11 = (&__this->___simulatedHmdState_1);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = (&L_11->___centerEyePosition_4);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = L_12;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_13);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
				L_15 = PlayspaceUtilities_get_ReferenceTransform_mF1DF2E87AACB47E02A84ED02D36F7CB5834206E7(NULL);
				NullCheck(L_15);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
				L_16 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_15, NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
				L_17 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_16, NULL);
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_18;
				L_18 = CameraCache_get_Main_mC37E77C91369434A080ED4B3EDBE4F0DA7041910(NULL);
				NullCheck(L_18);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
				L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
				NullCheck(L_19);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
				L_20 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_19, NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
				L_21 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_17, L_20, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = __this->___smoothedMoveDelta_4;
				float L_23 = ___moveSpeed3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
				L_24 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_22, L_23, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
				L_25 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_21, L_24, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
				L_26 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_14, L_25, NULL);
				*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_13 = L_26;
				// simulatedHmdState.devicePosition = simulatedHmdState.centerEyePosition;
				XRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F* L_27 = (&__this->___simulatedHmdState_1);
				XRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F* L_28 = (&__this->___simulatedHmdState_1);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = L_28->___centerEyePosition_4;
				L_27->___devicePosition_8 = L_29;
				// cameraRotation += rotationDelta * rotationSensitivity;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = __this->___cameraRotation_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = ___rotationDelta1;
				float L_32 = ___rotationSensitivity4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
				L_33 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_31, L_32, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
				L_34 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_30, L_33, NULL);
				__this->___cameraRotation_3 = L_34;
				// simulatedHmdState.centerEyeRotation = Quaternion.Euler(cameraRotation);
				XRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F* L_35 = (&__this->___simulatedHmdState_1);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = __this->___cameraRotation_3;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_37;
				L_37 = Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline(L_36, NULL);
				L_35->___centerEyeRotation_5 = L_37;
				// simulatedHmdState.deviceRotation = simulatedHmdState.centerEyeRotation;
				XRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F* L_38 = (&__this->___simulatedHmdState_1);
				XRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F* L_39 = (&__this->___simulatedHmdState_1);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = L_39->___centerEyeRotation_5;
				L_38->___deviceRotation_9 = L_40;
				// InputState.Change(simulatedHmd, simulatedHmdState);
				XRSimulatedHMD_t7679B3251840703ACD265307EDB951D185079790* L_41 = __this->___simulatedHmd_0;
				XRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F L_42 = __this->___simulatedHmdState_1;
				il2cpp_codegen_initobj((&V_2), sizeof(InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0));
				InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 L_43 = V_2;
				InputState_Change_TisXRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F_mDFF89C2BB2B6686A84CFA2BDAD4B0C1852F58F20(L_41, L_42, 0, L_43, InputState_Change_TisXRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F_mDFF89C2BB2B6686A84CFA2BDAD4B0C1852F58F20_RuntimeMethod_var);
				// }
				goto IL_012b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_012b:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedCamera::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedCamera__cctor_mAC47BEDF268B2E16B071E8FC61F1D4E339583B30 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimulatedCamera_tDD65CFCB2C021ED5723B0D5118897FDED2C5EDB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1AB5646F9CD7F257EE4AE1179461434E713109F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdatePerfMarker =
		//     new ProfilerMarker("[MRTK] SimulatedCamera.Update");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_0), _stringLiteralB1AB5646F9CD7F257EE4AE1179461434E713109F, /*hidden argument*/NULL);
		((SimulatedCamera_tDD65CFCB2C021ED5723B0D5118897FDED2C5EDB5_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedCamera_tDD65CFCB2C021ED5723B0D5118897FDED2C5EDB5_il2cpp_TypeInfo_var))->___UpdatePerfMarker_5 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.InputSystem.Controls.Vector3Control Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedController::get_PointerPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* MRTKSimulatedController_get_PointerPosition_mE4296B98E6C5CCF1E789AE067E228AE1D0244BDD (MRTKSimulatedController_tBE8AB611B95B22BE5DD7115B4AFDE3020D7A0100* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3Control PointerPosition { get; private set; }
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_0 = __this->___U3CPointerPositionU3Ek__BackingField_60;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedController::set_PointerPosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKSimulatedController_set_PointerPosition_mA54541958BCED4DEA69A08CA0126E90DEF6C31CE (MRTKSimulatedController_tBE8AB611B95B22BE5DD7115B4AFDE3020D7A0100* __this, Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3Control PointerPosition { get; private set; }
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_0 = ___value0;
		__this->___U3CPointerPositionU3Ek__BackingField_60 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPointerPositionU3Ek__BackingField_60), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.QuaternionControl Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedController::get_PointerRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* MRTKSimulatedController_get_PointerRotation_m8E773E49FD7FF798D78B9FD045BB8B3BAECF65BC (MRTKSimulatedController_tBE8AB611B95B22BE5DD7115B4AFDE3020D7A0100* __this, const RuntimeMethod* method) 
{
	{
		// public QuaternionControl PointerRotation { get; private set; }
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_0 = __this->___U3CPointerRotationU3Ek__BackingField_61;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedController::set_PointerRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKSimulatedController_set_PointerRotation_m042BD059317F8763C54E4B52F19F0DD4D54DE98E (MRTKSimulatedController_tBE8AB611B95B22BE5DD7115B4AFDE3020D7A0100* __this, QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___value0, const RuntimeMethod* method) 
{
	{
		// public QuaternionControl PointerRotation { get; private set; }
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_0 = ___value0;
		__this->___U3CPointerRotationU3Ek__BackingField_61 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPointerRotationU3Ek__BackingField_61), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedController::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKSimulatedController_FinishSetup_m3EF1F6CEDACDB372A94D9F82FB37A828C201A96D (MRTKSimulatedController_tBE8AB611B95B22BE5DD7115B4AFDE3020D7A0100* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00435861D6D058D74B680B29B0E3A2FBAFB3FB5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EB285741C33824C27024778C8BEE281153B4786);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.FinishSetup();
		XRSimulatedController_FinishSetup_mC4F39D2415258871BDC77C81A34846D3D2BCB60C(__this, NULL);
		// PointerPosition = GetChildControl<Vector3Control>(nameof(PointerPosition));
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_0;
		L_0 = InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418(__this, _stringLiteral6EB285741C33824C27024778C8BEE281153B4786, InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418_RuntimeMethod_var);
		MRTKSimulatedController_set_PointerPosition_mA54541958BCED4DEA69A08CA0126E90DEF6C31CE_inline(__this, L_0, NULL);
		// PointerRotation = GetChildControl<QuaternionControl>(nameof(PointerRotation));
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_1;
		L_1 = InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4(__this, _stringLiteral00435861D6D058D74B680B29B0E3A2FBAFB3FB5A, InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4_RuntimeMethod_var);
		MRTKSimulatedController_set_PointerRotation_m042BD059317F8763C54E4B52F19F0DD4D54DE98E_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.MRTKSimulatedController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKSimulatedController__ctor_m7FAB7B3C6347976325257184C4BC2ECEDA84F33C (MRTKSimulatedController_tBE8AB611B95B22BE5DD7115B4AFDE3020D7A0100* __this, const RuntimeMethod* method) 
{
	{
		XRSimulatedController__ctor_m3FD0B01E3EAF634756117453A5630363F71A5A28(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::get_HandSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandsAggregatorSubsystem_t2294604ECCC3071CADA69D1B9F999DC6936948CD* SimulatedController_get_HandSubsystem_m7B41C84D0D6E3C1B412EBF968E949C48E3CEDFD6 (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandsUtils_t26FAAE4299E16DC7420D7EE44E1CACC830607ED7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandsAggregatorSubsystem_t2294604ECCC3071CADA69D1B9F999DC6936948CD* V_0 = NULL;
	HandsAggregatorSubsystem_t2294604ECCC3071CADA69D1B9F999DC6936948CD* G_B2_0 = NULL;
	HandsAggregatorSubsystem_t2294604ECCC3071CADA69D1B9F999DC6936948CD* G_B1_0 = NULL;
	{
		// private HandsAggregatorSubsystem HandSubsystem => handSubsystem ??= HandsUtils.GetSubsystem();
		HandsAggregatorSubsystem_t2294604ECCC3071CADA69D1B9F999DC6936948CD* L_0 = __this->___handSubsystem_3;
		HandsAggregatorSubsystem_t2294604ECCC3071CADA69D1B9F999DC6936948CD* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(HandsUtils_t26FAAE4299E16DC7420D7EE44E1CACC830607ED7_il2cpp_TypeInfo_var);
		HandsAggregatorSubsystem_t2294604ECCC3071CADA69D1B9F999DC6936948CD* L_2;
		L_2 = HandsUtils_GetSubsystem_mD1EBEBDEE2F6F31E397F7232E7682F0491B8390E(NULL);
		HandsAggregatorSubsystem_t2294604ECCC3071CADA69D1B9F999DC6936948CD* L_3 = L_2;
		V_0 = L_3;
		__this->___handSubsystem_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handSubsystem_3), (void*)L_3);
		HandsAggregatorSubsystem_t2294604ECCC3071CADA69D1B9F999DC6936948CD* L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_0018:
	{
		return G_B2_0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::get_SynthHands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SyntheticHandsSubsystem_t6DEDC4D4EFB67E98325A20493DBB18105FA0AB3E* SimulatedController_get_SynthHands_mA18B3430B4FD1A5BCFEEF456DAF3A044ADE690EC (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_GetFirstRunningSubsystem_TisSyntheticHandsSubsystem_t6DEDC4D4EFB67E98325A20493DBB18105FA0AB3E_mA307BD25771198563D973B2F71CA0C4E21E93C91_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SyntheticHandsSubsystem_t6DEDC4D4EFB67E98325A20493DBB18105FA0AB3E* V_0 = NULL;
	SyntheticHandsSubsystem_t6DEDC4D4EFB67E98325A20493DBB18105FA0AB3E* G_B2_0 = NULL;
	SyntheticHandsSubsystem_t6DEDC4D4EFB67E98325A20493DBB18105FA0AB3E* G_B1_0 = NULL;
	{
		// synthHandsSubsystem ??= XRSubsystemHelpers.GetFirstRunningSubsystem<SyntheticHandsSubsystem>();
		SyntheticHandsSubsystem_t6DEDC4D4EFB67E98325A20493DBB18105FA0AB3E* L_0 = __this->___synthHandsSubsystem_4;
		SyntheticHandsSubsystem_t6DEDC4D4EFB67E98325A20493DBB18105FA0AB3E* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
	}
	{
		SyntheticHandsSubsystem_t6DEDC4D4EFB67E98325A20493DBB18105FA0AB3E* L_2;
		L_2 = XRSubsystemHelpers_GetFirstRunningSubsystem_TisSyntheticHandsSubsystem_t6DEDC4D4EFB67E98325A20493DBB18105FA0AB3E_mA307BD25771198563D973B2F71CA0C4E21E93C91(XRSubsystemHelpers_GetFirstRunningSubsystem_TisSyntheticHandsSubsystem_t6DEDC4D4EFB67E98325A20493DBB18105FA0AB3E_mA307BD25771198563D973B2F71CA0C4E21E93C91_RuntimeMethod_var);
		SyntheticHandsSubsystem_t6DEDC4D4EFB67E98325A20493DBB18105FA0AB3E* L_3 = L_2;
		V_0 = L_3;
		__this->___synthHandsSubsystem_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___synthHandsSubsystem_4), (void*)L_3);
		SyntheticHandsSubsystem_t6DEDC4D4EFB67E98325A20493DBB18105FA0AB3E* L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_0018:
	{
		return G_B2_0;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::get_SimulatedInputPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SimulatedController_get_SimulatedInputPosition_mCB0FB258133F3EEE5B8FC02DC8950C2364EB79FA (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 SimulatedInputPosition { get; private set; } = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CSimulatedInputPositionU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::set_SimulatedInputPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedController_set_SimulatedInputPosition_mA79699A70D3D3AD3799BDBC036AC99530419F610 (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 SimulatedInputPosition { get; private set; } = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CSimulatedInputPositionU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::get_SimulatedInputRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SimulatedController_get_SimulatedInputRotation_m07F06D7114979F81E1E9FCDC6CF0A1B64948F7ED (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, const RuntimeMethod* method) 
{
	{
		// public Quaternion SimulatedInputRotation { get; private set; } = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___U3CSimulatedInputRotationU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::set_SimulatedInputRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedController_set_SimulatedInputRotation_m6CA56134DC29C54504D5FAE7187AFF149905A1EC (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) 
{
	{
		// public Quaternion SimulatedInputRotation { get; private set; } = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___value0;
		__this->___U3CSimulatedInputRotationU3Ek__BackingField_6 = L_0;
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::get_WorldPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SimulatedController_get_WorldPosition_m4A8B742CC61D286E000603412B66DAAF67865052 (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 WorldPosition => PlayspaceUtilities.ReferenceTransform.TransformPoint(simulatedControllerState.devicePosition);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = PlayspaceUtilities_get_ReferenceTransform_mF1DF2E87AACB47E02A84ED02D36F7CB5834206E7(NULL);
		MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243* L_1 = (&__this->___simulatedControllerState_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1->___devicePosition_8;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_0, L_2, NULL);
		return L_3;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::get_WorldRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SimulatedController_get_WorldRotation_m1A41CE51D3B57C3E5B0C2BA5A0C8349A5CE5378A (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, const RuntimeMethod* method) 
{
	{
		// public Quaternion WorldRotation => PlayspaceUtilities.ReferenceTransform.rotation * simulatedControllerState.deviceRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = PlayspaceUtilities_get_ReferenceTransform_mF1DF2E87AACB47E02A84ED02D36F7CB5834206E7(NULL);
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243* L_2 = (&__this->___simulatedControllerState_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = L_2->___deviceRotation_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_1, L_3, NULL);
		return L_4;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::get_PokePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SimulatedController_get_PokePosition_m53FFA21CF8928D3061ED0063F61695E64EFD4AC0 (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, const RuntimeMethod* method) 
{
	HandJointPose_t82E47711F81612C8E37DC59CAC62E6557CC512A3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t G_B2_0 = 0;
	HandsAggregatorSubsystem_t2294604ECCC3071CADA69D1B9F999DC6936948CD* G_B2_1 = NULL;
	int32_t G_B1_0 = 0;
	HandsAggregatorSubsystem_t2294604ECCC3071CADA69D1B9F999DC6936948CD* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	HandsAggregatorSubsystem_t2294604ECCC3071CADA69D1B9F999DC6936948CD* G_B3_2 = NULL;
	{
		// if (HandSubsystem.TryGetJoint(TrackedHandJoint.IndexTip,
		//                               Handedness == Handedness.Left ? XRNode.LeftHand : XRNode.RightHand,
		//                               out HandJointPose indexPose))
		HandsAggregatorSubsystem_t2294604ECCC3071CADA69D1B9F999DC6936948CD* L_0;
		L_0 = SimulatedController_get_HandSubsystem_m7B41C84D0D6E3C1B412EBF968E949C48E3CEDFD6(__this, NULL);
		int32_t L_1;
		L_1 = SimulatedController_get_Handedness_m68D073A06BFF58BEB8C9822544006CBD1F47F2F3_inline(__this, NULL);
		G_B1_0 = ((int32_t)11);
		G_B1_1 = L_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			G_B2_0 = ((int32_t)11);
			G_B2_1 = L_0;
			goto IL_0014;
		}
	}
	{
		G_B3_0 = 5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 4;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0015:
	{
		NullCheck(G_B3_2);
		bool L_2;
		L_2 = HandsAggregatorSubsystem_TryGetJoint_m024003ECA9B870E18BABAE9EBBD43A96752715B0(G_B3_2, G_B3_1, G_B3_0, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// return indexPose.Position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = HandJointPose_get_Position_mACE7763C8A869495C9D27EC0C7E09EFE56A371A6((&V_0), NULL);
		return L_3;
	}

IL_0026:
	{
		// return simulatedControllerState.pointerPosition;
		MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243* L_4 = (&__this->___simulatedControllerState_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4->___pointerPosition_10;
		return L_5;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::get_GrabPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SimulatedController_get_GrabPosition_mA02B7E4B7426638E1E4B72C8AEB129BC751D8681 (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, const RuntimeMethod* method) 
{
	HandJointPose_t82E47711F81612C8E37DC59CAC62E6557CC512A3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	HandsAggregatorSubsystem_t2294604ECCC3071CADA69D1B9F999DC6936948CD* G_B2_0 = NULL;
	HandsAggregatorSubsystem_t2294604ECCC3071CADA69D1B9F999DC6936948CD* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	HandsAggregatorSubsystem_t2294604ECCC3071CADA69D1B9F999DC6936948CD* G_B3_1 = NULL;
	{
		// if (HandSubsystem.TryGetPinchingPoint(Handedness == Handedness.Left ? XRNode.LeftHand : XRNode.RightHand,
		//                                       out HandJointPose grabPose))
		HandsAggregatorSubsystem_t2294604ECCC3071CADA69D1B9F999DC6936948CD* L_0;
		L_0 = SimulatedController_get_HandSubsystem_m7B41C84D0D6E3C1B412EBF968E949C48E3CEDFD6(__this, NULL);
		int32_t L_1;
		L_1 = SimulatedController_get_Handedness_m68D073A06BFF58BEB8C9822544006CBD1F47F2F3_inline(__this, NULL);
		G_B1_0 = L_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			G_B2_0 = L_0;
			goto IL_0012;
		}
	}
	{
		G_B3_0 = 5;
		G_B3_1 = G_B1_0;
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 4;
		G_B3_1 = G_B2_0;
	}

IL_0013:
	{
		NullCheck(G_B3_1);
		bool L_2;
		L_2 = HandsAggregatorSubsystem_TryGetPinchingPoint_mCE5DFC45C02AC7E78757DFB99119F0368D2A4E0E(G_B3_1, G_B3_0, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// return grabPose.Position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = HandJointPose_get_Position_mACE7763C8A869495C9D27EC0C7E09EFE56A371A6((&V_0), NULL);
		return L_3;
	}

IL_0024:
	{
		// return simulatedControllerState.pointerPosition;
		MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243* L_4 = (&__this->___simulatedControllerState_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4->___pointerPosition_10;
		return L_5;
	}
}
// Microsoft.MixedReality.Toolkit.Handedness Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::get_Handedness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimulatedController_get_Handedness_m68D073A06BFF58BEB8C9822544006CBD1F47F2F3 (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, const RuntimeMethod* method) 
{
	{
		// public Handedness Handedness { get; private set; }
		int32_t L_0 = __this->___U3CHandednessU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::set_Handedness(Microsoft.MixedReality.Toolkit.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedController_set_Handedness_m88D8188468218D53CEE7EDA12C4BD1D08213BB21 (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public Handedness Handedness { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CHandednessU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::.ctor(Microsoft.MixedReality.Toolkit.Handedness,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedController__ctor_m9DBC659A255F5DE00CD405BF83D7ECBC7198C4D7 (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, int32_t ___handedness0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initialRelativePosition1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandRay_t5EA650FBE8E055EC84C362996DE079834E52486E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_AddDevice_TisMRTKSimulatedController_tBE8AB611B95B22BE5DD7115B4AFDE3020D7A0100_m209F67BCBCEA7C47FACDFAFA5376A785A390F65C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5658212A0372EFC0BBD629918C363B3F19AA143F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly IHandRay handRay = new HandRay();
		HandRay_t5EA650FBE8E055EC84C362996DE079834E52486E* L_0 = (HandRay_t5EA650FBE8E055EC84C362996DE079834E52486E*)il2cpp_codegen_object_new(HandRay_t5EA650FBE8E055EC84C362996DE079834E52486E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HandRay__ctor_m54766F30B7C9716B1E94504B7A4AFC2CE16FEBD1(L_0, NULL);
		__this->___handRay_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handRay_1), (void*)L_0);
		// public Vector3 SimulatedInputPosition { get; private set; } = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___U3CSimulatedInputPositionU3Ek__BackingField_5 = L_1;
		// public Quaternion SimulatedInputRotation { get; private set; } = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		__this->___U3CSimulatedInputRotationU3Ek__BackingField_6 = L_2;
		// private Vector3 smoothedMoveDelta = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___smoothedMoveDelta_11 = L_3;
		// public SimulatedController(
		//     Handedness handedness,
		//     Vector3 initialRelativePosition)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Handedness = handedness;
		int32_t L_4 = ___handedness0;
		SimulatedController_set_Handedness_m88D8188468218D53CEE7EDA12C4BD1D08213BB21_inline(__this, L_4, NULL);
		// simulatedController = InputSystem.AddDevice<MRTKSimulatedController>();
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		MRTKSimulatedController_tBE8AB611B95B22BE5DD7115B4AFDE3020D7A0100* L_5;
		L_5 = InputSystem_AddDevice_TisMRTKSimulatedController_tBE8AB611B95B22BE5DD7115B4AFDE3020D7A0100_m209F67BCBCEA7C47FACDFAFA5376A785A390F65C((String_t*)NULL, InputSystem_AddDevice_TisMRTKSimulatedController_tBE8AB611B95B22BE5DD7115B4AFDE3020D7A0100_m209F67BCBCEA7C47FACDFAFA5376A785A390F65C_RuntimeMethod_var);
		__this->___simulatedController_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___simulatedController_0), (void*)L_5);
		// if (simulatedController == null)
		MRTKSimulatedController_tBE8AB611B95B22BE5DD7115B4AFDE3020D7A0100* L_6 = __this->___simulatedController_0;
		if (L_6)
		{
			goto IL_0058;
		}
	}
	{
		// Debug.LogError("Failed to create the simulated controller.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral5658212A0372EFC0BBD629918C363B3F19AA143F, NULL);
		// return;
		return;
	}

IL_0058:
	{
		// simulatedControllerState.Reset();
		MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243* L_7 = (&__this->___simulatedControllerState_2);
		MRTKSimulatedControllerState_Reset_m6E4371F6B844F28106AF471954B525DDE66D6DE6(L_7, NULL);
		// SimulatedInputPosition = initialRelativePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___initialRelativePosition1;
		SimulatedController_set_SimulatedInputPosition_mA79699A70D3D3AD3799BDBC036AC99530419F610_inline(__this, L_8, NULL);
		// SetUsage();
		SimulatedController_SetUsage_mAB18D6D232CF68179A453D52AE593DA7A9B43014(__this, NULL);
		// SetRelativePoseWithOffset(
		//     initialRelativePosition,
		//     Quaternion.identity,
		//     Vector3.zero,
		//     ControllerRotationMode.UserControl,
		//     true);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___initialRelativePosition1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		SimulatedController_SetRelativePoseWithOffset_mBF7F88707CF751DB690BD5EB0C89006B5F4AB641(__this, L_9, L_10, L_11, 0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedController_Finalize_m44D20D86C40B00C5A0486C75540276F6D8D212CD (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0008:
			{// begin finally (depth: 1)
				// }
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Dispose();
			SimulatedController_Dispose_m1D33E29BF57A03455CBE58BDF18F496CEE3C7039(__this, NULL);
			goto IL_000f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedController_Dispose_m1D33E29BF57A03455CBE58BDF18F496CEE3C7039 (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((simulatedController != null) && simulatedController.added)
		MRTKSimulatedController_tBE8AB611B95B22BE5DD7115B4AFDE3020D7A0100* L_0 = __this->___simulatedController_0;
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		MRTKSimulatedController_tBE8AB611B95B22BE5DD7115B4AFDE3020D7A0100* L_1 = __this->___simulatedController_0;
		NullCheck(L_1);
		bool L_2;
		L_2 = InputDevice_get_added_m27CF78B0777E142AAF9139ABFD88F67BBAABA15C(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// UnsetUsage();
		SimulatedController_UnsetUsage_mAAC8CCA8B83971DC2AB630084D0122D4E047DA74(__this, NULL);
		// InputSystem.RemoveDevice(simulatedController);
		MRTKSimulatedController_tBE8AB611B95B22BE5DD7115B4AFDE3020D7A0100* L_3 = __this->___simulatedController_0;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_RemoveDevice_m41F154CEBE1EB94090D2980BEA684E58799EA8B3(L_3, NULL);
	}

IL_0026:
	{
		// GC.SuppressFinalize(this);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::ToggleNeutralPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedController_ToggleNeutralPose_mA41CE61C533EA6676D111D29077E7F0CFE85A487 (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handedness_t3871B818901E431A761DF26D8F0D4372912651EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6EBB46D00BB60FC8F09A34060A4FF94C3437F2E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mA46EC6593BFA5F9AAA5FD184D482A6ECF0485D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1980181D26CE11B58F1BB35B21FB5869C7E82FB0);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_tEC8F263BE70D6E8A7019A85EA809A9CFC7448F36 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t G_B5_0 = 0;
	SyntheticHandsSubsystem_t6DEDC4D4EFB67E98325A20493DBB18105FA0AB3E* G_B5_1 = NULL;
	int32_t G_B4_0 = 0;
	SyntheticHandsSubsystem_t6DEDC4D4EFB67E98325A20493DBB18105FA0AB3E* G_B4_1 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	SyntheticHandsSubsystem_t6DEDC4D4EFB67E98325A20493DBB18105FA0AB3E* G_B6_2 = NULL;
	{
		// using (ToggleNeutralPosePerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_il2cpp_TypeInfo_var))->___ToggleNeutralPosePerfMarker_8;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0076:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// XRNode? handNode = Handedness.ToXRNode();
				int32_t L_2;
				L_2 = SimulatedController_get_Handedness_m68D073A06BFF58BEB8C9822544006CBD1F47F2F3_inline(__this, NULL);
				Nullable_1_tEC8F263BE70D6E8A7019A85EA809A9CFC7448F36 L_3;
				L_3 = HandednessExtensions_ToXRNode_m30AFACB24E4DAC09672D1545AE3624C47E9B294E(L_2, NULL);
				V_2 = L_3;
				// if (handNode.HasValue && SynthHands != null)
				bool L_4;
				L_4 = Nullable_1_get_HasValue_m6EBB46D00BB60FC8F09A34060A4FF94C3437F2E2_inline((&V_2), Nullable_1_get_HasValue_m6EBB46D00BB60FC8F09A34060A4FF94C3437F2E2_RuntimeMethod_var);
				if (!L_4)
				{
					goto IL_005a_1;
				}
			}
			{
				SyntheticHandsSubsystem_t6DEDC4D4EFB67E98325A20493DBB18105FA0AB3E* L_5;
				L_5 = SimulatedController_get_SynthHands_mA18B3430B4FD1A5BCFEEF456DAF3A044ADE690EC(__this, NULL);
				if (!L_5)
				{
					goto IL_005a_1;
				}
			}
			{
				// GestureId neutralPose = SynthHands.GetNeutralPose(handNode.Value);
				SyntheticHandsSubsystem_t6DEDC4D4EFB67E98325A20493DBB18105FA0AB3E* L_6;
				L_6 = SimulatedController_get_SynthHands_mA18B3430B4FD1A5BCFEEF456DAF3A044ADE690EC(__this, NULL);
				int32_t L_7;
				L_7 = Nullable_1_get_Value_mA46EC6593BFA5F9AAA5FD184D482A6ECF0485D66((&V_2), Nullable_1_get_Value_mA46EC6593BFA5F9AAA5FD184D482A6ECF0485D66_RuntimeMethod_var);
				NullCheck(L_6);
				int32_t L_8;
				L_8 = SyntheticHandsSubsystem_GetNeutralPose_mF197322B895D104BA9D9E9C1EB52959FEE14FB4A(L_6, L_7, NULL);
				V_3 = L_8;
				// SynthHands.SetNeutralPose(
				//                         handNode.Value,
				//                         (neutralPose == GestureId.Flat) ? GestureId.Open : GestureId.Flat);
				SyntheticHandsSubsystem_t6DEDC4D4EFB67E98325A20493DBB18105FA0AB3E* L_9;
				L_9 = SimulatedController_get_SynthHands_mA18B3430B4FD1A5BCFEEF456DAF3A044ADE690EC(__this, NULL);
				int32_t L_10;
				L_10 = Nullable_1_get_Value_mA46EC6593BFA5F9AAA5FD184D482A6ECF0485D66((&V_2), Nullable_1_get_Value_mA46EC6593BFA5F9AAA5FD184D482A6ECF0485D66_RuntimeMethod_var);
				int32_t L_11 = V_3;
				G_B4_0 = L_10;
				G_B4_1 = L_9;
				if ((((int32_t)L_11) == ((int32_t)1)))
				{
					G_B5_0 = L_10;
					G_B5_1 = L_9;
					goto IL_0052_1;
				}
			}
			{
				G_B6_0 = 1;
				G_B6_1 = G_B4_0;
				G_B6_2 = G_B4_1;
				goto IL_0053_1;
			}

IL_0052_1:
			{
				G_B6_0 = 2;
				G_B6_1 = G_B5_0;
				G_B6_2 = G_B5_1;
			}

IL_0053_1:
			{
				NullCheck(G_B6_2);
				SyntheticHandsSubsystem_SetNeutralPose_mD0F30CD8763DFE36F9F259AC04B0FDDDF9770155(G_B6_2, G_B6_1, G_B6_0, NULL);
				goto IL_0084;
			}

IL_005a_1:
			{
				// Debug.LogError($"Failed to toggle the {Handedness} simulated hand neutral pose.");
				int32_t L_12;
				L_12 = SimulatedController_get_Handedness_m68D073A06BFF58BEB8C9822544006CBD1F47F2F3_inline(__this, NULL);
				int32_t L_13 = L_12;
				RuntimeObject* L_14 = Box(Handedness_t3871B818901E431A761DF26D8F0D4372912651EC_il2cpp_TypeInfo_var, &L_13);
				String_t* L_15;
				L_15 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral1980181D26CE11B58F1BB35B21FB5869C7E82FB0, L_14, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_15, NULL);
				// }
				goto IL_0084;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::UpdateRelative(UnityEngine.Vector3,UnityEngine.Quaternion,Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls,Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerRotationMode,System.Boolean,UnityEngine.Vector3,System.Boolean,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedController_UpdateRelative_m32B5F0853A356345684D8EDB06B74E501796DFA0 (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___moveDelta0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotationDelta1, ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* ___controls2, int32_t ___rotationMode3, bool ___shouldUseRayVector4, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___anchorPosition5, bool ___isMovementSmoothed6, float ___depthSensitivity7, float ___jitterStrength8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* G_B6_2 = NULL;
	float G_B5_0 = 0.0f;
	float G_B5_1 = 0.0f;
	SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* G_B5_2 = NULL;
	float G_B7_0 = 0.0f;
	float G_B7_1 = 0.0f;
	float G_B7_2 = 0.0f;
	SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* G_B7_3 = NULL;
	{
		// using (UpdatePerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_il2cpp_TypeInfo_var))->___UpdatePerfMarker_9;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (simulatedController == null) { return; }
				MRTKSimulatedController_tBE8AB611B95B22BE5DD7115B4AFDE3020D7A0100* L_2 = __this->___simulatedController_0;
				if (L_2)
				{
					goto IL_001b_1;
				}
			}
			{
				// if (simulatedController == null) { return; }
				goto IL_00f8;
			}

IL_001b_1:
			{
				// if (controls.IsTracked)
				ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* L_3 = ___controls2;
				NullCheck(L_3);
				bool L_4;
				L_4 = ControllerControls_get_IsTracked_mD1A58B3426C7E7C676034B5AE61ED4A556D05717_inline(L_3, NULL);
				if (!L_4)
				{
					goto IL_00e1_1;
				}
			}
			{
				// moveDelta.z *= depthSensitivity;
				float* L_5 = (&(&___moveDelta0)->___z_4);
				float* L_6 = L_5;
				float L_7 = *((float*)L_6);
				float L_8 = ___depthSensitivity7;
				*((float*)L_6) = (float)((float)il2cpp_codegen_multiply(L_7, L_8));
				// smoothedMoveDelta = new Vector3(moveDelta.x, moveDelta.y,
				//     isMovementSmoothed ? Smoothing.SmoothTo(
				//     smoothedMoveDelta.z,
				//     moveDelta.z,
				//     MoveSmoothingTime, Time.fixedDeltaTime) : moveDelta.z);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___moveDelta0;
				float L_10 = L_9.___x_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___moveDelta0;
				float L_12 = L_11.___y_3;
				bool L_13 = ___isMovementSmoothed6;
				G_B5_0 = L_12;
				G_B5_1 = L_10;
				G_B5_2 = __this;
				if (L_13)
				{
					G_B6_0 = L_12;
					G_B6_1 = L_10;
					G_B6_2 = __this;
					goto IL_004c_1;
				}
			}
			{
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___moveDelta0;
				float L_15 = L_14.___z_4;
				G_B7_0 = L_15;
				G_B7_1 = G_B5_0;
				G_B7_2 = G_B5_1;
				G_B7_3 = G_B5_2;
				goto IL_006c_1;
			}

IL_004c_1:
			{
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = (&__this->___smoothedMoveDelta_11);
				float L_17 = L_16->___z_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___moveDelta0;
				float L_19 = L_18.___z_4;
				float L_20;
				L_20 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
				float L_21;
				L_21 = Smoothing_SmoothTo_m01FDF561317D0E9562ABA70A0B93F0D50E54AF61(L_17, L_19, (0.0199999996f), L_20, NULL);
				G_B7_0 = L_21;
				G_B7_1 = G_B6_0;
				G_B7_2 = G_B6_1;
				G_B7_3 = G_B6_2;
			}

IL_006c_1:
			{
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
				memset((&L_22), 0, sizeof(L_22));
				Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), G_B7_2, G_B7_1, G_B7_0, /*hidden argument*/NULL);
				NullCheck(G_B7_3);
				G_B7_3->___smoothedMoveDelta_11 = L_22;
				// Vector3 jitter = jitterStrength * jitterSeverity * UnityEngine.Random.insideUnitSphere;
				float L_23 = ___jitterStrength8;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
				L_24 = Random_get_insideUnitSphere_mDC65508F8B735E93612D4A1D482792B5DA4DC26C(NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
				L_25 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(((float)il2cpp_codegen_multiply(L_23, (0.00200000009f))), L_24, NULL);
				V_2 = L_25;
				// SimulatedInputPosition += smoothedMoveDelta + jitter;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
				L_26 = SimulatedController_get_SimulatedInputPosition_mCB0FB258133F3EEE5B8FC02DC8950C2364EB79FA_inline(__this, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = __this->___smoothedMoveDelta_11;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
				L_29 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_27, L_28, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
				L_30 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_26, L_29, NULL);
				SimulatedController_set_SimulatedInputPosition_mA79699A70D3D3AD3799BDBC036AC99530419F610_inline(__this, L_30, NULL);
				// if (rotationMode == ControllerRotationMode.UserControl)
				int32_t L_31 = ___rotationMode3;
				if (L_31)
				{
					goto IL_00bc_1;
				}
			}
			{
				// SimulatedInputRotation *= rotationDelta;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32;
				L_32 = SimulatedController_get_SimulatedInputRotation_m07F06D7114979F81E1E9FCDC6CF0A1B64948F7ED_inline(__this, NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33 = ___rotationDelta1;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34;
				L_34 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_32, L_33, NULL);
				SimulatedController_set_SimulatedInputRotation_m6CA56134DC29C54504D5FAE7187AFF149905A1EC_inline(__this, L_34, NULL);
			}

IL_00bc_1:
			{
				// Vector3 offset = WorldPosition - anchorPosition;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
				L_35 = SimulatedController_get_WorldPosition_m4A8B742CC61D286E000603412B66DAAF67865052(__this, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = ___anchorPosition5;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
				L_37 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_35, L_36, NULL);
				V_3 = L_37;
				// SetRelativePoseWithOffset(SimulatedInputPosition, SimulatedInputRotation, offset, rotationMode, shouldUseRayVector);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
				L_38 = SimulatedController_get_SimulatedInputPosition_mCB0FB258133F3EEE5B8FC02DC8950C2364EB79FA_inline(__this, NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_39;
				L_39 = SimulatedController_get_SimulatedInputRotation_m07F06D7114979F81E1E9FCDC6CF0A1B64948F7ED_inline(__this, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_3;
				int32_t L_41 = ___rotationMode3;
				bool L_42 = ___shouldUseRayVector4;
				SimulatedController_SetRelativePoseWithOffset_mBF7F88707CF751DB690BD5EB0C89006B5F4AB641(__this, L_38, L_39, L_40, L_41, L_42, NULL);
			}

IL_00e1_1:
			{
				// ApplyState(controls);
				ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* L_43 = ___controls2;
				SimulatedController_ApplyState_mF8DC22C4A88C2A0E3A26EF06FF8336F0B2926923(__this, L_43, NULL);
				// }
				goto IL_00f8;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f8:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::UpdateControls(Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedController_UpdateControls_m3CEC2D8CA44974F8A87EDCE98913D1604148F4EE (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* ___controls0, const RuntimeMethod* method) 
{
	{
		// if (simulatedController == null) { return; }
		MRTKSimulatedController_tBE8AB611B95B22BE5DD7115B4AFDE3020D7A0100* L_0 = __this->___simulatedController_0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (simulatedController == null) { return; }
		return;
	}

IL_0009:
	{
		// ApplyState(controls);
		ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* L_1 = ___controls0;
		SimulatedController_ApplyState_mF8DC22C4A88C2A0E3A26EF06FF8336F0B2926923(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::UpdateAbsolute(UnityEngine.Vector3,UnityEngine.Quaternion,Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls,Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerRotationMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedController_UpdateAbsolute_mCD0EE24662F64C4F846BE6076F34F9D119675C35 (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* ___controls2, int32_t ___rotationMode3, bool ___shouldUseRayVector4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// using (UpdateAbsolutePerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_il2cpp_TypeInfo_var))->___UpdateAbsolutePerfMarker_12;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (simulatedController == null) { return; }
				MRTKSimulatedController_tBE8AB611B95B22BE5DD7115B4AFDE3020D7A0100* L_2 = __this->___simulatedController_0;
				if (L_2)
				{
					goto IL_0018_1;
				}
			}
			{
				// if (simulatedController == null) { return; }
				goto IL_003b;
			}

IL_0018_1:
			{
				// SetWorldPose(position, rotation, rotationMode, shouldUseRayVector);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___position0;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___rotation1;
				int32_t L_5 = ___rotationMode3;
				bool L_6 = ___shouldUseRayVector4;
				SimulatedController_SetWorldPose_mBDF6D511F1334020DD9334676E9C109BED8EBF24(__this, L_3, L_4, L_5, L_6, NULL);
				// ApplyState(controls);
				ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* L_7 = ___controls2;
				SimulatedController_ApplyState_mF8DC22C4A88C2A0E3A26EF06FF8336F0B2926923(__this, L_7, NULL);
				// }
				goto IL_003b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::UpdateAbsoluteWithPokeAnchor(UnityEngine.Vector3,UnityEngine.Quaternion,Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls,Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerRotationMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedController_UpdateAbsoluteWithPokeAnchor_m8F00435A05DABAB4E75B5BE33F9357D91315490B (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* ___controls2, int32_t ___rotationMode3, bool ___shouldUseRayVector4, const RuntimeMethod* method) 
{
	{
		// UpdateAbsoluteWithAnchor(position, rotation, controls, rotationMode, shouldUseRayVector, PokePosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___position0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___rotation1;
		ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* L_2 = ___controls2;
		int32_t L_3 = ___rotationMode3;
		bool L_4 = ___shouldUseRayVector4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = SimulatedController_get_PokePosition_m53FFA21CF8928D3061ED0063F61695E64EFD4AC0(__this, NULL);
		SimulatedController_UpdateAbsoluteWithAnchor_m0D24D7CDF6BFECF8942E3BD157F5B37308E9DF58(__this, L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::UpdateAbsoluteWithGrabAnchor(UnityEngine.Vector3,UnityEngine.Quaternion,Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls,Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerRotationMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedController_UpdateAbsoluteWithGrabAnchor_mC865F1F893748792629A3C2F4BA75961A7F724B0 (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* ___controls2, int32_t ___rotationMode3, bool ___shouldUseRayVector4, const RuntimeMethod* method) 
{
	{
		// UpdateAbsoluteWithAnchor(position, rotation, controls, rotationMode, shouldUseRayVector, GrabPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___position0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___rotation1;
		ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* L_2 = ___controls2;
		int32_t L_3 = ___rotationMode3;
		bool L_4 = ___shouldUseRayVector4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = SimulatedController_get_GrabPosition_mA02B7E4B7426638E1E4B72C8AEB129BC751D8681(__this, NULL);
		SimulatedController_UpdateAbsoluteWithAnchor_m0D24D7CDF6BFECF8942E3BD157F5B37308E9DF58(__this, L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::UpdateAbsoluteWithAnchor(UnityEngine.Vector3,UnityEngine.Quaternion,Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls,Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerRotationMode,System.Boolean,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedController_UpdateAbsoluteWithAnchor_m0D24D7CDF6BFECF8942E3BD157F5B37308E9DF58 (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* ___controls2, int32_t ___rotationMode3, bool ___shouldUseRayVector4, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___anchorPoint5, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 handToAnchorDelta = (anchorPoint - WorldPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___anchorPoint5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = SimulatedController_get_WorldPosition_m4A8B742CC61D286E000603412B66DAAF67865052(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// Vector3 adjustedWorldPos = position - handToAnchorDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___position0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_3, L_4, NULL);
		V_1 = L_5;
		// UpdateAbsolute(adjustedWorldPos, rotation, controls, rotationMode, shouldUseRayVector);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = ___rotation1;
		ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* L_8 = ___controls2;
		int32_t L_9 = ___rotationMode3;
		bool L_10 = ___shouldUseRayVector4;
		SimulatedController_UpdateAbsolute_mCD0EE24662F64C4F846BE6076F34F9D119675C35(__this, L_6, L_7, L_8, L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::ApplyState(Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedController_ApplyState_mF8DC22C4A88C2A0E3A26EF06FF8336F0B2926923 (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* ___controls0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputState_Change_TisMRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243_m0CBFA3E5C17E4BF35603577C6E10BCDB39720CC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// using (ApplyStatePerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_il2cpp_TypeInfo_var))->___ApplyStatePerfMarker_14;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0095:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// simulatedControllerState.isTracked = controls.IsTracked;
			MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243* L_2 = (&__this->___simulatedControllerState_2);
			ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* L_3 = ___controls0;
			NullCheck(L_3);
			bool L_4;
			L_4 = ControllerControls_get_IsTracked_mD1A58B3426C7E7C676034B5AE61ED4A556D05717_inline(L_3, NULL);
			L_2->___isTracked_7 = L_4;
			// simulatedControllerState.trackingState = (int)(controls.TrackingState);
			MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243* L_5 = (&__this->___simulatedControllerState_2);
			ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* L_6 = ___controls0;
			NullCheck(L_6);
			uint32_t L_7;
			L_7 = ControllerControls_get_TrackingState_mA09795EE969CE8F9110FBFD76FF5F52C0485D5D4_inline(L_6, NULL);
			L_5->___trackingState_6 = L_7;
			// simulatedControllerState.trigger = controls.TriggerAxis;
			MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243* L_8 = (&__this->___simulatedControllerState_2);
			ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* L_9 = ___controls0;
			NullCheck(L_9);
			float L_10;
			L_10 = ControllerControls_get_TriggerAxis_mAA83674A37B52741586366DFDF20DCCA4A20C723_inline(L_9, NULL);
			L_8->___trigger_1 = L_10;
			// simulatedControllerState.grip = controls.GripAxis;
			MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243* L_11 = (&__this->___simulatedControllerState_2);
			ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* L_12 = ___controls0;
			NullCheck(L_12);
			float L_13;
			L_13 = ControllerControls_get_GripAxis_m88801EF3C9A9EB18C81921B8199E34F1464C3ABC_inline(L_12, NULL);
			L_11->___grip_2 = L_13;
			// simulatedControllerState.WithButton(ControllerButton.TriggerButton, controls.TriggerButton);
			MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243* L_14 = (&__this->___simulatedControllerState_2);
			ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* L_15 = ___controls0;
			NullCheck(L_15);
			bool L_16;
			L_16 = ControllerControls_get_TriggerButton_mF6DED59D59E2112AFE4F409EA76EA79683664379_inline(L_15, NULL);
			MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243 L_17;
			L_17 = MRTKSimulatedControllerState_WithButton_mF850B1FB276940CCEBF79B12397E5FB1E26624BE(L_14, 5, L_16, NULL);
			// simulatedControllerState.WithButton(ControllerButton.GripButton, controls.GripButton);
			MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243* L_18 = (&__this->___simulatedControllerState_2);
			ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* L_19 = ___controls0;
			NullCheck(L_19);
			bool L_20;
			L_20 = ControllerControls_get_GripButton_mDCB15538E263CB04D75CDD1080A003D1305B1442_inline(L_19, NULL);
			MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243 L_21;
			L_21 = MRTKSimulatedControllerState_WithButton_mF850B1FB276940CCEBF79B12397E5FB1E26624BE(L_18, 4, L_20, NULL);
			// InputState.Change(simulatedController, simulatedControllerState);
			MRTKSimulatedController_tBE8AB611B95B22BE5DD7115B4AFDE3020D7A0100* L_22 = __this->___simulatedController_0;
			MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243 L_23 = __this->___simulatedControllerState_2;
			il2cpp_codegen_initobj((&V_2), sizeof(InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0));
			InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 L_24 = V_2;
			InputState_Change_TisMRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243_m0CBFA3E5C17E4BF35603577C6E10BCDB39720CC0(L_22, L_23, 0, L_24, InputState_Change_TisMRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243_m0CBFA3E5C17E4BF35603577C6E10BCDB39720CC0_RuntimeMethod_var);
			// }
			goto IL_00a3;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a3:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::SetRelativePoseWithOffset(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerRotationMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedController_SetRelativePoseWithOffset_mBF7F88707CF751DB690BD5EB0C89006B5F4AB641 (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset2, int32_t ___rotationMode3, bool ___shouldUseRayVector4, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 worldPosition = CameraCache.Main.transform.TransformPoint(position) + offset;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = CameraCache_get_Main_mC37E77C91369434A080ED4B3EDBE4F0DA7041910(NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___position0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___offset2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_3, L_4, NULL);
		V_0 = L_5;
		// Quaternion worldRotation = CameraCache.Main.transform.rotation * rotation;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6;
		L_6 = CameraCache_get_Main_mC37E77C91369434A080ED4B3EDBE4F0DA7041910(NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_7);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_7, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = ___rotation1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_8, L_9, NULL);
		V_1 = L_10;
		// SetWorldPose(worldPosition, worldRotation, rotationMode, shouldUseRayVector);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = V_1;
		int32_t L_13 = ___rotationMode3;
		bool L_14 = ___shouldUseRayVector4;
		SimulatedController_SetWorldPose_mBDF6D511F1334020DD9334676E9C109BED8EBF24(__this, L_11, L_12, L_13, L_14, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::SetWorldPose(UnityEngine.Vector3,UnityEngine.Quaternion,Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerRotationMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedController_SetWorldPose_mBDF6D511F1334020DD9334676E9C109BED8EBF24 (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, int32_t ___rotationMode2, bool ___shouldUseRayVector3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// using (SetWorldPosePerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_il2cpp_TypeInfo_var))->___SetWorldPosePerfMarker_15;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003d:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Vector3 rigLocalPosition = PlayspaceUtilities.ReferenceTransform.InverseTransformPoint(position);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
			L_2 = PlayspaceUtilities_get_ReferenceTransform_mF1DF2E87AACB47E02A84ED02D36F7CB5834206E7(NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___position0;
			NullCheck(L_2);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
			L_4 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_2, L_3, NULL);
			V_2 = L_4;
			// Quaternion rigLocalRotation = Quaternion.Inverse(PlayspaceUtilities.ReferenceTransform.rotation) * rotation;
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
			L_5 = PlayspaceUtilities_get_ReferenceTransform_mF1DF2E87AACB47E02A84ED02D36F7CB5834206E7(NULL);
			NullCheck(L_5);
			Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
			L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
			Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
			L_7 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_6, NULL);
			Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___rotation1;
			Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
			L_9 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_7, L_8, NULL);
			V_3 = L_9;
			// SetRigLocalPose(rigLocalPosition, rigLocalRotation, rotationMode, shouldUseRayVector);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_2;
			Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = V_3;
			int32_t L_12 = ___rotationMode2;
			bool L_13 = ___shouldUseRayVector3;
			SimulatedController_SetRigLocalPose_m5567DB5646B67DD7E532D21CF922D91624E053B9(__this, L_10, L_11, L_12, L_13, NULL);
			// }
			goto IL_004b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::SetRigLocalPose(UnityEngine.Vector3,UnityEngine.Quaternion,Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerRotationMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedController_SetRigLocalPose_m5567DB5646B67DD7E532D21CF922D91624E053B9 (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, int32_t ___rotationMode2, bool ___shouldUseRayVector3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandRay_tB94975E01D485AE4D856C0305C10BF607355E9FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6EBB46D00BB60FC8F09A34060A4FF94C3437F2E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mA46EC6593BFA5F9AAA5FD184D482A6ECF0485D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	HandJointPose_t82E47711F81612C8E37DC59CAC62E6557CC512A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Nullable_1_tEC8F263BE70D6E8A7019A85EA809A9CFC7448F36 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// using (SetRigLocalPosePerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_il2cpp_TypeInfo_var))->___SetRigLocalPosePerfMarker_16;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01f1:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// simulatedControllerState.devicePosition = position;
				MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243* L_2 = (&__this->___simulatedControllerState_2);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___position0;
				L_2->___devicePosition_8 = L_3;
				// if (rotationMode == ControllerRotationMode.FaceCamera)
				int32_t L_4 = ___rotationMode2;
				if ((!(((uint32_t)L_4) == ((uint32_t)1))))
				{
					goto IL_0079_1;
				}
			}
			{
				// Quaternion worldLookAtCamera = Quaternion.LookRotation(CameraCache.Main.transform.position - position);
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5;
				L_5 = CameraCache_get_Main_mC37E77C91369434A080ED4B3EDBE4F0DA7041910(NULL);
				NullCheck(L_5);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
				L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
				NullCheck(L_6);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
				L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___position0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
				L_9 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_7, L_8, NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
				L_10 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_9, NULL);
				V_3 = L_10;
				// Quaternion rigLocalLookAtCamera = Quaternion.Inverse(PlayspaceUtilities.ReferenceTransform.rotation) * worldLookAtCamera;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
				L_11 = PlayspaceUtilities_get_ReferenceTransform_mF1DF2E87AACB47E02A84ED02D36F7CB5834206E7(NULL);
				NullCheck(L_11);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
				L_12 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_11, NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
				L_13 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_12, NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = V_3;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
				L_15 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_13, L_14, NULL);
				V_4 = L_15;
				// simulatedControllerState.deviceRotation = Smoothing.SmoothTo(
				//     simulatedControllerState.deviceRotation,
				//     rigLocalLookAtCamera,
				//     0.1f,
				//     MoveSmoothingTime);
				MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243* L_16 = (&__this->___simulatedControllerState_2);
				MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243* L_17 = (&__this->___simulatedControllerState_2);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = L_17->___deviceRotation_9;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19 = V_4;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
				L_20 = Smoothing_SmoothTo_m196AD23893F948CE688C736D32A73DD2EE4418A9(L_18, L_19, (0.100000001f), (0.0199999996f), NULL);
				L_16->___deviceRotation_9 = L_20;
				goto IL_00e0_1;
			}

IL_0079_1:
			{
				// else if (rotationMode == ControllerRotationMode.CameraAligned)
				int32_t L_21 = ___rotationMode2;
				if ((!(((uint32_t)L_21) == ((uint32_t)2))))
				{
					goto IL_00d4_1;
				}
			}
			{
				// Quaternion worldCameraForward = Quaternion.LookRotation(CameraCache.Main.transform.forward);
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_22;
				L_22 = CameraCache_get_Main_mC37E77C91369434A080ED4B3EDBE4F0DA7041910(NULL);
				NullCheck(L_22);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
				L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
				NullCheck(L_23);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
				L_24 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_23, NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
				L_25 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_24, NULL);
				V_5 = L_25;
				// Quaternion rigLocalCameraForward = Quaternion.Inverse(PlayspaceUtilities.ReferenceTransform.rotation) * worldCameraForward;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
				L_26 = PlayspaceUtilities_get_ReferenceTransform_mF1DF2E87AACB47E02A84ED02D36F7CB5834206E7(NULL);
				NullCheck(L_26);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
				L_27 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_26, NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
				L_28 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_27, NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29 = V_5;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30;
				L_30 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_28, L_29, NULL);
				V_6 = L_30;
				// simulatedControllerState.deviceRotation = Smoothing.SmoothTo(
				//     simulatedControllerState.deviceRotation,
				//     rigLocalCameraForward,
				//     0.1f,
				//     MoveSmoothingTime);
				MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243* L_31 = (&__this->___simulatedControllerState_2);
				MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243* L_32 = (&__this->___simulatedControllerState_2);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33 = L_32->___deviceRotation_9;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = V_6;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35;
				L_35 = Smoothing_SmoothTo_m196AD23893F948CE688C736D32A73DD2EE4418A9(L_33, L_34, (0.100000001f), (0.0199999996f), NULL);
				L_31->___deviceRotation_9 = L_35;
				goto IL_00e0_1;
			}

IL_00d4_1:
			{
				// simulatedControllerState.deviceRotation = rotation;
				MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243* L_36 = (&__this->___simulatedControllerState_2);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_37 = ___rotation1;
				L_36->___deviceRotation_9 = L_37;
			}

IL_00e0_1:
			{
				// if (shouldUseRayVector && Handedness.ToXRNode().HasValue && HandSubsystem != null &&
				//         HandSubsystem.TryGetHandCenter(Handedness.ToXRNode().Value, out HandJointPose palmPose))
				bool L_38 = ___shouldUseRayVector3;
				if (!L_38)
				{
					goto IL_01c3_1;
				}
			}
			{
				int32_t L_39;
				L_39 = SimulatedController_get_Handedness_m68D073A06BFF58BEB8C9822544006CBD1F47F2F3_inline(__this, NULL);
				Nullable_1_tEC8F263BE70D6E8A7019A85EA809A9CFC7448F36 L_40;
				L_40 = HandednessExtensions_ToXRNode_m30AFACB24E4DAC09672D1545AE3624C47E9B294E(L_39, NULL);
				V_7 = L_40;
				bool L_41;
				L_41 = Nullable_1_get_HasValue_m6EBB46D00BB60FC8F09A34060A4FF94C3437F2E2_inline((&V_7), Nullable_1_get_HasValue_m6EBB46D00BB60FC8F09A34060A4FF94C3437F2E2_RuntimeMethod_var);
				if (!L_41)
				{
					goto IL_01c3_1;
				}
			}
			{
				HandsAggregatorSubsystem_t2294604ECCC3071CADA69D1B9F999DC6936948CD* L_42;
				L_42 = SimulatedController_get_HandSubsystem_m7B41C84D0D6E3C1B412EBF968E949C48E3CEDFD6(__this, NULL);
				if (!L_42)
				{
					goto IL_01c3_1;
				}
			}
			{
				HandsAggregatorSubsystem_t2294604ECCC3071CADA69D1B9F999DC6936948CD* L_43;
				L_43 = SimulatedController_get_HandSubsystem_m7B41C84D0D6E3C1B412EBF968E949C48E3CEDFD6(__this, NULL);
				int32_t L_44;
				L_44 = SimulatedController_get_Handedness_m68D073A06BFF58BEB8C9822544006CBD1F47F2F3_inline(__this, NULL);
				Nullable_1_tEC8F263BE70D6E8A7019A85EA809A9CFC7448F36 L_45;
				L_45 = HandednessExtensions_ToXRNode_m30AFACB24E4DAC09672D1545AE3624C47E9B294E(L_44, NULL);
				V_7 = L_45;
				int32_t L_46;
				L_46 = Nullable_1_get_Value_mA46EC6593BFA5F9AAA5FD184D482A6ECF0485D66((&V_7), Nullable_1_get_Value_mA46EC6593BFA5F9AAA5FD184D482A6ECF0485D66_RuntimeMethod_var);
				NullCheck(L_43);
				bool L_47;
				L_47 = HandsAggregatorSubsystem_TryGetHandCenter_m837710521D63A73AE57373FBC8B4FF4F986BE1EE(L_43, L_46, (&V_2), NULL);
				if (!L_47)
				{
					goto IL_01c3_1;
				}
			}
			{
				// handRay.Update(PlayspaceUtilities.ReferenceTransform.TransformPoint(simulatedControllerState.devicePosition), -palmPose.Up, CameraCache.Main.transform, Handedness);
				RuntimeObject* L_48 = __this->___handRay_1;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
				L_49 = PlayspaceUtilities_get_ReferenceTransform_mF1DF2E87AACB47E02A84ED02D36F7CB5834206E7(NULL);
				MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243* L_50 = (&__this->___simulatedControllerState_2);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = L_50->___devicePosition_8;
				NullCheck(L_49);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
				L_52 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_49, L_51, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
				L_53 = HandJointPose_get_Up_mB0943E5CC79F23E17C29B6CE62857048A4B5CD38((&V_2), NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
				L_54 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_53, NULL);
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_55;
				L_55 = CameraCache_get_Main_mC37E77C91369434A080ED4B3EDBE4F0DA7041910(NULL);
				NullCheck(L_55);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56;
				L_56 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_55, NULL);
				int32_t L_57;
				L_57 = SimulatedController_get_Handedness_m68D073A06BFF58BEB8C9822544006CBD1F47F2F3_inline(__this, NULL);
				NullCheck(L_48);
				InterfaceActionInvoker4< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, int32_t >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IHandRay::Update(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Transform,Microsoft.MixedReality.Toolkit.Handedness) */, IHandRay_tB94975E01D485AE4D856C0305C10BF607355E9FE_il2cpp_TypeInfo_var, L_48, L_52, L_54, L_56, L_57);
				// Ray ray = handRay.Ray;
				RuntimeObject* L_58 = __this->___handRay_1;
				NullCheck(L_58);
				Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_59;
				L_59 = InterfaceFuncInvoker0< Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 >::Invoke(0 /* UnityEngine.Ray Microsoft.MixedReality.Toolkit.Input.IHandRay::get_Ray() */, IHandRay_tB94975E01D485AE4D856C0305C10BF607355E9FE_il2cpp_TypeInfo_var, L_58);
				V_8 = L_59;
				// simulatedControllerState.pointerPosition = PlayspaceUtilities.ReferenceTransform.InverseTransformPoint(ray.origin);
				MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243* L_60 = (&__this->___simulatedControllerState_2);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_61;
				L_61 = PlayspaceUtilities_get_ReferenceTransform_mF1DF2E87AACB47E02A84ED02D36F7CB5834206E7(NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
				L_62 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&V_8), NULL);
				NullCheck(L_61);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
				L_63 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_61, L_62, NULL);
				L_60->___pointerPosition_10 = L_63;
				// simulatedControllerState.pointerRotation = Quaternion.Inverse(PlayspaceUtilities.ReferenceTransform.rotation) * Quaternion.LookRotation(ray.direction);
				MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243* L_64 = (&__this->___simulatedControllerState_2);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_65;
				L_65 = PlayspaceUtilities_get_ReferenceTransform_mF1DF2E87AACB47E02A84ED02D36F7CB5834206E7(NULL);
				NullCheck(L_65);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_66;
				L_66 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_65, NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_67;
				L_67 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_66, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
				L_68 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&V_8), NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_69;
				L_69 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_68, NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_70;
				L_70 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_67, L_69, NULL);
				L_64->___pointerRotation_11 = L_70;
				goto IL_01ff;
			}

IL_01c3_1:
			{
				// simulatedControllerState.pointerPosition = simulatedControllerState.devicePosition;
				MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243* L_71 = (&__this->___simulatedControllerState_2);
				MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243* L_72 = (&__this->___simulatedControllerState_2);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = L_72->___devicePosition_8;
				L_71->___pointerPosition_10 = L_73;
				// simulatedControllerState.pointerRotation = simulatedControllerState.deviceRotation;
				MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243* L_74 = (&__this->___simulatedControllerState_2);
				MRTKSimulatedControllerState_t75D33575C51585C8C052982D836B74E42FA34243* L_75 = (&__this->___simulatedControllerState_2);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_76 = L_75->___deviceRotation_9;
				L_74->___pointerRotation_11 = L_76;
				// }
				goto IL_01ff;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01ff:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::SetUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedController_SetUsage_mAB18D6D232CF68179A453D52AE593DA7A9B43014 (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MRTKSimulatedController_tBE8AB611B95B22BE5DD7115B4AFDE3020D7A0100* G_B2_0 = NULL;
	MRTKSimulatedController_tBE8AB611B95B22BE5DD7115B4AFDE3020D7A0100* G_B1_0 = NULL;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	MRTKSimulatedController_tBE8AB611B95B22BE5DD7115B4AFDE3020D7A0100* G_B3_1 = NULL;
	{
		// InputSystem.SetDeviceUsage(
		//     simulatedController,
		//     (Handedness == Handedness.Left) ?
		//         UnityEngine.InputSystem.CommonUsages.LeftHand :
		//         UnityEngine.InputSystem.CommonUsages.RightHand);
		MRTKSimulatedController_tBE8AB611B95B22BE5DD7115B4AFDE3020D7A0100* L_0 = __this->___simulatedController_0;
		int32_t L_1;
		L_1 = SimulatedController_get_Handedness_m68D073A06BFF58BEB8C9822544006CBD1F47F2F3_inline(__this, NULL);
		G_B1_0 = L_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			G_B2_0 = L_0;
			goto IL_0016;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_il2cpp_TypeInfo_var);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_2 = ((CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_il2cpp_TypeInfo_var))->___RightHand_25;
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_001b;
	}

IL_0016:
	{
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_il2cpp_TypeInfo_var);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_3 = ((CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_il2cpp_TypeInfo_var))->___LeftHand_24;
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_001b:
	{
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_SetDeviceUsage_m7C10140ECC04AFB9F994DFBA16DBD078521F481F(G_B3_1, G_B3_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::UnsetUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedController_UnsetUsage_mAAC8CCA8B83971DC2AB630084D0122D4E047DA74 (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MRTKSimulatedController_tBE8AB611B95B22BE5DD7115B4AFDE3020D7A0100* G_B2_0 = NULL;
	MRTKSimulatedController_tBE8AB611B95B22BE5DD7115B4AFDE3020D7A0100* G_B1_0 = NULL;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	MRTKSimulatedController_tBE8AB611B95B22BE5DD7115B4AFDE3020D7A0100* G_B3_1 = NULL;
	{
		// InputSystem.RemoveDeviceUsage(
		//     simulatedController,
		//     Handedness == Handedness.Left ?
		//         UnityEngine.InputSystem.CommonUsages.LeftHand :
		//         UnityEngine.InputSystem.CommonUsages.RightHand);
		MRTKSimulatedController_tBE8AB611B95B22BE5DD7115B4AFDE3020D7A0100* L_0 = __this->___simulatedController_0;
		int32_t L_1;
		L_1 = SimulatedController_get_Handedness_m68D073A06BFF58BEB8C9822544006CBD1F47F2F3_inline(__this, NULL);
		G_B1_0 = L_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			G_B2_0 = L_0;
			goto IL_0016;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_il2cpp_TypeInfo_var);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_2 = ((CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_il2cpp_TypeInfo_var))->___RightHand_25;
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_001b;
	}

IL_0016:
	{
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_il2cpp_TypeInfo_var);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_3 = ((CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_il2cpp_TypeInfo_var))->___LeftHand_24;
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_001b:
	{
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_RemoveDeviceUsage_mC8D7A2DCC88501191494490C69FCC0AA3C440C1F(G_B3_1, G_B3_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedController__cctor_mD64485EA830D356FA7B0156506D8DD448918EB4B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07B36BC4CA2960839C717E248211310A9BC81E9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BA60A934B71571567B9572D4F99F32C3A5E51E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E02ED2483D8DEFE4C815807675DFE33ED69D7EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B6173546AB6460286A13FCDF79121073FBDFFE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FA731AB102A937F76D197B2958DE0F45790EC5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B7FD4479C3C7A9EDA5852AB2BF53306AAD8D042);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5109E75EF5A92BD32FE4980A54DC4E709D0F399);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker ToggleNeutralPosePerfMarker =
		//     new ProfilerMarker("[MRTK] SimulatedController.ToggleNeutralPose");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_0), _stringLiteral3E02ED2483D8DEFE4C815807675DFE33ED69D7EF, /*hidden argument*/NULL);
		((SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_il2cpp_TypeInfo_var))->___ToggleNeutralPosePerfMarker_8 = L_0;
		// private static readonly ProfilerMarker UpdatePerfMarker =
		//     new ProfilerMarker("[MRTK] SimulatedController.Update");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_1), _stringLiteral4B6173546AB6460286A13FCDF79121073FBDFFE9, /*hidden argument*/NULL);
		((SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_il2cpp_TypeInfo_var))->___UpdatePerfMarker_9 = L_1;
		// private static readonly ProfilerMarker UpdateAbsolutePerfMarker =
		//     new ProfilerMarker("[MRTK] SimulatedController.UpdateAbsolute");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_2), _stringLiteralE5109E75EF5A92BD32FE4980A54DC4E709D0F399, /*hidden argument*/NULL);
		((SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_il2cpp_TypeInfo_var))->___UpdateAbsolutePerfMarker_12 = L_2;
		// private static readonly ProfilerMarker UpdateRelativeToPokePerfMarker =
		//     new ProfilerMarker("[MRTK] SimulatedController.UpdateRelativeToPoke");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_3), _stringLiteral9B7FD4479C3C7A9EDA5852AB2BF53306AAD8D042, /*hidden argument*/NULL);
		((SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_il2cpp_TypeInfo_var))->___UpdateRelativeToPokePerfMarker_13 = L_3;
		// private static readonly ProfilerMarker ApplyStatePerfMarker =
		//     new ProfilerMarker("[MRTK] SimulatedController.ApplyState");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_4;
		memset((&L_4), 0, sizeof(L_4));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_4), _stringLiteral1BA60A934B71571567B9572D4F99F32C3A5E51E6, /*hidden argument*/NULL);
		((SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_il2cpp_TypeInfo_var))->___ApplyStatePerfMarker_14 = L_4;
		// private static readonly ProfilerMarker SetWorldPosePerfMarker =
		//     new ProfilerMarker("[MRTK] SimulatedController.SetWorldPose");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_5;
		memset((&L_5), 0, sizeof(L_5));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_5), _stringLiteral7FA731AB102A937F76D197B2958DE0F45790EC5F, /*hidden argument*/NULL);
		((SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_il2cpp_TypeInfo_var))->___SetWorldPosePerfMarker_15 = L_5;
		// private static readonly ProfilerMarker SetRigLocalPosePerfMarker =
		//     new ProfilerMarker("[MRTK] SimulatedController.SetRigLocalPose");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_6;
		memset((&L_6), 0, sizeof(L_6));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_6), _stringLiteral07B36BC4CA2960839C717E248211310A9BC81E9D, /*hidden argument*/NULL);
		((SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_il2cpp_TypeInfo_var))->___SetRigLocalPosePerfMarker_16 = L_6;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls::get_IsTracked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ControllerControls_get_IsTracked_mD1A58B3426C7E7C676034B5AE61ED4A556D05717 (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsTracked { get; internal set; }
		bool L_0 = __this->___U3CIsTrackedU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls::set_IsTracked(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerControls_set_IsTracked_m6F507D29A12A7F0EE595A466433C231E2AB848F0 (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsTracked { get; internal set; }
		bool L_0 = ___value0;
		__this->___U3CIsTrackedU3Ek__BackingField_0 = L_0;
		return;
	}
}
// UnityEngine.XR.InputTrackingState Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls::get_TrackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ControllerControls_get_TrackingState_mA09795EE969CE8F9110FBFD76FF5F52C0485D5D4 (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, const RuntimeMethod* method) 
{
	{
		// public InputTrackingState TrackingState { get; internal set; }
		uint32_t L_0 = __this->___U3CTrackingStateU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls::set_TrackingState(UnityEngine.XR.InputTrackingState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerControls_set_TrackingState_m763D926A40A0131C57ADB5498FF54B7BDCB8C21A (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public InputTrackingState TrackingState { get; internal set; }
		uint32_t L_0 = ___value0;
		__this->___U3CTrackingStateU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls::get_TriggerAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ControllerControls_get_TriggerAxis_mAA83674A37B52741586366DFDF20DCCA4A20C723 (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, const RuntimeMethod* method) 
{
	{
		// public float TriggerAxis { get; internal set; }
		float L_0 = __this->___U3CTriggerAxisU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls::set_TriggerAxis(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerControls_set_TriggerAxis_mD0D7D57F368F0536D7A9D87D1448820AF15D8014 (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float TriggerAxis { get; internal set; }
		float L_0 = ___value0;
		__this->___U3CTriggerAxisU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls::get_TriggerButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ControllerControls_get_TriggerButton_mF6DED59D59E2112AFE4F409EA76EA79683664379 (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, const RuntimeMethod* method) 
{
	{
		// public bool TriggerButton { get; internal set; }
		bool L_0 = __this->___U3CTriggerButtonU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls::set_TriggerButton(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerControls_set_TriggerButton_m7E893FD78232307F870D8570D2C78876937C433A (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool TriggerButton { get; internal set; }
		bool L_0 = ___value0;
		__this->___U3CTriggerButtonU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls::get_GripAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ControllerControls_get_GripAxis_m88801EF3C9A9EB18C81921B8199E34F1464C3ABC (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, const RuntimeMethod* method) 
{
	{
		// public float GripAxis { get; internal set; }
		float L_0 = __this->___U3CGripAxisU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls::set_GripAxis(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerControls_set_GripAxis_mBC77BFB2B3616949566E840BE6663EDE9B6F6ABA (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float GripAxis { get; internal set; }
		float L_0 = ___value0;
		__this->___U3CGripAxisU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls::get_GripButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ControllerControls_get_GripButton_mDCB15538E263CB04D75CDD1080A003D1305B1442 (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, const RuntimeMethod* method) 
{
	{
		// public bool GripButton { get; internal set; }
		bool L_0 = __this->___U3CGripButtonU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls::set_GripButton(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerControls_set_GripButton_m528D53A30925D95048E9BD8125BACCD857AE79B0 (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool GripButton { get; internal set; }
		bool L_0 = ___value0;
		__this->___U3CGripButtonU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerControls_Reset_m2199371294626C8774C592497428CDABC85D235D (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, const RuntimeMethod* method) 
{
	{
		// IsTracked = false;
		ControllerControls_set_IsTracked_m6F507D29A12A7F0EE595A466433C231E2AB848F0_inline(__this, (bool)0, NULL);
		// TrackingState = InputTrackingState.None;
		ControllerControls_set_TrackingState_m763D926A40A0131C57ADB5498FF54B7BDCB8C21A_inline(__this, 0, NULL);
		// TriggerAxis = default;
		ControllerControls_set_TriggerAxis_mD0D7D57F368F0536D7A9D87D1448820AF15D8014_inline(__this, (0.0f), NULL);
		// TriggerButton = default;
		ControllerControls_set_TriggerButton_m7E893FD78232307F870D8570D2C78876937C433A_inline(__this, (bool)0, NULL);
		// GripAxis = default;
		ControllerControls_set_GripAxis_mBC77BFB2B3616949566E840BE6663EDE9B6F6ABA_inline(__this, (0.0f), NULL);
		// GripButton = default;
		ControllerControls_set_GripButton_m528D53A30925D95048E9BD8125BACCD857AE79B0_inline(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerControls__ctor_mA5E89E7FBBC219799AAA33B945AE61E1094F5613 (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.InputSystem.XR.PoseControl Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedEyeGazeDevice::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PoseControl_t28571DE0327FBB52F360251074D1DA294A197862* SimulatedEyeGazeDevice_get_pose_m460A0049868041C0C6F19800B1BCC4E0DC199664 (SimulatedEyeGazeDevice_t72AF4B2115C96AD9EE5CACAE763BA9D4F8394DC9* __this, const RuntimeMethod* method) 
{
	{
		// public PoseControl pose { get; private set; }
		PoseControl_t28571DE0327FBB52F360251074D1DA294A197862* L_0 = __this->___U3CposeU3Ek__BackingField_39;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedEyeGazeDevice::set_pose(UnityEngine.InputSystem.XR.PoseControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedEyeGazeDevice_set_pose_mA9AEAF3A46C706C4192094DBEC408C3935CF15DD (SimulatedEyeGazeDevice_t72AF4B2115C96AD9EE5CACAE763BA9D4F8394DC9* __this, PoseControl_t28571DE0327FBB52F360251074D1DA294A197862* ___value0, const RuntimeMethod* method) 
{
	{
		// public PoseControl pose { get; private set; }
		PoseControl_t28571DE0327FBB52F360251074D1DA294A197862* L_0 = ___value0;
		__this->___U3CposeU3Ek__BackingField_39 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CposeU3Ek__BackingField_39), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedEyeGazeDevice::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedEyeGazeDevice_FinishSetup_m5419495914826221DFBE419D5B28A9F5EBA340E9 (SimulatedEyeGazeDevice_t72AF4B2115C96AD9EE5CACAE763BA9D4F8394DC9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisPoseControl_t28571DE0327FBB52F360251074D1DA294A197862_m7CFE3EFB8FB4FE6D93868C97F05FE58AACA38F1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFC86221AAB7628EBCE554785B46AE44BE79305F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.FinishSetup();
		InputControl_FinishSetup_m46B682B124C6E127183D19E1BA86E966472C7C15(__this, NULL);
		// pose = GetChildControl<PoseControl>(nameof(pose));
		PoseControl_t28571DE0327FBB52F360251074D1DA294A197862* L_0;
		L_0 = InputControl_GetChildControl_TisPoseControl_t28571DE0327FBB52F360251074D1DA294A197862_m7CFE3EFB8FB4FE6D93868C97F05FE58AACA38F1E(__this, _stringLiteralEFC86221AAB7628EBCE554785B46AE44BE79305F, InputControl_GetChildControl_TisPoseControl_t28571DE0327FBB52F360251074D1DA294A197862_m7CFE3EFB8FB4FE6D93868C97F05FE58AACA38F1E_RuntimeMethod_var);
		SimulatedEyeGazeDevice_set_pose_mA9AEAF3A46C706C4192094DBEC408C3935CF15DD_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedEyeGazeDevice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedEyeGazeDevice__ctor_m38F91CEB2E94F49736616C078CE250C87102E781 (SimulatedEyeGazeDevice_t72AF4B2115C96AD9EE5CACAE763BA9D4F8394DC9* __this, const RuntimeMethod* method) 
{
	{
		InputDevice__ctor_mAA72B9458CD588116A968FE54C2AD2B59C787E51(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedEyeGaze::get_CameraRelativeRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SimulatedEyeGaze_get_CameraRelativeRotation_m25A2026D88F60DE0418C660CB3DB4F8B59906B47 (SimulatedEyeGaze_tC2D5707605893349BE19C4DD5B20CECFAFE42F53* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 CameraRelativeRotation { get; private set; } = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CCameraRelativeRotationU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedEyeGaze::set_CameraRelativeRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedEyeGaze_set_CameraRelativeRotation_m54D2A14D3DE0D6B8E28C023BA23F33F3287D8A08 (SimulatedEyeGaze_tC2D5707605893349BE19C4DD5B20CECFAFE42F53* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 CameraRelativeRotation { get; private set; } = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CCameraRelativeRotationU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedEyeGaze::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedEyeGaze__ctor_mA6BA8FE0A1C128A250CC97BACE44D75535D81EFF (SimulatedEyeGaze_tC2D5707605893349BE19C4DD5B20CECFAFE42F53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_AddDevice_TisSimulatedEyeGazeDevice_t72AF4B2115C96AD9EE5CACAE763BA9D4F8394DC9_m12AE2A5175A5A496185FF1ABAE4489BD399F8CAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_RegisterLayout_TisPoseControl_t28571DE0327FBB52F360251074D1DA294A197862_m16002B273139D4CA1AA399FB2C4AC91F398A705C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA73B42CBCABB06F31023F52310E585C54B190051);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC951EF4D75543B44D1068B9E64B6A42F836CD05A);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public Vector3 CameraRelativeRotation { get; private set; } = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___U3CCameraRelativeRotationU3Ek__BackingField_2 = L_0;
		// public SimulatedEyeGaze()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// InputSystem.RegisterLayout<PoseControl>("InputSystemPose");
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C));
		Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_RegisterLayout_TisPoseControl_t28571DE0327FBB52F360251074D1DA294A197862_m16002B273139D4CA1AA399FB2C4AC91F398A705C(_stringLiteralA73B42CBCABB06F31023F52310E585C54B190051, L_1, InputSystem_RegisterLayout_TisPoseControl_t28571DE0327FBB52F360251074D1DA294A197862_m16002B273139D4CA1AA399FB2C4AC91F398A705C_RuntimeMethod_var);
		// simulatedEyeDevice = InputSystem.AddDevice<SimulatedEyeGazeDevice>();
		SimulatedEyeGazeDevice_t72AF4B2115C96AD9EE5CACAE763BA9D4F8394DC9* L_2;
		L_2 = InputSystem_AddDevice_TisSimulatedEyeGazeDevice_t72AF4B2115C96AD9EE5CACAE763BA9D4F8394DC9_m12AE2A5175A5A496185FF1ABAE4489BD399F8CAF((String_t*)NULL, InputSystem_AddDevice_TisSimulatedEyeGazeDevice_t72AF4B2115C96AD9EE5CACAE763BA9D4F8394DC9_m12AE2A5175A5A496185FF1ABAE4489BD399F8CAF_RuntimeMethod_var);
		__this->___simulatedEyeDevice_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___simulatedEyeDevice_0), (void*)L_2);
		// if (simulatedEyeDevice == null)
		SimulatedEyeGazeDevice_t72AF4B2115C96AD9EE5CACAE763BA9D4F8394DC9* L_3 = __this->___simulatedEyeDevice_0;
		if (L_3)
		{
			goto IL_0043;
		}
	}
	{
		// Debug.LogError("Failed to create the simulated eye gaze device.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralC951EF4D75543B44D1068B9E64B6A42F836CD05A, NULL);
		// return;
		return;
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedEyeGaze::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedEyeGaze_Finalize_mBD0D9BBAFA61CF7951F330576CDC863E19D2A852 (SimulatedEyeGaze_tC2D5707605893349BE19C4DD5B20CECFAFE42F53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA73B42CBCABB06F31023F52310E585C54B190051);
		s_Il2CppMethodInitialized = true;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0012:
			{// begin finally (depth: 1)
				// }
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// InputSystem.RemoveLayout("InputSystemPose");
			il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
			InputSystem_RemoveLayout_m7AA59AD8EC2AA0BAA64FAA37B96CF00C2DA27A4D(_stringLiteralA73B42CBCABB06F31023F52310E585C54B190051, NULL);
			// Dispose();
			SimulatedEyeGaze_Dispose_m9736F61744CEA1725791848685AFB03D8E9BE234(__this, NULL);
			goto IL_0019;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedEyeGaze::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedEyeGaze_Dispose_m9736F61744CEA1725791848685AFB03D8E9BE234 (SimulatedEyeGaze_tC2D5707605893349BE19C4DD5B20CECFAFE42F53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((simulatedEyeDevice != null))
		SimulatedEyeGazeDevice_t72AF4B2115C96AD9EE5CACAE763BA9D4F8394DC9* L_0 = __this->___simulatedEyeDevice_0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// InputSystem.RemoveDevice(simulatedEyeDevice);
		SimulatedEyeGazeDevice_t72AF4B2115C96AD9EE5CACAE763BA9D4F8394DC9* L_1 = __this->___simulatedEyeDevice_0;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_RemoveDevice_m41F154CEBE1EB94090D2980BEA684E58799EA8B3(L_1, NULL);
	}

IL_0013:
	{
		// GC.SuppressFinalize(this);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedEyeGaze::Update(System.Boolean,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedEyeGaze_Update_m0F2624FD52EB8EC404526869C44C61BE4A7B9AE5 (SimulatedEyeGaze_tC2D5707605893349BE19C4DD5B20CECFAFE42F53* __this, bool ___isTracked0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lookDelta1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eyeOffset2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputState_Change_TisPoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2_mA526BB0CADC4D1372B24F30FCD5BBBF31F4D5D79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimulatedEyeGaze_tC2D5707605893349BE19C4DD5B20CECFAFE42F53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	PoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2* G_B5_0 = NULL;
	PoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	PoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2* G_B6_1 = NULL;
	{
		// if (simulatedEyeDevice == null) { return; }
		SimulatedEyeGazeDevice_t72AF4B2115C96AD9EE5CACAE763BA9D4F8394DC9* L_0 = __this->___simulatedEyeDevice_0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (simulatedEyeDevice == null) { return; }
		return;
	}

IL_0009:
	{
		// using (UpdatePerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(SimulatedEyeGaze_tC2D5707605893349BE19C4DD5B20CECFAFE42F53_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_1 = ((SimulatedEyeGaze_tC2D5707605893349BE19C4DD5B20CECFAFE42F53_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedEyeGaze_tC2D5707605893349BE19C4DD5B20CECFAFE42F53_il2cpp_TypeInfo_var))->___UpdatePerfMarker_3;
		V_1 = L_1;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_2;
		L_2 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d1:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// poseState.isTracked = isTracked;
				PoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2* L_3 = (&__this->___poseState_1);
				bool L_4 = ___isTracked0;
				L_3->___isTracked_1 = L_4;
				// poseState.trackingState = poseState.isTracked ?
				//     TrackingState.Position | TrackingState.Rotation :
				//     TrackingState.None;
				PoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2* L_5 = (&__this->___poseState_1);
				PoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2* L_6 = (&__this->___poseState_1);
				bool L_7 = L_6->___isTracked_1;
				G_B4_0 = L_5;
				if (L_7)
				{
					G_B5_0 = L_5;
					goto IL_0039_1;
				}
			}
			{
				G_B6_0 = 0;
				G_B6_1 = G_B4_0;
				goto IL_003a_1;
			}

IL_0039_1:
			{
				G_B6_0 = 3;
				G_B6_1 = G_B5_0;
			}

IL_003a_1:
			{
				G_B6_1->___trackingState_2 = G_B6_0;
				// CameraRelativeRotation += lookDelta;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
				L_8 = SimulatedEyeGaze_get_CameraRelativeRotation_m25A2026D88F60DE0418C660CB3DB4F8B59906B47_inline(__this, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___lookDelta1;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
				L_10 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_8, L_9, NULL);
				SimulatedEyeGaze_set_CameraRelativeRotation_m54D2A14D3DE0D6B8E28C023BA23F33F3287D8A08_inline(__this, L_10, NULL);
				// poseState.position = CameraCache.Main.transform.localPosition + (CameraCache.Main.transform.localRotation * eyeOffset);
				PoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2* L_11 = (&__this->___poseState_1);
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12;
				L_12 = CameraCache_get_Main_mC37E77C91369434A080ED4B3EDBE4F0DA7041910(NULL);
				NullCheck(L_12);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
				L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
				NullCheck(L_13);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
				L_14 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_13, NULL);
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15;
				L_15 = CameraCache_get_Main_mC37E77C91369434A080ED4B3EDBE4F0DA7041910(NULL);
				NullCheck(L_15);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
				L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
				NullCheck(L_16);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
				L_17 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_16, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___eyeOffset2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
				L_19 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_17, L_18, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
				L_20 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_14, L_19, NULL);
				L_11->___position_3 = L_20;
				// poseState.rotation = CameraCache.Main.transform.localRotation * Quaternion.Euler(CameraRelativeRotation);
				PoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2* L_21 = (&__this->___poseState_1);
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_22;
				L_22 = CameraCache_get_Main_mC37E77C91369434A080ED4B3EDBE4F0DA7041910(NULL);
				NullCheck(L_22);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
				L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
				NullCheck(L_23);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
				L_24 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_23, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
				L_25 = SimulatedEyeGaze_get_CameraRelativeRotation_m25A2026D88F60DE0418C660CB3DB4F8B59906B47_inline(__this, NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26;
				L_26 = Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline(L_25, NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
				L_27 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_24, L_26, NULL);
				L_21->___rotation_4 = L_27;
				// InputState.Change(simulatedEyeDevice.pose, poseState);
				SimulatedEyeGazeDevice_t72AF4B2115C96AD9EE5CACAE763BA9D4F8394DC9* L_28 = __this->___simulatedEyeDevice_0;
				NullCheck(L_28);
				PoseControl_t28571DE0327FBB52F360251074D1DA294A197862* L_29;
				L_29 = SimulatedEyeGazeDevice_get_pose_m460A0049868041C0C6F19800B1BCC4E0DC199664_inline(L_28, NULL);
				PoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2 L_30 = __this->___poseState_1;
				il2cpp_codegen_initobj((&V_2), sizeof(InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0));
				InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 L_31 = V_2;
				InputState_Change_TisPoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2_mA526BB0CADC4D1372B24F30FCD5BBBF31F4D5D79(L_29, L_30, 0, L_31, InputState_Change_TisPoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2_mA526BB0CADC4D1372B24F30FCD5BBBF31F4D5D79_RuntimeMethod_var);
				// }
				goto IL_00df;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00df:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedEyeGaze::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedEyeGaze__cctor_m37B396B78E4D522D4F39D7AD4268E25B203004D7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimulatedEyeGaze_tC2D5707605893349BE19C4DD5B20CECFAFE42F53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral105BD51F43FBF9E9EFB8B2BCE2A071CEBDA8DDB4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdatePerfMarker =
		//     new ProfilerMarker("[MRTK] SimulatedEyeDevice.Update");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_0), _stringLiteral105BD51F43FBF9E9EFB8B2BCE2A071CEBDA8DDB4, /*hidden argument*/NULL);
		((SimulatedEyeGaze_tC2D5707605893349BE19C4DD5B20CECFAFE42F53_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedEyeGaze_tC2D5707605893349BE19C4DD5B20CECFAFE42F53_il2cpp_TypeInfo_var))->___UpdatePerfMarker_3 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSimulator_Awake_mE9FFE78A35DA82A03E6A6EF97A5CD7C847D4B94A (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, const RuntimeMethod* method) 
{
	{
		// ApplyControlSet(ControlSet);
		int32_t L_0;
		L_0 = InputSimulator_get_ControlSet_m902AE58129E1652450D2F3234362D186E7AD7113_inline(__this, NULL);
		InputSimulator_ApplyControlSet_m811A7EC69BF837122E48AFB2F9C7AC8BD2B62ADC(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSimulator_Update_m84977007A08541BCC88C045E8485E5F598AE031C (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDisplaySubsystemHelpers_tB70816F6057ACF313853D25EFB914DAAA2E57AB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		// using (UpdatePerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675_StaticFields*)il2cpp_codegen_static_fields_for(InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675_il2cpp_TypeInfo_var))->___UpdatePerfMarker_4;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d4:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// bool shouldSimulate = !XRDisplaySubsystemHelpers.AreAnyActive();
				il2cpp_codegen_runtime_class_init_inline(XRDisplaySubsystemHelpers_tB70816F6057ACF313853D25EFB914DAAA2E57AB6_il2cpp_TypeInfo_var);
				bool L_2;
				L_2 = XRDisplaySubsystemHelpers_AreAnyActive_m357B277C6D27FDCAB6041BA3CE8E9FA6C88185FC(NULL);
				V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
				// if (isSimulating != shouldSimulate)
				bool L_3 = __this->___isSimulating_5;
				bool L_4 = V_2;
				if ((((int32_t)L_3) == ((int32_t)L_4)))
				{
					goto IL_0049_1;
				}
			}
			{
				// isSimulating = shouldSimulate;
				bool L_5 = V_2;
				__this->___isSimulating_5 = L_5;
				// if (!isSimulating)
				bool L_6 = __this->___isSimulating_5;
				if (L_6)
				{
					goto IL_0049_1;
				}
			}
			{
				// DisableSimulatedCamera();
				InputSimulator_DisableSimulatedCamera_m5B46610BC1D685405D0DCEB79D587C615411289D(__this, NULL);
				// DisableSimulatedEyeGaze();
				InputSimulator_DisableSimulatedEyeGaze_m09FC5B6A4968BAD05312D64B72F477D6364F2713(__this, NULL);
				// DisableSimulatedController(Handedness.Left);
				InputSimulator_DisableSimulatedController_m73144FBC9EC3CEF14A0C4E55905FEF2AB58B3457(__this, 1, NULL);
				// DisableSimulatedController(Handedness.Right);
				InputSimulator_DisableSimulatedController_m73144FBC9EC3CEF14A0C4E55905FEF2AB58B3457(__this, 2, NULL);
			}

IL_0049_1:
			{
				// if (!isSimulating)
				bool L_7 = __this->___isSimulating_5;
				if (L_7)
				{
					goto IL_0056_1;
				}
			}
			{
				// return;
				goto IL_00e2;
			}

IL_0056_1:
			{
				// if (cameraSettings.SimulationEnabled)
				CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* L_8 = __this->___cameraSettings_8;
				NullCheck(L_8);
				bool L_9;
				L_9 = CameraSimulationSettings_get_SimulationEnabled_m1470DC10A623BF17C7C675EFF9961C247150BAA0_inline(L_8, NULL);
				if (!L_9)
				{
					goto IL_0071_1;
				}
			}
			{
				// EnableSimulatedCamera();
				InputSimulator_EnableSimulatedCamera_mCB80F7E49DEDFA632FF04DA35EAC91E907582524(__this, NULL);
				// UpdateSimulatedCamera();
				InputSimulator_UpdateSimulatedCamera_mA6A04FAB5B0C9A7D15896D92CCF80F5E96984BEC(__this, NULL);
				goto IL_0077_1;
			}

IL_0071_1:
			{
				// DisableSimulatedCamera();
				InputSimulator_DisableSimulatedCamera_m5B46610BC1D685405D0DCEB79D587C615411289D(__this, NULL);
			}

IL_0077_1:
			{
				// if (eyeGazeSettings.SimulationEnabled)
				EyeGazeSimulationSettings_t3C2AFE26CF2C423D622769D96E9F76A7B3C82A3A* L_10 = __this->___eyeGazeSettings_11;
				NullCheck(L_10);
				bool L_11;
				L_11 = EyeGazeSimulationSettings_get_SimulationEnabled_m41545363A4B6821167977D4EC0219AA9CD49FF6D_inline(L_10, NULL);
				if (!L_11)
				{
					goto IL_0092_1;
				}
			}
			{
				// EnableSimulatedEyeGaze();
				InputSimulator_EnableSimulatedEyeGaze_m02C07BA222AA6CC7087ABB2C31A403D105F0A27C(__this, NULL);
				// UpdateSimulatedEyeGaze();
				InputSimulator_UpdateSimulatedEyeGaze_mD62234314E17960BBF5CD8DBC28B86C52C8DD25E(__this, NULL);
				goto IL_0098_1;
			}

IL_0092_1:
			{
				// DisableSimulatedEyeGaze();
				InputSimulator_DisableSimulatedEyeGaze_m09FC5B6A4968BAD05312D64B72F477D6364F2713(__this, NULL);
			}

IL_0098_1:
			{
				// if (leftControllerSettings.SimulationMode != ControllerSimulationMode.Disabled)
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_12 = __this->___leftControllerSettings_19;
				NullCheck(L_12);
				int32_t L_13;
				L_13 = ControllerSimulationSettings_get_SimulationMode_mFCB8DB4BA892D80F9F69BBD8EC9EC1380D973F23_inline(L_12, NULL);
				if (!L_13)
				{
					goto IL_00ae_1;
				}
			}
			{
				// UpdateSimulatedController(Handedness.Left);
				InputSimulator_UpdateSimulatedController_m4B412F04854C24E5D80022B331C677EEC1D0FA64(__this, 1, NULL);
				goto IL_00b5_1;
			}

IL_00ae_1:
			{
				// DisableSimulatedController(Handedness.Left);
				InputSimulator_DisableSimulatedController_m73144FBC9EC3CEF14A0C4E55905FEF2AB58B3457(__this, 1, NULL);
			}

IL_00b5_1:
			{
				// if (rightControllerSettings.SimulationMode != ControllerSimulationMode.Disabled)
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_14 = __this->___rightControllerSettings_20;
				NullCheck(L_14);
				int32_t L_15;
				L_15 = ControllerSimulationSettings_get_SimulationMode_mFCB8DB4BA892D80F9F69BBD8EC9EC1380D973F23_inline(L_14, NULL);
				if (!L_15)
				{
					goto IL_00cb_1;
				}
			}
			{
				// UpdateSimulatedController(Handedness.Right);
				InputSimulator_UpdateSimulatedController_m4B412F04854C24E5D80022B331C677EEC1D0FA64(__this, 2, NULL);
				goto IL_00e2;
			}

IL_00cb_1:
			{
				// DisableSimulatedController(Handedness.Right);
				InputSimulator_DisableSimulatedController_m73144FBC9EC3CEF14A0C4E55905FEF2AB58B3457(__this, 2, NULL);
				// }
				goto IL_00e2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e2:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSimulator_OnDisable_m3E0097B3EB563221D9BE809A5017865A1D5D8934 (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, const RuntimeMethod* method) 
{
	{
		// DisableSimulatedCamera();
		InputSimulator_DisableSimulatedCamera_m5B46610BC1D685405D0DCEB79D587C615411289D(__this, NULL);
		// DisableSimulatedEyeGaze();
		InputSimulator_DisableSimulatedEyeGaze_m09FC5B6A4968BAD05312D64B72F477D6364F2713(__this, NULL);
		// DisableSimulatedController(Handedness.Left);
		InputSimulator_DisableSimulatedController_m73144FBC9EC3CEF14A0C4E55905FEF2AB58B3457(__this, 1, NULL);
		// DisableSimulatedController(Handedness.Right);
		InputSimulator_DisableSimulatedController_m73144FBC9EC3CEF14A0C4E55905FEF2AB58B3457(__this, 2, NULL);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulatorControlSet Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::get_ControlSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputSimulator_get_ControlSet_m902AE58129E1652450D2F3234362D186E7AD7113 (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, const RuntimeMethod* method) 
{
	{
		// get => controlSet;
		int32_t L_0 = __this->___controlSet_7;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::set_ControlSet(Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulatorControlSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSimulator_set_ControlSet_mD9104E4E8123EA528E4913F9126DF3F9AEDAF0B7 (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => controlSet = value;
		int32_t L_0 = ___value0;
		__this->___controlSet_7 = L_0;
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.Simulation.CameraSimulationSettings Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::get_CameraSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* InputSimulator_get_CameraSettings_mC46E389DCB7CAD50C826C6A42C56D18A3831E10C (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, const RuntimeMethod* method) 
{
	{
		// get => cameraSettings;
		CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* L_0 = __this->___cameraSettings_8;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::set_CameraSettings(Microsoft.MixedReality.Toolkit.Input.Simulation.CameraSimulationSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSimulator_set_CameraSettings_m65D935A65460415CCC75C18794FF4E138E32AC21 (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* ___value0, const RuntimeMethod* method) 
{
	{
		// set => cameraSettings = value;
		CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* L_0 = ___value0;
		__this->___cameraSettings_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cameraSettings_8), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::EnableSimulatedCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSimulator_EnableSimulatedCamera_mCB80F7E49DEDFA632FF04DA35EAC91E907582524 (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimulatedCamera_tDD65CFCB2C021ED5723B0D5118897FDED2C5EDB5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (simulatedCamera == null)
		SimulatedCamera_tDD65CFCB2C021ED5723B0D5118897FDED2C5EDB5* L_0 = __this->___simulatedCamera_6;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// simulatedCamera = new SimulatedCamera();
		SimulatedCamera_tDD65CFCB2C021ED5723B0D5118897FDED2C5EDB5* L_1 = (SimulatedCamera_tDD65CFCB2C021ED5723B0D5118897FDED2C5EDB5*)il2cpp_codegen_object_new(SimulatedCamera_tDD65CFCB2C021ED5723B0D5118897FDED2C5EDB5_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SimulatedCamera__ctor_mD5D87341AF9FAD30B76549986897937F0A70A6A9(L_1, NULL);
		__this->___simulatedCamera_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___simulatedCamera_6), (void*)L_1);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::DisableSimulatedCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSimulator_DisableSimulatedCamera_m5B46610BC1D685405D0DCEB79D587C615411289D (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, const RuntimeMethod* method) 
{
	{
		// if (simulatedCamera != null)
		SimulatedCamera_tDD65CFCB2C021ED5723B0D5118897FDED2C5EDB5* L_0 = __this->___simulatedCamera_6;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// simulatedCamera.Dispose();
		SimulatedCamera_tDD65CFCB2C021ED5723B0D5118897FDED2C5EDB5* L_1 = __this->___simulatedCamera_6;
		NullCheck(L_1);
		SimulatedCamera_Dispose_mC8C915E4C12094580FED3D2221070FCB77D40FF3(L_1, NULL);
		// simulatedCamera = null;
		__this->___simulatedCamera_6 = (SimulatedCamera_tDD65CFCB2C021ED5723B0D5118897FDED2C5EDB5*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___simulatedCamera_6), (void*)(SimulatedCamera_tDD65CFCB2C021ED5723B0D5118897FDED2C5EDB5*)NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::UpdateSimulatedCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSimulator_UpdateSimulatedCamera_mA6A04FAB5B0C9A7D15896D92CCF80F5E96984BEC (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float G_B5_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B5_1 = NULL;
	float G_B4_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B4_1 = NULL;
	int32_t G_B6_0 = 0;
	float G_B6_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B6_2 = NULL;
	{
		// if (simulatedCamera == null) { return; }
		SimulatedCamera_tDD65CFCB2C021ED5723B0D5118897FDED2C5EDB5* L_0 = __this->___simulatedCamera_6;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (simulatedCamera == null) { return; }
		return;
	}

IL_0009:
	{
		// using (UpdateSimulatedCameraPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_1 = ((InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675_StaticFields*)il2cpp_codegen_static_fields_for(InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675_il2cpp_TypeInfo_var))->___UpdateSimulatedCameraPerfMarker_9;
		V_1 = L_1;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_2;
		L_2 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00f0:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// Vector3 positionDelta = new Vector3(
				//     CameraSettings.MoveHorizontal.action.ReadValue<float>(),
				//     CameraSettings.MoveVertical.action.ReadValue<float>(),
				//     CameraSettings.MoveDepth.action.ReadValue<float>());
				CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* L_3;
				L_3 = InputSimulator_get_CameraSettings_mC46E389DCB7CAD50C826C6A42C56D18A3831E10C_inline(__this, NULL);
				NullCheck(L_3);
				InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_4;
				L_4 = CameraSimulationSettings_get_MoveHorizontal_m17E5E1F61AB157DC6456EE2793E198EA2E843A9F_inline(L_3, NULL);
				NullCheck(L_4);
				InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_5;
				L_5 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_4, NULL);
				NullCheck(L_5);
				float L_6;
				L_6 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_5, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
				CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* L_7;
				L_7 = InputSimulator_get_CameraSettings_mC46E389DCB7CAD50C826C6A42C56D18A3831E10C_inline(__this, NULL);
				NullCheck(L_7);
				InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_8;
				L_8 = CameraSimulationSettings_get_MoveVertical_mFDDC5B796385360A3D138D020DE7CA3B512D481B_inline(L_7, NULL);
				NullCheck(L_8);
				InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_9;
				L_9 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_8, NULL);
				NullCheck(L_9);
				float L_10;
				L_10 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_9, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
				CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* L_11;
				L_11 = InputSimulator_get_CameraSettings_mC46E389DCB7CAD50C826C6A42C56D18A3831E10C_inline(__this, NULL);
				NullCheck(L_11);
				InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_12;
				L_12 = CameraSimulationSettings_get_MoveDepth_m0F3C9E66B58DF631C8630224D3D309E16BFA66C1_inline(L_11, NULL);
				NullCheck(L_12);
				InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_13;
				L_13 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_12, NULL);
				NullCheck(L_13);
				float L_14;
				L_14 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_13, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
				Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), L_6, L_10, L_14, NULL);
				// Vector3 rotationDelta = new Vector3(
				//     // Unity inverts the camera pitch by default, mirroring how the neck works (move forward to look down)
				//     CameraSettings.Pitch.action.ReadValue<float>() * (!CameraSettings.InvertPitch ? -1 : 1),
				//     CameraSettings.Yaw.action.ReadValue<float>(),
				//     CameraSettings.Roll.action.ReadValue<float>());
				CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* L_15;
				L_15 = InputSimulator_get_CameraSettings_mC46E389DCB7CAD50C826C6A42C56D18A3831E10C_inline(__this, NULL);
				NullCheck(L_15);
				InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_16;
				L_16 = CameraSimulationSettings_get_Pitch_mAA12571EB098CAB17A68875A557D875DA69D4A9C_inline(L_15, NULL);
				NullCheck(L_16);
				InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_17;
				L_17 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_16, NULL);
				NullCheck(L_17);
				float L_18;
				L_18 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_17, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
				CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* L_19;
				L_19 = InputSimulator_get_CameraSettings_mC46E389DCB7CAD50C826C6A42C56D18A3831E10C_inline(__this, NULL);
				NullCheck(L_19);
				bool L_20;
				L_20 = CameraSimulationSettings_get_InvertPitch_mD6A262E280E63782DDD6BD0A13AB418852447C5B_inline(L_19, NULL);
				G_B4_0 = L_18;
				G_B4_1 = (&V_3);
				if (!L_20)
				{
					G_B5_0 = L_18;
					G_B5_1 = (&V_3);
					goto IL_0084_1;
				}
			}
			{
				G_B6_0 = 1;
				G_B6_1 = G_B4_0;
				G_B6_2 = G_B4_1;
				goto IL_0085_1;
			}

IL_0084_1:
			{
				G_B6_0 = (-1);
				G_B6_1 = G_B5_0;
				G_B6_2 = G_B5_1;
			}

IL_0085_1:
			{
				CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* L_21;
				L_21 = InputSimulator_get_CameraSettings_mC46E389DCB7CAD50C826C6A42C56D18A3831E10C_inline(__this, NULL);
				NullCheck(L_21);
				InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_22;
				L_22 = CameraSimulationSettings_get_Yaw_m11D2EEA67BCC8BA3D3F3E02A7B0F7FC3B2A8273D_inline(L_21, NULL);
				NullCheck(L_22);
				InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_23;
				L_23 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_22, NULL);
				NullCheck(L_23);
				float L_24;
				L_24 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_23, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
				CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* L_25;
				L_25 = InputSimulator_get_CameraSettings_mC46E389DCB7CAD50C826C6A42C56D18A3831E10C_inline(__this, NULL);
				NullCheck(L_25);
				InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_26;
				L_26 = CameraSimulationSettings_get_Roll_m25372ABD8C63A76F982DF6A6E63248D09B83A799_inline(L_25, NULL);
				NullCheck(L_26);
				InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_27;
				L_27 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_26, NULL);
				NullCheck(L_27);
				float L_28;
				L_28 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_27, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
				Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline(G_B6_2, ((float)il2cpp_codegen_multiply(G_B6_1, ((float)G_B6_0))), L_24, L_28, NULL);
				// simulatedCamera.Update(
				//     positionDelta * 0.1f,
				//     rotationDelta,
				//     CameraSettings.IsMovementSmoothed,
				//     CameraSettings.MoveSpeed,
				//     CameraSettings.RotationSensitivity);
				SimulatedCamera_tDD65CFCB2C021ED5723B0D5118897FDED2C5EDB5* L_29 = __this->___simulatedCamera_6;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
				L_31 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_30, (0.100000001f), NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_3;
				CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* L_33;
				L_33 = InputSimulator_get_CameraSettings_mC46E389DCB7CAD50C826C6A42C56D18A3831E10C_inline(__this, NULL);
				NullCheck(L_33);
				bool L_34;
				L_34 = CameraSimulationSettings_get_IsMovementSmoothed_mFEFEC39B621425C5989EAE6192979BF13E689036_inline(L_33, NULL);
				CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* L_35;
				L_35 = InputSimulator_get_CameraSettings_mC46E389DCB7CAD50C826C6A42C56D18A3831E10C_inline(__this, NULL);
				NullCheck(L_35);
				float L_36;
				L_36 = CameraSimulationSettings_get_MoveSpeed_mB6CEB3DA4BF4DF8EAF9E30C6B9FC772DB9D4ADB8_inline(L_35, NULL);
				CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* L_37;
				L_37 = InputSimulator_get_CameraSettings_mC46E389DCB7CAD50C826C6A42C56D18A3831E10C_inline(__this, NULL);
				NullCheck(L_37);
				float L_38;
				L_38 = CameraSimulationSettings_get_RotationSensitivity_m23F2B73B449285584DC2AFD9DCB578829728DE42_inline(L_37, NULL);
				NullCheck(L_29);
				SimulatedCamera_Update_mC6F3924B1B22F4F081F12B83FCCC9D09A3F5EB2F(L_29, L_31, L_32, L_34, L_36, L_38, NULL);
				// }
				goto IL_00fe;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00fe:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.Simulation.EyeGazeSimulationSettings Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::get_EyeGazeSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EyeGazeSimulationSettings_t3C2AFE26CF2C423D622769D96E9F76A7B3C82A3A* InputSimulator_get_EyeGazeSettings_m50204B9B680D5A127CF338A6CDDF7736C43B4456 (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, const RuntimeMethod* method) 
{
	{
		// get => eyeGazeSettings;
		EyeGazeSimulationSettings_t3C2AFE26CF2C423D622769D96E9F76A7B3C82A3A* L_0 = __this->___eyeGazeSettings_11;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::set_EyeGazeSettings(Microsoft.MixedReality.Toolkit.Input.Simulation.EyeGazeSimulationSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSimulator_set_EyeGazeSettings_m1E907C4467F1EB55FA675C85118C4E4165B9D901 (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, EyeGazeSimulationSettings_t3C2AFE26CF2C423D622769D96E9F76A7B3C82A3A* ___value0, const RuntimeMethod* method) 
{
	{
		// set => eyeGazeSettings = value;
		EyeGazeSimulationSettings_t3C2AFE26CF2C423D622769D96E9F76A7B3C82A3A* L_0 = ___value0;
		__this->___eyeGazeSettings_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___eyeGazeSettings_11), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::EnableSimulatedEyeGaze()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSimulator_EnableSimulatedEyeGaze_m02C07BA222AA6CC7087ABB2C31A403D105F0A27C (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimulatedEyeGaze_tC2D5707605893349BE19C4DD5B20CECFAFE42F53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (simulatedEyeGaze == null)
		SimulatedEyeGaze_tC2D5707605893349BE19C4DD5B20CECFAFE42F53* L_0 = __this->___simulatedEyeGaze_10;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// simulatedEyeGaze = new SimulatedEyeGaze();
		SimulatedEyeGaze_tC2D5707605893349BE19C4DD5B20CECFAFE42F53* L_1 = (SimulatedEyeGaze_tC2D5707605893349BE19C4DD5B20CECFAFE42F53*)il2cpp_codegen_object_new(SimulatedEyeGaze_tC2D5707605893349BE19C4DD5B20CECFAFE42F53_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SimulatedEyeGaze__ctor_mA6BA8FE0A1C128A250CC97BACE44D75535D81EFF(L_1, NULL);
		__this->___simulatedEyeGaze_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___simulatedEyeGaze_10), (void*)L_1);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::DisableSimulatedEyeGaze()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSimulator_DisableSimulatedEyeGaze_m09FC5B6A4968BAD05312D64B72F477D6364F2713 (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, const RuntimeMethod* method) 
{
	{
		// if (simulatedEyeGaze != null)
		SimulatedEyeGaze_tC2D5707605893349BE19C4DD5B20CECFAFE42F53* L_0 = __this->___simulatedEyeGaze_10;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// simulatedEyeGaze.Dispose();
		SimulatedEyeGaze_tC2D5707605893349BE19C4DD5B20CECFAFE42F53* L_1 = __this->___simulatedEyeGaze_10;
		NullCheck(L_1);
		SimulatedEyeGaze_Dispose_m9736F61744CEA1725791848685AFB03D8E9BE234(L_1, NULL);
		// simulatedEyeGaze = null;
		__this->___simulatedEyeGaze_10 = (SimulatedEyeGaze_tC2D5707605893349BE19C4DD5B20CECFAFE42F53*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___simulatedEyeGaze_10), (void*)(SimulatedEyeGaze_tC2D5707605893349BE19C4DD5B20CECFAFE42F53*)NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::UpdateSimulatedEyeGaze()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSimulator_UpdateSimulatedEyeGaze_mD62234314E17960BBF5CD8DBC28B86C52C8DD25E (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (simulatedEyeGaze == null) { return; }
		SimulatedEyeGaze_tC2D5707605893349BE19C4DD5B20CECFAFE42F53* L_0 = __this->___simulatedEyeGaze_10;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (simulatedEyeGaze == null) { return; }
		return;
	}

IL_0009:
	{
		// using (UpdateSimulatedEyesPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_1 = ((InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675_StaticFields*)il2cpp_codegen_static_fields_for(InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675_il2cpp_TypeInfo_var))->___UpdateSimulatedEyesPerfMarker_12;
		V_1 = L_1;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_2;
		L_2 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0068:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Vector3 lookDelta = new Vector3(
			//     -eyeGazeSettings.LookVertical.action.ReadValue<float>(),
			//     eyeGazeSettings.LookHorizontal.action.ReadValue<float>(),
			//     0f);
			EyeGazeSimulationSettings_t3C2AFE26CF2C423D622769D96E9F76A7B3C82A3A* L_3 = __this->___eyeGazeSettings_11;
			NullCheck(L_3);
			InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_4;
			L_4 = EyeGazeSimulationSettings_get_LookVertical_m3B0E8F0F830748732398184AA8C2071081BB1E96_inline(L_3, NULL);
			NullCheck(L_4);
			InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_5;
			L_5 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_4, NULL);
			NullCheck(L_5);
			float L_6;
			L_6 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_5, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
			EyeGazeSimulationSettings_t3C2AFE26CF2C423D622769D96E9F76A7B3C82A3A* L_7 = __this->___eyeGazeSettings_11;
			NullCheck(L_7);
			InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_8;
			L_8 = EyeGazeSimulationSettings_get_LookHorizontal_m4C3AB0D8EFEF7BDB72285A2A76FFDF960D3D663E_inline(L_7, NULL);
			NullCheck(L_8);
			InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_9;
			L_9 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_8, NULL);
			NullCheck(L_9);
			float L_10;
			L_10 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_9, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
			Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), ((-L_6)), L_10, (0.0f), NULL);
			// simulatedEyeGaze.Update(
			//     true,
			//     lookDelta,
			//     eyeGazeSettings.EyeOriginOffset);
			SimulatedEyeGaze_tC2D5707605893349BE19C4DD5B20CECFAFE42F53* L_11 = __this->___simulatedEyeGaze_10;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_2;
			EyeGazeSimulationSettings_t3C2AFE26CF2C423D622769D96E9F76A7B3C82A3A* L_13 = __this->___eyeGazeSettings_11;
			NullCheck(L_13);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
			L_14 = EyeGazeSimulationSettings_get_EyeOriginOffset_m7F1395524F9DEDE39E57D6A06653207C869A7A08_inline(L_13, NULL);
			NullCheck(L_11);
			SimulatedEyeGaze_Update_m0F2624FD52EB8EC404526869C44C61BE4A7B9AE5(L_11, (bool)1, L_12, L_14, NULL);
			// }
			goto IL_0076;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0076:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::get_LeftControllerSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* InputSimulator_get_LeftControllerSettings_m3610C3E3A92ED6F45081C6E58777C6928E2D5280 (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, const RuntimeMethod* method) 
{
	{
		// get => leftControllerSettings;
		ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_0 = __this->___leftControllerSettings_19;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::set_LeftControllerSettings(Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSimulator_set_LeftControllerSettings_m625EE6EECF7E6BFDC2CD821B57AE687F1489C2BA (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* ___value0, const RuntimeMethod* method) 
{
	{
		// set => leftControllerSettings = value;
		ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_0 = ___value0;
		__this->___leftControllerSettings_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___leftControllerSettings_19), (void*)L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::get_RightControllerSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* InputSimulator_get_RightControllerSettings_mE29AD9AA0E290087A1AD0741682F67D8CF33352F (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, const RuntimeMethod* method) 
{
	{
		// get => rightControllerSettings;
		ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_0 = __this->___rightControllerSettings_20;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::set_RightControllerSettings(Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerSimulationSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSimulator_set_RightControllerSettings_mF04D833D0F809C6FFBCA9645FD372D2718D47BD7 (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* ___value0, const RuntimeMethod* method) 
{
	{
		// set => rightControllerSettings = value;
		ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_0 = ___value0;
		__this->___rightControllerSettings_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rightControllerSettings_20), (void*)L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::EnableSimulatedController(Microsoft.MixedReality.Toolkit.Handedness,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* InputSimulator_EnableSimulatedController_mF289DAE2C44A4EE2DD66E6CCD93106B08117340C (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, int32_t ___handedness0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPosition1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handedness_t3871B818901E431A761DF26D8F0D4372912651EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B82102DC3A4D45D8CBA3044ED82894E4A9880D4);
		s_Il2CppMethodInitialized = true;
	}
	SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166** V_0 = NULL;
	{
		// if (!IsSupportedHandedness(handedness))
		int32_t L_0 = ___handedness0;
		bool L_1;
		L_1 = InputSimulator_IsSupportedHandedness_m9FFEEA47CD6195E18DFD00E6016EEA0E8D2CE6EA(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		// Debug.LogError($"Unable to enable simulated controller. Unsupported handedness ({handedness}).");
		int32_t L_2 = ___handedness0;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Handedness_t3871B818901E431A761DF26D8F0D4372912651EC_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral0B82102DC3A4D45D8CBA3044ED82894E4A9880D4, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_5, NULL);
		// return null;
		return (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166*)NULL;
	}

IL_0020:
	{
		// ref SimulatedController simCtrl = ref GetControllerReference(handedness);
		int32_t L_6 = ___handedness0;
		SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166** L_7;
		L_7 = InputSimulator_GetControllerReference_mED16A02E4AE69FAF9EE4BC07B00F7785A55BDA6E(__this, L_6, NULL);
		V_0 = L_7;
		// if (simCtrl != null) { return simCtrl; }
		SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166** L_8 = V_0;
		SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* L_9 = *((SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166**)L_8);
		if (!L_9)
		{
			goto IL_002f;
		}
	}
	{
		// if (simCtrl != null) { return simCtrl; }
		SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166** L_10 = V_0;
		SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* L_11 = *((SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166**)L_10);
		return L_11;
	}

IL_002f:
	{
		// simCtrl = new SimulatedController(handedness, startPosition);
		SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166** L_12 = V_0;
		int32_t L_13 = ___handedness0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___startPosition1;
		SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* L_15 = (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166*)il2cpp_codegen_object_new(SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		SimulatedController__ctor_m9DBC659A255F5DE00CD405BF83D7ECBC7198C4D7(L_15, L_13, L_14, NULL);
		*((RuntimeObject**)L_12) = (RuntimeObject*)L_15;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_12, (void*)(RuntimeObject*)L_15);
		// ControllerControls controls = GetControllerControls(handedness);
		int32_t L_16 = ___handedness0;
		ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* L_17;
		L_17 = InputSimulator_GetControllerControls_mF00CF651F06E315881C69F50FD741611360C6702(__this, L_16, NULL);
		// controls.Reset();
		NullCheck(L_17);
		ControllerControls_Reset_m2199371294626C8774C592497428CDABC85D235D(L_17, NULL);
		// return simCtrl;
		SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166** L_18 = V_0;
		SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* L_19 = *((SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166**)L_18);
		return L_19;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::DisableSimulatedController(Microsoft.MixedReality.Toolkit.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSimulator_DisableSimulatedController_m73144FBC9EC3CEF14A0C4E55905FEF2AB58B3457 (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, int32_t ___handedness0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handedness_t3871B818901E431A761DF26D8F0D4372912651EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00EF2B5B502CEA3DDD02B13EEE4079EEDE2A31C1);
		s_Il2CppMethodInitialized = true;
	}
	SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166** V_0 = NULL;
	{
		// if (!IsSupportedHandedness(handedness))
		int32_t L_0 = ___handedness0;
		bool L_1;
		L_1 = InputSimulator_IsSupportedHandedness_m9FFEEA47CD6195E18DFD00E6016EEA0E8D2CE6EA(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		// Debug.Log($"Unable to disable simulated controller. Unsupported handedness ({handedness}).");
		int32_t L_2 = ___handedness0;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Handedness_t3871B818901E431A761DF26D8F0D4372912651EC_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral00EF2B5B502CEA3DDD02B13EEE4079EEDE2A31C1, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_5, NULL);
		// return;
		return;
	}

IL_001f:
	{
		// ref SimulatedController simCtrl = ref GetControllerReference(handedness);
		int32_t L_6 = ___handedness0;
		SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166** L_7;
		L_7 = InputSimulator_GetControllerReference_mED16A02E4AE69FAF9EE4BC07B00F7785A55BDA6E(__this, L_6, NULL);
		V_0 = L_7;
		// if (simCtrl == null) { return; }
		SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166** L_8 = V_0;
		SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* L_9 = *((SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166**)L_8);
		if (L_9)
		{
			goto IL_002c;
		}
	}
	{
		// if (simCtrl == null) { return; }
		return;
	}

IL_002c:
	{
		// simCtrl.Dispose();
		SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166** L_10 = V_0;
		SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* L_11 = *((SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166**)L_10);
		NullCheck(L_11);
		SimulatedController_Dispose_m1D33E29BF57A03455CBE58BDF18F496CEE3C7039(L_11, NULL);
		// simCtrl = null;
		SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166** L_12 = V_0;
		*((RuntimeObject**)L_12) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_12, (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::UpdateSimulatedController(Microsoft.MixedReality.Toolkit.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSimulator_UpdateSimulatedController_m4B412F04854C24E5D80022B331C677EEC1D0FA64 (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, int32_t ___handedness0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handedness_t3871B818901E431A761DF26D8F0D4372912651EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABDC87134DD49FD239798081CB346CAF2E854CA3);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* V_2 = NULL;
	bool V_3 = false;
	SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166** V_4 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_6;
	memset((&V_6), 0, sizeof(V_6));
	ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* V_7 = NULL;
	float* V_8 = NULL;
	bool V_9 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t V_14 = 0;
	ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* G_B6_0 = NULL;
	int32_t G_B23_0 = 0;
	ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* G_B30_0 = NULL;
	ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* G_B29_0 = NULL;
	int32_t G_B31_0 = 0;
	ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* G_B31_1 = NULL;
	float G_B34_0 = 0.0f;
	float G_B33_0 = 0.0f;
	int32_t G_B35_0 = 0;
	float G_B35_1 = 0.0f;
	float* G_B40_0 = NULL;
	float G_B42_0 = 0.0f;
	ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* G_B42_1 = NULL;
	float G_B41_0 = 0.0f;
	ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* G_B41_1 = NULL;
	int32_t G_B43_0 = 0;
	float G_B43_1 = 0.0f;
	ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* G_B43_2 = NULL;
	ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* G_B47_0 = NULL;
	ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* G_B46_0 = NULL;
	int32_t G_B48_0 = 0;
	ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* G_B48_1 = NULL;
	{
		// using (UpdateSimulatedControllerPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675_StaticFields*)il2cpp_codegen_static_fields_for(InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675_il2cpp_TypeInfo_var))->___UpdateSimulatedControllerPerfMarker_23;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03af:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (!IsSupportedHandedness(handedness))
				int32_t L_2 = ___handedness0;
				bool L_3;
				L_3 = InputSimulator_IsSupportedHandedness_m9FFEEA47CD6195E18DFD00E6016EEA0E8D2CE6EA(__this, L_2, NULL);
				if (L_3)
				{
					goto IL_0031_1;
				}
			}
			{
				// Debug.Log($"Unable to update the simulated controller. Unsupported handedness ({handedness}).");
				int32_t L_4 = ___handedness0;
				int32_t L_5 = L_4;
				RuntimeObject* L_6 = Box(Handedness_t3871B818901E431A761DF26D8F0D4372912651EC_il2cpp_TypeInfo_var, &L_5);
				String_t* L_7;
				L_7 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralABDC87134DD49FD239798081CB346CAF2E854CA3, L_6, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_7, NULL);
				// return;
				goto IL_03bd;
			}

IL_0031_1:
			{
				// ControllerSimulationSettings ctrlSettings = (handedness == Handedness.Left) ?
				//     leftControllerSettings : rightControllerSettings;
				int32_t L_8 = ___handedness0;
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_003d_1;
				}
			}
			{
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_9 = __this->___rightControllerSettings_20;
				G_B6_0 = L_9;
				goto IL_0043_1;
			}

IL_003d_1:
			{
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_10 = __this->___leftControllerSettings_19;
				G_B6_0 = L_10;
			}

IL_0043_1:
			{
				V_2 = G_B6_0;
				// if (ctrlSettings == null) { return; }
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_11 = V_2;
				if (L_11)
				{
					goto IL_004c_1;
				}
			}
			{
				// if (ctrlSettings == null) { return; }
				goto IL_03bd;
			}

IL_004c_1:
			{
				// if (ctrlSettings.Toggle.action.WasPerformedThisFrame())
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_12 = V_2;
				NullCheck(L_12);
				InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_13;
				L_13 = ControllerSimulationSettings_get_Toggle_mB85A823140A946C802F63C23121BCFE7DA210A7A_inline(L_12, NULL);
				NullCheck(L_13);
				InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_14;
				L_14 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_13, NULL);
				NullCheck(L_14);
				bool L_15;
				L_15 = InputAction_WasPerformedThisFrame_m6EB7F845E109BB397BA5DB84FE80CB28F399D62E(L_14, NULL);
				if (!L_15)
				{
					goto IL_006d_1;
				}
			}
			{
				// ctrlSettings.ToggleState = !ctrlSettings.ToggleState;
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_16 = V_2;
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_17 = V_2;
				NullCheck(L_17);
				bool L_18;
				L_18 = ControllerSimulationSettings_get_ToggleState_m996B8AD6C291D144DC187728FF38D04EFBC4AD9B_inline(L_17, NULL);
				NullCheck(L_16);
				ControllerSimulationSettings_set_ToggleState_m3D9140FA57D0CC82A4BCCC447EECFD7105EFF0CC_inline(L_16, (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0), NULL);
			}

IL_006d_1:
			{
				// bool isTracked = ctrlSettings.Track.action.IsPressed();
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_19 = V_2;
				NullCheck(L_19);
				InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_20;
				L_20 = ControllerSimulationSettings_get_Track_m51F7DBF61BD3D7EF31B91D1703CADB61EE68064C_inline(L_19, NULL);
				NullCheck(L_20);
				InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_21;
				L_21 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_20, NULL);
				NullCheck(L_21);
				bool L_22;
				L_22 = InputAction_IsPressed_m40DF920F0E7D18170B62666DA2A2131AD336A301(L_21, NULL);
				V_3 = L_22;
				// ref SimulatedController simCtrl = ref GetControllerReference(handedness);
				int32_t L_23 = ___handedness0;
				SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166** L_24;
				L_24 = InputSimulator_GetControllerReference_mED16A02E4AE69FAF9EE4BC07B00F7785A55BDA6E(__this, L_23, NULL);
				V_4 = L_24;
				// if (ctrlSettings.ToggleState || isTracked)
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_25 = V_2;
				NullCheck(L_25);
				bool L_26;
				L_26 = ControllerSimulationSettings_get_ToggleState_m996B8AD6C291D144DC187728FF38D04EFBC4AD9B_inline(L_25, NULL);
				bool L_27 = V_3;
				if (!((int32_t)((int32_t)L_26|(int32_t)L_27)))
				{
					goto IL_00f3_1;
				}
			}
			{
				// if (simCtrl == null)
				SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166** L_28 = V_4;
				SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* L_29 = *((SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166**)L_28);
				if (L_29)
				{
					goto IL_00fe_1;
				}
			}
			{
				// Vector3 startPosition = ctrlSettings.DefaultPosition;
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_30 = V_2;
				NullCheck(L_30);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
				L_31 = ControllerSimulationSettings_get_DefaultPosition_m18DAEE545417B11C63EADEAB9D9FC6AFD46F76EE_inline(L_30, NULL);
				V_11 = L_31;
				// if (isTracked)
				bool L_32 = V_3;
				if (!L_32)
				{
					goto IL_00e5_1;
				}
			}
			{
				// Vector3 screenPos = new Vector3(
				//     Mouse.current.position.ReadValue().x,
				//     Mouse.current.position.ReadValue().y,
				//     ctrlSettings.DefaultPosition.z);
				Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* L_33;
				L_33 = Mouse_get_current_m559AE408DFE4F44D811979FE592BBAF7A84CE6F3_inline(NULL);
				NullCheck(L_33);
				Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* L_34;
				L_34 = Pointer_get_position_m4286004169788483EEDA6AF833CEFDB04FEDF3D8_inline(L_33, NULL);
				NullCheck(L_34);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35;
				L_35 = InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541(L_34, InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var);
				float L_36 = L_35.___x_0;
				Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* L_37;
				L_37 = Mouse_get_current_m559AE408DFE4F44D811979FE592BBAF7A84CE6F3_inline(NULL);
				NullCheck(L_37);
				Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* L_38;
				L_38 = Pointer_get_position_m4286004169788483EEDA6AF833CEFDB04FEDF3D8_inline(L_37, NULL);
				NullCheck(L_38);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
				L_39 = InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541(L_38, InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var);
				float L_40 = L_39.___y_1;
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_41 = V_2;
				NullCheck(L_41);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
				L_42 = ControllerSimulationSettings_get_DefaultPosition_m18DAEE545417B11C63EADEAB9D9FC6AFD46F76EE_inline(L_41, NULL);
				float L_43 = L_42.___z_4;
				Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_12), L_36, L_40, L_43, NULL);
				// startPosition = ScreenToCameraRelative(screenPos);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_12;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
				L_45 = InputSimulator_ScreenToCameraRelative_m37CD281855C4ABE1C6FE89824E8C30AA807DE6C3(__this, L_44, NULL);
				V_11 = L_45;
			}

IL_00e5_1:
			{
				// simCtrl = EnableSimulatedController(handedness, startPosition);
				SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166** L_46 = V_4;
				int32_t L_47 = ___handedness0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = V_11;
				SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* L_49;
				L_49 = InputSimulator_EnableSimulatedController_mF289DAE2C44A4EE2DD66E6CCD93106B08117340C(__this, L_47, L_48, NULL);
				*((RuntimeObject**)L_46) = (RuntimeObject*)L_49;
				Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_46, (void*)(RuntimeObject*)L_49);
				goto IL_00fe_1;
			}

IL_00f3_1:
			{
				// DisableSimulatedController(handedness);
				int32_t L_50 = ___handedness0;
				InputSimulator_DisableSimulatedController_m73144FBC9EC3CEF14A0C4E55905FEF2AB58B3457(__this, L_50, NULL);
				// simCtrl = null;
				SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166** L_51 = V_4;
				*((RuntimeObject**)L_51) = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_51, (void*)(RuntimeObject*)NULL);
			}

IL_00fe_1:
			{
				// if (simCtrl == null) { return; }
				SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166** L_52 = V_4;
				SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* L_53 = *((SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166**)L_52);
				if (L_53)
				{
					goto IL_0108_1;
				}
			}
			{
				// if (simCtrl == null) { return; }
				goto IL_03bd;
			}

IL_0108_1:
			{
				// if (ctrlSettings.ChangeNeutralPose.action.WasPerformedThisFrame())
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_54 = V_2;
				NullCheck(L_54);
				InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_55;
				L_55 = ControllerSimulationSettings_get_ChangeNeutralPose_m3B7224C2638C070BD83957ADA4C2CE3996C2ECC7_inline(L_54, NULL);
				NullCheck(L_55);
				InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_56;
				L_56 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_55, NULL);
				NullCheck(L_56);
				bool L_57;
				L_57 = InputAction_WasPerformedThisFrame_m6EB7F845E109BB397BA5DB84FE80CB28F399D62E(L_56, NULL);
				if (!L_57)
				{
					goto IL_0122_1;
				}
			}
			{
				// simCtrl.ToggleNeutralPose();
				SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166** L_58 = V_4;
				SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* L_59 = *((SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166**)L_58);
				NullCheck(L_59);
				SimulatedController_ToggleNeutralPose_mA41CE61C533EA6676D111D29077E7F0CFE85A487(L_59, NULL);
			}

IL_0122_1:
			{
				// bool isControlledByMouse = ctrlSettings.MoveHorizontal.action.RaisedByMouse() ||
				//                            ctrlSettings.MoveVertical.action.RaisedByMouse();
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_60 = V_2;
				NullCheck(L_60);
				InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_61;
				L_61 = ControllerSimulationSettings_get_MoveHorizontal_m0922CB519513571DBD470E91B6028A3B3B321C04_inline(L_60, NULL);
				NullCheck(L_61);
				InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_62;
				L_62 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_61, NULL);
				bool L_63;
				L_63 = InputActionExtensions_RaisedByMouse_mF87B8223A551CE33C18DBAB7B8BAF6FA475FED69(L_62, NULL);
				if (L_63)
				{
					goto IL_0146_1;
				}
			}
			{
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_64 = V_2;
				NullCheck(L_64);
				InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_65;
				L_65 = ControllerSimulationSettings_get_MoveVertical_m112D1DA278DE8D1D5ECE1671086DB4B426D01BE9_inline(L_64, NULL);
				NullCheck(L_65);
				InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_66;
				L_66 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_65, NULL);
				bool L_67;
				L_67 = InputActionExtensions_RaisedByMouse_mF87B8223A551CE33C18DBAB7B8BAF6FA475FED69(L_66, NULL);
				G_B23_0 = ((int32_t)(L_67));
				goto IL_0147_1;
			}

IL_0146_1:
			{
				G_B23_0 = 1;
			}

IL_0147_1:
			{
				// if (isControlledByMouse && !ctrlSettings.ToggleState) // If tracking is latched, we do not want to 1:1 track the mouse location.
				if (!G_B23_0)
				{
					goto IL_01bb_1;
				}
			}
			{
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_68 = V_2;
				NullCheck(L_68);
				bool L_69;
				L_69 = ControllerSimulationSettings_get_ToggleState_m996B8AD6C291D144DC187728FF38D04EFBC4AD9B_inline(L_68, NULL);
				if (L_69)
				{
					goto IL_01bb_1;
				}
			}
			{
				// Vector3 mouseScreenPos = new Vector3(
				//     Mouse.current.position.ReadValue().x,
				//     Mouse.current.position.ReadValue().y,
				//     ctrlSettings.DefaultPosition.z);
				Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* L_70;
				L_70 = Mouse_get_current_m559AE408DFE4F44D811979FE592BBAF7A84CE6F3_inline(NULL);
				NullCheck(L_70);
				Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* L_71;
				L_71 = Pointer_get_position_m4286004169788483EEDA6AF833CEFDB04FEDF3D8_inline(L_70, NULL);
				NullCheck(L_71);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72;
				L_72 = InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541(L_71, InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var);
				float L_73 = L_72.___x_0;
				Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* L_74;
				L_74 = Mouse_get_current_m559AE408DFE4F44D811979FE592BBAF7A84CE6F3_inline(NULL);
				NullCheck(L_74);
				Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* L_75;
				L_75 = Pointer_get_position_m4286004169788483EEDA6AF833CEFDB04FEDF3D8_inline(L_74, NULL);
				NullCheck(L_75);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_76;
				L_76 = InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541(L_75, InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var);
				float L_77 = L_76.___y_1;
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_78 = V_2;
				NullCheck(L_78);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
				L_79 = ControllerSimulationSettings_get_DefaultPosition_m18DAEE545417B11C63EADEAB9D9FC6AFD46F76EE_inline(L_78, NULL);
				float L_80 = L_79.___z_4;
				Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_13), L_73, L_77, L_80, NULL);
				// Vector3 inputPosition = ScreenToCameraRelative(mouseScreenPos);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81 = V_13;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
				L_82 = InputSimulator_ScreenToCameraRelative_m37CD281855C4ABE1C6FE89824E8C30AA807DE6C3(__this, L_81, NULL);
				// positionDelta = inputPosition - simCtrl.SimulatedInputPosition;
				SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166** L_83 = V_4;
				SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* L_84 = *((SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166**)L_83);
				NullCheck(L_84);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
				L_85 = SimulatedController_get_SimulatedInputPosition_mCB0FB258133F3EEE5B8FC02DC8950C2364EB79FA_inline(L_84, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
				L_86 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_82, L_85, NULL);
				V_5 = L_86;
				// positionDelta.z = ctrlSettings.MoveDepth.action.ReadValue<float>();
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_87 = V_2;
				NullCheck(L_87);
				InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_88;
				L_88 = ControllerSimulationSettings_get_MoveDepth_m4FCCFBBE741A32CCA36853DB3DDA55907A4A5706_inline(L_87, NULL);
				NullCheck(L_88);
				InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_89;
				L_89 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_88, NULL);
				NullCheck(L_89);
				float L_90;
				L_90 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_89, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
				(&V_5)->___z_4 = L_90;
				goto IL_01f2_1;
			}

IL_01bb_1:
			{
				// positionDelta = new Vector3(
				//     ctrlSettings.MoveHorizontal.action.ReadValue<float>(),
				//     ctrlSettings.MoveVertical.action.ReadValue<float>(),
				//     ctrlSettings.MoveDepth.action.ReadValue<float>());
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_91 = V_2;
				NullCheck(L_91);
				InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_92;
				L_92 = ControllerSimulationSettings_get_MoveHorizontal_m0922CB519513571DBD470E91B6028A3B3B321C04_inline(L_91, NULL);
				NullCheck(L_92);
				InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_93;
				L_93 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_92, NULL);
				NullCheck(L_93);
				float L_94;
				L_94 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_93, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_95 = V_2;
				NullCheck(L_95);
				InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_96;
				L_96 = ControllerSimulationSettings_get_MoveVertical_m112D1DA278DE8D1D5ECE1671086DB4B426D01BE9_inline(L_95, NULL);
				NullCheck(L_96);
				InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_97;
				L_97 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_96, NULL);
				NullCheck(L_97);
				float L_98;
				L_98 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_97, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_99 = V_2;
				NullCheck(L_99);
				InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_100;
				L_100 = ControllerSimulationSettings_get_MoveDepth_m4FCCFBBE741A32CCA36853DB3DDA55907A4A5706_inline(L_99, NULL);
				NullCheck(L_100);
				InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_101;
				L_101 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_100, NULL);
				NullCheck(L_101);
				float L_102;
				L_102 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_101, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
				Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_5), L_94, L_98, L_102, NULL);
			}

IL_01f2_1:
			{
				// Quaternion rotationDelta = NoRotation;
				il2cpp_codegen_runtime_class_init_inline(InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675_il2cpp_TypeInfo_var);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_103 = ((InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675_StaticFields*)il2cpp_codegen_static_fields_for(InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675_il2cpp_TypeInfo_var))->___NoRotation_24;
				V_6 = L_103;
				// if (ctrlSettings.FaceTheCamera.action.WasPerformedThisFrame())
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_104 = V_2;
				NullCheck(L_104);
				InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_105;
				L_105 = ControllerSimulationSettings_get_FaceTheCamera_m5400C65F1E118F4FE183592EA203EDBA86528105_inline(L_104, NULL);
				NullCheck(L_105);
				InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_106;
				L_106 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_105, NULL);
				NullCheck(L_106);
				bool L_107;
				L_107 = InputAction_WasPerformedThisFrame_m6EB7F845E109BB397BA5DB84FE80CB28F399D62E(L_106, NULL);
				if (!L_107)
				{
					goto IL_0220_1;
				}
			}
			{
				// ctrlSettings.RotationMode = (ctrlSettings.RotationMode == ControllerRotationMode.FaceCamera) ?
				//     ControllerRotationMode.CameraAligned : ControllerRotationMode.FaceCamera;
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_108 = V_2;
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_109 = V_2;
				NullCheck(L_109);
				int32_t L_110;
				L_110 = ControllerSimulationSettings_get_RotationMode_mCA783C64759669963A1677AD0CE75D1BE4787D74_inline(L_109, NULL);
				G_B29_0 = L_108;
				if ((((int32_t)L_110) == ((int32_t)1)))
				{
					G_B30_0 = L_108;
					goto IL_0218_1;
				}
			}
			{
				G_B31_0 = 1;
				G_B31_1 = G_B29_0;
				goto IL_0219_1;
			}

IL_0218_1:
			{
				G_B31_0 = 2;
				G_B31_1 = G_B30_0;
			}

IL_0219_1:
			{
				NullCheck(G_B31_1);
				ControllerSimulationSettings_set_RotationMode_m4706B2477E95051691A95A5E5B9160625EE581FA_inline(G_B31_1, G_B31_0, NULL);
				goto IL_027a_1;
			}

IL_0220_1:
			{
				// rotationDelta = Quaternion.Euler(
				//     // Unity appears to invert the controller pitch by default (move forward to look down)
				//     ctrlSettings.Pitch.action.ReadValue<float>() * (!ctrlSettings.InvertPitch ? -1 : 1),
				//     ctrlSettings.Yaw.action.ReadValue<float>(),
				//     ctrlSettings.Roll.action.ReadValue<float>());
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_111 = V_2;
				NullCheck(L_111);
				InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_112;
				L_112 = ControllerSimulationSettings_get_Pitch_mCC9FE7335ADA7D51AD11B0939929136A8D635B8E_inline(L_111, NULL);
				NullCheck(L_112);
				InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_113;
				L_113 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_112, NULL);
				NullCheck(L_113);
				float L_114;
				L_114 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_113, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_115 = V_2;
				NullCheck(L_115);
				bool L_116;
				L_116 = ControllerSimulationSettings_get_InvertPitch_mC4FF89BB52D19DB6FEA23CB15526DBD4EF13E7E1_inline(L_115, NULL);
				G_B33_0 = L_114;
				if (!L_116)
				{
					G_B34_0 = L_114;
					goto IL_023b_1;
				}
			}
			{
				G_B35_0 = 1;
				G_B35_1 = G_B33_0;
				goto IL_023c_1;
			}

IL_023b_1:
			{
				G_B35_0 = (-1);
				G_B35_1 = G_B34_0;
			}

IL_023c_1:
			{
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_117 = V_2;
				NullCheck(L_117);
				InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_118;
				L_118 = ControllerSimulationSettings_get_Yaw_m1124B86D30F262A0A98390ACEE5CCE36A953BD1F_inline(L_117, NULL);
				NullCheck(L_118);
				InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_119;
				L_119 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_118, NULL);
				NullCheck(L_119);
				float L_120;
				L_120 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_119, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_121 = V_2;
				NullCheck(L_121);
				InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_122;
				L_122 = ControllerSimulationSettings_get_Roll_m7ABA3D58669C859D99D840B71CAFA4167B660E12_inline(L_121, NULL);
				NullCheck(L_122);
				InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_123;
				L_123 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_122, NULL);
				NullCheck(L_123);
				float L_124;
				L_124 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_123, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_125;
				L_125 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(((float)il2cpp_codegen_multiply(G_B35_1, ((float)G_B35_0))), L_120, L_124, NULL);
				V_6 = L_125;
				// if (rotationDelta != NoRotation) { ctrlSettings.RotationMode = ControllerRotationMode.UserControl; }
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_126 = V_6;
				il2cpp_codegen_runtime_class_init_inline(InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675_il2cpp_TypeInfo_var);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_127 = ((InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675_StaticFields*)il2cpp_codegen_static_fields_for(InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675_il2cpp_TypeInfo_var))->___NoRotation_24;
				bool L_128;
				L_128 = Quaternion_op_Inequality_mC1922F160B14F6F404E46FFCC10B282D913BE354_inline(L_126, L_127, NULL);
				if (!L_128)
				{
					goto IL_027a_1;
				}
			}
			{
				// if (rotationDelta != NoRotation) { ctrlSettings.RotationMode = ControllerRotationMode.UserControl; }
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_129 = V_2;
				NullCheck(L_129);
				ControllerSimulationSettings_set_RotationMode_m4706B2477E95051691A95A5E5B9160625EE581FA_inline(L_129, 0, NULL);
			}

IL_027a_1:
			{
				// ControllerControls controls = GetControllerControls(handedness);
				int32_t L_130 = ___handedness0;
				ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* L_131;
				L_131 = InputSimulator_GetControllerControls_mF00CF651F06E315881C69F50FD741611360C6702(__this, L_130, NULL);
				V_7 = L_131;
				// ref float triggerSmoothVelocity = ref (handedness == Handedness.Left ? ref leftTriggerSmoothVelocity : ref rightTriggerSmoothVelocity);
				int32_t L_132 = ___handedness0;
				if ((((int32_t)L_132) == ((int32_t)1)))
				{
					goto IL_028f_1;
				}
			}
			{
				float* L_133 = (&__this->___rightTriggerSmoothVelocity_16);
				G_B40_0 = L_133;
				goto IL_0295_1;
			}

IL_028f_1:
			{
				float* L_134 = (&__this->___leftTriggerSmoothVelocity_14);
				G_B40_0 = L_134;
			}

IL_0295_1:
			{
				V_8 = G_B40_0;
				// controls.TriggerAxis = Mathf.SmoothDamp(controls.TriggerAxis,
				//                                         ctrlSettings.TriggerButton.action.IsPressed() ? 1 : 0,
				//                                         ref triggerSmoothVelocity,
				//                                         triggerSmoothTime);
				ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* L_135 = V_7;
				ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* L_136 = V_7;
				NullCheck(L_136);
				float L_137;
				L_137 = ControllerControls_get_TriggerAxis_mAA83674A37B52741586366DFDF20DCCA4A20C723_inline(L_136, NULL);
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_138 = V_2;
				NullCheck(L_138);
				InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_139;
				L_139 = ControllerSimulationSettings_get_TriggerButton_m43AF2173D044F41B57335C100FB78FB8CF694279_inline(L_138, NULL);
				NullCheck(L_139);
				InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_140;
				L_140 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_139, NULL);
				NullCheck(L_140);
				bool L_141;
				L_141 = InputAction_IsPressed_m40DF920F0E7D18170B62666DA2A2131AD336A301(L_140, NULL);
				G_B41_0 = L_137;
				G_B41_1 = L_135;
				if (L_141)
				{
					G_B42_0 = L_137;
					G_B42_1 = L_135;
					goto IL_02b5_1;
				}
			}
			{
				G_B43_0 = 0;
				G_B43_1 = G_B41_0;
				G_B43_2 = G_B41_1;
				goto IL_02b6_1;
			}

IL_02b5_1:
			{
				G_B43_0 = 1;
				G_B43_1 = G_B42_0;
				G_B43_2 = G_B42_1;
			}

IL_02b6_1:
			{
				float* L_142 = V_8;
				float L_143 = __this->___triggerSmoothTime_22;
				float L_144;
				L_144 = Mathf_SmoothDamp_m4B8C5AACFEBF58E93FF2A33832C27EF1E5AF7AFD_inline(G_B43_1, ((float)G_B43_0), L_142, L_143, NULL);
				NullCheck(G_B43_2);
				ControllerControls_set_TriggerAxis_mD0D7D57F368F0536D7A9D87D1448820AF15D8014_inline(G_B43_2, L_144, NULL);
				// if (shouldUseTriggerButton)
				bool L_145 = __this->___shouldUseTriggerButton_21;
				if (!L_145)
				{
					goto IL_02e8_1;
				}
			}
			{
				// controls.TriggerButton = ctrlSettings.TriggerButton.action.IsPressed();
				ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* L_146 = V_7;
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_147 = V_2;
				NullCheck(L_147);
				InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_148;
				L_148 = ControllerSimulationSettings_get_TriggerButton_m43AF2173D044F41B57335C100FB78FB8CF694279_inline(L_147, NULL);
				NullCheck(L_148);
				InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_149;
				L_149 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_148, NULL);
				NullCheck(L_149);
				bool L_150;
				L_150 = InputAction_IsPressed_m40DF920F0E7D18170B62666DA2A2131AD336A301(L_149, NULL);
				NullCheck(L_146);
				ControllerControls_set_TriggerButton_m7E893FD78232307F870D8570D2C78876937C433A_inline(L_146, L_150, NULL);
			}

IL_02e8_1:
			{
				// controls.GripButton = ctrlSettings.GripButton.action.IsPressed();
				ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* L_151 = V_7;
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_152 = V_2;
				NullCheck(L_152);
				InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_153;
				L_153 = ControllerSimulationSettings_get_GripButton_mE5FFCDC79BD35FF21329D83D008241E3974AC580_inline(L_152, NULL);
				NullCheck(L_153);
				InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_154;
				L_154 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_153, NULL);
				NullCheck(L_154);
				bool L_155;
				L_155 = InputAction_IsPressed_m40DF920F0E7D18170B62666DA2A2131AD336A301(L_154, NULL);
				NullCheck(L_151);
				ControllerControls_set_GripButton_m528D53A30925D95048E9BD8125BACCD857AE79B0_inline(L_151, L_155, NULL);
				// if (ctrlSettings.SimulationMode == ControllerSimulationMode.MotionController)
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_156 = V_2;
				NullCheck(L_156);
				int32_t L_157;
				L_157 = ControllerSimulationSettings_get_SimulationMode_mFCB8DB4BA892D80F9F69BBD8EC9EC1380D973F23_inline(L_156, NULL);
				// controls.IsTracked = ctrlSettings.ToggleState || isTracked;
				ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* L_158 = V_7;
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_159 = V_2;
				NullCheck(L_159);
				bool L_160;
				L_160 = ControllerSimulationSettings_get_ToggleState_m996B8AD6C291D144DC187728FF38D04EFBC4AD9B_inline(L_159, NULL);
				bool L_161 = V_3;
				NullCheck(L_158);
				ControllerControls_set_IsTracked_m6F507D29A12A7F0EE595A466433C231E2AB848F0_inline(L_158, (bool)((int32_t)((int32_t)L_160|(int32_t)L_161)), NULL);
				// controls.TrackingState = controls.IsTracked ?
				//     (InputTrackingState.Position | InputTrackingState.Rotation) : InputTrackingState.None;
				ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* L_162 = V_7;
				ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* L_163 = V_7;
				NullCheck(L_163);
				bool L_164;
				L_164 = ControllerControls_get_IsTracked_mD1A58B3426C7E7C676034B5AE61ED4A556D05717_inline(L_163, NULL);
				G_B46_0 = L_162;
				if (L_164)
				{
					G_B47_0 = L_162;
					goto IL_0325_1;
				}
			}
			{
				G_B48_0 = 0;
				G_B48_1 = G_B46_0;
				goto IL_0326_1;
			}

IL_0325_1:
			{
				G_B48_0 = 3;
				G_B48_1 = G_B47_0;
			}

IL_0326_1:
			{
				NullCheck(G_B48_1);
				ControllerControls_set_TrackingState_m763D926A40A0131C57ADB5498FF54B7BDCB8C21A_inline(G_B48_1, G_B48_0, NULL);
				// bool shouldUseRayVector = ctrlSettings.SimulationMode == ControllerSimulationMode.ArticulatedHand;
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_165 = V_2;
				NullCheck(L_165);
				int32_t L_166;
				L_166 = ControllerSimulationSettings_get_SimulationMode_mFCB8DB4BA892D80F9F69BBD8EC9EC1380D973F23_inline(L_165, NULL);
				V_9 = (bool)((((int32_t)L_166) == ((int32_t)1))? 1 : 0);
				// Vector3 anchorPosition = simCtrl.WorldPosition;
				SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166** L_167 = V_4;
				SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* L_168 = *((SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166**)L_167);
				NullCheck(L_168);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_169;
				L_169 = SimulatedController_get_WorldPosition_m4A8B742CC61D286E000603412B66DAAF67865052(L_168, NULL);
				V_10 = L_169;
				// switch (ctrlSettings.AnchorPoint)
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_170 = V_2;
				NullCheck(L_170);
				int32_t L_171;
				L_171 = ControllerSimulationSettings_get_AnchorPoint_m87534173C5F618262C05CED70347851006BE076D_inline(L_170, NULL);
				V_14 = L_171;
				int32_t L_172 = V_14;
				switch (L_172)
				{
					case 0:
					{
						goto IL_0361_1;
					}
					case 1:
					{
						goto IL_0383_1;
					}
					case 2:
					{
						goto IL_036d_1;
					}
					case 3:
					{
						goto IL_0379_1;
					}
				}
			}
			{
				goto IL_0383_1;
			}

IL_0361_1:
			{
				// anchorPosition = simCtrl.WorldPosition;
				SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166** L_173 = V_4;
				SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* L_174 = *((SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166**)L_173);
				NullCheck(L_174);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_175;
				L_175 = SimulatedController_get_WorldPosition_m4A8B742CC61D286E000603412B66DAAF67865052(L_174, NULL);
				V_10 = L_175;
				// break;
				goto IL_0383_1;
			}

IL_036d_1:
			{
				// anchorPosition = simCtrl.PokePosition;
				SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166** L_176 = V_4;
				SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* L_177 = *((SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166**)L_176);
				NullCheck(L_177);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_178;
				L_178 = SimulatedController_get_PokePosition_m53FFA21CF8928D3061ED0063F61695E64EFD4AC0(L_177, NULL);
				V_10 = L_178;
				// break;
				goto IL_0383_1;
			}

IL_0379_1:
			{
				// anchorPosition = simCtrl.GrabPosition;
				SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166** L_179 = V_4;
				SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* L_180 = *((SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166**)L_179);
				NullCheck(L_180);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_181;
				L_181 = SimulatedController_get_GrabPosition_mA02B7E4B7426638E1E4B72C8AEB129BC751D8681(L_180, NULL);
				V_10 = L_181;
			}

IL_0383_1:
			{
				// simCtrl.UpdateRelative(
				//     positionDelta,
				//     rotationDelta,
				//     controls,
				//     ctrlSettings.RotationMode,
				//     shouldUseRayVector,
				//     anchorPosition,
				//     ctrlSettings.IsMovementSmoothed,
				//     ctrlSettings.DepthSensitivity,
				//     ctrlSettings.JitterStrength);
				SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166** L_182 = V_4;
				SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* L_183 = *((SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166**)L_182);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_184 = V_5;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_185 = V_6;
				ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* L_186 = V_7;
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_187 = V_2;
				NullCheck(L_187);
				int32_t L_188;
				L_188 = ControllerSimulationSettings_get_RotationMode_mCA783C64759669963A1677AD0CE75D1BE4787D74_inline(L_187, NULL);
				bool L_189 = V_9;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_190 = V_10;
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_191 = V_2;
				NullCheck(L_191);
				bool L_192;
				L_192 = ControllerSimulationSettings_get_IsMovementSmoothed_m1AA299E57D5D88E110AB648A9014DEC264AA0C8A_inline(L_191, NULL);
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_193 = V_2;
				NullCheck(L_193);
				float L_194;
				L_194 = ControllerSimulationSettings_get_DepthSensitivity_mBA7F96F9DE18F6995B0E2C7621DC42034710BE7E_inline(L_193, NULL);
				ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* L_195 = V_2;
				NullCheck(L_195);
				float L_196;
				L_196 = ControllerSimulationSettings_get_JitterStrength_mF2587C6E9D066E167BECFCB0653C7F4670F5AAA0_inline(L_195, NULL);
				NullCheck(L_183);
				SimulatedController_UpdateRelative_m32B5F0853A356345684D8EDB06B74E501796DFA0(L_183, L_184, L_185, L_186, L_188, L_189, L_190, L_192, L_194, L_196, NULL);
				// }
				goto IL_03bd;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03bd:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::CameraRelativeToScreen(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 InputSimulator_CameraRelativeToScreen_m080ECF6AB41836C877ED7C60CD8BB3B5195C0580 (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cameraRelativePos0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 worldPos = CameraCache.Main.transform.TransformPoint(cameraRelativePos);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = CameraCache_get_Main_mC37E77C91369434A080ED4B3EDBE4F0DA7041910(NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___cameraRelativePos0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_1, L_2, NULL);
		V_0 = L_3;
		// return CameraCache.Main.WorldToScreenPoint(worldPos);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = CameraCache_get_Main_mC37E77C91369434A080ED4B3EDBE4F0DA7041910(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3(L_4, L_5, NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::ScreenToCameraRelative(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 InputSimulator_ScreenToCameraRelative_m37CD281855C4ABE1C6FE89824E8C30AA807DE6C3 (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___screenPos0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 worldPos = CameraCache.Main.ScreenToWorldPoint(screenPos);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = CameraCache_get_Main_mC37E77C91369434A080ED4B3EDBE4F0DA7041910(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___screenPos0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_0, L_1, NULL);
		V_0 = L_2;
		// return CameraCache.Main.transform.InverseTransformPoint(worldPos);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = CameraCache_get_Main_mC37E77C91369434A080ED4B3EDBE4F0DA7041910(NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_4, L_5, NULL);
		return L_6;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::IsSupportedHandedness(Microsoft.MixedReality.Toolkit.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputSimulator_IsSupportedHandedness_m9FFEEA47CD6195E18DFD00E6016EEA0E8D2CE6EA (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, int32_t ___handedness0, const RuntimeMethod* method) 
{
	{
		// return !((handedness != Handedness.Left) && (handedness != Handedness.Right));
		int32_t L_0 = ___handedness0;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = ___handedness0;
		return (bool)((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
	}

IL_0009:
	{
		return (bool)1;
	}
}
// Microsoft.MixedReality.Toolkit.Input.Simulation.SimulatedController& Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::GetControllerReference(Microsoft.MixedReality.Toolkit.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166** InputSimulator_GetControllerReference_mED16A02E4AE69FAF9EE4BC07B00F7785A55BDA6E (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, int32_t ___handedness0, const RuntimeMethod* method) 
{
	{
		// return ref (handedness == Handedness.Left ? ref simulatedLeftController : ref simulatedRightController);
		int32_t L_0 = ___handedness0;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_000b;
		}
	}
	{
		SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166** L_1 = (&__this->___simulatedRightController_15);
		return L_1;
	}

IL_000b:
	{
		SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166** L_2 = (&__this->___simulatedLeftController_13);
		return L_2;
	}
}
// Microsoft.MixedReality.Toolkit.Input.Simulation.ControllerControls Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::GetControllerControls(Microsoft.MixedReality.Toolkit.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* InputSimulator_GetControllerControls_mF00CF651F06E315881C69F50FD741611360C6702 (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, int32_t ___handedness0, const RuntimeMethod* method) 
{
	{
		// return handedness == Handedness.Left ? leftControllerControls : rightControllerControls;
		int32_t L_0 = ___handedness0;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_000b;
		}
	}
	{
		ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* L_1 = __this->___rightControllerControls_18;
		return L_1;
	}

IL_000b:
	{
		ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* L_2 = __this->___leftControllerControls_17;
		return L_2;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::ApplyControlSet(Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulatorControlSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSimulator_ApplyControlSet_m811A7EC69BF837122E48AFB2F9C7AC8BD2B62ADC (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, int32_t ___set0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisInputActionManager_tCB367C1814B9264CDE8FA04AA916642BB2887D21_m7CDC318799E29AEB5F00C9BEF4254FADBF3EA351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m57C2321B0C617CE2B157DD9A43918736AB1B0855_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB6E9EEFB6EA8785251C03D5FC740264070E9202B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m386E965F0E7A0EAFAED17B2CDDD4EC5FCFC21F5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral178123D7D73B614FEB74C5215DFCEFE81048AC7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21B609899B7BE6142B6A72A31E93EDAEE711F9E6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (actionManager == null)
		InputActionManager_tCB367C1814B9264CDE8FA04AA916642BB2887D21* L_0 = __this->___actionManager_26;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		// actionManager = GetComponent<InputActionManager>();
		InputActionManager_tCB367C1814B9264CDE8FA04AA916642BB2887D21* L_2;
		L_2 = Component_GetComponent_TisInputActionManager_tCB367C1814B9264CDE8FA04AA916642BB2887D21_m7CDC318799E29AEB5F00C9BEF4254FADBF3EA351(__this, Component_GetComponent_TisInputActionManager_tCB367C1814B9264CDE8FA04AA916642BB2887D21_m7CDC318799E29AEB5F00C9BEF4254FADBF3EA351_RuntimeMethod_var);
		__this->___actionManager_26 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___actionManager_26), (void*)L_2);
		// if (actionManager == null)
		InputActionManager_tCB367C1814B9264CDE8FA04AA916642BB2887D21* L_3 = __this->___actionManager_26;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// Debug.LogError("[InputSimulator] No InputActionManager found - unable to apply control set selection.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral178123D7D73B614FEB74C5215DFCEFE81048AC7E, NULL);
		// return;
		return;
	}

IL_0033:
	{
		// int assetCount = actionManager.actionAssets.Count;
		InputActionManager_tCB367C1814B9264CDE8FA04AA916642BB2887D21* L_5 = __this->___actionManager_26;
		NullCheck(L_5);
		List_1_t3FD220D91A685A9242170EEF27EC5C0C50F2B5DF* L_6;
		L_6 = InputActionManager_get_actionAssets_mB7B35CC08659DF051DE9FC4968B973BF399CDEFF_inline(L_5, NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m57C2321B0C617CE2B157DD9A43918736AB1B0855_inline(L_6, List_1_get_Count_m57C2321B0C617CE2B157DD9A43918736AB1B0855_RuntimeMethod_var);
		V_0 = L_7;
		// if (assetCount == 0)
		int32_t L_8 = V_0;
		if (L_8)
		{
			goto IL_0052;
		}
	}
	{
		// Debug.LogError("[InputSimulator] InputActionManager has no registered InputActionAssets - unable to apply control set selection.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral21B609899B7BE6142B6A72A31E93EDAEE711F9E6, NULL);
		// return;
		return;
	}

IL_0052:
	{
		// for (int i = 0; i < assetCount; i++)
		V_1 = 0;
		goto IL_008c;
	}

IL_0056:
	{
		// actionManager.actionAssets[i].bindingMask = new InputBinding() { groups = GetControlSetName(set) };
		InputActionManager_tCB367C1814B9264CDE8FA04AA916642BB2887D21* L_9 = __this->___actionManager_26;
		NullCheck(L_9);
		List_1_t3FD220D91A685A9242170EEF27EC5C0C50F2B5DF* L_10;
		L_10 = InputActionManager_get_actionAssets_mB7B35CC08659DF051DE9FC4968B973BF399CDEFF_inline(L_9, NULL);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_12;
		L_12 = List_1_get_Item_mB6E9EEFB6EA8785251C03D5FC740264070E9202B(L_10, L_11, List_1_get_Item_mB6E9EEFB6EA8785251C03D5FC740264070E9202B_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_2), sizeof(InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5));
		int32_t L_13 = ___set0;
		String_t* L_14;
		L_14 = InputSimulator_GetControlSetName_m83BB30FBECFD1ADD76F986044693C04133683157(__this, L_13, NULL);
		InputBinding_set_groups_mF2767924C74B69A77893A53B9A49A42D101E59E0_inline((&V_2), L_14, NULL);
		InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 L_15 = V_2;
		Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Nullable_1__ctor_m386E965F0E7A0EAFAED17B2CDDD4EC5FCFC21F5F((&L_16), L_15, /*hidden argument*/Nullable_1__ctor_m386E965F0E7A0EAFAED17B2CDDD4EC5FCFC21F5F_RuntimeMethod_var);
		NullCheck(L_12);
		InputActionAsset_set_bindingMask_mD621370B859495F593CBE28019D84F44922C94A5(L_12, L_16, NULL);
		// for (int i = 0; i < assetCount; i++)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_008c:
	{
		// for (int i = 0; i < assetCount; i++)
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0056;
		}
	}
	{
		// }
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::GetControlSetName(Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulatorControlSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputSimulator_GetControlSetName_m83BB30FBECFD1ADD76F986044693C04133683157 (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, int32_t ___set0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisRuntimeObject_m9A7C2BF942D2CE1640896A41290BBD682568B6C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSimulatorControlSet_tEBDDDFFE6FE73B95955AEB7CC880C98CEBC026F7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSimulatorControlSet_tEBDDDFFE6FE73B95955AEB7CC880C98CEBC026F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InspectorNameAttribute_t30287A92B113253B9E22924DD6FC4C7007545497_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InspectorNameAttribute_t30287A92B113253B9E22924DD6FC4C7007545497_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Type t = typeof(InputSimulatorControlSet);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (InputSimulatorControlSet_tEBDDDFFE6FE73B95955AEB7CC880C98CEBC026F7_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		// MemberInfo[] mInfos = t.GetMember(set.ToString());
		Il2CppFakeBox<int32_t> L_2(InputSimulatorControlSet_tEBDDDFFE6FE73B95955AEB7CC880C98CEBC026F7_il2cpp_TypeInfo_var, (&___set0));
		String_t* L_3;
		L_3 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_2), NULL);
		NullCheck(L_1);
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_4;
		L_4 = Type_GetMember_mC4456D1BA93A44CF021059F6D46237C0740A6229(L_1, L_3, NULL);
		// InspectorNameAttribute nameAttrib = mInfos[0].GetCustomAttributes(typeof(InspectorNameAttribute), false).FirstOrDefault() as InspectorNameAttribute;
		NullCheck(L_4);
		int32_t L_5 = 0;
		MemberInfo_t* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (InspectorNameAttribute_t30287A92B113253B9E22924DD6FC4C7007545497_0_0_0_var) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		NullCheck(L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9;
		L_9 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(14 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_6, L_8, (bool)0);
		RuntimeObject* L_10;
		L_10 = Enumerable_FirstOrDefault_TisRuntimeObject_m9A7C2BF942D2CE1640896A41290BBD682568B6C8((RuntimeObject*)L_9, Enumerable_FirstOrDefault_TisRuntimeObject_m9A7C2BF942D2CE1640896A41290BBD682568B6C8_RuntimeMethod_var);
		// return nameAttrib.displayName;
		NullCheck(((InspectorNameAttribute_t30287A92B113253B9E22924DD6FC4C7007545497*)IsInstClass((RuntimeObject*)L_10, InspectorNameAttribute_t30287A92B113253B9E22924DD6FC4C7007545497_il2cpp_TypeInfo_var)));
		String_t* L_11 = ((InspectorNameAttribute_t30287A92B113253B9E22924DD6FC4C7007545497*)IsInstClass((RuntimeObject*)L_10, InspectorNameAttribute_t30287A92B113253B9E22924DD6FC4C7007545497_il2cpp_TypeInfo_var))->___displayName_0;
		return L_11;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSimulator__ctor_m54489972B2907E83A2BE8E9084F7FA61078E75F2 (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool isSimulating = true;
		__this->___isSimulating_5 = (bool)1;
		// private ControllerControls leftControllerControls = new ControllerControls();
		ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* L_0 = (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147*)il2cpp_codegen_object_new(ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ControllerControls__ctor_mA5E89E7FBBC219799AAA33B945AE61E1094F5613(L_0, NULL);
		__this->___leftControllerControls_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___leftControllerControls_17), (void*)L_0);
		// private ControllerControls rightControllerControls = new ControllerControls();
		ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* L_1 = (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147*)il2cpp_codegen_object_new(ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ControllerControls__ctor_mA5E89E7FBBC219799AAA33B945AE61E1094F5613(L_1, NULL);
		__this->___rightControllerControls_18 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rightControllerControls_18), (void*)L_1);
		// private float triggerSmoothTime = 0.1f;
		__this->___triggerSmoothTime_22 = (0.100000001f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Simulation.InputSimulator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSimulator__cctor_m733D4F07417151FD49DAE44479ED34EC78C90318 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handedness_t3871B818901E431A761DF26D8F0D4372912651EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CDF88C8EA618BD6520076A3ACC409488BEFEC9E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48517603483B41CA54704BDF7E24E88EB3B9A5D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69578E6B53A7FA77E19016F5E5EF8782D0F73F08);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE44D299BFBA79BB0B8038A922ED28383E3A79BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9D044E39F717E5D5E577F9DB481EE657960760A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdatePerfMarker =
		//     new ProfilerMarker("[MRTK] InputSimulator.Update");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_0), _stringLiteral48517603483B41CA54704BDF7E24E88EB3B9A5D0, /*hidden argument*/NULL);
		((InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675_StaticFields*)il2cpp_codegen_static_fields_for(InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675_il2cpp_TypeInfo_var))->___UpdatePerfMarker_4 = L_0;
		// private static readonly ProfilerMarker UpdateSimulatedCameraPerfMarker =
		//     new ProfilerMarker("[MRTK] InputSimulator.UpdateSimulatedCamera");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_1), _stringLiteralE9D044E39F717E5D5E577F9DB481EE657960760A, /*hidden argument*/NULL);
		((InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675_StaticFields*)il2cpp_codegen_static_fields_for(InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675_il2cpp_TypeInfo_var))->___UpdateSimulatedCameraPerfMarker_9 = L_1;
		// private static readonly ProfilerMarker UpdateSimulatedEyesPerfMarker =
		//     new ProfilerMarker("[MRTK] InputSimulator.UpdateSimulatedEyes");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_2), _stringLiteral69578E6B53A7FA77E19016F5E5EF8782D0F73F08, /*hidden argument*/NULL);
		((InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675_StaticFields*)il2cpp_codegen_static_fields_for(InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675_il2cpp_TypeInfo_var))->___UpdateSimulatedEyesPerfMarker_12 = L_2;
		// private static readonly ProfilerMarker UpdateSimulatedControllerPerfMarker =
		//     new ProfilerMarker("[MRTK] InputSimulator.UpdateSimulatedController");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_3), _stringLiteralCE44D299BFBA79BB0B8038A922ED28383E3A79BB, /*hidden argument*/NULL);
		((InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675_StaticFields*)il2cpp_codegen_static_fields_for(InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675_il2cpp_TypeInfo_var))->___UpdateSimulatedControllerPerfMarker_23 = L_3;
		// private static readonly Quaternion NoRotation = Quaternion.Euler(0f, 0f, 0f);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), (0.0f), NULL);
		((InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675_StaticFields*)il2cpp_codegen_static_fields_for(InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675_il2cpp_TypeInfo_var))->___NoRotation_24 = L_4;
		// private static readonly string UnsupportedHandednessLog = $"Unsupported Handedness. Must be {Handedness.Left} or {Handedness.Right}";
		int32_t L_5 = 1;
		RuntimeObject* L_6 = Box(Handedness_t3871B818901E431A761DF26D8F0D4372912651EC_il2cpp_TypeInfo_var, &L_5);
		int32_t L_7 = 2;
		RuntimeObject* L_8 = Box(Handedness_t3871B818901E431A761DF26D8F0D4372912651EC_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral0CDF88C8EA618BD6520076A3ACC409488BEFEC9E, L_6, L_8, NULL);
		((InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675_StaticFields*)il2cpp_codegen_static_fields_for(InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675_il2cpp_TypeInfo_var))->___UnsupportedHandednessLog_25 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675_StaticFields*)il2cpp_codegen_static_fields_for(InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675_il2cpp_TypeInfo_var))->___UnsupportedHandednessLog_25), (void*)L_9);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, const RuntimeMethod* method) 
{
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->___m_Ptr_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AutoScope__ctor_m7F63A273E382CB6328736B6E7F321DDFA40EA9E3_inline((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___m_Ptr_0;
		ProfilerUnsafeUtility_EndSample_mE2F7A0DB4C52105F7CD135ED8816A2BB98E663CC(L_0, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		intptr_t L_1;
		L_1 = ProfilerUnsafeUtility_CreateMarker_m27DDE00D41B95677982DBFCE074D45B79E50C7CC(L_0, (uint16_t)1, 0, 0, NULL);
		__this->___m_Ptr_0 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MRTKSimulatedController_set_PointerPosition_mA54541958BCED4DEA69A08CA0126E90DEF6C31CE_inline (MRTKSimulatedController_tBE8AB611B95B22BE5DD7115B4AFDE3020D7A0100* __this, Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3Control PointerPosition { get; private set; }
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_0 = ___value0;
		__this->___U3CPointerPositionU3Ek__BackingField_60 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPointerPositionU3Ek__BackingField_60), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MRTKSimulatedController_set_PointerRotation_m042BD059317F8763C54E4B52F19F0DD4D54DE98E_inline (MRTKSimulatedController_tBE8AB611B95B22BE5DD7115B4AFDE3020D7A0100* __this, QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___value0, const RuntimeMethod* method) 
{
	{
		// public QuaternionControl PointerRotation { get; private set; }
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_0 = ___value0;
		__this->___U3CPointerRotationU3Ek__BackingField_61 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPointerRotationU3Ek__BackingField_61), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SimulatedController_get_Handedness_m68D073A06BFF58BEB8C9822544006CBD1F47F2F3_inline (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, const RuntimeMethod* method) 
{
	{
		// public Handedness Handedness { get; private set; }
		int32_t L_0 = __this->___U3CHandednessU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimulatedController_set_Handedness_m88D8188468218D53CEE7EDA12C4BD1D08213BB21_inline (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public Handedness Handedness { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CHandednessU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimulatedController_set_SimulatedInputPosition_mA79699A70D3D3AD3799BDBC036AC99530419F610_inline (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 SimulatedInputPosition { get; private set; } = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CSimulatedInputPositionU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ControllerControls_get_IsTracked_mD1A58B3426C7E7C676034B5AE61ED4A556D05717_inline (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsTracked { get; internal set; }
		bool L_0 = __this->___U3CIsTrackedU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SimulatedController_get_SimulatedInputPosition_mCB0FB258133F3EEE5B8FC02DC8950C2364EB79FA_inline (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 SimulatedInputPosition { get; private set; } = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CSimulatedInputPositionU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SimulatedController_get_SimulatedInputRotation_m07F06D7114979F81E1E9FCDC6CF0A1B64948F7ED_inline (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, const RuntimeMethod* method) 
{
	{
		// public Quaternion SimulatedInputRotation { get; private set; } = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___U3CSimulatedInputRotationU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimulatedController_set_SimulatedInputRotation_m6CA56134DC29C54504D5FAE7187AFF149905A1EC_inline (SimulatedController_t30B96C0859467FD284ED4357EE10BAFF572AB166* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) 
{
	{
		// public Quaternion SimulatedInputRotation { get; private set; } = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___value0;
		__this->___U3CSimulatedInputRotationU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ControllerControls_get_TrackingState_mA09795EE969CE8F9110FBFD76FF5F52C0485D5D4_inline (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, const RuntimeMethod* method) 
{
	{
		// public InputTrackingState TrackingState { get; internal set; }
		uint32_t L_0 = __this->___U3CTrackingStateU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ControllerControls_get_TriggerAxis_mAA83674A37B52741586366DFDF20DCCA4A20C723_inline (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, const RuntimeMethod* method) 
{
	{
		// public float TriggerAxis { get; internal set; }
		float L_0 = __this->___U3CTriggerAxisU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ControllerControls_get_GripAxis_m88801EF3C9A9EB18C81921B8199E34F1464C3ABC_inline (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, const RuntimeMethod* method) 
{
	{
		// public float GripAxis { get; internal set; }
		float L_0 = __this->___U3CGripAxisU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ControllerControls_get_TriggerButton_mF6DED59D59E2112AFE4F409EA76EA79683664379_inline (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, const RuntimeMethod* method) 
{
	{
		// public bool TriggerButton { get; internal set; }
		bool L_0 = __this->___U3CTriggerButtonU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ControllerControls_get_GripButton_mDCB15538E263CB04D75CDD1080A003D1305B1442_inline (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, const RuntimeMethod* method) 
{
	{
		// public bool GripButton { get; internal set; }
		bool L_0 = __this->___U3CGripButtonU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ControllerControls_set_IsTracked_m6F507D29A12A7F0EE595A466433C231E2AB848F0_inline (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsTracked { get; internal set; }
		bool L_0 = ___value0;
		__this->___U3CIsTrackedU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ControllerControls_set_TrackingState_m763D926A40A0131C57ADB5498FF54B7BDCB8C21A_inline (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public InputTrackingState TrackingState { get; internal set; }
		uint32_t L_0 = ___value0;
		__this->___U3CTrackingStateU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ControllerControls_set_TriggerAxis_mD0D7D57F368F0536D7A9D87D1448820AF15D8014_inline (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float TriggerAxis { get; internal set; }
		float L_0 = ___value0;
		__this->___U3CTriggerAxisU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ControllerControls_set_TriggerButton_m7E893FD78232307F870D8570D2C78876937C433A_inline (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool TriggerButton { get; internal set; }
		bool L_0 = ___value0;
		__this->___U3CTriggerButtonU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ControllerControls_set_GripAxis_mBC77BFB2B3616949566E840BE6663EDE9B6F6ABA_inline (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float GripAxis { get; internal set; }
		float L_0 = ___value0;
		__this->___U3CGripAxisU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ControllerControls_set_GripButton_m528D53A30925D95048E9BD8125BACCD857AE79B0_inline (ControllerControls_tD0FD3D388668A829BA1817CB36D4EB66F6F2F147* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool GripButton { get; internal set; }
		bool L_0 = ___value0;
		__this->___U3CGripButtonU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimulatedEyeGazeDevice_set_pose_mA9AEAF3A46C706C4192094DBEC408C3935CF15DD_inline (SimulatedEyeGazeDevice_t72AF4B2115C96AD9EE5CACAE763BA9D4F8394DC9* __this, PoseControl_t28571DE0327FBB52F360251074D1DA294A197862* ___value0, const RuntimeMethod* method) 
{
	{
		// public PoseControl pose { get; private set; }
		PoseControl_t28571DE0327FBB52F360251074D1DA294A197862* L_0 = ___value0;
		__this->___U3CposeU3Ek__BackingField_39 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CposeU3Ek__BackingField_39), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SimulatedEyeGaze_get_CameraRelativeRotation_m25A2026D88F60DE0418C660CB3DB4F8B59906B47_inline (SimulatedEyeGaze_tC2D5707605893349BE19C4DD5B20CECFAFE42F53* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 CameraRelativeRotation { get; private set; } = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CCameraRelativeRotationU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimulatedEyeGaze_set_CameraRelativeRotation_m54D2A14D3DE0D6B8E28C023BA23F33F3287D8A08_inline (SimulatedEyeGaze_tC2D5707605893349BE19C4DD5B20CECFAFE42F53* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 CameraRelativeRotation { get; private set; } = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CCameraRelativeRotationU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PoseControl_t28571DE0327FBB52F360251074D1DA294A197862* SimulatedEyeGazeDevice_get_pose_m460A0049868041C0C6F19800B1BCC4E0DC199664_inline (SimulatedEyeGazeDevice_t72AF4B2115C96AD9EE5CACAE763BA9D4F8394DC9* __this, const RuntimeMethod* method) 
{
	{
		// public PoseControl pose { get; private set; }
		PoseControl_t28571DE0327FBB52F360251074D1DA294A197862* L_0 = __this->___U3CposeU3Ek__BackingField_39;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputSimulator_get_ControlSet_m902AE58129E1652450D2F3234362D186E7AD7113_inline (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, const RuntimeMethod* method) 
{
	{
		// get => controlSet;
		int32_t L_0 = __this->___controlSet_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CameraSimulationSettings_get_SimulationEnabled_m1470DC10A623BF17C7C675EFF9961C247150BAA0_inline (CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* __this, const RuntimeMethod* method) 
{
	{
		// get => simulationEnabled;
		bool L_0 = __this->___simulationEnabled_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EyeGazeSimulationSettings_get_SimulationEnabled_m41545363A4B6821167977D4EC0219AA9CD49FF6D_inline (EyeGazeSimulationSettings_t3C2AFE26CF2C423D622769D96E9F76A7B3C82A3A* __this, const RuntimeMethod* method) 
{
	{
		// get => simulationEnabled;
		bool L_0 = __this->___simulationEnabled_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ControllerSimulationSettings_get_SimulationMode_mFCB8DB4BA892D80F9F69BBD8EC9EC1380D973F23_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) 
{
	{
		// get => simulationMode;
		int32_t L_0 = __this->___simulationMode_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* InputSimulator_get_CameraSettings_mC46E389DCB7CAD50C826C6A42C56D18A3831E10C_inline (InputSimulator_t1B10DDBAF18D0039763C0C039507030E86160675* __this, const RuntimeMethod* method) 
{
	{
		// get => cameraSettings;
		CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* L_0 = __this->___cameraSettings_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* CameraSimulationSettings_get_MoveHorizontal_m17E5E1F61AB157DC6456EE2793E198EA2E843A9F_inline (CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* __this, const RuntimeMethod* method) 
{
	{
		// get => moveHorizontal;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___moveHorizontal_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* CameraSimulationSettings_get_MoveVertical_mFDDC5B796385360A3D138D020DE7CA3B512D481B_inline (CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* __this, const RuntimeMethod* method) 
{
	{
		// get => moveVertical;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___moveVertical_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* CameraSimulationSettings_get_MoveDepth_m0F3C9E66B58DF631C8630224D3D309E16BFA66C1_inline (CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* __this, const RuntimeMethod* method) 
{
	{
		// get => moveDepth;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___moveDepth_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* CameraSimulationSettings_get_Pitch_mAA12571EB098CAB17A68875A557D875DA69D4A9C_inline (CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* __this, const RuntimeMethod* method) 
{
	{
		// get => pitch;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___pitch_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CameraSimulationSettings_get_InvertPitch_mD6A262E280E63782DDD6BD0A13AB418852447C5B_inline (CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* __this, const RuntimeMethod* method) 
{
	{
		// get => invertPitch;
		bool L_0 = __this->___invertPitch_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* CameraSimulationSettings_get_Yaw_m11D2EEA67BCC8BA3D3F3E02A7B0F7FC3B2A8273D_inline (CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* __this, const RuntimeMethod* method) 
{
	{
		// get => yaw;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___yaw_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* CameraSimulationSettings_get_Roll_m25372ABD8C63A76F982DF6A6E63248D09B83A799_inline (CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* __this, const RuntimeMethod* method) 
{
	{
		// get => roll;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___roll_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CameraSimulationSettings_get_IsMovementSmoothed_mFEFEC39B621425C5989EAE6192979BF13E689036_inline (CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* __this, const RuntimeMethod* method) 
{
	{
		// get => isMovementSmoothed;
		bool L_0 = __this->___isMovementSmoothed_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CameraSimulationSettings_get_MoveSpeed_mB6CEB3DA4BF4DF8EAF9E30C6B9FC772DB9D4ADB8_inline (CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* __this, const RuntimeMethod* method) 
{
	{
		// get => moveSpeed;
		float L_0 = __this->___moveSpeed_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CameraSimulationSettings_get_RotationSensitivity_m23F2B73B449285584DC2AFD9DCB578829728DE42_inline (CameraSimulationSettings_t795873457C9D870215339BD4AE7917DDFD3AF4C9* __this, const RuntimeMethod* method) 
{
	{
		// get => rotationSensitivity;
		float L_0 = __this->___rotationSensitivity_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* EyeGazeSimulationSettings_get_LookVertical_m3B0E8F0F830748732398184AA8C2071081BB1E96_inline (EyeGazeSimulationSettings_t3C2AFE26CF2C423D622769D96E9F76A7B3C82A3A* __this, const RuntimeMethod* method) 
{
	{
		// get => lookVertical;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___lookVertical_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* EyeGazeSimulationSettings_get_LookHorizontal_m4C3AB0D8EFEF7BDB72285A2A76FFDF960D3D663E_inline (EyeGazeSimulationSettings_t3C2AFE26CF2C423D622769D96E9F76A7B3C82A3A* __this, const RuntimeMethod* method) 
{
	{
		// get => lookHorizontal;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___lookHorizontal_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 EyeGazeSimulationSettings_get_EyeOriginOffset_m7F1395524F9DEDE39E57D6A06653207C869A7A08_inline (EyeGazeSimulationSettings_t3C2AFE26CF2C423D622769D96E9F76A7B3C82A3A* __this, const RuntimeMethod* method) 
{
	{
		// get => eyeOriginOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___eyeOriginOffset_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ControllerSimulationSettings_get_Toggle_mB85A823140A946C802F63C23121BCFE7DA210A7A_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) 
{
	{
		// get => toggle;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___toggle_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ControllerSimulationSettings_get_ToggleState_m996B8AD6C291D144DC187728FF38D04EFBC4AD9B_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) 
{
	{
		// internal bool ToggleState { get; set; } = false;
		bool L_0 = __this->___U3CToggleStateU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ControllerSimulationSettings_set_ToggleState_m3D9140FA57D0CC82A4BCCC447EECFD7105EFF0CC_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// internal bool ToggleState { get; set; } = false;
		bool L_0 = ___value0;
		__this->___U3CToggleStateU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ControllerSimulationSettings_get_Track_m51F7DBF61BD3D7EF31B91D1703CADB61EE68064C_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) 
{
	{
		// get => track;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___track_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ControllerSimulationSettings_get_DefaultPosition_m18DAEE545417B11C63EADEAB9D9FC6AFD46F76EE_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) 
{
	{
		// get => defaultPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___defaultPosition_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* Mouse_get_current_m559AE408DFE4F44D811979FE592BBAF7A84CE6F3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public new static Mouse current { get; private set; }
		Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* L_0 = ((Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F_StaticFields*)il2cpp_codegen_static_fields_for(Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F_il2cpp_TypeInfo_var))->___U3CcurrentU3Ek__BackingField_52;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* Pointer_get_position_m4286004169788483EEDA6AF833CEFDB04FEDF3D8_inline (Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2Control position { get; protected set; }
		Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* L_0 = __this->___U3CpositionU3Ek__BackingField_39;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ControllerSimulationSettings_get_ChangeNeutralPose_m3B7224C2638C070BD83957ADA4C2CE3996C2ECC7_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) 
{
	{
		// get => changeNeutralPose;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___changeNeutralPose_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ControllerSimulationSettings_get_MoveHorizontal_m0922CB519513571DBD470E91B6028A3B3B321C04_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) 
{
	{
		// get => moveHorizontal;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___moveHorizontal_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ControllerSimulationSettings_get_MoveVertical_m112D1DA278DE8D1D5ECE1671086DB4B426D01BE9_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) 
{
	{
		// get => moveVertical;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___moveVertical_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ControllerSimulationSettings_get_MoveDepth_m4FCCFBBE741A32CCA36853DB3DDA55907A4A5706_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) 
{
	{
		// get => moveDepth;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___moveDepth_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ControllerSimulationSettings_get_FaceTheCamera_m5400C65F1E118F4FE183592EA203EDBA86528105_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) 
{
	{
		// get => faceTheCamera;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___faceTheCamera_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ControllerSimulationSettings_get_RotationMode_mCA783C64759669963A1677AD0CE75D1BE4787D74_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) 
{
	{
		// public ControllerRotationMode RotationMode { get; set; } = ControllerRotationMode.UserControl;
		int32_t L_0 = __this->___U3CRotationModeU3Ek__BackingField_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ControllerSimulationSettings_set_RotationMode_m4706B2477E95051691A95A5E5B9160625EE581FA_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public ControllerRotationMode RotationMode { get; set; } = ControllerRotationMode.UserControl;
		int32_t L_0 = ___value0;
		__this->___U3CRotationModeU3Ek__BackingField_17 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ControllerSimulationSettings_get_Pitch_mCC9FE7335ADA7D51AD11B0939929136A8D635B8E_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) 
{
	{
		// get => pitch;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___pitch_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ControllerSimulationSettings_get_InvertPitch_mC4FF89BB52D19DB6FEA23CB15526DBD4EF13E7E1_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) 
{
	{
		// get => invertPitch;
		bool L_0 = __this->___invertPitch_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ControllerSimulationSettings_get_Yaw_m1124B86D30F262A0A98390ACEE5CCE36A953BD1F_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) 
{
	{
		// get => yaw;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___yaw_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ControllerSimulationSettings_get_Roll_m7ABA3D58669C859D99D840B71CAFA4167B660E12_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) 
{
	{
		// get => roll;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___roll_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Inequality_mC1922F160B14F6F404E46FFCC10B282D913BE354_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___rhs1;
		bool L_2;
		L_2 = Quaternion_op_Equality_m3DF1D708D3A0AFB11EACF42A9C068EF6DC508FBB_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ControllerSimulationSettings_get_TriggerButton_m43AF2173D044F41B57335C100FB78FB8CF694279_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) 
{
	{
		// get => triggerButton;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___triggerButton_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDamp_m4B8C5AACFEBF58E93FF2A33832C27EF1E5AF7AFD_inline (float ___current0, float ___target1, float* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0;
		L_0 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_0 = L_0;
		V_1 = (std::numeric_limits<float>::infinity());
		float L_1 = ___current0;
		float L_2 = ___target1;
		float* L_3 = ___currentVelocity2;
		float L_4 = ___smoothTime3;
		float L_5 = V_1;
		float L_6 = V_0;
		float L_7;
		L_7 = Mathf_SmoothDamp_m00E482452BCED3FE0F16B4033B2B5323C7E30829(L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_001b;
	}

IL_001b:
	{
		float L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ControllerSimulationSettings_get_GripButton_mE5FFCDC79BD35FF21329D83D008241E3974AC580_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) 
{
	{
		// get => gripButton;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___gripButton_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ControllerSimulationSettings_get_AnchorPoint_m87534173C5F618262C05CED70347851006BE076D_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) 
{
	{
		// get => anchorPoint;
		int32_t L_0 = __this->___anchorPoint_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ControllerSimulationSettings_get_IsMovementSmoothed_m1AA299E57D5D88E110AB648A9014DEC264AA0C8A_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) 
{
	{
		// get => isMovementSmoothed;
		bool L_0 = __this->___isMovementSmoothed_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ControllerSimulationSettings_get_DepthSensitivity_mBA7F96F9DE18F6995B0E2C7621DC42034710BE7E_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) 
{
	{
		// get => depthSensitivity;
		float L_0 = __this->___depthSensitivity_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ControllerSimulationSettings_get_JitterStrength_mF2587C6E9D066E167BECFCB0653C7F4670F5AAA0_inline (ControllerSimulationSettings_tFEBF3ECBC866220C520DDF3275047C27C132FE81* __this, const RuntimeMethod* method) 
{
	{
		// get => jitterStrength;
		float L_0 = __this->___jitterStrength_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t3FD220D91A685A9242170EEF27EC5C0C50F2B5DF* InputActionManager_get_actionAssets_mB7B35CC08659DF051DE9FC4968B973BF399CDEFF_inline (InputActionManager_tCB367C1814B9264CDE8FA04AA916642BB2887D21* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ActionAssets;
		List_1_t3FD220D91A685A9242170EEF27EC5C0C50F2B5DF* L_0 = __this->___m_ActionAssets_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputBinding_set_groups_mF2767924C74B69A77893A53B9A49A42D101E59E0_inline (InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Groups = value;
		String_t* L_0 = ___value0;
		__this->___m_Groups_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Groups_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m7F63A273E382CB6328736B6E7F321DDFA40EA9E3_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, intptr_t ___markerPtr0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___markerPtr0;
		__this->___m_Ptr_0 = L_0;
		intptr_t L_1 = ___markerPtr0;
		ProfilerUnsafeUtility_BeginSample_m1C6D6ED1C8E0CB2FD0934EB6EA333276F67C14F6(L_1, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_m3DF1D708D3A0AFB11EACF42A9C068EF6DC508FBB_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___rhs1;
		float L_2;
		L_2 = Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline(L_0, L_1, NULL);
		bool L_3;
		L_3 = Quaternion_IsEqualUsingDot_m5C6AC5F5C56B27C25DDF612BEEF40F28CA44CA31_inline(L_2, NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___a0;
		float L_9 = L_8.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___b1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___a0;
		float L_13 = L_12.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___b1;
		float L_15 = L_14.___w_3;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m5C6AC5F5C56B27C25DDF612BEEF40F28CA44CA31_inline (float ___dot0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		float L_0 = ___dot0;
		V_0 = (bool)((((float)L_0) > ((float)(0.999998987f)))? 1 : 0);
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
