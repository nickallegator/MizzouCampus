#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Events.UnityEvent>
struct Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,UnityEngine.Events.UnityEvent>
struct IReadOnlyDictionary_2_t40D079348B568B7A7503915DC3D16510AB19F30D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.Events.UnityEvent>
struct KeyCollection_tA5D83626E94476B72233AEBF8B28119789B11BF5;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Subsystems.IMRTKManagedSubsystem>
struct List_1_tC426FC620BF306586A96F31FDC23897C0C6ECF1F;
// System.Collections.Generic.List`1<UnityEngine.ISubsystemDescriptor>
struct List_1_t633BEA49B34AE9824D8CDA0F820733B381C27AD1;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SystemType>
struct List_1_t8AFDCFE373261DFE608A5BE91D8DAEF9E88A5345;
// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<System.Object>
struct MRTKSubsystemProvider_1_t04FEED85CA4E818499C335F753CB85F944E34B28;
// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem>
struct MRTKSubsystemProvider_1_t069B57DAFAE1241F4F186C9EC1C6D416D63A41DC;
// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<System.Object,System.Object,System.Object>
struct MRTKSubsystem_3_tEAD14DC13CD09761D9CE1704E1D40B24E6009F76;
// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemDescriptor,Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem/Provider>
struct MRTKSubsystem_3_tF1C2057DE9B81AE485C6A588075D3722BAA068BA;
// Microsoft.MixedReality.Toolkit.SerializableDictionary`2<Microsoft.MixedReality.Toolkit.SystemType,Microsoft.MixedReality.Toolkit.BaseSubsystemConfig>
struct SerializableDictionary_2_t6129FE3D57E008643FB7F536D04DD187B1C172D3;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<System.Object,System.Object>
struct SubsystemDescriptorWithProvider_2_tDBA1506DD7EBA024E21E2A6CAF1B5CE3DA9DFF07;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_tA053C7DB9B8AA14A7AEE9745FAF05CA32048488E;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemDescriptor,Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem/Provider>
struct SubsystemWithProvider_3_t1CA97D45E2B2EC73190B0CABFCEB20907E1668C0;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.Events.UnityEvent>
struct ValueCollection_t84AFA3A44C85FFD072F03475AD4B0D3807856675;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.Events.UnityEvent>[]
struct EntryU5BU5D_tF1FC7CDF24F7984E8306D27CC309980FDD2E392B;
// Microsoft.MixedReality.Toolkit.Subsystems.IMRTKManagedSubsystem[]
struct IMRTKManagedSubsystemU5BU5D_tA743C6A5B2A4CEF201BF05F6C68803351DA0BDFE;
// UnityEngine.ISubsystemDescriptor[]
struct ISubsystemDescriptorU5BU5D_tDC1A06F7C11CA32CCDDBB30F55BDAB0B411FB093;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// Microsoft.MixedReality.Toolkit.SystemType[]
struct SystemTypeU5BU5D_t97F918D6FB8207EF8502A2801BC2975DBA62F887;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// Microsoft.MixedReality.Toolkit.BaseSubsystemConfig
struct BaseSubsystemConfig_t44DB38465B62F04765177EBD6561E4CD8145629A;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Microsoft.MixedReality.Toolkit.Subsystems.IMRTKManagedSubsystem
struct IMRTKManagedSubsystem_t2672549DF0A4DA30EA6E18BA3D886D7DB82DBB6D;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// Microsoft.MixedReality.Toolkit.Subsystems.MRTKLifecycleManager
struct MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF;
// Microsoft.MixedReality.Toolkit.MRTKProfile
struct MRTKProfile_tE765F5500DAECFD4A32D2CBE0F5D880F2FA90EBE;
// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemAttribute
struct MRTKSubsystemAttribute_tE334C03BCE834F6304CD6149A33D520323F0FA8E;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem
struct PhraseRecognitionSubsystem_t13A9580C17818A5B80FFCA5A18F516DE8CBECBB4;
// Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemConfig
struct PhraseRecognitionSubsystemConfig_tA71A35F1605E373C58C0FB23BDF08B241ABE1F03;
// Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemDescriptor
struct PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455;
// Microsoft.MixedReality.Toolkit.SystemType
struct SystemType_tB8C940FEFFE1DC4087E66139D8E72177D4B0E30E;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem/Provider
struct Provider_t131064079F32431586929B88A53CF04A757C085B;

IL2CPP_EXTERN_C RuntimeClass* ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMRTKManagedSubsystem_t2672549DF0A4DA30EA6E18BA3D886D7DB82DBB6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMRTKSubsystemDescriptor_tA2F5A3387AEA87CA90EAA31A6690E06FED25B162_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t633BEA49B34AE9824D8CDA0F820733B381C27AD1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC426FC620BF306586A96F31FDC23897C0C6ECF1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MRTKProfile_tE765F5500DAECFD4A32D2CBE0F5D880F2FA90EBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MRTKSubsystem_3_tF1C2057DE9B81AE485C6A588075D3722BAA068BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemType_tB8C940FEFFE1DC4087E66139D8E72177D4B0E30E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0514B8E4342F7B936BE02120037C20832C1C2F20;
IL2CPP_EXTERN_C String_t* _stringLiteral2FE4425905803CF2F4079A513827EE10B80B7C78;
IL2CPP_EXTERN_C String_t* _stringLiteral30795A3D724741ED34B008A388F3F82398F08AE4;
IL2CPP_EXTERN_C String_t* _stringLiteral30A43071A1AD1AE7980BA5022113C6ABA43AE621;
IL2CPP_EXTERN_C String_t* _stringLiteral3DBEEE5525AB73A9DB798B48BC5F60B43D9FEFD8;
IL2CPP_EXTERN_C String_t* _stringLiteral4DDE305695C44B5ABC2BAB32F8C335348FC89252;
IL2CPP_EXTERN_C String_t* _stringLiteral5A75E8B985D337C2C8DB9F5F762353FDF6DD92F2;
IL2CPP_EXTERN_C String_t* _stringLiteral6FF3297CA0202A9E685B045DDB34C412077B44BD;
IL2CPP_EXTERN_C String_t* _stringLiteral778D088416F28001FF7BEEA2DC9C5A0F007E0CF2;
IL2CPP_EXTERN_C String_t* _stringLiteral7E07521F715F33929B90B294529EB21F3C894A77;
IL2CPP_EXTERN_C String_t* _stringLiteral8BFD97784FD8D2F5008FCB9447FE458BAD073422;
IL2CPP_EXTERN_C String_t* _stringLiteral9F0D33BDEE7449408177B6A8F7216C431AFFE6AE;
IL2CPP_EXTERN_C String_t* _stringLiteralAD0185B4676E3B49238DFD2484653DDA83CC8761;
IL2CPP_EXTERN_C String_t* _stringLiteralC4CF4B47B0B9BA31820FFDEC8AC433640D34026B;
IL2CPP_EXTERN_C String_t* _stringLiteralCDC87D890F3C0013E110EE14C0658DC0BA58A67D;
IL2CPP_EXTERN_C String_t* _stringLiteralDB704BE14E8C479388058F55A86A01C2A266045A;
IL2CPP_EXTERN_C String_t* _stringLiteralDCF9EA0647678DEE02C4C3304F0B4AFA5D58E918;
IL2CPP_EXTERN_C String_t* _stringLiteralF1E712338241A0BA9F1E178B524AC080973D342B;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m201D3F2B835DA73A9ADF2C88E7158ADEB95A593E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m40E9EE3711DE18047836B4DEF71DFF591601F836_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mAE7D1A5B45004F89DDA7599D937C1A8612AC839A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m20982B174761C7B0A4A1FCAAFB751B1D6F5D7677_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m284E17785002062EBB5E7D2EC6326182B7766721_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m88BBE158AEE1D53D36462A5E09C56BEDE51BE88D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB3580B6E29594ED0D3FD0C98C4FF633EA8ECBBF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC4A7D6876A612A64C97A5060B707F55E268A6DC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m4BBB5897D4E6C69A22E3C531F2A60AEFFA9C27E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m3BF6F664E4282329266263B811275E1168FA3D56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m358268DF64F65735D7AE98971C3881B4BE74A189_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA94BB71845F55955887B3C9E6CF8CD973E391764_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC461107718E601966FC0DAA2C9E6E5645164F052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mEE77E05450C5B1CFAB0C07AD8DA138A7992B5F78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MRTKSubsystemProvider_1__ctor_m915E99397167D809CAE451E8C45B83CF8A6457DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MRTKSubsystem_3__ctor_mEF0313A9B3DBAE8B811B96BB806D05B799BFC770_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PhraseRecognitionSubsystemCinfo_GetHashCode_m6A63700C1DE0024461C877E150432169477EB978_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PhraseRecognitionSubsystemDescriptor_Create_m4096DA14EBD14C26A3B87FBB54545D29CC288830_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptorWithProvider_2__ctor_mBDA527C4E4BA002DAF834AA7CEB6C8FEFA1C087C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3_get_provider_mC9BA1C147516153A3878524CA9100D86BF82B5D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSubsystemHelpers_CheckTypes_TisPhraseRecognitionSubsystem_t13A9580C17818A5B80FFCA5A18F516DE8CBECBB4_TisProvider_t131064079F32431586929B88A53CF04A757C085B_m33A63CC5B4E742DBDB17899E42AF368034F4A677_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* BaseSubsystemConfig_t44DB38465B62F04765177EBD6561E4CD8145629A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IMRTKManagedSubsystem_t2672549DF0A4DA30EA6E18BA3D886D7DB82DBB6D_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Events.UnityEvent>
struct Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tF1FC7CDF24F7984E8306D27CC309980FDD2E392B* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tA5D83626E94476B72233AEBF8B28119789B11BF5* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t84AFA3A44C85FFD072F03475AD4B0D3807856675* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Subsystems.IMRTKManagedSubsystem>
struct List_1_tC426FC620BF306586A96F31FDC23897C0C6ECF1F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IMRTKManagedSubsystemU5BU5D_tA743C6A5B2A4CEF201BF05F6C68803351DA0BDFE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC426FC620BF306586A96F31FDC23897C0C6ECF1F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IMRTKManagedSubsystemU5BU5D_tA743C6A5B2A4CEF201BF05F6C68803351DA0BDFE* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.ISubsystemDescriptor>
struct List_1_t633BEA49B34AE9824D8CDA0F820733B381C27AD1  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ISubsystemDescriptorU5BU5D_tDC1A06F7C11CA32CCDDBB30F55BDAB0B411FB093* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t633BEA49B34AE9824D8CDA0F820733B381C27AD1_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ISubsystemDescriptorU5BU5D_tDC1A06F7C11CA32CCDDBB30F55BDAB0B411FB093* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SystemType>
struct List_1_t8AFDCFE373261DFE608A5BE91D8DAEF9E88A5345  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SystemTypeU5BU5D_t97F918D6FB8207EF8502A2801BC2975DBA62F887* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8AFDCFE373261DFE608A5BE91D8DAEF9E88A5345_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SystemTypeU5BU5D_t97F918D6FB8207EF8502A2801BC2975DBA62F887* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
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

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5  : public RuntimeObject
{
	// System.String UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<providerType>k__BackingField
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<subsystemTypeOverride>k__BackingField
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::m_Running
	bool ___m_Running_0;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* ___U3CproviderBaseU3Ek__BackingField_1;
};

// Microsoft.MixedReality.Toolkit.SystemType
struct SystemType_tB8C940FEFFE1DC4087E66139D8E72177D4B0E30E  : public RuntimeObject
{
	// System.String Microsoft.MixedReality.Toolkit.SystemType::reference
	String_t* ___reference_0;
	// System.Type Microsoft.MixedReality.Toolkit.SystemType::type
	Type_t* ___type_1;
};

struct SystemType_tB8C940FEFFE1DC4087E66139D8E72177D4B0E30E_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.MixedReality.Toolkit.SystemType::ReferenceMappings
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___ReferenceMappings_2;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Subsystems.IMRTKManagedSubsystem>
struct Enumerator_t2393DBE06B9F1FA6EDDB95ABB7F3A94EFFD9DBAA 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tC426FC620BF306586A96F31FDC23897C0C6ECF1F* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.ISubsystemDescriptor>
struct Enumerator_tD485D88051FE4E6708D5BA00A1B767C7CC677CEE 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t633BEA49B34AE9824D8CDA0F820733B381C27AD1* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_tA053C7DB9B8AA14A7AEE9745FAF05CA32048488E  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem>
struct SubsystemProvider_1_tF1360ED71164A9D6F81837D101A0D7626568D347  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	RuntimeObject* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	RuntimeObject* ___U3CproviderU3Ek__BackingField_3;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemDescriptor,Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem/Provider>
struct SubsystemWithProvider_3_t1CA97D45E2B2EC73190B0CABFCEB20907E1668C0  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t131064079F32431586929B88A53CF04A757C085B* ___U3CproviderU3Ek__BackingField_3;
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

// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemAttribute
struct MRTKSubsystemAttribute_tE334C03BCE834F6304CD6149A33D520323F0FA8E  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemAttribute::name
	String_t* ___name_0;
	// System.String Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemAttribute::displayName
	String_t* ___displayName_1;
	// System.String Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemAttribute::author
	String_t* ___author_2;
	// Microsoft.MixedReality.Toolkit.SystemType Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemAttribute::providerType
	SystemType_tB8C940FEFFE1DC4087E66139D8E72177D4B0E30E* ___providerType_3;
	// Microsoft.MixedReality.Toolkit.SystemType Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemAttribute::subsystemTypeOverride
	SystemType_tB8C940FEFFE1DC4087E66139D8E72177D4B0E30E* ___subsystemTypeOverride_4;
	// Microsoft.MixedReality.Toolkit.SystemType Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemAttribute::configType
	SystemType_tB8C940FEFFE1DC4087E66139D8E72177D4B0E30E* ___configType_5;
};

// Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo
struct PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA 
{
	// System.String Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.String Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::<DisplayName>k__BackingField
	String_t* ___U3CDisplayNameU3Ek__BackingField_1;
	// System.String Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::<Author>k__BackingField
	String_t* ___U3CAuthorU3Ek__BackingField_2;
	// System.Type Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::<ConfigType>k__BackingField
	Type_t* ___U3CConfigTypeU3Ek__BackingField_3;
	// System.Type Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::<ProviderType>k__BackingField
	Type_t* ___U3CProviderTypeU3Ek__BackingField_4;
	// System.Type Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::<SubsystemTypeOverride>k__BackingField
	Type_t* ___U3CSubsystemTypeOverrideU3Ek__BackingField_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::<IsCloudBased>k__BackingField
	bool ___U3CIsCloudBasedU3Ek__BackingField_6;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo
struct PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA_marshaled_pinvoke
{
	char* ___U3CNameU3Ek__BackingField_0;
	char* ___U3CDisplayNameU3Ek__BackingField_1;
	char* ___U3CAuthorU3Ek__BackingField_2;
	Type_t* ___U3CConfigTypeU3Ek__BackingField_3;
	Type_t* ___U3CProviderTypeU3Ek__BackingField_4;
	Type_t* ___U3CSubsystemTypeOverrideU3Ek__BackingField_5;
	int32_t ___U3CIsCloudBasedU3Ek__BackingField_6;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo
struct PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA_marshaled_com
{
	Il2CppChar* ___U3CNameU3Ek__BackingField_0;
	Il2CppChar* ___U3CDisplayNameU3Ek__BackingField_1;
	Il2CppChar* ___U3CAuthorU3Ek__BackingField_2;
	Type_t* ___U3CConfigTypeU3Ek__BackingField_3;
	Type_t* ___U3CProviderTypeU3Ek__BackingField_4;
	Type_t* ___U3CSubsystemTypeOverrideU3Ek__BackingField_5;
	int32_t ___U3CIsCloudBasedU3Ek__BackingField_6;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96
struct __StaticArrayInitTypeSizeU3D96_t294A8BA6F189309AA206709F6E0AA0ED9D654B7D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D96_t294A8BA6F189309AA206709F6E0AA0ED9D654B7D__padding[96];
	};
};

// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem>
struct MRTKSubsystemProvider_1_t069B57DAFAE1241F4F186C9EC1C6D416D63A41DC  : public SubsystemProvider_1_tF1360ED71164A9D6F81837D101A0D7626568D347
{
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t2ACAE790C79584FAEA6F0C1E03E30CC83A8BE01D  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t2ACAE790C79584FAEA6F0C1E03E30CC83A8BE01D_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::577BB66DB352A52651963484243DD20947F8819D4C6589BA449C17677806F41B
	__StaticArrayInitTypeSizeU3D96_t294A8BA6F189309AA206709F6E0AA0ED9D654B7D ___577BB66DB352A52651963484243DD20947F8819D4C6589BA449C17677806F41B_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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

// Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemDescriptor
struct PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26  : public SubsystemDescriptorWithProvider_2_tA053C7DB9B8AA14A7AEE9745FAF05CA32048488E
{
	// System.String Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemDescriptor::<DisplayName>k__BackingField
	String_t* ___U3CDisplayNameU3Ek__BackingField_3;
	// System.String Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemDescriptor::<Author>k__BackingField
	String_t* ___U3CAuthorU3Ek__BackingField_4;
	// System.Type Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemDescriptor::<ConfigType>k__BackingField
	Type_t* ___U3CConfigTypeU3Ek__BackingField_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemDescriptor::<IsCloudBased>k__BackingField
	bool ___U3CIsCloudBasedU3Ek__BackingField_6;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker/AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;
};

// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemDescriptor,Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem/Provider>
struct MRTKSubsystem_3_tF1C2057DE9B81AE485C6A588075D3722BAA068BA  : public SubsystemWithProvider_3_t1CA97D45E2B2EC73190B0CABFCEB20907E1668C0
{
};

struct MRTKSubsystem_3_tF1C2057DE9B81AE485C6A588075D3722BAA068BA_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3::UpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdatePerfMarker_4;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3::LateUpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___LateUpdatePerfMarker_5;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3::FixedUpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___FixedUpdatePerfMarker_6;
};

// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
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

// Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem/Provider
struct Provider_t131064079F32431586929B88A53CF04A757C085B  : public MRTKSubsystemProvider_1_t069B57DAFAE1241F4F186C9EC1C6D416D63A41DC
{
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Events.UnityEvent> Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem/Provider::phraseDictionary
	Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050* ___phraseDictionary_1;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// Microsoft.MixedReality.Toolkit.BaseMRTKProfile
struct BaseMRTKProfile_t39967A5AA0526C959E94952AA682ECE99D35CDEA  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMRTKProfile::isCustomProfile
	bool ___isCustomProfile_4;
};

// Microsoft.MixedReality.Toolkit.BaseSubsystemConfig
struct BaseSubsystemConfig_t44DB38465B62F04765177EBD6561E4CD8145629A  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem
struct PhraseRecognitionSubsystem_t13A9580C17818A5B80FFCA5A18F516DE8CBECBB4  : public MRTKSubsystem_3_tF1C2057DE9B81AE485C6A588075D3722BAA068BA
{
};

// Microsoft.MixedReality.Toolkit.MRTKProfile
struct MRTKProfile_tE765F5500DAECFD4A32D2CBE0F5D880F2FA90EBE  : public BaseMRTKProfile_t39967A5AA0526C959E94952AA682ECE99D35CDEA
{
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SystemType> Microsoft.MixedReality.Toolkit.MRTKProfile::loadedSubsystems
	List_1_t8AFDCFE373261DFE608A5BE91D8DAEF9E88A5345* ___loadedSubsystems_6;
	// Microsoft.MixedReality.Toolkit.SerializableDictionary`2<Microsoft.MixedReality.Toolkit.SystemType,Microsoft.MixedReality.Toolkit.BaseSubsystemConfig> Microsoft.MixedReality.Toolkit.MRTKProfile::subsystemConfigs
	SerializableDictionary_2_t6129FE3D57E008643FB7F536D04DD187B1C172D3* ___subsystemConfigs_7;
};

struct MRTKProfile_tE765F5500DAECFD4A32D2CBE0F5D880F2FA90EBE_StaticFields
{
	// Microsoft.MixedReality.Toolkit.MRTKProfile Microsoft.MixedReality.Toolkit.MRTKProfile::instance
	MRTKProfile_tE765F5500DAECFD4A32D2CBE0F5D880F2FA90EBE* ___instance_5;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemConfig
struct PhraseRecognitionSubsystemConfig_tA71A35F1605E373C58C0FB23BDF08B241ABE1F03  : public BaseSubsystemConfig_t44DB38465B62F04765177EBD6561E4CD8145629A
{
};

// Microsoft.MixedReality.Toolkit.Subsystems.MRTKLifecycleManager
struct MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Subsystems.IMRTKManagedSubsystem> Microsoft.MixedReality.Toolkit.Subsystems.MRTKLifecycleManager::managedSubsystems
	List_1_tC426FC620BF306586A96F31FDC23897C0C6ECF1F* ___managedSubsystems_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.Subsystems.MRTKLifecycleManager::disposed
	bool ___disposed_10;
};

struct MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Subsystems.MRTKLifecycleManager::OnDisableProfilerMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___OnDisableProfilerMarker_5;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Subsystems.MRTKLifecycleManager::OnEnableProfilerMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___OnEnableProfilerMarker_6;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Subsystems.MRTKLifecycleManager::UpdateProfilerMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdateProfilerMarker_7;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Subsystems.MRTKLifecycleManager::FixedUpdateProfilerMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___FixedUpdateProfilerMarker_8;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Subsystems.MRTKLifecycleManager::LateUpdateProfilerMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___LateUpdateProfilerMarker_9;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKSubsystem_3__ctor_mA74FBF58ED7ECF4D6901C5C5AE599CD48E5E2634_gshared (MRTKSubsystem_3_tEAD14DC13CD09761D9CE1704E1D40B24E6009F76* __this, const RuntimeMethod* method) ;
// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>::get_provider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKSubsystemProvider_1__ctor_mCA2C3C05DD905908E089B5197C76CDB5FCF0D4D9_gshared (MRTKSubsystemProvider_1_t04FEED85CA4E818499C335F753CB85F944E34B28* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_2__ctor_m639DDEEB52B0E73AD96D610D0DC16CF0E9D0BEA2_gshared (SubsystemDescriptorWithProvider_2_tDBA1506DD7EBA024E21E2A6CAF1B5CE3DA9DFF07* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.XRSubsystemHelpers::CheckTypes<System.Object,System.Object>(System.String,System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSubsystemHelpers_CheckTypes_TisRuntimeObject_TisRuntimeObject_m2706E5AA1DF10A4EA82992124656400817D8861D_gshared (String_t* ___name0, Type_t* ___subsystemTypeOverride1, Type_t* ___providerType2, const RuntimeMethod* method) ;

// System.Void System.Collections.Generic.List`1<UnityEngine.ISubsystemDescriptor>::.ctor()
inline void List_1__ctor_mEE77E05450C5B1CFAB0C07AD8DA138A7992B5F78 (List_1_t633BEA49B34AE9824D8CDA0F820733B381C27AD1* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t633BEA49B34AE9824D8CDA0F820733B381C27AD1*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemManager::GetAllSubsystemDescriptors(System.Collections.Generic.List`1<UnityEngine.ISubsystemDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetAllSubsystemDescriptors_m1EAC675EB62CB114BBB6162B6552CDF055314A5C (List_1_t633BEA49B34AE9824D8CDA0F820733B381C27AD1* ___descriptors0, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.MRTKProfile Microsoft.MixedReality.Toolkit.MRTKProfile::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MRTKProfile_tE765F5500DAECFD4A32D2CBE0F5D880F2FA90EBE* MRTKProfile_get_Instance_mC32F0291769D84E800977CB49EE9CB633FAACA4B_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.ISubsystemDescriptor>::GetEnumerator()
inline Enumerator_tD485D88051FE4E6708D5BA00A1B767C7CC677CEE List_1_GetEnumerator_mA94BB71845F55955887B3C9E6CF8CD973E391764 (List_1_t633BEA49B34AE9824D8CDA0F820733B381C27AD1* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD485D88051FE4E6708D5BA00A1B767C7CC677CEE (*) (List_1_t633BEA49B34AE9824D8CDA0F820733B381C27AD1*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.ISubsystemDescriptor>::Dispose()
inline void Enumerator_Dispose_mAE7D1A5B45004F89DDA7599D937C1A8612AC839A (Enumerator_tD485D88051FE4E6708D5BA00A1B767C7CC677CEE* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD485D88051FE4E6708D5BA00A1B767C7CC677CEE*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.ISubsystemDescriptor>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m88BBE158AEE1D53D36462A5E09C56BEDE51BE88D_inline (Enumerator_tD485D88051FE4E6708D5BA00A1B767C7CC677CEE* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tD485D88051FE4E6708D5BA00A1B767C7CC677CEE*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SystemType> Microsoft.MixedReality.Toolkit.MRTKProfile::get_LoadedSubsystems()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t8AFDCFE373261DFE608A5BE91D8DAEF9E88A5345* MRTKProfile_get_LoadedSubsystems_m8E8A6B82D161D04E9FB5E384D0413CF62F80A80A_inline (MRTKProfile_tE765F5500DAECFD4A32D2CBE0F5D880F2FA90EBE* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.SystemType Microsoft.MixedReality.Toolkit.SystemType::op_Implicit(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SystemType_tB8C940FEFFE1DC4087E66139D8E72177D4B0E30E* SystemType_op_Implicit_m252D62B7A91131851350164DBFB99FB7671D76F7 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SystemType>::Contains(T)
inline bool List_1_Contains_m3BF6F664E4282329266263B811275E1168FA3D56 (List_1_t8AFDCFE373261DFE608A5BE91D8DAEF9E88A5345* __this, SystemType_tB8C940FEFFE1DC4087E66139D8E72177D4B0E30E* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t8AFDCFE373261DFE608A5BE91D8DAEF9E88A5345*, SystemType_tB8C940FEFFE1DC4087E66139D8E72177D4B0E30E*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Assert(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_mC95931BE797761A2D7800908C0BA4B41D68B3216 (bool ___condition0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Subsystems.IMRTKManagedSubsystem>::Add(T)
inline void List_1_Add_mC4A7D6876A612A64C97A5060B707F55E268A6DC1_inline (List_1_tC426FC620BF306586A96F31FDC23897C0C6ECF1F* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC426FC620BF306586A96F31FDC23897C0C6ECF1F*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.ISubsystemDescriptor>::MoveNext()
inline bool Enumerator_MoveNext_m284E17785002062EBB5E7D2EC6326182B7766721 (Enumerator_tD485D88051FE4E6708D5BA00A1B767C7CC677CEE* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD485D88051FE4E6708D5BA00A1B767C7CC677CEE*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKLifecycleManager::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKLifecycleManager_Dispose_m18A92AE4B093DF617A4244E73FB53301BEBD2189 (MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF* __this, const RuntimeMethod* method) ;
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Subsystems.IMRTKManagedSubsystem>::GetEnumerator()
inline Enumerator_t2393DBE06B9F1FA6EDDB95ABB7F3A94EFFD9DBAA List_1_GetEnumerator_m358268DF64F65735D7AE98971C3881B4BE74A189 (List_1_tC426FC620BF306586A96F31FDC23897C0C6ECF1F* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2393DBE06B9F1FA6EDDB95ABB7F3A94EFFD9DBAA (*) (List_1_tC426FC620BF306586A96F31FDC23897C0C6ECF1F*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Subsystems.IMRTKManagedSubsystem>::Dispose()
inline void Enumerator_Dispose_m40E9EE3711DE18047836B4DEF71DFF591601F836 (Enumerator_t2393DBE06B9F1FA6EDDB95ABB7F3A94EFFD9DBAA* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2393DBE06B9F1FA6EDDB95ABB7F3A94EFFD9DBAA*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Subsystems.IMRTKManagedSubsystem>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mB3580B6E29594ED0D3FD0C98C4FF633EA8ECBBF6_inline (Enumerator_t2393DBE06B9F1FA6EDDB95ABB7F3A94EFFD9DBAA* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t2393DBE06B9F1FA6EDDB95ABB7F3A94EFFD9DBAA*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Subsystems.IMRTKManagedSubsystem>::MoveNext()
inline bool Enumerator_MoveNext_m20982B174761C7B0A4A1FCAAFB751B1D6F5D7677 (Enumerator_t2393DBE06B9F1FA6EDDB95ABB7F3A94EFFD9DBAA* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2393DBE06B9F1FA6EDDB95ABB7F3A94EFFD9DBAA*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Assert(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m9CA35857A4FF29506840C572F2C7BA233805B806 (bool ___condition0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Subsystems.IMRTKManagedSubsystem>::Clear()
inline void List_1_Clear_m4BBB5897D4E6C69A22E3C531F2A60AEFFA9C27E4_inline (List_1_tC426FC620BF306586A96F31FDC23897C0C6ECF1F* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC426FC620BF306586A96F31FDC23897C0C6ECF1F*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Subsystems.IMRTKManagedSubsystem>::.ctor()
inline void List_1__ctor_mC461107718E601966FC0DAA2C9E6E5645164F052 (List_1_tC426FC620BF306586A96F31FDC23897C0C6ECF1F* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC426FC620BF306586A96F31FDC23897C0C6ECF1F*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Type Microsoft.MixedReality.Toolkit.SystemType::op_Implicit(Microsoft.MixedReality.Toolkit.SystemType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* SystemType_op_Implicit_mCF6D426C647088D2C1086AAA10787E9D4E7E090E (SystemType_tB8C940FEFFE1DC4087E66139D8E72177D4B0E30E* ___type0, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemDescriptor,Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem/Provider>::.ctor()
inline void MRTKSubsystem_3__ctor_mEF0313A9B3DBAE8B811B96BB806D05B799BFC770 (MRTKSubsystem_3_tF1C2057DE9B81AE485C6A588075D3722BAA068BA* __this, const RuntimeMethod* method)
{
	((  void (*) (MRTKSubsystem_3_tF1C2057DE9B81AE485C6A588075D3722BAA068BA*, const RuntimeMethod*))MRTKSubsystem_3__ctor_mA74FBF58ED7ECF4D6901C5C5AE599CD48E5E2634_gshared)(__this, method);
}
// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemDescriptor,Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem/Provider>::get_provider()
inline Provider_t131064079F32431586929B88A53CF04A757C085B* SubsystemWithProvider_3_get_provider_mC9BA1C147516153A3878524CA9100D86BF82B5D9_inline (SubsystemWithProvider_3_t1CA97D45E2B2EC73190B0CABFCEB20907E1668C0* __this, const RuntimeMethod* method)
{
	return ((  Provider_t131064079F32431586929B88A53CF04A757C085B* (*) (SubsystemWithProvider_3_t1CA97D45E2B2EC73190B0CABFCEB20907E1668C0*, const RuntimeMethod*))SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline)(__this, method);
}
// Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemDescriptor Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemDescriptor::Create(Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26* PhraseRecognitionSubsystemDescriptor_Create_m4096DA14EBD14C26A3B87FBB54545D29CC288830 (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA ___cinfo0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::RegisterDescriptor(UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_RegisterDescriptor_mBCFAF0DE737C77AC4558C27771B36354A028ED9F (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* ___descriptor0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Events.UnityEvent>::.ctor()
inline void Dictionary_2__ctor_m201D3F2B835DA73A9ADF2C88E7158ADEB95A593E (Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem>::.ctor()
inline void MRTKSubsystemProvider_1__ctor_m915E99397167D809CAE451E8C45B83CF8A6457DC (MRTKSubsystemProvider_1_t069B57DAFAE1241F4F186C9EC1C6D416D63A41DC* __this, const RuntimeMethod* method)
{
	((  void (*) (MRTKSubsystemProvider_1_t069B57DAFAE1241F4F186C9EC1C6D416D63A41DC*, const RuntimeMethod*))MRTKSubsystemProvider_1__ctor_mCA2C3C05DD905908E089B5197C76CDB5FCF0D4D9_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.BaseSubsystemConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSubsystemConfig__ctor_m66121F19C6B007FBB7035AD63440E3DFF202C190 (BaseSubsystemConfig_t44DB38465B62F04765177EBD6561E4CD8145629A* __this, const RuntimeMethod* method) ;
// System.String Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PhraseRecognitionSubsystemCinfo_get_Name_mAEB9D6E4886BBDF7E7D24C47C5F726E4813EF8DD_inline (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemCinfo_set_Name_m0FD0989076A6CBB999A10A970241D33A6D17FE18_inline (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::get_DisplayName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PhraseRecognitionSubsystemCinfo_get_DisplayName_mED53F47385D3200D45A1626C6C163B40151678DC_inline (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::set_DisplayName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemCinfo_set_DisplayName_m6F4343E1374E6E41C1E0FC84DD77C57E29E74448_inline (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::get_Author()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PhraseRecognitionSubsystemCinfo_get_Author_mCA96204B822FDE22425476868DFB325FDF8E7051_inline (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::set_Author(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemCinfo_set_Author_m675801D38E95D85A8E65D89DC2ED915BC4BAF975_inline (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Type Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::get_ConfigType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* PhraseRecognitionSubsystemCinfo_get_ConfigType_m472C55F2251B78C9A13B405FAE7677E97AEAF073_inline (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::set_ConfigType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemCinfo_set_ConfigType_mF0876436B75B309054B46496312C09B825E7B8E7_inline (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Type Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::get_ProviderType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* PhraseRecognitionSubsystemCinfo_get_ProviderType_m3115EB68EEDC96CEF9E71F7B1053133FB727B623_inline (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::set_ProviderType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemCinfo_set_ProviderType_m52588BC4D575E792C95518FAE2A5B685189B4D81_inline (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Type Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::get_SubsystemTypeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* PhraseRecognitionSubsystemCinfo_get_SubsystemTypeOverride_mC02365FEF23AB14762B1FD129C01F209792EEF43_inline (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::set_SubsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemCinfo_set_SubsystemTypeOverride_m2BEECA36C4E4619873F85528ABDE535498B8FFA4_inline (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::get_IsCloudBased()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PhraseRecognitionSubsystemCinfo_get_IsCloudBased_mBC65BE882923058F7B3695235CA56CE6F60A4873_inline (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::set_IsCloudBased(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemCinfo_set_IsCloudBased_mE5AE137D372118E9D19D4A54A85E0E480915FC77_inline (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::Equals(Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhraseRecognitionSubsystemCinfo_Equals_m5FBBE38EA59EAD7D606F24A41192433EDE0A2776 (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA ___other0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhraseRecognitionSubsystemCinfo_Equals_mFD58483CF4A58E62B0DB34B5975B81423E8F34B5 (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::op_Equality(Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo,Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhraseRecognitionSubsystemCinfo_op_Equality_mB4157C04832B7A22C86B40B614A787FDAB589B35 (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA ___lhs0, PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA ___rhs1, const RuntimeMethod* method) ;
// System.Void System.ApplicationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82 (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhraseRecognitionSubsystemCinfo_GetHashCode_m6A63700C1DE0024461C877E150432169477EB978 (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem/Provider>::.ctor()
inline void SubsystemDescriptorWithProvider_2__ctor_mBDA527C4E4BA002DAF834AA7CEB6C8FEFA1C087C (SubsystemDescriptorWithProvider_2_tA053C7DB9B8AA14A7AEE9745FAF05CA32048488E* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptorWithProvider_2_tA053C7DB9B8AA14A7AEE9745FAF05CA32048488E*, const RuntimeMethod*))SubsystemDescriptorWithProvider_2__ctor_m639DDEEB52B0E73AD96D610D0DC16CF0E9D0BEA2_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemDescriptor::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemDescriptor_set_Name_m801E31E9EE052FA880EF44F74F9C19693EBB5952 (PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemDescriptor::set_DisplayName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemDescriptor_set_DisplayName_mFBBA79711F87F4BCFEF158D61574495E9995684A_inline (PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemDescriptor::set_Author(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemDescriptor_set_Author_mD890D75C685AAE11F9DF8DAD364ACA69AB28FC24_inline (PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemDescriptor::set_ProviderType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemDescriptor_set_ProviderType_m0D4570966D810DCB50C7DA15F86549B97756CFC6 (PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemDescriptor::set_SubsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemDescriptor_set_SubsystemTypeOverride_mAB7E5F7709B053D3BDBC773ED7E02899BB34E953 (PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemDescriptor::set_IsCloudBased(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemDescriptor_set_IsCloudBased_m8D61A8530A5615B5157CA757DFE655ED98C7A6F2_inline (PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SubsystemDescriptorWithProvider_get_id_m9E92FDF45FE9BFB0B28C2AE3EFE475998D01BBC7_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::get_providerType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* SubsystemDescriptorWithProvider_get_providerType_m1ED8F898361B508FFE2A46D05E81CEAC43B040D4_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::get_subsystemTypeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* SubsystemDescriptorWithProvider_get_subsystemTypeOverride_mCE84F1611CB09975FBB4BE48E015316ADDB52668_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.XRSubsystemHelpers::CheckTypes<Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem/Provider>(System.String,System.Type,System.Type)
inline bool XRSubsystemHelpers_CheckTypes_TisPhraseRecognitionSubsystem_t13A9580C17818A5B80FFCA5A18F516DE8CBECBB4_TisProvider_t131064079F32431586929B88A53CF04A757C085B_m33A63CC5B4E742DBDB17899E42AF368034F4A677 (String_t* ___name0, Type_t* ___subsystemTypeOverride1, Type_t* ___providerType2, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t*, Type_t*, Type_t*, const RuntimeMethod*))XRSubsystemHelpers_CheckTypes_TisRuntimeObject_TisRuntimeObject_m2706E5AA1DF10A4EA82992124656400817D8861D_gshared)(___name0, ___subsystemTypeOverride1, ___providerType2, method);
}
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemDescriptor::.ctor(Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemDescriptor__ctor_m318FEED7F318B3A9940762F82FCF543016408620 (PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26* __this, PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA ___PhraseRecognitionSubsystemCinfo0, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m7F63A273E382CB6328736B6E7F321DDFA40EA9E3_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, intptr_t ___markerPtr0, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_mE2F7A0DB4C52105F7CD135ED8816A2BB98E663CC (intptr_t ___markerPtr0, const RuntimeMethod* method) ;
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_m27DDE00D41B95677982DBFCE074D45B79E50C7CC (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::BeginSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_BeginSample_m1C6D6ED1C8E0CB2FD0934EB6EA333276F67C14F6 (intptr_t ___markerPtr0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKLifecycleManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKLifecycleManager_Awake_m2AEEDB47B356E9D4F8091A6EF606FF06A9326CF0 (MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mAE7D1A5B45004F89DDA7599D937C1A8612AC839A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m284E17785002062EBB5E7D2EC6326182B7766721_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m88BBE158AEE1D53D36462A5E09C56BEDE51BE88D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMRTKManagedSubsystem_t2672549DF0A4DA30EA6E18BA3D886D7DB82DBB6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMRTKSubsystemDescriptor_tA2F5A3387AEA87CA90EAA31A6690E06FED25B162_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC4A7D6876A612A64C97A5060B707F55E268A6DC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m3BF6F664E4282329266263B811275E1168FA3D56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA94BB71845F55955887B3C9E6CF8CD973E391764_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEE77E05450C5B1CFAB0C07AD8DA138A7992B5F78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t633BEA49B34AE9824D8CDA0F820733B381C27AD1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemType_tB8C940FEFFE1DC4087E66139D8E72177D4B0E30E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4CF4B47B0B9BA31820FFDEC8AC433640D34026B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB704BE14E8C479388058F55A86A01C2A266045A);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t633BEA49B34AE9824D8CDA0F820733B381C27AD1* V_0 = NULL;
	MRTKProfile_tE765F5500DAECFD4A32D2CBE0F5D880F2FA90EBE* V_1 = NULL;
	bool V_2 = false;
	Enumerator_tD485D88051FE4E6708D5BA00A1B767C7CC677CEE V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	{
		// List<ISubsystemDescriptor> subsystemDescriptors = new List<ISubsystemDescriptor>();
		List_1_t633BEA49B34AE9824D8CDA0F820733B381C27AD1* L_0 = (List_1_t633BEA49B34AE9824D8CDA0F820733B381C27AD1*)il2cpp_codegen_object_new(List_1_t633BEA49B34AE9824D8CDA0F820733B381C27AD1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mEE77E05450C5B1CFAB0C07AD8DA138A7992B5F78(L_0, List_1__ctor_mEE77E05450C5B1CFAB0C07AD8DA138A7992B5F78_RuntimeMethod_var);
		V_0 = L_0;
		// SubsystemManager.GetAllSubsystemDescriptors(subsystemDescriptors);
		List_1_t633BEA49B34AE9824D8CDA0F820733B381C27AD1* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		SubsystemManager_GetAllSubsystemDescriptors_m1EAC675EB62CB114BBB6162B6552CDF055314A5C(L_1, NULL);
		// MRTKProfile currentProfile = MRTKProfile.Instance;
		MRTKProfile_tE765F5500DAECFD4A32D2CBE0F5D880F2FA90EBE* L_2;
		L_2 = MRTKProfile_get_Instance_mC32F0291769D84E800977CB49EE9CB633FAACA4B_inline(NULL);
		V_1 = L_2;
		// if (currentProfile == null)
		MRTKProfile_tE765F5500DAECFD4A32D2CBE0F5D880F2FA90EBE* L_3 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// Debug.LogError("No profile is available. Please ensure a profile is assigned in the MRTK settings or file a bug if one is and this error is still occurring.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralDB704BE14E8C479388058F55A86A01C2A266045A, NULL);
		// return;
		goto IL_00e2;
	}

IL_0030:
	{
		// foreach (ISubsystemDescriptor descriptor in subsystemDescriptors)
		List_1_t633BEA49B34AE9824D8CDA0F820733B381C27AD1* L_6 = V_0;
		NullCheck(L_6);
		Enumerator_tD485D88051FE4E6708D5BA00A1B767C7CC677CEE L_7;
		L_7 = List_1_GetEnumerator_mA94BB71845F55955887B3C9E6CF8CD973E391764(L_6, List_1_GetEnumerator_mA94BB71845F55955887B3C9E6CF8CD973E391764_RuntimeMethod_var);
		V_3 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d3:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mAE7D1A5B45004F89DDA7599D937C1A8612AC839A((&V_3), Enumerator_Dispose_mAE7D1A5B45004F89DDA7599D937C1A8612AC839A_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00c5_1;
			}

IL_003d_1:
			{
				// foreach (ISubsystemDescriptor descriptor in subsystemDescriptors)
				RuntimeObject* L_8;
				L_8 = Enumerator_get_Current_m88BBE158AEE1D53D36462A5E09C56BEDE51BE88D_inline((&V_3), Enumerator_get_Current_m88BBE158AEE1D53D36462A5E09C56BEDE51BE88D_RuntimeMethod_var);
				V_4 = L_8;
				// IMRTKSubsystemDescriptor mrtkDescriptor = descriptor as IMRTKSubsystemDescriptor;
				RuntimeObject* L_9 = V_4;
				V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_9, IMRTKSubsystemDescriptor_tA2F5A3387AEA87CA90EAA31A6690E06FED25B162_il2cpp_TypeInfo_var));
				// if (mrtkDescriptor == null)
				RuntimeObject* L_10 = V_5;
				V_7 = (bool)((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				bool L_11 = V_7;
				if (!L_11)
				{
					goto IL_005e_1;
				}
			}
			{
				// continue;
				goto IL_00c5_1;
			}

IL_005e_1:
			{
				// if (!currentProfile.LoadedSubsystems.Contains(mrtkDescriptor.SubsystemTypeOverride))
				MRTKProfile_tE765F5500DAECFD4A32D2CBE0F5D880F2FA90EBE* L_12 = V_1;
				NullCheck(L_12);
				List_1_t8AFDCFE373261DFE608A5BE91D8DAEF9E88A5345* L_13;
				L_13 = MRTKProfile_get_LoadedSubsystems_m8E8A6B82D161D04E9FB5E384D0413CF62F80A80A_inline(L_12, NULL);
				RuntimeObject* L_14 = V_5;
				NullCheck(L_14);
				Type_t* L_15;
				L_15 = InterfaceFuncInvoker0< Type_t* >::Invoke(8 /* System.Type Microsoft.MixedReality.Toolkit.Subsystems.IMRTKSubsystemDescriptor::get_SubsystemTypeOverride() */, IMRTKSubsystemDescriptor_tA2F5A3387AEA87CA90EAA31A6690E06FED25B162_il2cpp_TypeInfo_var, L_14);
				il2cpp_codegen_runtime_class_init_inline(SystemType_tB8C940FEFFE1DC4087E66139D8E72177D4B0E30E_il2cpp_TypeInfo_var);
				SystemType_tB8C940FEFFE1DC4087E66139D8E72177D4B0E30E* L_16;
				L_16 = SystemType_op_Implicit_m252D62B7A91131851350164DBFB99FB7671D76F7(L_15, NULL);
				NullCheck(L_13);
				bool L_17;
				L_17 = List_1_Contains_m3BF6F664E4282329266263B811275E1168FA3D56(L_13, L_16, List_1_Contains_m3BF6F664E4282329266263B811275E1168FA3D56_RuntimeMethod_var);
				V_8 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
				bool L_18 = V_8;
				if (!L_18)
				{
					goto IL_0081_1;
				}
			}
			{
				// continue;
				goto IL_00c5_1;
			}

IL_0081_1:
			{
				// Debug.Log($"[MRTKLifecycleManager] Creating {mrtkDescriptor.SubsystemTypeOverride}");
				RuntimeObject* L_19 = V_5;
				NullCheck(L_19);
				Type_t* L_20;
				L_20 = InterfaceFuncInvoker0< Type_t* >::Invoke(8 /* System.Type Microsoft.MixedReality.Toolkit.Subsystems.IMRTKSubsystemDescriptor::get_SubsystemTypeOverride() */, IMRTKSubsystemDescriptor_tA2F5A3387AEA87CA90EAA31A6690E06FED25B162_il2cpp_TypeInfo_var, L_19);
				String_t* L_21;
				L_21 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralC4CF4B47B0B9BA31820FFDEC8AC433640D34026B, L_20, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_21, NULL);
				// ISubsystem subsystem = descriptor.Create();
				RuntimeObject* L_22 = V_4;
				NullCheck(L_22);
				RuntimeObject* L_23;
				L_23 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* UnityEngine.ISubsystem UnityEngine.ISubsystemDescriptor::Create() */, ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E_il2cpp_TypeInfo_var, L_22);
				V_6 = L_23;
				// Debug.Assert(subsystem is IMRTKManagedSubsystem);
				RuntimeObject* L_24 = V_6;
				Debug_Assert_mC95931BE797761A2D7800908C0BA4B41D68B3216((bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_24, IMRTKManagedSubsystem_t2672549DF0A4DA30EA6E18BA3D886D7DB82DBB6D_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), NULL);
				// managedSubsystems.Add(subsystem as IMRTKManagedSubsystem);
				List_1_tC426FC620BF306586A96F31FDC23897C0C6ECF1F* L_25 = __this->___managedSubsystems_4;
				RuntimeObject* L_26 = V_6;
				NullCheck(L_25);
				List_1_Add_mC4A7D6876A612A64C97A5060B707F55E268A6DC1_inline(L_25, ((RuntimeObject*)IsInst((RuntimeObject*)L_26, IMRTKManagedSubsystem_t2672549DF0A4DA30EA6E18BA3D886D7DB82DBB6D_il2cpp_TypeInfo_var)), List_1_Add_mC4A7D6876A612A64C97A5060B707F55E268A6DC1_RuntimeMethod_var);
			}

IL_00c5_1:
			{
				// foreach (ISubsystemDescriptor descriptor in subsystemDescriptors)
				bool L_27;
				L_27 = Enumerator_MoveNext_m284E17785002062EBB5E7D2EC6326182B7766721((&V_3), Enumerator_MoveNext_m284E17785002062EBB5E7D2EC6326182B7766721_RuntimeMethod_var);
				if (L_27)
				{
					goto IL_003d_1;
				}
			}
			{
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
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKLifecycleManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKLifecycleManager_OnDestroy_m5B5EA9AAA0401958AC4ECEA97F18483B48804E2E (MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF* __this, const RuntimeMethod* method) 
{
	{
		// Dispose();
		MRTKLifecycleManager_Dispose_m18A92AE4B093DF617A4244E73FB53301BEBD2189(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKLifecycleManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKLifecycleManager_OnDisable_mBE12D623892379E087E03B9AB7BD25231CB0649F (MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m40E9EE3711DE18047836B4DEF71DFF591601F836_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m20982B174761C7B0A4A1FCAAFB751B1D6F5D7677_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB3580B6E29594ED0D3FD0C98C4FF633EA8ECBBF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMRTKManagedSubsystem_t2672549DF0A4DA30EA6E18BA3D886D7DB82DBB6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m358268DF64F65735D7AE98971C3881B4BE74A189_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_t2393DBE06B9F1FA6EDDB95ABB7F3A94EFFD9DBAA V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	{
		// using (OnDisableProfilerMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF_StaticFields*)il2cpp_codegen_static_fields_for(MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF_il2cpp_TypeInfo_var))->___OnDisableProfilerMarker_5;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004d:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// foreach (IMRTKManagedSubsystem subsystem in managedSubsystems)
				List_1_tC426FC620BF306586A96F31FDC23897C0C6ECF1F* L_2 = __this->___managedSubsystems_4;
				NullCheck(L_2);
				Enumerator_t2393DBE06B9F1FA6EDDB95ABB7F3A94EFFD9DBAA L_3;
				L_3 = List_1_GetEnumerator_m358268DF64F65735D7AE98971C3881B4BE74A189(L_2, List_1_GetEnumerator_m358268DF64F65735D7AE98971C3881B4BE74A189_RuntimeMethod_var);
				V_2 = L_3;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_003b_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m40E9EE3711DE18047836B4DEF71DFF591601F836((&V_2), Enumerator_Dispose_m40E9EE3711DE18047836B4DEF71DFF591601F836_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0030_2;
					}

IL_001f_2:
					{
						// foreach (IMRTKManagedSubsystem subsystem in managedSubsystems)
						RuntimeObject* L_4;
						L_4 = Enumerator_get_Current_mB3580B6E29594ED0D3FD0C98C4FF633EA8ECBBF6_inline((&V_2), Enumerator_get_Current_mB3580B6E29594ED0D3FD0C98C4FF633EA8ECBBF6_RuntimeMethod_var);
						V_3 = L_4;
						// subsystem.Stop();
						RuntimeObject* L_5 = V_3;
						NullCheck(L_5);
						InterfaceActionInvoker0::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Subsystems.IMRTKManagedSubsystem::Stop() */, IMRTKManagedSubsystem_t2672549DF0A4DA30EA6E18BA3D886D7DB82DBB6D_il2cpp_TypeInfo_var, L_5);
					}

IL_0030_2:
					{
						// foreach (IMRTKManagedSubsystem subsystem in managedSubsystems)
						bool L_6;
						L_6 = Enumerator_MoveNext_m20982B174761C7B0A4A1FCAAFB751B1D6F5D7677((&V_2), Enumerator_MoveNext_m20982B174761C7B0A4A1FCAAFB751B1D6F5D7677_RuntimeMethod_var);
						if (L_6)
						{
							goto IL_001f_2;
						}
					}
					{
						goto IL_004a_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_004a_1:
			{
				goto IL_005c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKLifecycleManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKLifecycleManager_OnEnable_m6B9C5A2E4780B0425D6FE1C1C3899405C0B018DF (MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m40E9EE3711DE18047836B4DEF71DFF591601F836_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m20982B174761C7B0A4A1FCAAFB751B1D6F5D7677_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB3580B6E29594ED0D3FD0C98C4FF633EA8ECBBF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMRTKManagedSubsystem_t2672549DF0A4DA30EA6E18BA3D886D7DB82DBB6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m358268DF64F65735D7AE98971C3881B4BE74A189_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDC87D890F3C0013E110EE14C0658DC0BA58A67D);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_t2393DBE06B9F1FA6EDDB95ABB7F3A94EFFD9DBAA V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	{
		// using (OnEnableProfilerMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF_StaticFields*)il2cpp_codegen_static_fields_for(MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF_il2cpp_TypeInfo_var))->___OnEnableProfilerMarker_6;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005e:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// foreach (IMRTKManagedSubsystem subsystem in managedSubsystems)
				List_1_tC426FC620BF306586A96F31FDC23897C0C6ECF1F* L_2 = __this->___managedSubsystems_4;
				NullCheck(L_2);
				Enumerator_t2393DBE06B9F1FA6EDDB95ABB7F3A94EFFD9DBAA L_3;
				L_3 = List_1_GetEnumerator_m358268DF64F65735D7AE98971C3881B4BE74A189(L_2, List_1_GetEnumerator_m358268DF64F65735D7AE98971C3881B4BE74A189_RuntimeMethod_var);
				V_2 = L_3;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_004c_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m40E9EE3711DE18047836B4DEF71DFF591601F836((&V_2), Enumerator_Dispose_m40E9EE3711DE18047836B4DEF71DFF591601F836_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0041_2;
					}

IL_001f_2:
					{
						// foreach (IMRTKManagedSubsystem subsystem in managedSubsystems)
						RuntimeObject* L_4;
						L_4 = Enumerator_get_Current_mB3580B6E29594ED0D3FD0C98C4FF633EA8ECBBF6_inline((&V_2), Enumerator_get_Current_mB3580B6E29594ED0D3FD0C98C4FF633EA8ECBBF6_RuntimeMethod_var);
						V_3 = L_4;
						// Debug.Log($"[MRTKLifecycleManager] Starting {subsystem}");
						RuntimeObject* L_5 = V_3;
						String_t* L_6;
						L_6 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralCDC87D890F3C0013E110EE14C0658DC0BA58A67D, L_5, NULL);
						il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
						Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_6, NULL);
						// subsystem.Start();
						RuntimeObject* L_7 = V_3;
						NullCheck(L_7);
						InterfaceActionInvoker0::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Subsystems.IMRTKManagedSubsystem::Start() */, IMRTKManagedSubsystem_t2672549DF0A4DA30EA6E18BA3D886D7DB82DBB6D_il2cpp_TypeInfo_var, L_7);
					}

IL_0041_2:
					{
						// foreach (IMRTKManagedSubsystem subsystem in managedSubsystems)
						bool L_8;
						L_8 = Enumerator_MoveNext_m20982B174761C7B0A4A1FCAAFB751B1D6F5D7677((&V_2), Enumerator_MoveNext_m20982B174761C7B0A4A1FCAAFB751B1D6F5D7677_RuntimeMethod_var);
						if (L_8)
						{
							goto IL_001f_2;
						}
					}
					{
						goto IL_005b_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_005b_1:
			{
				goto IL_006d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKLifecycleManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKLifecycleManager_Update_mB091619797CB69608B716716BBB4B6024AC9E8D8 (MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m40E9EE3711DE18047836B4DEF71DFF591601F836_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m20982B174761C7B0A4A1FCAAFB751B1D6F5D7677_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB3580B6E29594ED0D3FD0C98C4FF633EA8ECBBF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMRTKManagedSubsystem_t2672549DF0A4DA30EA6E18BA3D886D7DB82DBB6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m358268DF64F65735D7AE98971C3881B4BE74A189_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_t2393DBE06B9F1FA6EDDB95ABB7F3A94EFFD9DBAA V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	{
		// using (UpdateProfilerMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF_StaticFields*)il2cpp_codegen_static_fields_for(MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF_il2cpp_TypeInfo_var))->___UpdateProfilerMarker_7;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004d:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// foreach (IMRTKManagedSubsystem subsystem in managedSubsystems)
				List_1_tC426FC620BF306586A96F31FDC23897C0C6ECF1F* L_2 = __this->___managedSubsystems_4;
				NullCheck(L_2);
				Enumerator_t2393DBE06B9F1FA6EDDB95ABB7F3A94EFFD9DBAA L_3;
				L_3 = List_1_GetEnumerator_m358268DF64F65735D7AE98971C3881B4BE74A189(L_2, List_1_GetEnumerator_m358268DF64F65735D7AE98971C3881B4BE74A189_RuntimeMethod_var);
				V_2 = L_3;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_003b_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m40E9EE3711DE18047836B4DEF71DFF591601F836((&V_2), Enumerator_Dispose_m40E9EE3711DE18047836B4DEF71DFF591601F836_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0030_2;
					}

IL_001f_2:
					{
						// foreach (IMRTKManagedSubsystem subsystem in managedSubsystems)
						RuntimeObject* L_4;
						L_4 = Enumerator_get_Current_mB3580B6E29594ED0D3FD0C98C4FF633EA8ECBBF6_inline((&V_2), Enumerator_get_Current_mB3580B6E29594ED0D3FD0C98C4FF633EA8ECBBF6_RuntimeMethod_var);
						V_3 = L_4;
						// subsystem.Update();
						RuntimeObject* L_5 = V_3;
						NullCheck(L_5);
						InterfaceActionInvoker0::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Subsystems.IMRTKManagedSubsystem::Update() */, IMRTKManagedSubsystem_t2672549DF0A4DA30EA6E18BA3D886D7DB82DBB6D_il2cpp_TypeInfo_var, L_5);
					}

IL_0030_2:
					{
						// foreach (IMRTKManagedSubsystem subsystem in managedSubsystems)
						bool L_6;
						L_6 = Enumerator_MoveNext_m20982B174761C7B0A4A1FCAAFB751B1D6F5D7677((&V_2), Enumerator_MoveNext_m20982B174761C7B0A4A1FCAAFB751B1D6F5D7677_RuntimeMethod_var);
						if (L_6)
						{
							goto IL_001f_2;
						}
					}
					{
						goto IL_004a_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_004a_1:
			{
				goto IL_005c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKLifecycleManager::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKLifecycleManager_FixedUpdate_mE0F98EA81E23FD8F22B0913D476BA3B434B07F0C (MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m40E9EE3711DE18047836B4DEF71DFF591601F836_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m20982B174761C7B0A4A1FCAAFB751B1D6F5D7677_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB3580B6E29594ED0D3FD0C98C4FF633EA8ECBBF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMRTKManagedSubsystem_t2672549DF0A4DA30EA6E18BA3D886D7DB82DBB6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m358268DF64F65735D7AE98971C3881B4BE74A189_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_t2393DBE06B9F1FA6EDDB95ABB7F3A94EFFD9DBAA V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	{
		// using (FixedUpdateProfilerMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF_StaticFields*)il2cpp_codegen_static_fields_for(MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF_il2cpp_TypeInfo_var))->___FixedUpdateProfilerMarker_8;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004d:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// foreach (IMRTKManagedSubsystem subsystem in managedSubsystems)
				List_1_tC426FC620BF306586A96F31FDC23897C0C6ECF1F* L_2 = __this->___managedSubsystems_4;
				NullCheck(L_2);
				Enumerator_t2393DBE06B9F1FA6EDDB95ABB7F3A94EFFD9DBAA L_3;
				L_3 = List_1_GetEnumerator_m358268DF64F65735D7AE98971C3881B4BE74A189(L_2, List_1_GetEnumerator_m358268DF64F65735D7AE98971C3881B4BE74A189_RuntimeMethod_var);
				V_2 = L_3;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_003b_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m40E9EE3711DE18047836B4DEF71DFF591601F836((&V_2), Enumerator_Dispose_m40E9EE3711DE18047836B4DEF71DFF591601F836_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0030_2;
					}

IL_001f_2:
					{
						// foreach (IMRTKManagedSubsystem subsystem in managedSubsystems)
						RuntimeObject* L_4;
						L_4 = Enumerator_get_Current_mB3580B6E29594ED0D3FD0C98C4FF633EA8ECBBF6_inline((&V_2), Enumerator_get_Current_mB3580B6E29594ED0D3FD0C98C4FF633EA8ECBBF6_RuntimeMethod_var);
						V_3 = L_4;
						// subsystem.FixedUpdate();
						RuntimeObject* L_5 = V_3;
						NullCheck(L_5);
						InterfaceActionInvoker0::Invoke(5 /* System.Void Microsoft.MixedReality.Toolkit.Subsystems.IMRTKManagedSubsystem::FixedUpdate() */, IMRTKManagedSubsystem_t2672549DF0A4DA30EA6E18BA3D886D7DB82DBB6D_il2cpp_TypeInfo_var, L_5);
					}

IL_0030_2:
					{
						// foreach (IMRTKManagedSubsystem subsystem in managedSubsystems)
						bool L_6;
						L_6 = Enumerator_MoveNext_m20982B174761C7B0A4A1FCAAFB751B1D6F5D7677((&V_2), Enumerator_MoveNext_m20982B174761C7B0A4A1FCAAFB751B1D6F5D7677_RuntimeMethod_var);
						if (L_6)
						{
							goto IL_001f_2;
						}
					}
					{
						goto IL_004a_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_004a_1:
			{
				goto IL_005c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKLifecycleManager::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKLifecycleManager_LateUpdate_m900B0E95B377687B27428E744CF78C1D468CF2AD (MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m40E9EE3711DE18047836B4DEF71DFF591601F836_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m20982B174761C7B0A4A1FCAAFB751B1D6F5D7677_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB3580B6E29594ED0D3FD0C98C4FF633EA8ECBBF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMRTKManagedSubsystem_t2672549DF0A4DA30EA6E18BA3D886D7DB82DBB6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m358268DF64F65735D7AE98971C3881B4BE74A189_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_t2393DBE06B9F1FA6EDDB95ABB7F3A94EFFD9DBAA V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	{
		// using (LateUpdateProfilerMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF_StaticFields*)il2cpp_codegen_static_fields_for(MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF_il2cpp_TypeInfo_var))->___LateUpdateProfilerMarker_9;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004d:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// foreach (IMRTKManagedSubsystem subsystem in managedSubsystems)
				List_1_tC426FC620BF306586A96F31FDC23897C0C6ECF1F* L_2 = __this->___managedSubsystems_4;
				NullCheck(L_2);
				Enumerator_t2393DBE06B9F1FA6EDDB95ABB7F3A94EFFD9DBAA L_3;
				L_3 = List_1_GetEnumerator_m358268DF64F65735D7AE98971C3881B4BE74A189(L_2, List_1_GetEnumerator_m358268DF64F65735D7AE98971C3881B4BE74A189_RuntimeMethod_var);
				V_2 = L_3;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_003b_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m40E9EE3711DE18047836B4DEF71DFF591601F836((&V_2), Enumerator_Dispose_m40E9EE3711DE18047836B4DEF71DFF591601F836_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0030_2;
					}

IL_001f_2:
					{
						// foreach (IMRTKManagedSubsystem subsystem in managedSubsystems)
						RuntimeObject* L_4;
						L_4 = Enumerator_get_Current_mB3580B6E29594ED0D3FD0C98C4FF633EA8ECBBF6_inline((&V_2), Enumerator_get_Current_mB3580B6E29594ED0D3FD0C98C4FF633EA8ECBBF6_RuntimeMethod_var);
						V_3 = L_4;
						// subsystem.LateUpdate();
						RuntimeObject* L_5 = V_3;
						NullCheck(L_5);
						InterfaceActionInvoker0::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Subsystems.IMRTKManagedSubsystem::LateUpdate() */, IMRTKManagedSubsystem_t2672549DF0A4DA30EA6E18BA3D886D7DB82DBB6D_il2cpp_TypeInfo_var, L_5);
					}

IL_0030_2:
					{
						// foreach (IMRTKManagedSubsystem subsystem in managedSubsystems)
						bool L_6;
						L_6 = Enumerator_MoveNext_m20982B174761C7B0A4A1FCAAFB751B1D6F5D7677((&V_2), Enumerator_MoveNext_m20982B174761C7B0A4A1FCAAFB751B1D6F5D7677_RuntimeMethod_var);
						if (L_6)
						{
							goto IL_001f_2;
						}
					}
					{
						goto IL_004a_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_004a_1:
			{
				goto IL_005c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005c:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Subsystems.IMRTKManagedSubsystem Microsoft.MixedReality.Toolkit.Subsystems.MRTKLifecycleManager::ForceAddSubsystem(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MRTKLifecycleManager_ForceAddSubsystem_m64ACDECBF05018D2DE303B7C437AA761BCD621C1 (MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF* __this, Type_t* ___concreteType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m40E9EE3711DE18047836B4DEF71DFF591601F836_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mAE7D1A5B45004F89DDA7599D937C1A8612AC839A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m20982B174761C7B0A4A1FCAAFB751B1D6F5D7677_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m284E17785002062EBB5E7D2EC6326182B7766721_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m88BBE158AEE1D53D36462A5E09C56BEDE51BE88D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB3580B6E29594ED0D3FD0C98C4FF633EA8ECBBF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMRTKManagedSubsystem_t2672549DF0A4DA30EA6E18BA3D886D7DB82DBB6D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMRTKManagedSubsystem_t2672549DF0A4DA30EA6E18BA3D886D7DB82DBB6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMRTKSubsystemDescriptor_tA2F5A3387AEA87CA90EAA31A6690E06FED25B162_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC4A7D6876A612A64C97A5060B707F55E268A6DC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m358268DF64F65735D7AE98971C3881B4BE74A189_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA94BB71845F55955887B3C9E6CF8CD973E391764_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEE77E05450C5B1CFAB0C07AD8DA138A7992B5F78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t633BEA49B34AE9824D8CDA0F820733B381C27AD1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FE4425905803CF2F4079A513827EE10B80B7C78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DBEEE5525AB73A9DB798B48BC5F60B43D9FEFD8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DDE305695C44B5ABC2BAB32F8C335348FC89252);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FF3297CA0202A9E685B045DDB34C412077B44BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E07521F715F33929B90B294529EB21F3C894A77);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F0D33BDEE7449408177B6A8F7216C431AFFE6AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD0185B4676E3B49238DFD2484653DDA83CC8761);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCF9EA0647678DEE02C4C3304F0B4AFA5D58E918);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t633BEA49B34AE9824D8CDA0F820733B381C27AD1* V_0 = NULL;
	Enumerator_t2393DBE06B9F1FA6EDDB95ABB7F3A94EFFD9DBAA V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	Enumerator_tD485D88051FE4E6708D5BA00A1B767C7CC677CEE V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	{
		// Debug.Assert(typeof(IMRTKManagedSubsystem).IsAssignableFrom(concreteType),
		//     $"ForceAddSubsystem called with a non-MRTK subsystem ({concreteType}). Only subsystems " +
		//      "that implement IMRTKSubsystem can be managed by the MRTKLifecycleManager.");
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (IMRTKManagedSubsystem_t2672549DF0A4DA30EA6E18BA3D886D7DB82DBB6D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		Type_t* L_2 = ___concreteType0;
		NullCheck(L_1);
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_2);
		Type_t* L_4 = ___concreteType0;
		String_t* L_5;
		L_5 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral6FF3297CA0202A9E685B045DDB34C412077B44BD, L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_5, _stringLiteral3DBEEE5525AB73A9DB798B48BC5F60B43D9FEFD8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m9CA35857A4FF29506840C572F2C7BA233805B806(L_3, L_6, NULL);
		// foreach (var subsystem in managedSubsystems)
		List_1_tC426FC620BF306586A96F31FDC23897C0C6ECF1F* L_7 = __this->___managedSubsystems_4;
		NullCheck(L_7);
		Enumerator_t2393DBE06B9F1FA6EDDB95ABB7F3A94EFFD9DBAA L_8;
		L_8 = List_1_GetEnumerator_m358268DF64F65735D7AE98971C3881B4BE74A189(L_7, List_1_GetEnumerator_m358268DF64F65735D7AE98971C3881B4BE74A189_RuntimeMethod_var);
		V_1 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0084:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m40E9EE3711DE18047836B4DEF71DFF591601F836((&V_1), Enumerator_Dispose_m40E9EE3711DE18047836B4DEF71DFF591601F836_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0079_1;
			}

IL_003b_1:
			{
				// foreach (var subsystem in managedSubsystems)
				RuntimeObject* L_9;
				L_9 = Enumerator_get_Current_mB3580B6E29594ED0D3FD0C98C4FF633EA8ECBBF6_inline((&V_1), Enumerator_get_Current_mB3580B6E29594ED0D3FD0C98C4FF633EA8ECBBF6_RuntimeMethod_var);
				V_2 = L_9;
				// if (subsystem.GetType() == concreteType)
				RuntimeObject* L_10 = V_2;
				NullCheck(L_10);
				Type_t* L_11;
				L_11 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_10, NULL);
				Type_t* L_12 = ___concreteType0;
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				bool L_13;
				L_13 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_11, L_12, NULL);
				V_3 = L_13;
				bool L_14 = V_3;
				if (!L_14)
				{
					goto IL_0078_1;
				}
			}
			{
				// Debug.LogWarning($"ForceAddSubsystem was called with a subsystem ({concreteType}) " +
				//                   "that was already managed by the MRTKLifecycleManager.");
				Type_t* L_15 = ___concreteType0;
				String_t* L_16;
				L_16 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral2FE4425905803CF2F4079A513827EE10B80B7C78, L_15, NULL);
				String_t* L_17;
				L_17 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_16, _stringLiteralDCF9EA0647678DEE02C4C3304F0B4AFA5D58E918, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_17, NULL);
				// return null;
				V_4 = (RuntimeObject*)NULL;
				goto IL_0195;
			}

IL_0078_1:
			{
			}

IL_0079_1:
			{
				// foreach (var subsystem in managedSubsystems)
				bool L_18;
				L_18 = Enumerator_MoveNext_m20982B174761C7B0A4A1FCAAFB751B1D6F5D7677((&V_1), Enumerator_MoveNext_m20982B174761C7B0A4A1FCAAFB751B1D6F5D7677_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_003b_1;
				}
			}
			{
				goto IL_0093;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0093:
	{
		// List<ISubsystemDescriptor> subsystemDescriptors = new List<ISubsystemDescriptor>();
		List_1_t633BEA49B34AE9824D8CDA0F820733B381C27AD1* L_19 = (List_1_t633BEA49B34AE9824D8CDA0F820733B381C27AD1*)il2cpp_codegen_object_new(List_1_t633BEA49B34AE9824D8CDA0F820733B381C27AD1_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		List_1__ctor_mEE77E05450C5B1CFAB0C07AD8DA138A7992B5F78(L_19, List_1__ctor_mEE77E05450C5B1CFAB0C07AD8DA138A7992B5F78_RuntimeMethod_var);
		V_0 = L_19;
		// SubsystemManager.GetAllSubsystemDescriptors(subsystemDescriptors);
		List_1_t633BEA49B34AE9824D8CDA0F820733B381C27AD1* L_20 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		SubsystemManager_GetAllSubsystemDescriptors_m1EAC675EB62CB114BBB6162B6552CDF055314A5C(L_20, NULL);
		// foreach (ISubsystemDescriptor descriptor in subsystemDescriptors)
		List_1_t633BEA49B34AE9824D8CDA0F820733B381C27AD1* L_21 = V_0;
		NullCheck(L_21);
		Enumerator_tD485D88051FE4E6708D5BA00A1B767C7CC677CEE L_22;
		L_22 = List_1_GetEnumerator_mA94BB71845F55955887B3C9E6CF8CD973E391764(L_21, List_1_GetEnumerator_mA94BB71845F55955887B3C9E6CF8CD973E391764_RuntimeMethod_var);
		V_5 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0166:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mAE7D1A5B45004F89DDA7599D937C1A8612AC839A((&V_5), Enumerator_Dispose_mAE7D1A5B45004F89DDA7599D937C1A8612AC839A_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0158_1;
			}

IL_00ae_1:
			{
				// foreach (ISubsystemDescriptor descriptor in subsystemDescriptors)
				RuntimeObject* L_23;
				L_23 = Enumerator_get_Current_m88BBE158AEE1D53D36462A5E09C56BEDE51BE88D_inline((&V_5), Enumerator_get_Current_m88BBE158AEE1D53D36462A5E09C56BEDE51BE88D_RuntimeMethod_var);
				V_6 = L_23;
				// IMRTKSubsystemDescriptor mrtkDescriptor = descriptor as IMRTKSubsystemDescriptor;
				RuntimeObject* L_24 = V_6;
				V_7 = ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IMRTKSubsystemDescriptor_tA2F5A3387AEA87CA90EAA31A6690E06FED25B162_il2cpp_TypeInfo_var));
				// if (mrtkDescriptor == null)
				RuntimeObject* L_25 = V_7;
				V_9 = (bool)((((RuntimeObject*)(RuntimeObject*)L_25) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				bool L_26 = V_9;
				if (!L_26)
				{
					goto IL_00d2_1;
				}
			}
			{
				// continue;
				goto IL_0158_1;
			}

IL_00d2_1:
			{
				// if (!(mrtkDescriptor.SubsystemTypeOverride == concreteType))
				RuntimeObject* L_27 = V_7;
				NullCheck(L_27);
				Type_t* L_28;
				L_28 = InterfaceFuncInvoker0< Type_t* >::Invoke(8 /* System.Type Microsoft.MixedReality.Toolkit.Subsystems.IMRTKSubsystemDescriptor::get_SubsystemTypeOverride() */, IMRTKSubsystemDescriptor_tA2F5A3387AEA87CA90EAA31A6690E06FED25B162_il2cpp_TypeInfo_var, L_27);
				Type_t* L_29 = ___concreteType0;
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				bool L_30;
				L_30 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_28, L_29, NULL);
				V_10 = (bool)((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
				bool L_31 = V_10;
				if (!L_31)
				{
					goto IL_00eb_1;
				}
			}
			{
				// continue;
				goto IL_0158_1;
			}

IL_00eb_1:
			{
				// Debug.Log($"[MRTKLifecycleManager] ForceAddSubsystem creating {mrtkDescriptor.SubsystemTypeOverride}");
				RuntimeObject* L_32 = V_7;
				NullCheck(L_32);
				Type_t* L_33;
				L_33 = InterfaceFuncInvoker0< Type_t* >::Invoke(8 /* System.Type Microsoft.MixedReality.Toolkit.Subsystems.IMRTKSubsystemDescriptor::get_SubsystemTypeOverride() */, IMRTKSubsystemDescriptor_tA2F5A3387AEA87CA90EAA31A6690E06FED25B162_il2cpp_TypeInfo_var, L_32);
				String_t* L_34;
				L_34 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral7E07521F715F33929B90B294529EB21F3C894A77, L_33, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_34, NULL);
				// ISubsystem subsystem = descriptor.Create();
				RuntimeObject* L_35 = V_6;
				NullCheck(L_35);
				RuntimeObject* L_36;
				L_36 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* UnityEngine.ISubsystem UnityEngine.ISubsystemDescriptor::Create() */, ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E_il2cpp_TypeInfo_var, L_35);
				V_8 = L_36;
				// Debug.Assert(subsystem is IMRTKManagedSubsystem);
				RuntimeObject* L_37 = V_8;
				Debug_Assert_mC95931BE797761A2D7800908C0BA4B41D68B3216((bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_37, IMRTKManagedSubsystem_t2672549DF0A4DA30EA6E18BA3D886D7DB82DBB6D_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), NULL);
				// Debug.Log($"[MRTKLifecycleManager] ForceAddSubsystem starting {mrtkDescriptor.SubsystemTypeOverride}");
				RuntimeObject* L_38 = V_7;
				NullCheck(L_38);
				Type_t* L_39;
				L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(8 /* System.Type Microsoft.MixedReality.Toolkit.Subsystems.IMRTKSubsystemDescriptor::get_SubsystemTypeOverride() */, IMRTKSubsystemDescriptor_tA2F5A3387AEA87CA90EAA31A6690E06FED25B162_il2cpp_TypeInfo_var, L_38);
				String_t* L_40;
				L_40 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral4DDE305695C44B5ABC2BAB32F8C335348FC89252, L_39, NULL);
				Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_40, NULL);
				// subsystem.Start();
				RuntimeObject* L_41 = V_8;
				NullCheck(L_41);
				InterfaceActionInvoker0::Invoke(1 /* System.Void UnityEngine.ISubsystem::Start() */, ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var, L_41);
				// managedSubsystems.Add(subsystem as IMRTKManagedSubsystem);
				List_1_tC426FC620BF306586A96F31FDC23897C0C6ECF1F* L_42 = __this->___managedSubsystems_4;
				RuntimeObject* L_43 = V_8;
				NullCheck(L_42);
				List_1_Add_mC4A7D6876A612A64C97A5060B707F55E268A6DC1_inline(L_42, ((RuntimeObject*)IsInst((RuntimeObject*)L_43, IMRTKManagedSubsystem_t2672549DF0A4DA30EA6E18BA3D886D7DB82DBB6D_il2cpp_TypeInfo_var)), List_1_Add_mC4A7D6876A612A64C97A5060B707F55E268A6DC1_RuntimeMethod_var);
				// return subsystem as IMRTKManagedSubsystem;
				RuntimeObject* L_44 = V_8;
				V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_44, IMRTKManagedSubsystem_t2672549DF0A4DA30EA6E18BA3D886D7DB82DBB6D_il2cpp_TypeInfo_var));
				goto IL_0195;
			}

IL_0158_1:
			{
				// foreach (ISubsystemDescriptor descriptor in subsystemDescriptors)
				bool L_45;
				L_45 = Enumerator_MoveNext_m284E17785002062EBB5E7D2EC6326182B7766721((&V_5), Enumerator_MoveNext_m284E17785002062EBB5E7D2EC6326182B7766721_RuntimeMethod_var);
				if (L_45)
				{
					goto IL_00ae_1;
				}
			}
			{
				goto IL_0175;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0175:
	{
		// Debug.LogWarning($"AddSubsystem was called with {concreteType}, but we couldn't " +
		//                   "find this subsystem in your project. Are you missing a package?");
		Type_t* L_46 = ___concreteType0;
		String_t* L_47;
		L_47 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral9F0D33BDEE7449408177B6A8F7216C431AFFE6AE, L_46, NULL);
		String_t* L_48;
		L_48 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_47, _stringLiteralAD0185B4676E3B49238DFD2484653DDA83CC8761, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_48, NULL);
		// return null;
		V_4 = (RuntimeObject*)NULL;
		goto IL_0195;
	}

IL_0195:
	{
		// }
		RuntimeObject* L_49 = V_4;
		return L_49;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKLifecycleManager::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKLifecycleManager_Finalize_mA7516E9DFA4751776B618902A3EB21E0FD886336 (MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				// }
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Dispose();
			MRTKLifecycleManager_Dispose_m18A92AE4B093DF617A4244E73FB53301BEBD2189(__this, NULL);
			goto IL_0013;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKLifecycleManager::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKLifecycleManager_Dispose_m18A92AE4B093DF617A4244E73FB53301BEBD2189 (MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Dispose(true);
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKLifecycleManager::Dispose(System.Boolean) */, __this, (bool)1);
		// GC.SuppressFinalize(this);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKLifecycleManager::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKLifecycleManager_Dispose_m22336F1CBB9DD80EA276B5608C6E66EA6E6895A3 (MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m40E9EE3711DE18047836B4DEF71DFF591601F836_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m20982B174761C7B0A4A1FCAAFB751B1D6F5D7677_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB3580B6E29594ED0D3FD0C98C4FF633EA8ECBBF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMRTKManagedSubsystem_t2672549DF0A4DA30EA6E18BA3D886D7DB82DBB6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m4BBB5897D4E6C69A22E3C531F2A60AEFFA9C27E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m358268DF64F65735D7AE98971C3881B4BE74A189_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t2393DBE06B9F1FA6EDDB95ABB7F3A94EFFD9DBAA V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// foreach (IMRTKManagedSubsystem s in managedSubsystems)
		List_1_tC426FC620BF306586A96F31FDC23897C0C6ECF1F* L_0 = __this->___managedSubsystems_4;
		NullCheck(L_0);
		Enumerator_t2393DBE06B9F1FA6EDDB95ABB7F3A94EFFD9DBAA L_1;
		L_1 = List_1_GetEnumerator_m358268DF64F65735D7AE98971C3881B4BE74A189(L_0, List_1_GetEnumerator_m358268DF64F65735D7AE98971C3881B4BE74A189_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m40E9EE3711DE18047836B4DEF71DFF591601F836((&V_0), Enumerator_Dispose_m40E9EE3711DE18047836B4DEF71DFF591601F836_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0021_1;
			}

IL_0010_1:
			{
				// foreach (IMRTKManagedSubsystem s in managedSubsystems)
				RuntimeObject* L_2;
				L_2 = Enumerator_get_Current_mB3580B6E29594ED0D3FD0C98C4FF633EA8ECBBF6_inline((&V_0), Enumerator_get_Current_mB3580B6E29594ED0D3FD0C98C4FF633EA8ECBBF6_RuntimeMethod_var);
				V_1 = L_2;
				// s.Destroy();
				RuntimeObject* L_3 = V_1;
				NullCheck(L_3);
				InterfaceActionInvoker0::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Subsystems.IMRTKManagedSubsystem::Destroy() */, IMRTKManagedSubsystem_t2672549DF0A4DA30EA6E18BA3D886D7DB82DBB6D_il2cpp_TypeInfo_var, L_3);
			}

IL_0021_1:
			{
				// foreach (IMRTKManagedSubsystem s in managedSubsystems)
				bool L_4;
				L_4 = Enumerator_MoveNext_m20982B174761C7B0A4A1FCAAFB751B1D6F5D7677((&V_0), Enumerator_MoveNext_m20982B174761C7B0A4A1FCAAFB751B1D6F5D7677_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_0010_1;
				}
			}
			{
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
		// managedSubsystems.Clear();
		List_1_tC426FC620BF306586A96F31FDC23897C0C6ECF1F* L_5 = __this->___managedSubsystems_4;
		NullCheck(L_5);
		List_1_Clear_m4BBB5897D4E6C69A22E3C531F2A60AEFFA9C27E4_inline(L_5, List_1_Clear_m4BBB5897D4E6C69A22E3C531F2A60AEFFA9C27E4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKLifecycleManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKLifecycleManager__ctor_mFA7BC3F391BF27C288AC8530428E46AA6B2DEEB8 (MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC461107718E601966FC0DAA2C9E6E5645164F052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC426FC620BF306586A96F31FDC23897C0C6ECF1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected List<IMRTKManagedSubsystem> managedSubsystems = new List<IMRTKManagedSubsystem>();
		List_1_tC426FC620BF306586A96F31FDC23897C0C6ECF1F* L_0 = (List_1_tC426FC620BF306586A96F31FDC23897C0C6ECF1F*)il2cpp_codegen_object_new(List_1_tC426FC620BF306586A96F31FDC23897C0C6ECF1F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC461107718E601966FC0DAA2C9E6E5645164F052(L_0, List_1__ctor_mC461107718E601966FC0DAA2C9E6E5645164F052_RuntimeMethod_var);
		__this->___managedSubsystems_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___managedSubsystems_4), (void*)L_0);
		// protected bool disposed = false;
		__this->___disposed_10 = (bool)0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKLifecycleManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKLifecycleManager__cctor_m4392CCB2279688E3C962576807F691BB86341797 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30795A3D724741ED34B008A388F3F82398F08AE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A75E8B985D337C2C8DB9F5F762353FDF6DD92F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778D088416F28001FF7BEEA2DC9C5A0F007E0CF2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BFD97784FD8D2F5008FCB9447FE458BAD073422);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1E712338241A0BA9F1E178B524AC080973D342B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker OnDisableProfilerMarker =
		//     new ProfilerMarker("[MRTK] MRTKLifecycleManager.OnDisable");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_0), _stringLiteral5A75E8B985D337C2C8DB9F5F762353FDF6DD92F2, /*hidden argument*/NULL);
		((MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF_StaticFields*)il2cpp_codegen_static_fields_for(MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF_il2cpp_TypeInfo_var))->___OnDisableProfilerMarker_5 = L_0;
		// private static readonly ProfilerMarker OnEnableProfilerMarker =
		//     new ProfilerMarker("[MRTK] MRTKLifecycleManager.OnEnable");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_1), _stringLiteral778D088416F28001FF7BEEA2DC9C5A0F007E0CF2, /*hidden argument*/NULL);
		((MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF_StaticFields*)il2cpp_codegen_static_fields_for(MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF_il2cpp_TypeInfo_var))->___OnEnableProfilerMarker_6 = L_1;
		// private static readonly ProfilerMarker UpdateProfilerMarker =
		//     new ProfilerMarker("[MRTK] MRTKLifecycleManager.Update");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_2), _stringLiteralF1E712338241A0BA9F1E178B524AC080973D342B, /*hidden argument*/NULL);
		((MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF_StaticFields*)il2cpp_codegen_static_fields_for(MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF_il2cpp_TypeInfo_var))->___UpdateProfilerMarker_7 = L_2;
		// private static readonly ProfilerMarker FixedUpdateProfilerMarker =
		//     new ProfilerMarker("[MRTK] MRTKLifecycleManager.FixedUpdate");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_3), _stringLiteral8BFD97784FD8D2F5008FCB9447FE458BAD073422, /*hidden argument*/NULL);
		((MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF_StaticFields*)il2cpp_codegen_static_fields_for(MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF_il2cpp_TypeInfo_var))->___FixedUpdateProfilerMarker_8 = L_3;
		// private static readonly ProfilerMarker LateUpdateProfilerMarker =
		//     new ProfilerMarker("[MRTK] MRTKLifecycleManager.LateUpdate");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_4;
		memset((&L_4), 0, sizeof(L_4));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_4), _stringLiteral30795A3D724741ED34B008A388F3F82398F08AE4, /*hidden argument*/NULL);
		((MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF_StaticFields*)il2cpp_codegen_static_fields_for(MRTKLifecycleManager_tE146813E8ADA1805913FC6C759BEA0C5E67DEFEF_il2cpp_TypeInfo_var))->___LateUpdateProfilerMarker_9 = L_4;
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
// System.String Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemAttribute::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MRTKSubsystemAttribute_get_Name_m9E707A134B63A2526C339E6B1E19F99E5DAB0CBA (MRTKSubsystemAttribute_tE334C03BCE834F6304CD6149A33D520323F0FA8E* __this, const RuntimeMethod* method) 
{
	{
		// get => name;
		String_t* L_0 = __this->___name_0;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemAttribute::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKSubsystemAttribute_set_Name_m00675B9187B4A57085A92A4373336E5A63C5C737 (MRTKSubsystemAttribute_tE334C03BCE834F6304CD6149A33D520323F0FA8E* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set => name = value;
		String_t* L_0 = ___value0;
		__this->___name_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_0), (void*)L_0);
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemAttribute::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MRTKSubsystemAttribute_get_DisplayName_m294D99CE81568809875EAA93713A7E6C014DF849 (MRTKSubsystemAttribute_tE334C03BCE834F6304CD6149A33D520323F0FA8E* __this, const RuntimeMethod* method) 
{
	{
		// get => displayName;
		String_t* L_0 = __this->___displayName_1;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemAttribute::set_DisplayName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKSubsystemAttribute_set_DisplayName_mD983D9CDCC9864A983D92BDAD1B26CEAC7BA521A (MRTKSubsystemAttribute_tE334C03BCE834F6304CD6149A33D520323F0FA8E* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set => displayName = value;
		String_t* L_0 = ___value0;
		__this->___displayName_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___displayName_1), (void*)L_0);
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemAttribute::get_Author()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MRTKSubsystemAttribute_get_Author_mBD6ABB0E1ED478BDAF115C4CB09AB745FDACB244 (MRTKSubsystemAttribute_tE334C03BCE834F6304CD6149A33D520323F0FA8E* __this, const RuntimeMethod* method) 
{
	{
		// get => author;
		String_t* L_0 = __this->___author_2;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemAttribute::set_Author(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKSubsystemAttribute_set_Author_mBB38228F63FBD6A211E5EC4ABDBC7D7546F6C306 (MRTKSubsystemAttribute_tE334C03BCE834F6304CD6149A33D520323F0FA8E* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set => author = value;
		String_t* L_0 = ___value0;
		__this->___author_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___author_2), (void*)L_0);
		return;
	}
}
// System.Type Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemAttribute::get_ProviderType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MRTKSubsystemAttribute_get_ProviderType_m70C5484493151FE8B565E8CC0D71054A0C253AB1 (MRTKSubsystemAttribute_tE334C03BCE834F6304CD6149A33D520323F0FA8E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemType_tB8C940FEFFE1DC4087E66139D8E72177D4B0E30E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => providerType;
		SystemType_tB8C940FEFFE1DC4087E66139D8E72177D4B0E30E* L_0 = __this->___providerType_3;
		il2cpp_codegen_runtime_class_init_inline(SystemType_tB8C940FEFFE1DC4087E66139D8E72177D4B0E30E_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = SystemType_op_Implicit_mCF6D426C647088D2C1086AAA10787E9D4E7E090E(L_0, NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemAttribute::set_ProviderType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKSubsystemAttribute_set_ProviderType_mA40F9F270D670F33FFDECFDF40AB0E85C41944EB (MRTKSubsystemAttribute_tE334C03BCE834F6304CD6149A33D520323F0FA8E* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemType_tB8C940FEFFE1DC4087E66139D8E72177D4B0E30E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => providerType = value;
		Type_t* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(SystemType_tB8C940FEFFE1DC4087E66139D8E72177D4B0E30E_il2cpp_TypeInfo_var);
		SystemType_tB8C940FEFFE1DC4087E66139D8E72177D4B0E30E* L_1;
		L_1 = SystemType_op_Implicit_m252D62B7A91131851350164DBFB99FB7671D76F7(L_0, NULL);
		__this->___providerType_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___providerType_3), (void*)L_1);
		return;
	}
}
// System.Type Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemAttribute::get_SubsystemTypeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MRTKSubsystemAttribute_get_SubsystemTypeOverride_m425642A402EA9BC204D5BB29F233594486929398 (MRTKSubsystemAttribute_tE334C03BCE834F6304CD6149A33D520323F0FA8E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemType_tB8C940FEFFE1DC4087E66139D8E72177D4B0E30E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => subsystemTypeOverride;
		SystemType_tB8C940FEFFE1DC4087E66139D8E72177D4B0E30E* L_0 = __this->___subsystemTypeOverride_4;
		il2cpp_codegen_runtime_class_init_inline(SystemType_tB8C940FEFFE1DC4087E66139D8E72177D4B0E30E_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = SystemType_op_Implicit_mCF6D426C647088D2C1086AAA10787E9D4E7E090E(L_0, NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemAttribute::set_SubsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKSubsystemAttribute_set_SubsystemTypeOverride_m809C1F8F1C521B8D64943A392E2D050AB02D1191 (MRTKSubsystemAttribute_tE334C03BCE834F6304CD6149A33D520323F0FA8E* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemType_tB8C940FEFFE1DC4087E66139D8E72177D4B0E30E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => subsystemTypeOverride = value;
		Type_t* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(SystemType_tB8C940FEFFE1DC4087E66139D8E72177D4B0E30E_il2cpp_TypeInfo_var);
		SystemType_tB8C940FEFFE1DC4087E66139D8E72177D4B0E30E* L_1;
		L_1 = SystemType_op_Implicit_m252D62B7A91131851350164DBFB99FB7671D76F7(L_0, NULL);
		__this->___subsystemTypeOverride_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___subsystemTypeOverride_4), (void*)L_1);
		return;
	}
}
// System.Type Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemAttribute::get_ConfigType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MRTKSubsystemAttribute_get_ConfigType_m3FDE7D9BD896944A641379BB87B04A55D13C2A71 (MRTKSubsystemAttribute_tE334C03BCE834F6304CD6149A33D520323F0FA8E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemType_tB8C940FEFFE1DC4087E66139D8E72177D4B0E30E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => configType;
		SystemType_tB8C940FEFFE1DC4087E66139D8E72177D4B0E30E* L_0 = __this->___configType_5;
		il2cpp_codegen_runtime_class_init_inline(SystemType_tB8C940FEFFE1DC4087E66139D8E72177D4B0E30E_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = SystemType_op_Implicit_mCF6D426C647088D2C1086AAA10787E9D4E7E090E(L_0, NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemAttribute::set_ConfigType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKSubsystemAttribute_set_ConfigType_mA3D91145B48E6E5BD5E037CBC52610DD47E13C5C (MRTKSubsystemAttribute_tE334C03BCE834F6304CD6149A33D520323F0FA8E* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemType_tB8C940FEFFE1DC4087E66139D8E72177D4B0E30E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => configType = value;
		Type_t* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(SystemType_tB8C940FEFFE1DC4087E66139D8E72177D4B0E30E_il2cpp_TypeInfo_var);
		SystemType_tB8C940FEFFE1DC4087E66139D8E72177D4B0E30E* L_1;
		L_1 = SystemType_op_Implicit_m252D62B7A91131851350164DBFB99FB7671D76F7(L_0, NULL);
		__this->___configType_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___configType_5), (void*)L_1);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKSubsystemAttribute__ctor_mF742ADDBD3CCA283FC5888661C9E5BAE8031C7F1 (MRTKSubsystemAttribute_tE334C03BCE834F6304CD6149A33D520323F0FA8E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSubsystemConfig_t44DB38465B62F04765177EBD6561E4CD8145629A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemType_tB8C940FEFFE1DC4087E66139D8E72177D4B0E30E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private SystemType configType = typeof(BaseSubsystemConfig);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (BaseSubsystemConfig_t44DB38465B62F04765177EBD6561E4CD8145629A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(SystemType_tB8C940FEFFE1DC4087E66139D8E72177D4B0E30E_il2cpp_TypeInfo_var);
		SystemType_tB8C940FEFFE1DC4087E66139D8E72177D4B0E30E* L_2;
		L_2 = SystemType_op_Implicit_m252D62B7A91131851350164DBFB99FB7671D76F7(L_1, NULL);
		__this->___configType_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___configType_5), (void*)L_2);
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystem__ctor_m1AABF4D310D55A97516F2E9547374810623731DA (PhraseRecognitionSubsystem_t13A9580C17818A5B80FFCA5A18F516DE8CBECBB4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKSubsystem_3__ctor_mEF0313A9B3DBAE8B811B96BB806D05B799BFC770_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKSubsystem_3_tF1C2057DE9B81AE485C6A588075D3722BAA068BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public PhraseRecognitionSubsystem()
		il2cpp_codegen_runtime_class_init_inline(MRTKSubsystem_3_tF1C2057DE9B81AE485C6A588075D3722BAA068BA_il2cpp_TypeInfo_var);
		MRTKSubsystem_3__ctor_mEF0313A9B3DBAE8B811B96BB806D05B799BFC770(__this, MRTKSubsystem_3__ctor_mEF0313A9B3DBAE8B811B96BB806D05B799BFC770_RuntimeMethod_var);
		// { }
		return;
	}
}
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem::CreateOrGetEventForPhrase(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* PhraseRecognitionSubsystem_CreateOrGetEventForPhrase_mAB9B1B5CBE9153C65A5FCB5FCDF8CDC8CBA02C26 (PhraseRecognitionSubsystem_t13A9580C17818A5B80FFCA5A18F516DE8CBECBB4* __this, String_t* ___phrase0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_mC9BA1C147516153A3878524CA9100D86BF82B5D9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UnityEvent CreateOrGetEventForPhrase(string phrase) => provider.CreateOrGetEventForPhrase(phrase);
		Provider_t131064079F32431586929B88A53CF04A757C085B* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_mC9BA1C147516153A3878524CA9100D86BF82B5D9_inline(__this, SubsystemWithProvider_3_get_provider_mC9BA1C147516153A3878524CA9100D86BF82B5D9_RuntimeMethod_var);
		String_t* L_1 = ___phrase0;
		NullCheck(L_0);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2;
		L_2 = VirtualFuncInvoker1< UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*, String_t* >::Invoke(21 /* UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem/Provider::CreateOrGetEventForPhrase(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem::RemovePhrase(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystem_RemovePhrase_mCE8161B253AE002A49E21FF3BAB1F1A521CF3F5A (PhraseRecognitionSubsystem_t13A9580C17818A5B80FFCA5A18F516DE8CBECBB4* __this, String_t* ___phrase0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_mC9BA1C147516153A3878524CA9100D86BF82B5D9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void RemovePhrase(string phrase) => provider.RemovePhrase(phrase);
		Provider_t131064079F32431586929B88A53CF04A757C085B* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_mC9BA1C147516153A3878524CA9100D86BF82B5D9_inline(__this, SubsystemWithProvider_3_get_provider_mC9BA1C147516153A3878524CA9100D86BF82B5D9_RuntimeMethod_var);
		String_t* L_1 = ___phrase0;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(22 /* System.Void Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem/Provider::RemovePhrase(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem::RemoveAllPhrases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystem_RemoveAllPhrases_m448AA94B6C6826F46701B36E8B86BF86C25AF264 (PhraseRecognitionSubsystem_t13A9580C17818A5B80FFCA5A18F516DE8CBECBB4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_mC9BA1C147516153A3878524CA9100D86BF82B5D9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void RemoveAllPhrases() => provider.RemoveAllPhrases();
		Provider_t131064079F32431586929B88A53CF04A757C085B* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_mC9BA1C147516153A3878524CA9100D86BF82B5D9_inline(__this, SubsystemWithProvider_3_get_provider_mC9BA1C147516153A3878524CA9100D86BF82B5D9_RuntimeMethod_var);
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(23 /* System.Void Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem/Provider::RemoveAllPhrases() */, L_0);
		return;
	}
}
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,UnityEngine.Events.UnityEvent> Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem::GetAllPhrases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PhraseRecognitionSubsystem_GetAllPhrases_mA043C6D3175761D013115A53F4F4A7BBA98839E3 (PhraseRecognitionSubsystem_t13A9580C17818A5B80FFCA5A18F516DE8CBECBB4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_mC9BA1C147516153A3878524CA9100D86BF82B5D9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IReadOnlyDictionary<string, UnityEvent> GetAllPhrases() => provider.GetAllPhrases();
		Provider_t131064079F32431586929B88A53CF04A757C085B* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_mC9BA1C147516153A3878524CA9100D86BF82B5D9_inline(__this, SubsystemWithProvider_3_get_provider_mC9BA1C147516153A3878524CA9100D86BF82B5D9_RuntimeMethod_var);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(24 /* System.Collections.Generic.IReadOnlyDictionary`2<System.String,UnityEngine.Events.UnityEvent> Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem/Provider::GetAllPhrases() */, L_0);
		return L_1;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem::Register(Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhraseRecognitionSubsystem_Register_m4CAA0A7A52D8BA4F7029C8896A2349157DC72A2E (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA ___PhraseRecognitionSubsystemParams0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26* V_0 = NULL;
	bool V_1 = false;
	{
		// PhraseRecognitionSubsystemDescriptor PhraseRecognitionSubsystemDescriptor = PhraseRecognitionSubsystemDescriptor.Create(PhraseRecognitionSubsystemParams);
		PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA L_0 = ___PhraseRecognitionSubsystemParams0;
		PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26* L_1;
		L_1 = PhraseRecognitionSubsystemDescriptor_Create_m4096DA14EBD14C26A3B87FBB54545D29CC288830(L_0, NULL);
		V_0 = L_1;
		// SubsystemDescriptorStore.RegisterDescriptor(PhraseRecognitionSubsystemDescriptor);
		PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_mBCFAF0DE737C77AC4558C27771B36354A028ED9F(L_2, NULL);
		// return true;
		V_1 = (bool)1;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		bool L_3 = V_1;
		return L_3;
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
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m5D5C28B8089BF4E0F810A93491D8FDB00B21E6A2 (Provider_t131064079F32431586929B88A53CF04A757C085B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m201D3F2B835DA73A9ADF2C88E7158ADEB95A593E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKSubsystemProvider_1__ctor_m915E99397167D809CAE451E8C45B83CF8A6457DC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected Dictionary<string, UnityEvent> phraseDictionary = new Dictionary<string, UnityEvent>();
		Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050* L_0 = (Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050*)il2cpp_codegen_object_new(Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m201D3F2B835DA73A9ADF2C88E7158ADEB95A593E(L_0, Dictionary_2__ctor_m201D3F2B835DA73A9ADF2C88E7158ADEB95A593E_RuntimeMethod_var);
		__this->___phraseDictionary_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___phraseDictionary_1), (void*)L_0);
		MRTKSubsystemProvider_1__ctor_m915E99397167D809CAE451E8C45B83CF8A6457DC(__this, MRTKSubsystemProvider_1__ctor_m915E99397167D809CAE451E8C45B83CF8A6457DC_RuntimeMethod_var);
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
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemConfig__ctor_m13AB880F8714899F7EC369D23E136BDC52F65963 (PhraseRecognitionSubsystemConfig_tA71A35F1605E373C58C0FB23BDF08B241ABE1F03* __this, const RuntimeMethod* method) 
{
	{
		BaseSubsystemConfig__ctor_m66121F19C6B007FBB7035AD63440E3DFF202C190(__this, NULL);
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
// Conversion methods for marshalling of: Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo
IL2CPP_EXTERN_C void PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA_marshal_pinvoke(const PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA& unmarshaled, PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CConfigTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<ConfigType>k__BackingField' of type 'PhraseRecognitionSubsystemCinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CConfigTypeU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA_marshal_pinvoke_back(const PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA_marshaled_pinvoke& marshaled, PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA& unmarshaled)
{
	Exception_t* ___U3CConfigTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<ConfigType>k__BackingField' of type 'PhraseRecognitionSubsystemCinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CConfigTypeU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo
IL2CPP_EXTERN_C void PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA_marshal_pinvoke_cleanup(PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo
IL2CPP_EXTERN_C void PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA_marshal_com(const PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA& unmarshaled, PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA_marshaled_com& marshaled)
{
	Exception_t* ___U3CConfigTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<ConfigType>k__BackingField' of type 'PhraseRecognitionSubsystemCinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CConfigTypeU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA_marshal_com_back(const PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA_marshaled_com& marshaled, PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA& unmarshaled)
{
	Exception_t* ___U3CConfigTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<ConfigType>k__BackingField' of type 'PhraseRecognitionSubsystemCinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CConfigTypeU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo
IL2CPP_EXTERN_C void PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA_marshal_com_cleanup(PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA_marshaled_com& marshaled)
{
}
// System.String Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhraseRecognitionSubsystemCinfo_get_Name_mAEB9D6E4886BBDF7E7D24C47C5F726E4813EF8DD (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* PhraseRecognitionSubsystemCinfo_get_Name_mAEB9D6E4886BBDF7E7D24C47C5F726E4813EF8DD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = PhraseRecognitionSubsystemCinfo_get_Name_mAEB9D6E4886BBDF7E7D24C47C5F726E4813EF8DD_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemCinfo_set_Name_m0FD0989076A6CBB999A10A970241D33A6D17FE18 (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void PhraseRecognitionSubsystemCinfo_set_Name_m0FD0989076A6CBB999A10A970241D33A6D17FE18_AdjustorThunk (RuntimeObject* __this, String_t* ___value0, const RuntimeMethod* method)
{
	PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA*>(__this + _offset);
	PhraseRecognitionSubsystemCinfo_set_Name_m0FD0989076A6CBB999A10A970241D33A6D17FE18_inline(_thisAdjusted, ___value0, method);
}
// System.String Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhraseRecognitionSubsystemCinfo_get_DisplayName_mED53F47385D3200D45A1626C6C163B40151678DC (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, const RuntimeMethod* method) 
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = __this->___U3CDisplayNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* PhraseRecognitionSubsystemCinfo_get_DisplayName_mED53F47385D3200D45A1626C6C163B40151678DC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = PhraseRecognitionSubsystemCinfo_get_DisplayName_mED53F47385D3200D45A1626C6C163B40151678DC_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::set_DisplayName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemCinfo_set_DisplayName_m6F4343E1374E6E41C1E0FC84DD77C57E29E74448 (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CDisplayNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void PhraseRecognitionSubsystemCinfo_set_DisplayName_m6F4343E1374E6E41C1E0FC84DD77C57E29E74448_AdjustorThunk (RuntimeObject* __this, String_t* ___value0, const RuntimeMethod* method)
{
	PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA*>(__this + _offset);
	PhraseRecognitionSubsystemCinfo_set_DisplayName_m6F4343E1374E6E41C1E0FC84DD77C57E29E74448_inline(_thisAdjusted, ___value0, method);
}
// System.String Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::get_Author()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhraseRecognitionSubsystemCinfo_get_Author_mCA96204B822FDE22425476868DFB325FDF8E7051 (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, const RuntimeMethod* method) 
{
	{
		// public string Author { get; set; }
		String_t* L_0 = __this->___U3CAuthorU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* PhraseRecognitionSubsystemCinfo_get_Author_mCA96204B822FDE22425476868DFB325FDF8E7051_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = PhraseRecognitionSubsystemCinfo_get_Author_mCA96204B822FDE22425476868DFB325FDF8E7051_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::set_Author(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemCinfo_set_Author_m675801D38E95D85A8E65D89DC2ED915BC4BAF975 (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Author { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CAuthorU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthorU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void PhraseRecognitionSubsystemCinfo_set_Author_m675801D38E95D85A8E65D89DC2ED915BC4BAF975_AdjustorThunk (RuntimeObject* __this, String_t* ___value0, const RuntimeMethod* method)
{
	PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA*>(__this + _offset);
	PhraseRecognitionSubsystemCinfo_set_Author_m675801D38E95D85A8E65D89DC2ED915BC4BAF975_inline(_thisAdjusted, ___value0, method);
}
// System.Type Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::get_ConfigType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PhraseRecognitionSubsystemCinfo_get_ConfigType_m472C55F2251B78C9A13B405FAE7677E97AEAF073 (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, const RuntimeMethod* method) 
{
	{
		// public Type ConfigType { get; set; }
		Type_t* L_0 = __this->___U3CConfigTypeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* PhraseRecognitionSubsystemCinfo_get_ConfigType_m472C55F2251B78C9A13B405FAE7677E97AEAF073_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = PhraseRecognitionSubsystemCinfo_get_ConfigType_m472C55F2251B78C9A13B405FAE7677E97AEAF073_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::set_ConfigType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemCinfo_set_ConfigType_mF0876436B75B309054B46496312C09B825E7B8E7 (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type ConfigType { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CConfigTypeU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConfigTypeU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void PhraseRecognitionSubsystemCinfo_set_ConfigType_mF0876436B75B309054B46496312C09B825E7B8E7_AdjustorThunk (RuntimeObject* __this, Type_t* ___value0, const RuntimeMethod* method)
{
	PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA*>(__this + _offset);
	PhraseRecognitionSubsystemCinfo_set_ConfigType_mF0876436B75B309054B46496312C09B825E7B8E7_inline(_thisAdjusted, ___value0, method);
}
// System.Type Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::get_ProviderType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PhraseRecognitionSubsystemCinfo_get_ProviderType_m3115EB68EEDC96CEF9E71F7B1053133FB727B623 (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, const RuntimeMethod* method) 
{
	{
		// public Type ProviderType { get; set; }
		Type_t* L_0 = __this->___U3CProviderTypeU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* PhraseRecognitionSubsystemCinfo_get_ProviderType_m3115EB68EEDC96CEF9E71F7B1053133FB727B623_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = PhraseRecognitionSubsystemCinfo_get_ProviderType_m3115EB68EEDC96CEF9E71F7B1053133FB727B623_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::set_ProviderType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemCinfo_set_ProviderType_m52588BC4D575E792C95518FAE2A5B685189B4D81 (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type ProviderType { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CProviderTypeU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProviderTypeU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void PhraseRecognitionSubsystemCinfo_set_ProviderType_m52588BC4D575E792C95518FAE2A5B685189B4D81_AdjustorThunk (RuntimeObject* __this, Type_t* ___value0, const RuntimeMethod* method)
{
	PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA*>(__this + _offset);
	PhraseRecognitionSubsystemCinfo_set_ProviderType_m52588BC4D575E792C95518FAE2A5B685189B4D81_inline(_thisAdjusted, ___value0, method);
}
// System.Type Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::get_SubsystemTypeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PhraseRecognitionSubsystemCinfo_get_SubsystemTypeOverride_mC02365FEF23AB14762B1FD129C01F209792EEF43 (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, const RuntimeMethod* method) 
{
	{
		// public Type SubsystemTypeOverride { get; set; }
		Type_t* L_0 = __this->___U3CSubsystemTypeOverrideU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* PhraseRecognitionSubsystemCinfo_get_SubsystemTypeOverride_mC02365FEF23AB14762B1FD129C01F209792EEF43_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = PhraseRecognitionSubsystemCinfo_get_SubsystemTypeOverride_mC02365FEF23AB14762B1FD129C01F209792EEF43_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::set_SubsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemCinfo_set_SubsystemTypeOverride_m2BEECA36C4E4619873F85528ABDE535498B8FFA4 (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type SubsystemTypeOverride { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CSubsystemTypeOverrideU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSubsystemTypeOverrideU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void PhraseRecognitionSubsystemCinfo_set_SubsystemTypeOverride_m2BEECA36C4E4619873F85528ABDE535498B8FFA4_AdjustorThunk (RuntimeObject* __this, Type_t* ___value0, const RuntimeMethod* method)
{
	PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA*>(__this + _offset);
	PhraseRecognitionSubsystemCinfo_set_SubsystemTypeOverride_m2BEECA36C4E4619873F85528ABDE535498B8FFA4_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::get_IsCloudBased()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhraseRecognitionSubsystemCinfo_get_IsCloudBased_mBC65BE882923058F7B3695235CA56CE6F60A4873 (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsCloudBased { get; set; }
		bool L_0 = __this->___U3CIsCloudBasedU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool PhraseRecognitionSubsystemCinfo_get_IsCloudBased_mBC65BE882923058F7B3695235CA56CE6F60A4873_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA*>(__this + _offset);
	bool _returnValue;
	_returnValue = PhraseRecognitionSubsystemCinfo_get_IsCloudBased_mBC65BE882923058F7B3695235CA56CE6F60A4873_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::set_IsCloudBased(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemCinfo_set_IsCloudBased_mE5AE137D372118E9D19D4A54A85E0E480915FC77 (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsCloudBased { get; set; }
		bool L_0 = ___value0;
		__this->___U3CIsCloudBasedU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void PhraseRecognitionSubsystemCinfo_set_IsCloudBased_mE5AE137D372118E9D19D4A54A85E0E480915FC77_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA*>(__this + _offset);
	PhraseRecognitionSubsystemCinfo_set_IsCloudBased_mE5AE137D372118E9D19D4A54A85E0E480915FC77_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::Equals(Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhraseRecognitionSubsystemCinfo_Equals_m5FBBE38EA59EAD7D606F24A41192433EDE0A2776 (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA ___other0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		// return
		//     ReferenceEquals(Name, other.Name)
		//     && ReferenceEquals(ProviderType, other.ProviderType)
		//     && ReferenceEquals(SubsystemTypeOverride, other.SubsystemTypeOverride)
		//     && IsCloudBased == other.IsCloudBased;
		String_t* L_0;
		L_0 = PhraseRecognitionSubsystemCinfo_get_Name_mAEB9D6E4886BBDF7E7D24C47C5F726E4813EF8DD_inline(__this, NULL);
		String_t* L_1;
		L_1 = PhraseRecognitionSubsystemCinfo_get_Name_mAEB9D6E4886BBDF7E7D24C47C5F726E4813EF8DD_inline((&___other0), NULL);
		if ((!(((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(String_t*)L_1))))
		{
			goto IL_003f;
		}
	}
	{
		Type_t* L_2;
		L_2 = PhraseRecognitionSubsystemCinfo_get_ProviderType_m3115EB68EEDC96CEF9E71F7B1053133FB727B623_inline(__this, NULL);
		Type_t* L_3;
		L_3 = PhraseRecognitionSubsystemCinfo_get_ProviderType_m3115EB68EEDC96CEF9E71F7B1053133FB727B623_inline((&___other0), NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_2) == ((RuntimeObject*)(Type_t*)L_3))))
		{
			goto IL_003f;
		}
	}
	{
		Type_t* L_4;
		L_4 = PhraseRecognitionSubsystemCinfo_get_SubsystemTypeOverride_mC02365FEF23AB14762B1FD129C01F209792EEF43_inline(__this, NULL);
		Type_t* L_5;
		L_5 = PhraseRecognitionSubsystemCinfo_get_SubsystemTypeOverride_mC02365FEF23AB14762B1FD129C01F209792EEF43_inline((&___other0), NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_4) == ((RuntimeObject*)(Type_t*)L_5))))
		{
			goto IL_003f;
		}
	}
	{
		bool L_6;
		L_6 = PhraseRecognitionSubsystemCinfo_get_IsCloudBased_mBC65BE882923058F7B3695235CA56CE6F60A4873_inline(__this, NULL);
		bool L_7;
		L_7 = PhraseRecognitionSubsystemCinfo_get_IsCloudBased_mBC65BE882923058F7B3695235CA56CE6F60A4873_inline((&___other0), NULL);
		G_B5_0 = ((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0);
		goto IL_0040;
	}

IL_003f:
	{
		G_B5_0 = 0;
	}

IL_0040:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0043;
	}

IL_0043:
	{
		// }
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C  bool PhraseRecognitionSubsystemCinfo_Equals_m5FBBE38EA59EAD7D606F24A41192433EDE0A2776_AdjustorThunk (RuntimeObject* __this, PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA ___other0, const RuntimeMethod* method)
{
	PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA*>(__this + _offset);
	bool _returnValue;
	_returnValue = PhraseRecognitionSubsystemCinfo_Equals_m5FBBE38EA59EAD7D606F24A41192433EDE0A2776(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhraseRecognitionSubsystemCinfo_Equals_mFD58483CF4A58E62B0DB34B5975B81423E8F34B5 (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return ((obj is PhraseRecognitionSubsystemCinfo) && Equals((PhraseRecognitionSubsystemCinfo)obj));
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		bool L_2;
		L_2 = PhraseRecognitionSubsystemCinfo_Equals_m5FBBE38EA59EAD7D606F24A41192433EDE0A2776(__this, ((*(PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA*)((PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA*)(PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA*)UnBox(L_1, PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA_il2cpp_TypeInfo_var)))), NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PhraseRecognitionSubsystemCinfo_Equals_mFD58483CF4A58E62B0DB34B5975B81423E8F34B5_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA*>(__this + _offset);
	bool _returnValue;
	_returnValue = PhraseRecognitionSubsystemCinfo_Equals_mFD58483CF4A58E62B0DB34B5975B81423E8F34B5(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::op_Equality(Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo,Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhraseRecognitionSubsystemCinfo_op_Equality_mB4157C04832B7A22C86B40B614A787FDAB589B35 (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA ___lhs0, PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return lhs.Equals(rhs);
		PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA L_0 = ___rhs1;
		bool L_1;
		L_1 = PhraseRecognitionSubsystemCinfo_Equals_m5FBBE38EA59EAD7D606F24A41192433EDE0A2776((&___lhs0), L_0, NULL);
		V_0 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::op_Inequality(Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo,Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhraseRecognitionSubsystemCinfo_op_Inequality_mDE9D5B995548B0AD959C63F506CCE70D8DCF92CC (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA ___lhs0, PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return !(lhs == rhs);
		PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA L_0 = ___lhs0;
		PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA L_1 = ___rhs1;
		bool L_2;
		L_2 = PhraseRecognitionSubsystemCinfo_op_Equality_mB4157C04832B7A22C86B40B614A787FDAB589B35(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhraseRecognitionSubsystemCinfo_GetHashCode_m6A63700C1DE0024461C877E150432169477EB978 (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, const RuntimeMethod* method) 
{
	{
		// throw new ApplicationException("Do not hash subsystem descriptors as keys.");
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_0 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0514B8E4342F7B936BE02120037C20832C1C2F20)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PhraseRecognitionSubsystemCinfo_GetHashCode_m6A63700C1DE0024461C877E150432169477EB978_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  int32_t PhraseRecognitionSubsystemCinfo_GetHashCode_m6A63700C1DE0024461C877E150432169477EB978_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = PhraseRecognitionSubsystemCinfo_GetHashCode_m6A63700C1DE0024461C877E150432169477EB978(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemDescriptor::.ctor(Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemDescriptor__ctor_m318FEED7F318B3A9940762F82FCF543016408620 (PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26* __this, PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA ___PhraseRecognitionSubsystemCinfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorWithProvider_2__ctor_mBDA527C4E4BA002DAF834AA7CEB6C8FEFA1C087C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PhraseRecognitionSubsystemDescriptor(PhraseRecognitionSubsystemCinfo PhraseRecognitionSubsystemCinfo)
		SubsystemDescriptorWithProvider_2__ctor_mBDA527C4E4BA002DAF834AA7CEB6C8FEFA1C087C(__this, SubsystemDescriptorWithProvider_2__ctor_mBDA527C4E4BA002DAF834AA7CEB6C8FEFA1C087C_RuntimeMethod_var);
		// Name = PhraseRecognitionSubsystemCinfo.Name;
		String_t* L_0;
		L_0 = PhraseRecognitionSubsystemCinfo_get_Name_mAEB9D6E4886BBDF7E7D24C47C5F726E4813EF8DD_inline((&___PhraseRecognitionSubsystemCinfo0), NULL);
		PhraseRecognitionSubsystemDescriptor_set_Name_m801E31E9EE052FA880EF44F74F9C19693EBB5952(__this, L_0, NULL);
		// DisplayName = PhraseRecognitionSubsystemCinfo.DisplayName;
		String_t* L_1;
		L_1 = PhraseRecognitionSubsystemCinfo_get_DisplayName_mED53F47385D3200D45A1626C6C163B40151678DC_inline((&___PhraseRecognitionSubsystemCinfo0), NULL);
		PhraseRecognitionSubsystemDescriptor_set_DisplayName_mFBBA79711F87F4BCFEF158D61574495E9995684A_inline(__this, L_1, NULL);
		// Author = PhraseRecognitionSubsystemCinfo.Author;
		String_t* L_2;
		L_2 = PhraseRecognitionSubsystemCinfo_get_Author_mCA96204B822FDE22425476868DFB325FDF8E7051_inline((&___PhraseRecognitionSubsystemCinfo0), NULL);
		PhraseRecognitionSubsystemDescriptor_set_Author_mD890D75C685AAE11F9DF8DAD364ACA69AB28FC24_inline(__this, L_2, NULL);
		// ProviderType = PhraseRecognitionSubsystemCinfo.ProviderType;
		Type_t* L_3;
		L_3 = PhraseRecognitionSubsystemCinfo_get_ProviderType_m3115EB68EEDC96CEF9E71F7B1053133FB727B623_inline((&___PhraseRecognitionSubsystemCinfo0), NULL);
		PhraseRecognitionSubsystemDescriptor_set_ProviderType_m0D4570966D810DCB50C7DA15F86549B97756CFC6(__this, L_3, NULL);
		// SubsystemTypeOverride = PhraseRecognitionSubsystemCinfo.SubsystemTypeOverride;
		Type_t* L_4;
		L_4 = PhraseRecognitionSubsystemCinfo_get_SubsystemTypeOverride_mC02365FEF23AB14762B1FD129C01F209792EEF43_inline((&___PhraseRecognitionSubsystemCinfo0), NULL);
		PhraseRecognitionSubsystemDescriptor_set_SubsystemTypeOverride_mAB7E5F7709B053D3BDBC773ED7E02899BB34E953(__this, L_4, NULL);
		// IsCloudBased = PhraseRecognitionSubsystemCinfo.IsCloudBased;
		bool L_5;
		L_5 = PhraseRecognitionSubsystemCinfo_get_IsCloudBased_mBC65BE882923058F7B3695235CA56CE6F60A4873_inline((&___PhraseRecognitionSubsystemCinfo0), NULL);
		PhraseRecognitionSubsystemDescriptor_set_IsCloudBased_m8D61A8530A5615B5157CA757DFE655ED98C7A6F2_inline(__this, L_5, NULL);
		// }
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemDescriptor::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhraseRecognitionSubsystemDescriptor_get_Name_mACB7A68EE2BFD42ED779F868705C630B694D217B (PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get => id; set => id = value; }
		String_t* L_0;
		L_0 = SubsystemDescriptorWithProvider_get_id_m9E92FDF45FE9BFB0B28C2AE3EFE475998D01BBC7_inline(__this, NULL);
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemDescriptor::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemDescriptor_set_Name_m801E31E9EE052FA880EF44F74F9C19693EBB5952 (PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get => id; set => id = value; }
		String_t* L_0 = ___value0;
		SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline(__this, L_0, NULL);
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemDescriptor::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhraseRecognitionSubsystemDescriptor_get_DisplayName_m337C3B22C65199C040CA07D5A78AA2405B73A386 (PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26* __this, const RuntimeMethod* method) 
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = __this->___U3CDisplayNameU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemDescriptor::set_DisplayName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemDescriptor_set_DisplayName_mFBBA79711F87F4BCFEF158D61574495E9995684A (PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CDisplayNameU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemDescriptor::get_Author()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhraseRecognitionSubsystemDescriptor_get_Author_mC267B918B4A453A9C8C6B297142E780A923DDECC (PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26* __this, const RuntimeMethod* method) 
{
	{
		// public string Author { get; set; }
		String_t* L_0 = __this->___U3CAuthorU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemDescriptor::set_Author(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemDescriptor_set_Author_mD890D75C685AAE11F9DF8DAD364ACA69AB28FC24 (PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Author { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CAuthorU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthorU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Type Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemDescriptor::get_ConfigType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PhraseRecognitionSubsystemDescriptor_get_ConfigType_m85DF559F5A330034C4F58F6AC6B0C1C0D3295E7F (PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26* __this, const RuntimeMethod* method) 
{
	{
		// public Type ConfigType { get; set; }
		Type_t* L_0 = __this->___U3CConfigTypeU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemDescriptor::set_ConfigType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemDescriptor_set_ConfigType_m2B2AE8C4641A8352035E499214370BE65889339A (PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type ConfigType { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CConfigTypeU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConfigTypeU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Type Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemDescriptor::get_ProviderType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PhraseRecognitionSubsystemDescriptor_get_ProviderType_mE8B11A8B8ECBDDFA5EA8642D6F3ACEEB47A43F5C (PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26* __this, const RuntimeMethod* method) 
{
	{
		// public Type ProviderType { get => providerType; set => providerType = value; }
		Type_t* L_0;
		L_0 = SubsystemDescriptorWithProvider_get_providerType_m1ED8F898361B508FFE2A46D05E81CEAC43B040D4_inline(__this, NULL);
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemDescriptor::set_ProviderType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemDescriptor_set_ProviderType_m0D4570966D810DCB50C7DA15F86549B97756CFC6 (PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type ProviderType { get => providerType; set => providerType = value; }
		Type_t* L_0 = ___value0;
		SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline(__this, L_0, NULL);
		return;
	}
}
// System.Type Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemDescriptor::get_SubsystemTypeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PhraseRecognitionSubsystemDescriptor_get_SubsystemTypeOverride_m31D243902C43B01B1FE3EC2DE315A337E0930EB2 (PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26* __this, const RuntimeMethod* method) 
{
	{
		// public Type SubsystemTypeOverride { get => subsystemTypeOverride; set => subsystemTypeOverride = value; }
		Type_t* L_0;
		L_0 = SubsystemDescriptorWithProvider_get_subsystemTypeOverride_mCE84F1611CB09975FBB4BE48E015316ADDB52668_inline(__this, NULL);
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemDescriptor::set_SubsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemDescriptor_set_SubsystemTypeOverride_mAB7E5F7709B053D3BDBC773ED7E02899BB34E953 (PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type SubsystemTypeOverride { get => subsystemTypeOverride; set => subsystemTypeOverride = value; }
		Type_t* L_0 = ___value0;
		SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline(__this, L_0, NULL);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemDescriptor::get_IsCloudBased()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhraseRecognitionSubsystemDescriptor_get_IsCloudBased_m82AD81ED2056E28192F123CDCEC34AF0C4A5B315 (PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsCloudBased { get; set; }
		bool L_0 = __this->___U3CIsCloudBasedU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemDescriptor::set_IsCloudBased(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemDescriptor_set_IsCloudBased_m8D61A8530A5615B5157CA757DFE655ED98C7A6F2 (PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsCloudBased { get; set; }
		bool L_0 = ___value0;
		__this->___U3CIsCloudBasedU3Ek__BackingField_6 = L_0;
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemDescriptor Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemDescriptor::Create(Microsoft.MixedReality.Toolkit.Subsystems.PhraseRecognitionSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26* PhraseRecognitionSubsystemDescriptor_Create_m4096DA14EBD14C26A3B87FBB54545D29CC288830 (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA ___cinfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_CheckTypes_TisPhraseRecognitionSubsystem_t13A9580C17818A5B80FFCA5A18F516DE8CBECBB4_TisProvider_t131064079F32431586929B88A53CF04A757C085B_m33A63CC5B4E742DBDB17899E42AF368034F4A677_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26* V_1 = NULL;
	{
		// if (!XRSubsystemHelpers.CheckTypes<PhraseRecognitionSubsystem, PhraseRecognitionSubsystem.Provider>(cinfo.Name,
		//                                                                                                     cinfo.SubsystemTypeOverride,
		//                                                                                                     cinfo.ProviderType))
		String_t* L_0;
		L_0 = PhraseRecognitionSubsystemCinfo_get_Name_mAEB9D6E4886BBDF7E7D24C47C5F726E4813EF8DD_inline((&___cinfo0), NULL);
		Type_t* L_1;
		L_1 = PhraseRecognitionSubsystemCinfo_get_SubsystemTypeOverride_mC02365FEF23AB14762B1FD129C01F209792EEF43_inline((&___cinfo0), NULL);
		Type_t* L_2;
		L_2 = PhraseRecognitionSubsystemCinfo_get_ProviderType_m3115EB68EEDC96CEF9E71F7B1053133FB727B623_inline((&___cinfo0), NULL);
		bool L_3;
		L_3 = XRSubsystemHelpers_CheckTypes_TisPhraseRecognitionSubsystem_t13A9580C17818A5B80FFCA5A18F516DE8CBECBB4_TisProvider_t131064079F32431586929B88A53CF04A757C085B_m33A63CC5B4E742DBDB17899E42AF368034F4A677(L_0, L_1, L_2, XRSubsystemHelpers_CheckTypes_TisPhraseRecognitionSubsystem_t13A9580C17818A5B80FFCA5A18F516DE8CBECBB4_TisProvider_t131064079F32431586929B88A53CF04A757C085B_m33A63CC5B4E742DBDB17899E42AF368034F4A677_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		// throw new ArgumentException("Could not create PhraseRecognitionSubsystemDescriptor.");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral30A43071A1AD1AE7980BA5022113C6ABA43AE621)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PhraseRecognitionSubsystemDescriptor_Create_m4096DA14EBD14C26A3B87FBB54545D29CC288830_RuntimeMethod_var)));
	}

IL_002e:
	{
		// return new PhraseRecognitionSubsystemDescriptor(cinfo);
		PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA L_6 = ___cinfo0;
		PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26* L_7 = (PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26*)il2cpp_codegen_object_new(PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		PhraseRecognitionSubsystemDescriptor__ctor_m318FEED7F318B3A9940762F82FCF543016408620(L_7, L_6, NULL);
		V_1 = L_7;
		goto IL_0037;
	}

IL_0037:
	{
		// }
		PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26* L_8 = V_1;
		return L_8;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MRTKProfile_tE765F5500DAECFD4A32D2CBE0F5D880F2FA90EBE* MRTKProfile_get_Instance_mC32F0291769D84E800977CB49EE9CB633FAACA4B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKProfile_tE765F5500DAECFD4A32D2CBE0F5D880F2FA90EBE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => instance;
		MRTKProfile_tE765F5500DAECFD4A32D2CBE0F5D880F2FA90EBE* L_0 = ((MRTKProfile_tE765F5500DAECFD4A32D2CBE0F5D880F2FA90EBE_StaticFields*)il2cpp_codegen_static_fields_for(MRTKProfile_tE765F5500DAECFD4A32D2CBE0F5D880F2FA90EBE_il2cpp_TypeInfo_var))->___instance_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t8AFDCFE373261DFE608A5BE91D8DAEF9E88A5345* MRTKProfile_get_LoadedSubsystems_m8E8A6B82D161D04E9FB5E384D0413CF62F80A80A_inline (MRTKProfile_tE765F5500DAECFD4A32D2CBE0F5D880F2FA90EBE* __this, const RuntimeMethod* method) 
{
	{
		// public List<SystemType> LoadedSubsystems => loadedSubsystems;
		List_1_t8AFDCFE373261DFE608A5BE91D8DAEF9E88A5345* L_0 = __this->___loadedSubsystems_6;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PhraseRecognitionSubsystemCinfo_get_Name_mAEB9D6E4886BBDF7E7D24C47C5F726E4813EF8DD_inline (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemCinfo_set_Name_m0FD0989076A6CBB999A10A970241D33A6D17FE18_inline (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PhraseRecognitionSubsystemCinfo_get_DisplayName_mED53F47385D3200D45A1626C6C163B40151678DC_inline (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, const RuntimeMethod* method) 
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = __this->___U3CDisplayNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemCinfo_set_DisplayName_m6F4343E1374E6E41C1E0FC84DD77C57E29E74448_inline (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CDisplayNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PhraseRecognitionSubsystemCinfo_get_Author_mCA96204B822FDE22425476868DFB325FDF8E7051_inline (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, const RuntimeMethod* method) 
{
	{
		// public string Author { get; set; }
		String_t* L_0 = __this->___U3CAuthorU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemCinfo_set_Author_m675801D38E95D85A8E65D89DC2ED915BC4BAF975_inline (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Author { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CAuthorU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthorU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* PhraseRecognitionSubsystemCinfo_get_ConfigType_m472C55F2251B78C9A13B405FAE7677E97AEAF073_inline (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, const RuntimeMethod* method) 
{
	{
		// public Type ConfigType { get; set; }
		Type_t* L_0 = __this->___U3CConfigTypeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemCinfo_set_ConfigType_mF0876436B75B309054B46496312C09B825E7B8E7_inline (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type ConfigType { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CConfigTypeU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConfigTypeU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* PhraseRecognitionSubsystemCinfo_get_ProviderType_m3115EB68EEDC96CEF9E71F7B1053133FB727B623_inline (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, const RuntimeMethod* method) 
{
	{
		// public Type ProviderType { get; set; }
		Type_t* L_0 = __this->___U3CProviderTypeU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemCinfo_set_ProviderType_m52588BC4D575E792C95518FAE2A5B685189B4D81_inline (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type ProviderType { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CProviderTypeU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProviderTypeU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* PhraseRecognitionSubsystemCinfo_get_SubsystemTypeOverride_mC02365FEF23AB14762B1FD129C01F209792EEF43_inline (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, const RuntimeMethod* method) 
{
	{
		// public Type SubsystemTypeOverride { get; set; }
		Type_t* L_0 = __this->___U3CSubsystemTypeOverrideU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemCinfo_set_SubsystemTypeOverride_m2BEECA36C4E4619873F85528ABDE535498B8FFA4_inline (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type SubsystemTypeOverride { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CSubsystemTypeOverrideU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSubsystemTypeOverrideU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PhraseRecognitionSubsystemCinfo_get_IsCloudBased_mBC65BE882923058F7B3695235CA56CE6F60A4873_inline (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsCloudBased { get; set; }
		bool L_0 = __this->___U3CIsCloudBasedU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemCinfo_set_IsCloudBased_mE5AE137D372118E9D19D4A54A85E0E480915FC77_inline (PhraseRecognitionSubsystemCinfo_t16ACD54D88A5F5FB673AE7F92B94E8D1574F03CA* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsCloudBased { get; set; }
		bool L_0 = ___value0;
		__this->___U3CIsCloudBasedU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemDescriptor_set_DisplayName_mFBBA79711F87F4BCFEF158D61574495E9995684A_inline (PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CDisplayNameU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemDescriptor_set_Author_mD890D75C685AAE11F9DF8DAD364ACA69AB28FC24_inline (PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Author { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CAuthorU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthorU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhraseRecognitionSubsystemDescriptor_set_IsCloudBased_m8D61A8530A5615B5157CA757DFE655ED98C7A6F2_inline (PhraseRecognitionSubsystemDescriptor_tEEAF836C57A50759751DE3447CE85B2EC8A34F26* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsCloudBased { get; set; }
		bool L_0 = ___value0;
		__this->___U3CIsCloudBasedU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SubsystemDescriptorWithProvider_get_id_m9E92FDF45FE9BFB0B28C2AE3EFE475998D01BBC7_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* SubsystemDescriptorWithProvider_get_providerType_m1ED8F898361B508FFE2A46D05E81CEAC43B040D4_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CproviderTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___value0;
		__this->___U3CproviderTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* SubsystemDescriptorWithProvider_get_subsystemTypeOverride_mCE84F1611CB09975FBB4BE48E015316ADDB52668_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___value0;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CproviderU3Ek__BackingField_3;
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
