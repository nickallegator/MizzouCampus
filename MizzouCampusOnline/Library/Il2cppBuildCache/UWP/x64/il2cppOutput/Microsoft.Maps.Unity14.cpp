#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Comparison`1<System.Tuple`2<System.Double,System.Int32>>
struct Comparison_1_tA0EB47E8C300430159B995CCC975DB7316EAB8C4;
// System.Comparison`1<System.Object>
struct Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645;
// System.Func`3<Microsoft.Geospatial.VectorMath.Vector3D,Microsoft.Geospatial.VectorMath.Vector3D,Microsoft.Geospatial.VectorMath.Vector3D>
struct Func_3_t0AE5BDFA047CC54B66B19EA2CCBD69C0E9016591;
// System.Collections.Generic.IEnumerable`1<Microsoft.Geospatial.VectorMath.Vector3D>
struct IEnumerable_1_t802E040356312E6ED27386BE44B36BA636D7F8CD;
// System.Collections.Generic.IList`1<System.Tuple`2<=a8F=,=a8F=>>
struct IList_1_tE1761D37BF13B1D1869E606734317EF0FC903B67;
// System.Collections.Generic.IList`1<=a8f=>
struct IList_1_t7850FC539D0E1074A9B374D460BC10A12BCECD07;
// System.Collections.Generic.List`1<System.Tuple`2<System.Double,System.Int32>>
struct List_1_t3420105ACC85EC0363642A2775985EECE6EC41F6;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Tuple`2<=a8F=,=a8F=>
struct Tuple_2_tF85E3CCE7EC534DB0FBEF647C171160416163449;
// System.Tuple`2<System.Double,System.Int32>
struct Tuple_2_tECBABFFE5F6AEC7406FA67604949A78C26B1CEF3;
// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6;
// System.Tuple`2<System.Double,System.Int32>[]
struct Tuple_2U5BU5D_tF6E6423230749C4C36234F80CB2746354FF84F69;
// =a7e=/=ba10=[][]
struct U3Dba10U3DU5BU5DU5BU5D_t26AD4E6385AE94048B1A2BD5D0846E481D967832;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// =a7e=/=ba10=[]
struct U3Dba10U3DU5BU5D_t7DCA8B587918C44E6A024063E9B6D68021C52945;
// =a72=
struct U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D;
// =a76=
struct U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A;
// =a8F=
struct U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.Encoder
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// =a71=/=ba12=
struct U3Dba12U3D_tA1A447F139DAF11B1EE9A6F0DEC213F1326F21F3;
// =a76=/=ba13=
struct U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C;
// =a7e=/=ba10=
struct U3Dba10U3D_tB4E39C735B5CE1F4F0BD0E3094BA8F4A0DB3765A;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparison_1_tA0EB47E8C300430159B995CCC975DB7316EAB8C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_t0AE5BDFA047CC54B66B19EA2CCBD69C0E9016591_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t92267DED5FA52194B916160CB74C7DAA99D974E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t68C985BB3EFAB6573AB304EA7DAF4B0204FF79AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t802E040356312E6ED27386BE44B36BA636D7F8CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t67A8D331FCE270365A719B8C6B73186EC05452CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t72021ED206CD27BEEB5C3D10DF7C89F353F32648_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_tE1761D37BF13B1D1869E606734317EF0FC903B67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3420105ACC85EC0363642A2775985EECE6EC41F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Da8FU3DU5BU5D_tA5801B19CFADA59A962C4D73671059B3D3822AA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Dba10U3DU5BU5DU5BU5D_t26AD4E6385AE94048B1A2BD5D0846E481D967832_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Dba10U3DU5BU5D_t7DCA8B587918C44E6A024063E9B6D68021C52945_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Dba10U3D_tB4E39C735B5CE1F4F0BD0E3094BA8F4A0DB3765A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3DU5BU5D_t15F77BC4F46CBA550B1E10415CFC6D83ED3662C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0273EEB43196554B6B6B446A6E378CE79180EDC0;
IL2CPP_EXTERN_C String_t* _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78;
IL2CPP_EXTERN_C String_t* _stringLiteral104EA5AA2F48D575D526220F8AFC3A4B0751084F;
IL2CPP_EXTERN_C String_t* _stringLiteral131054F07E39EC19C8A4BA303006B843A86593BE;
IL2CPP_EXTERN_C String_t* _stringLiteral1393A66A08C7A6D10DB2E8047EBD3D6987AF7A4F;
IL2CPP_EXTERN_C String_t* _stringLiteral15D1491DF34184D383348E060DC5EEB7C5F37B89;
IL2CPP_EXTERN_C String_t* _stringLiteral161B9F12BD1C17D129479E1BC2EDE5D3DEC188EC;
IL2CPP_EXTERN_C String_t* _stringLiteral17A7BA088490CA1D9307C4F7F07BDC92703EDF51;
IL2CPP_EXTERN_C String_t* _stringLiteral228AB24DC50DA92F8EEC9AF61F44ECDB0839AFCE;
IL2CPP_EXTERN_C String_t* _stringLiteral2506E0C72D0C9223C3B1DD659E561E3C7E9D41AB;
IL2CPP_EXTERN_C String_t* _stringLiteral2DC756233000EEEBA87373FF3E461EF12B79A2F8;
IL2CPP_EXTERN_C String_t* _stringLiteral2E322AFD549EF9F59EDA98039EE5065CE3B38E42;
IL2CPP_EXTERN_C String_t* _stringLiteral320772EF40302B49A179DB96BAD02224E97B4018;
IL2CPP_EXTERN_C String_t* _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B;
IL2CPP_EXTERN_C String_t* _stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C;
IL2CPP_EXTERN_C String_t* _stringLiteral6C05221DA62C53352B72B78E3520059C19795353;
IL2CPP_EXTERN_C String_t* _stringLiteral7955881E2F68D1CD666C7B1CCE680349E2BBE475;
IL2CPP_EXTERN_C String_t* _stringLiteral8781B4C5341A4655BA409EE2225D54277FC75ADD;
IL2CPP_EXTERN_C String_t* _stringLiteral9DFFC3267C5F999585E61B45BA9C8DF18D4B02CA;
IL2CPP_EXTERN_C String_t* _stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302;
IL2CPP_EXTERN_C String_t* _stringLiteralD89ADD2DB1FBF30630EEA02FAAF144060CA0E908;
IL2CPP_EXTERN_C String_t* _stringLiteralDAE05ED355C78F7DFBA7AFF1A06DE50C04EBF8B2;
IL2CPP_EXTERN_C String_t* _stringLiteralF5879EB54A6F529C447B74748DDD4533AAC5D364;
IL2CPP_EXTERN_C String_t* _stringLiteralFB803FB240663A73DE1DCB833C322A2795E66F49;
IL2CPP_EXTERN_C String_t* _stringLiteralFF4DBA5E7E83065AE51544F4218CDA19344D6D5F;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Aggregate_TisVector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_mA81400B4B8DD936A72F86732D2D46BD84EBA0072_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Count_TisVector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_mB71D182BB2840314D295AD11983E38A0B8B6AF29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m35D6F33B4568D843278648A10A211593657EEA7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_m4BDF92DE31F3874410A263563DD52B99D3847979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m160E98976937AD2CD30F583A347C2A6597552579_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m4237D2A684EDF68555C45ED14688C36F4C70ADD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m72C35810CC34AE063C37D418BAE8B097E15C17D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m209AA059F79DC3ACA5DA5B4198DD76D0F4E76910_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item1_m8147AD192D772AFECA4A9F9DA04AE72072CFCD53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item1_m86F50E5081DC2F94A3D838C7C8F9E7F52F18F4D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item2_m149F088C73FA6853C9AACAABA740324D885A7404_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item2_mBA3C6612F072776B30C52648A160FD7F27ABBBED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_Create_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB6026A93D77AE492380D2CBD7F3732ECD42238BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Da72U3D_U3DccD1U3D_m645061DC636AE808AF1A05DFC81EEA41F45F5B18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Da72U3D_U3DccD2U3D_m4DCE86251CE7C4F2F7CE8E224FAFB54ECBB3DB6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Da72U3D_U3DccD3U3D_mD73047510B55C3A1DAE82386ECA795CC12807E1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Da72U3D_U3DccDBU3D_m524C1F893C57CD2B96BA0963E4DE87369559D8EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Da72U3D_U3DccDbU3D_m89A1D44397F8B10BCD4E056CF0803B89BC8BBE47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Da72U3D_U3DccDcU3D_mAADE777F0AD5FF7A8A0E49B14DB8B563F2D726FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Da72U3D_U3Dccc1U3D_mC0A73E455B6CC5002EA1EB9E487DA2ECA3F7A33D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Da72U3D_U3Dccc8U3D_mF748D4EDDB12212EB6EE1982204ADE7D2EEADBA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Da72U3D_U3Dccc9U3D_m245E0C941BC9347A9B882B7021142AF290F7F217_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Da72U3D_op_Addition_mA31292C5B8AB6ECB8FD14D181C81352E804171CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Da72U3D_op_Multiply_m29E039EE1BFC50A2219CA82D340839E22C41E1FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Da72U3D_op_Multiply_m9BDE9649F2B9D10145CB8F1A8920236243BE845F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Da72U3D_op_Multiply_mC0E3E5A70ECC7461E2D4BC0EA6896EAC3335DE5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Da72U3D_op_Multiply_mF877262D434B6D7B2E98E9345D6499BC8B5747E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Da72U3D_op_Subtraction_mDB43B162A1504FFE6594FABF1DA37A461BBC9132_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Da75U3D_U3DccEEU3D_m41B1B199C83DF2569543C0049898BEAE9EC97DA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Da75U3D_U3DccEeU3D_m3110F4F1A627022CB8B78EB9148CFB1284CD47D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Da75U3D__ctor_m0F3EAA9BADEA159921A34908E4FB8A6AB882716F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Da76U3D__ctor_m46263B1B9FBA5CCC7E9012AF8BE28618303D23C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Da78U3D__ctor_m1A07F4B30475154A92384F665C022CDD5ABF24A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Dba13U3D_U3Dcec5U3D_m01E280776C936DFBA48DACA6FA1F1D3EA43C91EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Dba13U3D_U3Dcec6U3D_mB50A4EFBAE59B432402DD96FC9F4A13DA63FFB5F_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct U3Dba10U3DU5BU5DU5BU5D_t26AD4E6385AE94048B1A2BD5D0846E481D967832;
struct U3Da8FU3DU5BU5D_tA5801B19CFADA59A962C4D73671059B3D3822AA8;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct Vector3DU5BU5D_t15F77BC4F46CBA550B1E10415CFC6D83ED3662C6;
struct U3Dba10U3DU5BU5D_t7DCA8B587918C44E6A024063E9B6D68021C52945;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Tuple`2<System.Double,System.Int32>>
struct List_1_t3420105ACC85EC0363642A2775985EECE6EC41F6  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Tuple_2U5BU5D_tF6E6423230749C4C36234F80CB2746354FF84F69* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t3420105ACC85EC0363642A2775985EECE6EC41F6_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Tuple_2U5BU5D_tF6E6423230749C4C36234F80CB2746354FF84F69* ___s_emptyArray_5;
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

// System.Tuple`2<=a8F=,=a8F=>
struct Tuple_2_tF85E3CCE7EC534DB0FBEF647C171160416163449  : public RuntimeObject
{
	// T1 System.Tuple`2::m_Item1
	U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* ___m_Item2_1;
};

// System.Tuple`2<System.Double,System.Int32>
struct Tuple_2_tECBABFFE5F6AEC7406FA67604949A78C26B1CEF3  : public RuntimeObject
{
	// T1 System.Tuple`2::m_Item1
	double ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	int32_t ___m_Item2_1;
};

// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6  : public RuntimeObject
{
	// T1 System.Tuple`2::m_Item1
	RuntimeObject* ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	RuntimeObject* ___m_Item2_1;
};

// =a72=
struct U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D  : public RuntimeObject
{
	// System.Int32 =a72=::=dE4b=
	int32_t ___U3DdE4bU3D_0;
	// System.Int32 =a72=::=dE4C=
	int32_t ___U3DdE4CU3D_1;
	// System.Double[] =a72=::=dE4c=
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___U3DdE4cU3D_2;
};

// =a8F=
struct U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3  : public RuntimeObject
{
	// System.Int32 =a8F=::=dBe5=
	int32_t ___U3DdBe5U3D_0;
	// System.Double[] =a8F=::=dE56=
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___U3DdE56U3D_1;
	// System.Int32 =a8F=::=dE57=
	int32_t ___U3DdE57U3D_2;
};
struct Il2CppArrayBounds;

// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___m_stream_0;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_buffer_1;
	// System.Text.Decoder System.IO.BinaryReader::m_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ___m_decoder_2;
	// System.Byte[] System.IO.BinaryReader::m_charBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_charBytes_3;
	// System.Char[] System.IO.BinaryReader::m_singleChar
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_singleChar_4;
	// System.Char[] System.IO.BinaryReader::m_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_charBuffer_5;
	// System.Int32 System.IO.BinaryReader::m_maxCharsSize
	int32_t ___m_maxCharsSize_6;
	// System.Boolean System.IO.BinaryReader::m_2BytesPerChar
	bool ___m_2BytesPerChar_7;
	// System.Boolean System.IO.BinaryReader::m_isMemoryStream
	bool ___m_isMemoryStream_8;
	// System.Boolean System.IO.BinaryReader::m_leaveOpen
	bool ___m_leaveOpen_9;
};

// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___OutStream_1;
	// System.Byte[] System.IO.BinaryWriter::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_2;
	// System.Text.Encoding System.IO.BinaryWriter::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_3;
	// System.Text.Encoder System.IO.BinaryWriter::_encoder
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder_4;
	// System.Boolean System.IO.BinaryWriter::_leaveOpen
	bool ____leaveOpen_5;
	// System.Byte[] System.IO.BinaryWriter::_largeByteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____largeByteBuffer_6;
	// System.Int32 System.IO.BinaryWriter::_maxChars
	int32_t ____maxChars_7;
};

struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_StaticFields
{
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___Null_0;
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

// =a76=/=ba13=
struct U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C  : public RuntimeObject
{
};

struct U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C_StaticFields
{
	// =a76=/=ba13= =a76=/=ba13=::=dc23=
	U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C* ___U3Ddc23U3D_0;
	// System.Func`3<Microsoft.Geospatial.VectorMath.Vector3D,Microsoft.Geospatial.VectorMath.Vector3D,Microsoft.Geospatial.VectorMath.Vector3D> =a76=/=ba13=::=dc24=
	Func_3_t0AE5BDFA047CC54B66B19EA2CCBD69C0E9016591* ___U3Ddc24U3D_1;
	// System.Comparison`1<System.Tuple`2<System.Double,System.Int32>> =a76=/=ba13=::=dc25=
	Comparison_1_tA0EB47E8C300430159B995CCC975DB7316EAB8C4* ___U3Ddc25U3D_2;
};

// =a7e=/=ba10=
struct U3Dba10U3D_tB4E39C735B5CE1F4F0BD0E3094BA8F4A0DB3765A  : public RuntimeObject
{
	// System.Int32 =a7e=/=ba10=::=deCe=
	int32_t ___U3DdeCeU3D_0;
	// System.Double =a7e=/=ba10=::=deCF=
	double ___U3DdeCFU3D_1;
};

// =a73=
struct U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 
{
	// System.Double =a73=::=dBD5=
	double ___U3DdBD5U3D_2;
	// System.Double =a73=::=dBD6=
	double ___U3DdBD6U3D_3;
	// System.Double =a73=::=dBD7=
	double ___U3DdBD7U3D_4;
	// System.Double =a73=::=dBD8=
	double ___U3DdBD8U3D_5;
};

struct U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2_StaticFields
{
	// =a73= =a73=::=dBD3=
	U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 ___U3DdBD3U3D_0;
	// =a73= =a73=::=dBD4=
	U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 ___U3DdBD4U3D_1;
};

// =a74=
struct U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 
{
	// System.Double =a74=::=dBda=
	double ___U3DdBdaU3D_2;
	// System.Double =a74=::=dBdB=
	double ___U3DdBdBU3D_3;
	// System.Double =a74=::=dBdb=
	double ___U3DdBdbU3D_4;
	// System.Double =a74=::=dBdC=
	double ___U3DdBdCU3D_5;
	// System.Double =a74=::=dBdc=
	double ___U3DdBdcU3D_6;
	// System.Double =a74=::=dBdD=
	double ___U3DdBdDU3D_7;
	// System.Double =a74=::=dBdd=
	double ___U3DdBddU3D_8;
	// System.Double =a74=::=dBdE=
	double ___U3DdBdEU3D_9;
	// System.Double =a74=::=dBde=
	double ___U3DdBdeU3D_10;
};

struct U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0_StaticFields
{
	// =a74= =a74=::=dBD9=
	U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 ___U3DdBD9U3D_0;
	// =a74= =a74=::=dBdA=
	U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 ___U3DdBdAU3D_1;
};

// =a75=
struct U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC 
{
	// System.Double =a75=::=dBd1=
	double ___U3DdBd1U3D_3;
	// System.Double =a75=::=dBd2=
	double ___U3DdBd2U3D_4;
	// System.Double =a75=::=dBd3=
	double ___U3DdBd3U3D_5;
	// System.Double =a75=::=dBd4=
	double ___U3DdBd4U3D_6;
	// System.Double =a75=::=dBd5=
	double ___U3DdBd5U3D_7;
	// System.Double =a75=::=dBd6=
	double ___U3DdBd6U3D_8;
	// System.Double =a75=::=dBd7=
	double ___U3DdBd7U3D_9;
	// System.Double =a75=::=dBd8=
	double ___U3DdBd8U3D_10;
	// System.Double =a75=::=dBd9=
	double ___U3DdBd9U3D_11;
	// System.Double =a75=::=dBEA=
	double ___U3DdBEAU3D_12;
	// System.Double =a75=::=dBEa=
	double ___U3DdBEaU3D_13;
	// System.Double =a75=::=dBEB=
	double ___U3DdBEBU3D_14;
	// System.Double =a75=::=dBEb=
	double ___U3DdBEbU3D_15;
	// System.Double =a75=::=dBEC=
	double ___U3DdBECU3D_16;
	// System.Double =a75=::=dBEc=
	double ___U3DdBEcU3D_17;
	// System.Double =a75=::=dBED=
	double ___U3DdBEDU3D_18;
};

struct U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC_StaticFields
{
	// =a75= =a75=::=dBdf=
	U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC ___U3DdBdfU3D_1;
	// =a75= =a75=::=dBd0=
	U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC ___U3DdBd0U3D_2;
};

// =a82=
struct U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 
{
	// System.Double =a82=::=dBF3=
	double ___U3DdBF3U3D_0;
	// System.Double =a82=::=dBF4=
	double ___U3DdBF4U3D_1;
	// System.Double =a82=::=dBF5=
	double ___U3DdBF5U3D_2;
	// System.Double =a82=::=dBF6=
	double ___U3DdBF6U3D_3;
};

// =a8A=
struct U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 
{
	// System.Double =a8A=::=dBEf=
	double ___U3DdBEfU3D_2;
	// System.Double =a8A=::=dBE0=
	double ___U3DdBE0U3D_3;
	// System.Double =a8A=::=dBE1=
	double ___U3DdBE1U3D_4;
	// System.Double =a8A=::=dBE2=
	double ___U3DdBE2U3D_5;
};

struct U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634_StaticFields
{
	// =a8A= =a8A=::=dBEe=
	U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 ___U3DdBEeU3D_0;
	// =a8A= =a8A=::=dBEF=
	U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 ___U3DdBEFU3D_1;
};

// =a8f=
struct U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE 
{
	// System.Double =a8f=::=dBFA=
	double ___U3DdBFAU3D_4;
	// System.Double =a8f=::=dBFa=
	double ___U3DdBFaU3D_5;
};

struct U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE_StaticFields
{
	// =a8f= =a8f=::=dBe6=
	U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE ___U3DdBe6U3D_0;
	// =a8f= =a8f=::=dBe7=
	U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE ___U3DdBe7U3D_1;
	// =a8f= =a8f=::=dBe8=
	U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE ___U3DdBe8U3D_2;
	// =a8f= =a8f=::=dBe9=
	U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE ___U3DdBe9U3D_3;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// Microsoft.Geospatial.VectorMath.Plane3D
struct Plane3D_t9930B95330F63B305DC3A12F4763038EDBEBD7B0 
{
	// System.Double Microsoft.Geospatial.VectorMath.Plane3D::<A>k__BackingField
	double ___U3CAU3Ek__BackingField_1;
	// System.Double Microsoft.Geospatial.VectorMath.Plane3D::<B>k__BackingField
	double ___U3CBU3Ek__BackingField_2;
	// System.Double Microsoft.Geospatial.VectorMath.Plane3D::<C>k__BackingField
	double ___U3CCU3Ek__BackingField_3;
	// System.Double Microsoft.Geospatial.VectorMath.Plane3D::<D>k__BackingField
	double ___U3CDU3Ek__BackingField_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Microsoft.Geospatial.VectorMath.Vector3D
struct Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE 
{
	// System.Double Microsoft.Geospatial.VectorMath.Vector3D::X
	double ___X_7;
	// System.Double Microsoft.Geospatial.VectorMath.Vector3D::Y
	double ___Y_8;
	// System.Double Microsoft.Geospatial.VectorMath.Vector3D::Z
	double ___Z_9;
};

struct Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_StaticFields
{
	// Microsoft.Geospatial.VectorMath.Vector3D Microsoft.Geospatial.VectorMath.Vector3D::Zero
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___Zero_0;
	// Microsoft.Geospatial.VectorMath.Vector3D Microsoft.Geospatial.VectorMath.Vector3D::Empty
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___Empty_1;
	// Microsoft.Geospatial.VectorMath.Vector3D Microsoft.Geospatial.VectorMath.Vector3D::UnitX
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___UnitX_2;
	// Microsoft.Geospatial.VectorMath.Vector3D Microsoft.Geospatial.VectorMath.Vector3D::UnitY
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___UnitY_3;
	// Microsoft.Geospatial.VectorMath.Vector3D Microsoft.Geospatial.VectorMath.Vector3D::UnitZ
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___UnitZ_4;
	// Microsoft.Geospatial.VectorMath.Vector3D Microsoft.Geospatial.VectorMath.Vector3D::MaxValue
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___MaxValue_5;
	// Microsoft.Geospatial.VectorMath.Vector3D Microsoft.Geospatial.VectorMath.Vector3D::MinValue
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___MinValue_6;
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

// =a71=
struct U3Da71U3D_tDD1F0880680B4507C03D6793FE608A486356B390 
{
	// Microsoft.Geospatial.VectorMath.Vector3D =a71=::=dBD1=
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___U3DdBD1U3D_0;
	// Microsoft.Geospatial.VectorMath.Vector3D =a71=::=dBD2=
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___U3DdBD2U3D_1;
};

// =a76=
struct U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A  : public RuntimeObject
{
	// =a72= =a76=::=dE4D=
	U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* ___U3DdE4DU3D_0;
	// System.Double =a76=::=dE4d=
	double ___U3DdE4dU3D_1;
	// Microsoft.Geospatial.VectorMath.Vector3D =a76=::=dE4E=
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___U3DdE4EU3D_2;
	// System.Double =a76=::=dE4e=
	double ___U3DdE4eU3D_3;
	// System.Double =a76=::=dE4F=
	double ___U3DdE4FU3D_4;
	// System.Double =a76=::=dE4f=
	double ___U3DdE4fU3D_5;
	// Microsoft.Geospatial.VectorMath.Vector3D =a76=::=dE40=
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___U3DdE40U3D_6;
	// Microsoft.Geospatial.VectorMath.Vector3D =a76=::=dE41=
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___U3DdE41U3D_7;
	// Microsoft.Geospatial.VectorMath.Vector3D =a76=::=dE42=
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___U3DdE42U3D_8;
};

// =a77=
struct U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E 
{
	// =a8f= =a77=::=dE43=
	U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE ___U3DdE43U3D_0;
	// =a8f= =a77=::=dE44=
	U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE ___U3DdE44U3D_1;
	// System.Double =a77=::=dE45=
	double ___U3DdE45U3D_2;
};

// =a78=
struct U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7 
{
	// Microsoft.Geospatial.VectorMath.Vector3D =a78=::=dE46=
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___U3DdE46U3D_0;
	// Microsoft.Geospatial.VectorMath.Vector3D =a78=::=dE47=
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___U3DdE47U3D_1;
	// Microsoft.Geospatial.VectorMath.Vector3D =a78=::=dE48=
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___U3DdE48U3D_2;
	// Microsoft.Geospatial.VectorMath.Vector3D =a78=::=dE49=
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___U3DdE49U3D_3;
	// Microsoft.Geospatial.VectorMath.Vector3D =a78=::=dE5A=
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___U3DdE5AU3D_4;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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

// Microsoft.Geospatial.VectorMath.Ray3D
struct Ray3D_t0684CF26FA625F1962485FFFA4B822789BB532D0 
{
	// Microsoft.Geospatial.VectorMath.Vector3D Microsoft.Geospatial.VectorMath.Ray3D::Origin
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___Origin_1;
	// Microsoft.Geospatial.VectorMath.Vector3D Microsoft.Geospatial.VectorMath.Ray3D::Direction
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___Direction_2;
};

struct Ray3D_t0684CF26FA625F1962485FFFA4B822789BB532D0_StaticFields
{
	// Microsoft.Geospatial.VectorMath.Ray3D Microsoft.Geospatial.VectorMath.Ray3D::Empty
	Ray3D_t0684CF26FA625F1962485FFFA4B822789BB532D0 ___Empty_0;
};

// =a71=/=ba12=
struct U3Dba12U3D_tA1A447F139DAF11B1EE9A6F0DEC213F1326F21F3  : public RuntimeObject
{
	// Microsoft.Geospatial.VectorMath.Vector3D =a71=/=ba12=::=dc22=
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___U3Ddc22U3D_0;
};

// System.Nullable`1<=a77=>
struct Nullable_1_t09CD51E16A5F5DDB2281A6D153ACD580FAF1D657 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E ___value_1;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Comparison`1<System.Tuple`2<System.Double,System.Int32>>
struct Comparison_1_tA0EB47E8C300430159B995CCC975DB7316EAB8C4  : public MulticastDelegate_t
{
};

// System.Func`3<Microsoft.Geospatial.VectorMath.Vector3D,Microsoft.Geospatial.VectorMath.Vector3D,Microsoft.Geospatial.VectorMath.Vector3D>
struct Func_3_t0AE5BDFA047CC54B66B19EA2CCBD69C0E9016591  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
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
// =a7e=/=ba10=[]
struct U3Dba10U3DU5BU5D_t7DCA8B587918C44E6A024063E9B6D68021C52945  : public RuntimeArray
{
	ALIGN_FIELD (8) U3Dba10U3D_tB4E39C735B5CE1F4F0BD0E3094BA8F4A0DB3765A* m_Items[1];

	inline U3Dba10U3D_tB4E39C735B5CE1F4F0BD0E3094BA8F4A0DB3765A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline U3Dba10U3D_tB4E39C735B5CE1F4F0BD0E3094BA8F4A0DB3765A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, U3Dba10U3D_tB4E39C735B5CE1F4F0BD0E3094BA8F4A0DB3765A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline U3Dba10U3D_tB4E39C735B5CE1F4F0BD0E3094BA8F4A0DB3765A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline U3Dba10U3D_tB4E39C735B5CE1F4F0BD0E3094BA8F4A0DB3765A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, U3Dba10U3D_tB4E39C735B5CE1F4F0BD0E3094BA8F4A0DB3765A* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// =a7e=/=ba10=[][]
struct U3Dba10U3DU5BU5DU5BU5D_t26AD4E6385AE94048B1A2BD5D0846E481D967832  : public RuntimeArray
{
	ALIGN_FIELD (8) U3Dba10U3DU5BU5D_t7DCA8B587918C44E6A024063E9B6D68021C52945* m_Items[1];

	inline U3Dba10U3DU5BU5D_t7DCA8B587918C44E6A024063E9B6D68021C52945* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline U3Dba10U3DU5BU5D_t7DCA8B587918C44E6A024063E9B6D68021C52945** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, U3Dba10U3DU5BU5D_t7DCA8B587918C44E6A024063E9B6D68021C52945* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline U3Dba10U3DU5BU5D_t7DCA8B587918C44E6A024063E9B6D68021C52945* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline U3Dba10U3DU5BU5D_t7DCA8B587918C44E6A024063E9B6D68021C52945** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, U3Dba10U3DU5BU5D_t7DCA8B587918C44E6A024063E9B6D68021C52945* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// =a8F=[]
struct U3Da8FU3DU5BU5D_tA5801B19CFADA59A962C4D73671059B3D3822AA8  : public RuntimeArray
{
	ALIGN_FIELD (8) U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* m_Items[1];

	inline U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// Microsoft.Geospatial.VectorMath.Vector3D[]
struct Vector3DU5BU5D_t15F77BC4F46CBA550B1E10415CFC6D83ED3662C6  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE m_Items[1];

	inline Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE value)
	{
		m_Items[index] = value;
	}
};


// T1 System.Tuple`2<System.Object,System.Object>::get_Item1()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Tuple_2_get_Item1_mBF34A596062BBB3C1DD2A6CA36810366F445C9FA_gshared_inline (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, const RuntimeMethod* method) ;
// T2 System.Tuple`2<System.Object,System.Object>::get_Item2()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Tuple_2_get_Item2_m4C8E8E93C0299E98E046C765CA6ABB544412C1D9_gshared_inline (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<Microsoft.Geospatial.VectorMath.Vector3D>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisVector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_mB71D182BB2840314D295AD11983E38A0B8B6AF29_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Func`3<Microsoft.Geospatial.VectorMath.Vector3D,Microsoft.Geospatial.VectorMath.Vector3D,Microsoft.Geospatial.VectorMath.Vector3D>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3__ctor_mCBB4723F9053B7A22A93D6665AFE35AF5EE4F9B0_gshared (Func_3_t0AE5BDFA047CC54B66B19EA2CCBD69C0E9016591* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::Aggregate<Microsoft.Geospatial.VectorMath.Vector3D>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`3<TSource,TSource,TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE Enumerable_Aggregate_TisVector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_mA81400B4B8DD936A72F86732D2D46BD84EBA0072_gshared (RuntimeObject* ___source0, Func_3_t0AE5BDFA047CC54B66B19EA2CCBD69C0E9016591* ___func1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Tuple`2<T1,T2> System.Tuple::Create<System.Double,System.Int32>(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_tECBABFFE5F6AEC7406FA67604949A78C26B1CEF3* Tuple_Create_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB6026A93D77AE492380D2CBD7F3732ECD42238BF_gshared (double ___item10, int32_t ___item21, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_mC1E8799BBCE317B612875123C9C894BD470BFE6A_gshared (Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mEB3B61CB86B1419919338B0668DC4E568C2FFF93_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* ___comparison0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T2 System.Tuple`2<System.Double,System.Int32>::get_Item2()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Tuple_2_get_Item2_mBA3C6612F072776B30C52648A160FD7F27ABBBED_gshared_inline (Tuple_2_tECBABFFE5F6AEC7406FA67604949A78C26B1CEF3* __this, const RuntimeMethod* method) ;
// T1 System.Tuple`2<System.Double,System.Int32>::get_Item1()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Tuple_2_get_Item1_m8147AD192D772AFECA4A9F9DA04AE72072CFCD53_gshared_inline (Tuple_2_tECBABFFE5F6AEC7406FA67604949A78C26B1CEF3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<=a77=>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m72C35810CC34AE063C37D418BAE8B097E15C17D9_gshared_inline (Nullable_1_t09CD51E16A5F5DDB2281A6D153ACD580FAF1D657* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<=a77=>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E Nullable_1_get_Value_m209AA059F79DC3ACA5DA5B4198DD76D0F4E76910_gshared (Nullable_1_t09CD51E16A5F5DDB2281A6D153ACD580FAF1D657* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// Microsoft.Geospatial.VectorMath.Vector3D =a71=::=ccC8=(Microsoft.Geospatial.VectorMath.Vector3D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE U3Da71U3D_U3DccC8U3D_mB154EBF8989B99A6527DA4A7ABF3BF35044BC86D (U3Da71U3D_tDD1F0880680B4507C03D6793FE608A486356B390* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, const RuntimeMethod* method) ;
// System.Int32 =a72=::=cccE=()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, const RuntimeMethod* method) ;
// System.Int32 =a72=::=cccD=()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, const RuntimeMethod* method) ;
// System.Void =a72=::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da72U3D__ctor_m4A6DFDF5FDB11319F42795A034A92F123D4BA67C (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, int32_t p0, int32_t p1, const RuntimeMethod* method) ;
// System.Void =a72=::=ccc1=(=a72=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da72U3D_U3Dccc1U3D_mC0A73E455B6CC5002EA1EB9E487DA2ECA3F7A33D (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* p0, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Double[] =a72=::=cccF=()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, const RuntimeMethod* method) ;
// System.Void =a72=::=ccc7=(System.Int32,System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da72U3D_U3Dccc7U3D_m7A0E032BC9A5A87614BD1D760ADB984901308AFC (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, int32_t p0, int32_t p1, double p2, const RuntimeMethod* method) ;
// System.Void =a72=::=cccd=(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Da72U3D_U3DcccdU3D_m07ADE7D20F3502511CEE782FB55F604720E184B3_inline (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, int32_t p0, const RuntimeMethod* method) ;
// System.Void =a72=::=ccce=(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Da72U3D_U3DccceU3D_mE9A72A4E77E1119BF727DFB1AAD62EC005971C6D_inline (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, int32_t p0, const RuntimeMethod* method) ;
// System.Void =a72=::=cccf=(System.Double[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Da72U3D_U3DcccfU3D_m6C8385E491BEDDD10A6DE674A8DD11C54F12E617_inline (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* p0, const RuntimeMethod* method) ;
// System.Object System.Array::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void =a72=::.ctor(System.Int32,System.Int32,System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da72U3D__ctor_m378872DEED2187C9D0177E3DBAB56E36E1A9E413 (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, int32_t p0, int32_t p1, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___data2, const RuntimeMethod* method) ;
// System.Void =a8F=::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da8FU3D__ctor_mCC053C57FA6C93DE3036B6C25A9F85DB7829F9B5 (U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* __this, int32_t p0, const RuntimeMethod* method) ;
// System.Double =a72=::=ccc6=(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3Da72U3D_U3Dccc6U3D_m323850489F4D3AAD389FB35659D15F9276AD0495 (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, int32_t p0, int32_t p1, const RuntimeMethod* method) ;
// System.Void =a8F=::=cc6d=(System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da8FU3D_U3Dcc6dU3D_m0B569B31D41E95FF927623963ABCE273B7384714 (U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* __this, int32_t p0, double p1, const RuntimeMethod* method) ;
// System.Int32 =a8F=::=cc6F=()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t U3Da8FU3D_U3Dcc6FU3D_m1684DC7C36C51B01B5C703AAFCDFFDD40D4E8B4F_inline (U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Double =a8F=::=cc6D=(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3Da8FU3D_U3Dcc6DU3D_mFC2E109CCA616464F32983ED84E77ADA0078ABF6 (U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* __this, int32_t p0, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4239F97ECC23A71F4191B8722362A1AA38E2E98F (RuntimeArray* ___sourceArray0, RuntimeArray* ___destinationArray1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742 (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, String_t* ___message0, const RuntimeMethod* method) ;
// =a72= =a72=::=ccDa=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* U3Da72U3D_U3DccDaU3D_mF714BE7585FAB49B0EA71E615F51E7983BACC216 (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, const RuntimeMethod* method) ;
// =a72= =a72=::=ccc5=(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* U3Da72U3D_U3Dccc5U3D_m7D4A120E50EA3A1B28517D9EF5A6F28FEBA6A4EE (int32_t p0, const RuntimeMethod* method) ;
// System.Void =a72=::=ccDA=(=a72=,=a72=,System.Int32[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da72U3D_U3DccDAU3D_mE851B39B27E5F97D6F48384A5A74B8C22B3C51FD (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* p0, U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* p1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* p2, int32_t p3, int32_t p4, const RuntimeMethod* method) ;
// System.Void =a72=::=ccc8=(=a72=,System.Int32,System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da72U3D_U3Dccc8U3D_mF748D4EDDB12212EB6EE1982204ADE7D2EEADBA0 (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* p0, int32_t p1, int32_t p2, double p3, const RuntimeMethod* method) ;
// System.Void =a72=::=ccc9=(=a72=,System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da72U3D_U3Dccc9U3D_m245E0C941BC9347A9B882B7021142AF290F7F217 (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* p0, int32_t p1, double p2, const RuntimeMethod* method) ;
// =a72= =a72=::=ccDc=(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* U3Da72U3D_U3DccDcU3D_mAADE777F0AD5FF7A8A0E49B14DB8B563F2D726FA (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, bool p0, const RuntimeMethod* method) ;
// =a72= =a72=::=ccDb=(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* U3Da72U3D_U3DccDbU3D_m89A1D44397F8B10BCD4E056CF0803B89BC8BBE47 (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, bool p0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Double =a72=::=ccDE=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3Da72U3D_U3DccDEU3D_mF2A55E971C13CCAE262C2B5147CDF79EADC69C8C (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Object =a72=::=ccc2=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Da72U3D_U3Dccc2U3D_mB0BB6856485E75462C1D0C5B3F85363CBE3BF0F5 (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, const RuntimeMethod* method) ;
// System.Void =a72=::=ccD1=(=a8F=&,=a72=&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da72U3D_U3DccD1U3D_m645061DC636AE808AF1A05DFC81EEA41F45F5B18 (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3** p0, U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D** p1, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Double System.Math::Max(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Max_mD1AD971AB9981B8A59BC5B5BEB7DD6A5A5E82AD6 (double ___val10, double ___val21, const RuntimeMethod* method) ;
// System.Void =a8F=::.ctor(System.Double[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da8FU3D__ctor_m81C46FD7E2A23C0988AAA06D6738FE6557C85D8F (U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* p0, int32_t p1, int32_t p2, const RuntimeMethod* method) ;
// System.Boolean =a72=::=ccDF=(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da72U3D_U3DccDFU3D_mDF813314FF19E8D760954D12CCADD44874F23FC2 (double p0, double p1, const RuntimeMethod* method) ;
// T1 System.Tuple`2<=a8F=,=a8F=>::get_Item1()
inline U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* Tuple_2_get_Item1_m86F50E5081DC2F94A3D838C7C8F9E7F52F18F4D1_inline (Tuple_2_tF85E3CCE7EC534DB0FBEF647C171160416163449* __this, const RuntimeMethod* method)
{
	return ((  U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* (*) (Tuple_2_tF85E3CCE7EC534DB0FBEF647C171160416163449*, const RuntimeMethod*))Tuple_2_get_Item1_mBF34A596062BBB3C1DD2A6CA36810366F445C9FA_gshared_inline)(__this, method);
}
// System.Void =a7e=/=ba10=::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Dba10U3D__ctor_m00369DF4BBF1187C6D90B93A54E77467B1A04FA2 (U3Dba10U3D_tB4E39C735B5CE1F4F0BD0E3094BA8F4A0DB3765A* __this, const RuntimeMethod* method) ;
// System.Void =a7e=/=ba10=::=cec1=(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Dba10U3D_U3Dcec1U3D_mFE598B342E14D7DD8806A5DEA1D578B79F53E607_inline (U3Dba10U3D_tB4E39C735B5CE1F4F0BD0E3094BA8F4A0DB3765A* __this, double p0, const RuntimeMethod* method) ;
// System.Void =a7e=/=ba10=::=cecf=(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Dba10U3D_U3DcecfU3D_mBEBEF567FFF40F9C7A58409866D369236F7439CF_inline (U3Dba10U3D_tB4E39C735B5CE1F4F0BD0E3094BA8F4A0DB3765A* __this, int32_t p0, const RuntimeMethod* method) ;
// System.Void System.Array::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Initialize_mA2B5E07BC65B448E268C932D5A686F3A50DB0A82 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Double[] =a8F=::=cc6E=()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* U3Da8FU3D_U3Dcc6EU3D_mBB69AB7F608B84B329D1B1588B12E7703C637829_inline (U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* __this, const RuntimeMethod* method) ;
// T2 System.Tuple`2<=a8F=,=a8F=>::get_Item2()
inline U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* Tuple_2_get_Item2_m149F088C73FA6853C9AACAABA740324D885A7404_inline (Tuple_2_tF85E3CCE7EC534DB0FBEF647C171160416163449* __this, const RuntimeMethod* method)
{
	return ((  U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* (*) (Tuple_2_tF85E3CCE7EC534DB0FBEF647C171160416163449*, const RuntimeMethod*))Tuple_2_get_Item2_m4C8E8E93C0299E98E046C765CA6ABB544412C1D9_gshared_inline)(__this, method);
}
// System.Void =a7e=::=ccCE=(=a7e=/=ba10=[][],System.Double[],System.Double[],System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da7eU3D_U3DccCEU3D_m843E4876F27253B6C5B6F1BAAD45C4A43D6256DA (U3Dba10U3DU5BU5DU5BU5D_t26AD4E6385AE94048B1A2BD5D0846E481D967832* p0, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* p1, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* p2, int32_t p3, double p4, const RuntimeMethod* method) ;
// System.Double =a72=::=ccDD=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3Da72U3D_U3DccDDU3D_mC87A1E571FC934D1C987AA91A15C6C4EC8001645 (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, const RuntimeMethod* method) ;
// =a72= =a72=::=ccDC=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* U3Da72U3D_U3DccDCU3D_mED72B254B85851F21ADC24804CFB9A67162ACFD3 (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, const RuntimeMethod* method) ;
// =a8F= =a72=::op_Multiply(=a72=,=a8F=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* U3Da72U3D_op_Multiply_mF877262D434B6D7B2E98E9345D6499BC8B5747E7 (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* p0, U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* p1, const RuntimeMethod* method) ;
// System.Void =a73=::.ctor(System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da73U3D__ctor_m785507D16A03EE1898AF9010FFDAC9EF5F496962 (U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* __this, double p0, double p1, double p2, double p3, const RuntimeMethod* method) ;
// System.Void =a73=::.ctor(=a8f=,=a8f=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da73U3D__ctor_m6EB476162502B57243B09741BDA5D48AAFC502ED (U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* __this, U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE p0, U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE p1, const RuntimeMethod* method) ;
// System.Void =a8f=::.ctor(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da8fU3D__ctor_m9D7FCE73C72E54267B13BCDE59BB82A5DA9C0DCD (U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE* __this, double p0, double p1, const RuntimeMethod* method) ;
// System.Boolean =a73=::=ccdC=(=a73=&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da73U3D_U3DccdCU3D_mC8E2D2483D447A30DF7EBAF2547D378F8E26276F (U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* __this, U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* p0, const RuntimeMethod* method) ;
// System.Boolean =a73=::Equals(=a73=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da73U3D_Equals_m2BEE0296899C4C6053D01EECF461979AC26A3562 (U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* __this, U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 ___other0, const RuntimeMethod* method) ;
// =a73= =a73=::=ccD7=(=a73=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 U3Da73U3D_U3DccD7U3D_m3943B58AA308A1D25786499FC038D12661F139D5 (U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* __this, U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 p0, const RuntimeMethod* method) ;
// =a73= =a73=::=ccD8=(=a73=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 U3Da73U3D_U3DccD8U3D_mCD1AE976D02EE0EA1785E0854FEEFD5B7913AA2C (U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* __this, U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 p0, const RuntimeMethod* method) ;
// =a73= =a73=::=ccD9=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 U3Da73U3D_U3DccD9U3D_mB6440A752DFFBBDC20454BDDD48334CA37F480EF (U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* __this, const RuntimeMethod* method) ;
// =a73= =a73=::=ccdA=(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 U3Da73U3D_U3DccdAU3D_mC64F2C5965BE1D6EAD6EF94DED17AE93DC98C77A (U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* __this, double p0, const RuntimeMethod* method) ;
// System.Double =a73=::=ccD5=(System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3Da73U3D_U3DccD5U3D_m716CD2FCCF53FEED066AF8AD08E0AC316B2AEB29 (double p0, double p1, double p2, double p3, const RuntimeMethod* method) ;
// System.Double =a73=::=ccda=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3Da73U3D_U3DccdaU3D_mEF626EA512438D725A5DF3A1E139D1D7443C0825 (U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* __this, const RuntimeMethod* method) ;
// =a73= =a73=::=ccdB=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 U3Da73U3D_U3DccdBU3D_mB944A10DD7462CA1803FFF268BEF8837E4A6D538 (U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* __this, const RuntimeMethod* method) ;
// =a73= =a73=::op_Multiply(System.Double,=a73=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 U3Da73U3D_op_Multiply_m68CA9F8B5DD77D89CD6DB0A2C44AE6B0562A9F8A (double p0, U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 p1, const RuntimeMethod* method) ;
// =a73= =a73=::=ccdb=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 U3Da73U3D_U3DccdbU3D_m62D0B36B7A30951FB36EE533925E1528D557510F (U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* __this, const RuntimeMethod* method) ;
// System.Boolean =a73=::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da73U3D_Equals_m3CC46E9B9A9344540C2D6A94D14AC8943A6FB6BD (U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.Double::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline (double* __this, const RuntimeMethod* method) ;
// System.Int32 =a73=::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3Da73U3D_GetHashCode_mD407D6DBC7DE71EF6DFBBF2E8B4B9403A2B94C23 (U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* __this, const RuntimeMethod* method) ;
// System.Void =a74=::.ctor(Microsoft.Geospatial.VectorMath.Vector3D,Microsoft.Geospatial.VectorMath.Vector3D,Microsoft.Geospatial.VectorMath.Vector3D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da74U3D__ctor_m11897E67B3471D2A3CE06CDD150E4D38BE6294CC (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p1, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p2, const RuntimeMethod* method) ;
// System.Void =a74=::.ctor(Microsoft.Geospatial.VectorMath.Vector3D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da74U3D__ctor_m79946E636E21CCD02B3734FFE658BB7E17F7930F (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, const RuntimeMethod* method) ;
// System.Void =a74=::.ctor(System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da74U3D__ctor_m974FCEAB89608607A8A978647F40307F26F064E9 (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* __this, double p0, double p1, double p2, double p3, double p4, double p5, double p6, double p7, double p8, const RuntimeMethod* method) ;
// System.Void =a74=::.ctor(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da74U3D__ctor_mCDA10AAF7D2F26F830415F78C19B37C6628B3DA7 (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* p0, const RuntimeMethod* method) ;
// =a74= =a74=::=ccd0=(=a74=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 U3Da74U3D_U3Dccd0U3D_m51E22C050BFD01655951E1493801785611F06BB2 (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* __this, U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 p0, const RuntimeMethod* method) ;
// =a74= =a74=::=ccd1=(=a74=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 U3Da74U3D_U3Dccd1U3D_mD293A2528046C27A15A11FF4E1D9A474AFDB72D9 (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* __this, U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 p0, const RuntimeMethod* method) ;
// =a74= =a74=::=ccd2=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 U3Da74U3D_U3Dccd2U3D_m6A9FC2FC4B0BE47639F047037D279A507FEA8C20 (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* __this, const RuntimeMethod* method) ;
// =a74= =a74=::=ccd3=(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 U3Da74U3D_U3Dccd3U3D_m40E8FC0E2A12C7CED3F8AD4BF25F7D853CB772DA (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* __this, double p0, const RuntimeMethod* method) ;
// System.Boolean =a74=::op_Equality(=a74=,=a74=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da74U3D_op_Equality_m7595615FD5486BB9F9E93D4A9AFF60150ED1C85A (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 p0, U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 p1, const RuntimeMethod* method) ;
// System.Double[] =a74=::=ccdf=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* U3Da74U3D_U3DccdfU3D_m841124D4988C0966F298FE4C152D8CD7CBDBA8FC (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* __this, const RuntimeMethod* method) ;
// System.Double =a74=::=ccde=(System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3Da74U3D_U3DccdeU3D_m8EAB01F0B4E8A310F4624CCE588B10A4E8890975 (double p0, double p1, double p2, double p3, double p4, double p5, double p6, double p7, double p8, const RuntimeMethod* method) ;
// System.Double =a74=::=ccd4=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3Da74U3D_U3Dccd4U3D_m1C1DEE312AD83B08AD176F7435967A5CE0CB3241 (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* __this, const RuntimeMethod* method) ;
// =a74= =a74=::=ccd9=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 U3Da74U3D_U3Dccd9U3D_m34340C6F630005521874EB9188418093555DF306 (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* __this, const RuntimeMethod* method) ;
// =a74= =a74=::op_Multiply(System.Double,=a74=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 U3Da74U3D_op_Multiply_mB14231C010F61C9B35BD3A8F9E4709926E47A5F0 (double p0, U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 p1, const RuntimeMethod* method) ;
// =a74= =a74=::=ccd5=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 U3Da74U3D_U3Dccd5U3D_m4E29C774B992B6DFD31B2B74DFC6CDB64AACA59E (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* __this, const RuntimeMethod* method) ;
// System.Boolean =a74=::Equals(=a74=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da74U3D_Equals_m95545B7259435165CEC8AD6614974B537EF9DE14 (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* __this, U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 ___other0, const RuntimeMethod* method) ;
// System.Boolean =a74=::=ccd6=(=a74=&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da74U3D_U3Dccd6U3D_m7692E65A65242FBF74C88C00054D66E22321DAF6 (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* __this, U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* p0, const RuntimeMethod* method) ;
// System.Boolean =a74=::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da74U3D_Equals_m16D29ABF2F95288EB3A549ED8FBEF6143B2707C5 (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 =a74=::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3Da74U3D_GetHashCode_mD06522DC6B6D39E37366D1DB05EB15BD7D59C581 (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* __this, const RuntimeMethod* method) ;
// =a74= =a74=::=ccd7=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 U3Da74U3D_U3Dccd7U3D_m0E76576C5A280AEBB59666B2781FCE20FD0E753C (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* __this, const RuntimeMethod* method) ;
// =a8f= =a74=::=ccd8=(=a8f=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE U3Da74U3D_U3Dccd8U3D_m785CD916C6CDBCB7B872B882769701C0ECBF53BC (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* __this, U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE p0, const RuntimeMethod* method) ;
// System.Void =a75=::.ctor(System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da75U3D__ctor_mE3BBD648173DE5B1AFF6305475F1B580A19D411C (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, double p0, double p1, double p2, double p3, double p4, double p5, double p6, double p7, double p8, double p9, double p10, double p11, double p12, double p13, double p14, double p15, const RuntimeMethod* method) ;
// System.Void =a75=::.ctor(=a75=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da75U3D__ctor_m8A42933A9EBAFE88DEF2A36793B2D09C2DBAE5FE (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC p0, const RuntimeMethod* method) ;
// System.Void =a75=::.ctor(=a75=&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da75U3D__ctor_mA4132D477D317E4002BAF660A6D1922D71BC17EB (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* p0, const RuntimeMethod* method) ;
// System.Void =a75=::.ctor(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da75U3D__ctor_m0F3EAA9BADEA159921A34908E4FB8A6AB882716F (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* p0, const RuntimeMethod* method) ;
// System.Double =a75=::=ccEA=()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double U3Da75U3D_U3DccEAU3D_m2A0B4C60D26E1851C2503E37B4B909E23A653B44_inline (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, const RuntimeMethod* method) ;
// System.Void =a75=::=ccEa=(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Da75U3D_U3DccEaU3D_mADFC1F8E7CFE3F3686C325442574CA7B2A2364B9_inline (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, double p0, const RuntimeMethod* method) ;
// System.Double =a75=::=ccEB=()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double U3Da75U3D_U3DccEBU3D_mF359D3692FA7E2DD4168535819902EB710FF5B85_inline (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, const RuntimeMethod* method) ;
// System.Void =a75=::=ccEb=(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Da75U3D_U3DccEbU3D_m010FB09878E2E9D14E248A36621C1C8BCEA90882_inline (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, double p0, const RuntimeMethod* method) ;
// System.Double =a75=::=ccEC=()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double U3Da75U3D_U3DccECU3D_mB98CE43F9CF5CEF5FDEFEA2579C9902C74D27D08_inline (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, const RuntimeMethod* method) ;
// System.Void =a75=::=ccEc=(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Da75U3D_U3DccEcU3D_m874EA69FFCB99888094B324AF522A4009F9FE100_inline (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, double p0, const RuntimeMethod* method) ;
// System.Boolean =a75=::=ccED=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da75U3D_U3DccEDU3D_m313A68DA8284E9D4E6E6F9A6DF899B0FB4DC0F3C (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, const RuntimeMethod* method) ;
// System.Boolean =a75=::=ccEd=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da75U3D_U3DccEdU3D_m5947426A3332CDC6E85924386605FDC6439F8F0B (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Double =a75=::=ccEE=(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3Da75U3D_U3DccEEU3D_m41B1B199C83DF2569543C0049898BEAE9EC97DA4 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, int32_t p0, int32_t p1, const RuntimeMethod* method) ;
// System.Void =a75=::=ccEe=(System.Int32,System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da75U3D_U3DccEeU3D_m3110F4F1A627022CB8B78EB9148CFB1284CD47D5 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, int32_t p0, int32_t p1, double p2, const RuntimeMethod* method) ;
// =a75= =a75=::=ccE3=(=a75=&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC U3Da75U3D_U3DccE3U3D_m6F5091781A47F54850BD065FD564869A8587BDA8 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* p0, const RuntimeMethod* method) ;
// Microsoft.Geospatial.VectorMath.Vector3D Microsoft.Geospatial.VectorMath.Vector3D::Subtract(Microsoft.Geospatial.VectorMath.Vector3D&,Microsoft.Geospatial.VectorMath.Vector3D&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE Vector3D_Subtract_mE2AD6B18714D2AA7E3A82A7B82FF98709B61F2FF_inline (Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* ___left0, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* ___right1, const RuntimeMethod* method) ;
// System.Void Microsoft.Geospatial.VectorMath.Vector3D::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3D_Normalize_m5B5B25A714AD0FDB06FE954491450CE6B9CE15D7 (Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* __this, const RuntimeMethod* method) ;
// Microsoft.Geospatial.VectorMath.Vector3D Microsoft.Geospatial.VectorMath.Vector3D::Cross(Microsoft.Geospatial.VectorMath.Vector3D&,Microsoft.Geospatial.VectorMath.Vector3D&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE Vector3D_Cross_m93B93E940A2EFC94556E86F7D9DC00DE8D4025DB_inline (Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* ___a0, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* ___b1, const RuntimeMethod* method) ;
// System.Double Microsoft.Geospatial.VectorMath.Vector3D::Dot(Microsoft.Geospatial.VectorMath.Vector3D&,Microsoft.Geospatial.VectorMath.Vector3D&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Vector3D_Dot_m69F3F42511544AC5B61669DB5CD6F7BB48DF95A3_inline (Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* ___left0, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* ___right1, const RuntimeMethod* method) ;
// =a75= =a75=::=ccE9=(=a75=&,=a75=&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC U3Da75U3D_U3DccE9U3D_m3BF9E7DA68861FC5789EBDC88602A567AE1D77F9 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* p0, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* p1, const RuntimeMethod* method) ;
// System.Void =a75=::=ccFD=(System.Double,System.Double&,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da75U3D_U3DccFDU3D_m6C92C0E7C17D68CB37F2BD393D252692BD331239 (double p0, double* p1, double* p2, const RuntimeMethod* method) ;
// System.Double Microsoft.Geospatial.VectorMath.Plane3D::get_A()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Plane3D_get_A_m9FE3C792A2473D3CE2559FF69B38CCED7FB47F51_inline (Plane3D_t9930B95330F63B305DC3A12F4763038EDBEBD7B0* __this, const RuntimeMethod* method) ;
// System.Double Microsoft.Geospatial.VectorMath.Plane3D::get_B()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Plane3D_get_B_mBBBDDA16D982F03642A38F8825E1EF4AAE04B259_inline (Plane3D_t9930B95330F63B305DC3A12F4763038EDBEBD7B0* __this, const RuntimeMethod* method) ;
// System.Double Microsoft.Geospatial.VectorMath.Plane3D::get_C()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Plane3D_get_C_m80C61B3CB7D816C9798E08B34AF26BA784C0E144_inline (Plane3D_t9930B95330F63B305DC3A12F4763038EDBEBD7B0* __this, const RuntimeMethod* method) ;
// System.Void =a8A=::.ctor(System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da8AU3D__ctor_m3D2630D700DE73C47B56F6BD184DC5019B722E00 (U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634* __this, double p0, double p1, double p2, double p3, const RuntimeMethod* method) ;
// System.Void =a8A=::=cc1C=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da8AU3D_U3Dcc1CU3D_m9670FCF33ED8FF258967411DF5A8ED6F2D75A246 (U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634* __this, const RuntimeMethod* method) ;
// =a75= =a75=::=ccee=(=a75=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC U3Da75U3D_U3DcceeU3D_m74C0940D20AF996A00354EC9E9EFA7F1DA4063BF (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC p0, const RuntimeMethod* method) ;
// =a75= =a75=::=ccEF=(=a75=,=a75=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC U3Da75U3D_U3DccEFU3D_mE3D2E7E19C669F1572B70126EB17ED37F6C0216C (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC p0, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC p1, const RuntimeMethod* method) ;
// =a75= =a75=::=ccE0=(=a75=,=a75=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC U3Da75U3D_U3DccE0U3D_m254CD3A2B2E7D29275E0113B2ACC8B2E072BE4E1 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC p0, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC p1, const RuntimeMethod* method) ;
// =a75= =a75=::=cce9=(=a75=,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC U3Da75U3D_U3Dcce9U3D_mF8945E2F6618E90117435A6FFB8A65ABBC778EB2 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC p0, double p1, const RuntimeMethod* method) ;
// System.Void Microsoft.Geospatial.VectorMath.Vector3D::.ctor(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3D__ctor_m089D30E3C254B02097D9E58F833A0DAC855CE3E6 (Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* __this, double ___x0, double ___y1, double ___z2, const RuntimeMethod* method) ;
// =a82= =a75=::=ccFA=(=a75=,=a82=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 U3Da75U3D_U3DccFAU3D_m2D711E85C1D1783E7CD7BE7454E86A472EC15C1B (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC p0, U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 p1, const RuntimeMethod* method) ;
// System.Boolean =a75=::=ccFa=(=a75=&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da75U3D_U3DccFaU3D_m41135BFAE5A9041BB18648D3272FB547CE88C693 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* p0, const RuntimeMethod* method) ;
// System.Boolean =a75=::Equals(=a75=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da75U3D_Equals_m4CD10B87D3CBD2EE4A83B17734331CF3DB736F15 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC ___other0, const RuntimeMethod* method) ;
// System.Void =a75=::=cce2=(System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da75U3D_U3Dcce2U3D_mEDAF1DE68C7335B15863DC41EEA26BB966AE9B12 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, double p0, double p1, double p2, double p3, const RuntimeMethod* method) ;
// System.Void =a75=::=cce3=(System.Double,=a75=&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da75U3D_U3Dcce3U3D_m4B11D79E3834FB8868E495D702012A2884DBA2FB (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, double p0, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* p1, const RuntimeMethod* method) ;
// Microsoft.Geospatial.VectorMath.Vector3D =a75=::=cce4=(Microsoft.Geospatial.VectorMath.Vector3D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE U3Da75U3D_U3Dcce4U3D_mF1B50D2D01DA667BA751ACB05008FDBB41F637AA (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, const RuntimeMethod* method) ;
// Microsoft.Geospatial.VectorMath.Vector3D =a75=::=cce5=(Microsoft.Geospatial.VectorMath.Vector3D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE U3Da75U3D_U3Dcce5U3D_m83CEA356C416D57AE4E36C943A9E3D3F950488B5 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, const RuntimeMethod* method) ;
// System.Void =a82=::.ctor(System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da82U3D__ctor_m1603D94D85CF688ED8E059FA5906A174910E8E49 (U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404* __this, double p0, double p1, double p2, double p3, const RuntimeMethod* method) ;
// =a82= =a75=::=cce6=(=a82=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 U3Da75U3D_U3Dcce6U3D_m4574BA996056F64507A5F33FD8FCE60B978EE424 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 p0, const RuntimeMethod* method) ;
// System.Void =a75=::=cce7=(=a75=&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da75U3D_U3Dcce7U3D_mD841759C75527B4F94E7FF0E50A68635F8BC9F23 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* p0, const RuntimeMethod* method) ;
// System.Void =a75=::=cce8=(=a75=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da75U3D_U3Dcce8U3D_mBB96ADA696F117DF4E517C5419D7CA4FBF30B9BC (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC p0, const RuntimeMethod* method) ;
// System.Boolean =a75=::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da75U3D_Equals_m47FB1D8BFB40C3DAEEAAA3178276727D5EA0089B (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean =a75=::=ccFB=(=a75=&,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da75U3D_U3DccFBU3D_mB3EB9C16013AB372230C600413B1BC7E2DA306F7 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* p0, double p1, const RuntimeMethod* method) ;
// System.Int32 =a75=::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3Da75U3D_GetHashCode_m51A2A9B77539CD6B4E5000A10746603B2DB1B3F9 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, const RuntimeMethod* method) ;
// System.String =a75=::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3Da75U3D_ToString_m33838A28B8E582D8B2B09777425897B6BCFCC3C8 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, const RuntimeMethod* method) ;
// System.Void =a75=::=ccFb=(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da75U3D_U3DccFbU3D_m54D499F2E698525501B51E1F103176B38C973729 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* p0, const RuntimeMethod* method) ;
// System.Void =a75=::=ccFC=(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da75U3D_U3DccFCU3D_mD582D12462A3C0502889D74EF188970460EF6C8C (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* p0, const RuntimeMethod* method) ;
// =a75= =a75=::=ccFc=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC U3Da75U3D_U3DccFcU3D_mFD8232FFE7F39A4943F5AC4583FCE72416D65B5E (const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<Microsoft.Geospatial.VectorMath.Vector3D>(System.Collections.Generic.IEnumerable`1<TSource>)
inline int32_t Enumerable_Count_TisVector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_mB71D182BB2840314D295AD11983E38A0B8B6AF29 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisVector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_mB71D182BB2840314D295AD11983E38A0B8B6AF29_gshared)(___source0, method);
}
// System.Void =a76=::=ccFF=(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Da76U3D_U3DccFFU3D_m659EA25006D2368DAA7CF110BF5A3ED4B91010D7_inline (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, double p0, const RuntimeMethod* method) ;
// System.Void System.Func`3<Microsoft.Geospatial.VectorMath.Vector3D,Microsoft.Geospatial.VectorMath.Vector3D,Microsoft.Geospatial.VectorMath.Vector3D>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_mCBB4723F9053B7A22A93D6665AFE35AF5EE4F9B0 (Func_3_t0AE5BDFA047CC54B66B19EA2CCBD69C0E9016591* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t0AE5BDFA047CC54B66B19EA2CCBD69C0E9016591*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_3__ctor_mCBB4723F9053B7A22A93D6665AFE35AF5EE4F9B0_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::Aggregate<Microsoft.Geospatial.VectorMath.Vector3D>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`3<TSource,TSource,TSource>)
inline Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE Enumerable_Aggregate_TisVector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_mA81400B4B8DD936A72F86732D2D46BD84EBA0072 (RuntimeObject* ___source0, Func_3_t0AE5BDFA047CC54B66B19EA2CCBD69C0E9016591* ___func1, const RuntimeMethod* method)
{
	return ((  Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE (*) (RuntimeObject*, Func_3_t0AE5BDFA047CC54B66B19EA2CCBD69C0E9016591*, const RuntimeMethod*))Enumerable_Aggregate_TisVector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_mA81400B4B8DD936A72F86732D2D46BD84EBA0072_gshared)(___source0, ___func1, method);
}
// System.Double =a76=::=ccFe=()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double U3Da76U3D_U3DccFeU3D_m7D44F9F8F9F3660D339F63195C713C03408B2F04_inline (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, const RuntimeMethod* method) ;
// Microsoft.Geospatial.VectorMath.Vector3D Microsoft.Geospatial.VectorMath.Vector3D::op_Division(Microsoft.Geospatial.VectorMath.Vector3D,System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE Vector3D_op_Division_mFAC794A77B924388D2ED32B989199D0A1D072046_inline (Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___left0, double ___right1, const RuntimeMethod* method) ;
// System.Void =a76=::=ccF0=(Microsoft.Geospatial.VectorMath.Vector3D)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Da76U3D_U3DccF0U3D_m2FF73BDAEA986314BCAD99B3C16473DC8B69203C_inline (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, const RuntimeMethod* method) ;
// Microsoft.Geospatial.VectorMath.Vector3D =a76=::=ccFf=()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE U3Da76U3D_U3DccFfU3D_m2C12A41DFFE6732A4D77900E186B2DCB6A2B49ED_inline (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, const RuntimeMethod* method) ;
// System.Void =a76=::=ccFE=(=a72=)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Da76U3D_U3DccFEU3D_m33BF480B0A9D1AB1382224ADCB12D1414EB41E68_inline (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* p0, const RuntimeMethod* method) ;
// =a72= =a76=::=ccFd=()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* U3Da76U3D_U3DccFdU3D_mC6B526990B7B2660755C43DA3A6ADF98EAA50DEC_inline (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, const RuntimeMethod* method) ;
// System.Void =a72=::=ccD0=(=a8F=&,=a72=&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da72U3D_U3DccD0U3D_m7D66356BCD1F826FDAD59C9699D440ABF7B0A307 (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3** p0, U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D** p1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Double,System.Int32>>::.ctor()
inline void List_1__ctor_m160E98976937AD2CD30F583A347C2A6597552579 (List_1_t3420105ACC85EC0363642A2775985EECE6EC41F6* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3420105ACC85EC0363642A2775985EECE6EC41F6*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Tuple`2<T1,T2> System.Tuple::Create<System.Double,System.Int32>(T1,T2)
inline Tuple_2_tECBABFFE5F6AEC7406FA67604949A78C26B1CEF3* Tuple_Create_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB6026A93D77AE492380D2CBD7F3732ECD42238BF (double ___item10, int32_t ___item21, const RuntimeMethod* method)
{
	return ((  Tuple_2_tECBABFFE5F6AEC7406FA67604949A78C26B1CEF3* (*) (double, int32_t, const RuntimeMethod*))Tuple_Create_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB6026A93D77AE492380D2CBD7F3732ECD42238BF_gshared)(___item10, ___item21, method);
}
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Double,System.Int32>>::Add(T)
inline void List_1_Add_m35D6F33B4568D843278648A10A211593657EEA7A_inline (List_1_t3420105ACC85EC0363642A2775985EECE6EC41F6* __this, Tuple_2_tECBABFFE5F6AEC7406FA67604949A78C26B1CEF3* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3420105ACC85EC0363642A2775985EECE6EC41F6*, Tuple_2_tECBABFFE5F6AEC7406FA67604949A78C26B1CEF3*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Comparison`1<System.Tuple`2<System.Double,System.Int32>>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_mB43FA7DCFB3E51D8F35643EAC0A48C3DDBA1A8D1 (Comparison_1_tA0EB47E8C300430159B995CCC975DB7316EAB8C4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_tA0EB47E8C300430159B995CCC975DB7316EAB8C4*, RuntimeObject*, intptr_t, const RuntimeMethod*))Comparison_1__ctor_mC1E8799BBCE317B612875123C9C894BD470BFE6A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Double,System.Int32>>::Sort(System.Comparison`1<T>)
inline void List_1_Sort_m4BDF92DE31F3874410A263563DD52B99D3847979 (List_1_t3420105ACC85EC0363642A2775985EECE6EC41F6* __this, Comparison_1_tA0EB47E8C300430159B995CCC975DB7316EAB8C4* ___comparison0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3420105ACC85EC0363642A2775985EECE6EC41F6*, Comparison_1_tA0EB47E8C300430159B995CCC975DB7316EAB8C4*, const RuntimeMethod*))List_1_Sort_mEB3B61CB86B1419919338B0668DC4E568C2FFF93_gshared)(__this, ___comparison0, method);
}
// T System.Collections.Generic.List`1<System.Tuple`2<System.Double,System.Int32>>::get_Item(System.Int32)
inline Tuple_2_tECBABFFE5F6AEC7406FA67604949A78C26B1CEF3* List_1_get_Item_m4237D2A684EDF68555C45ED14688C36F4C70ADD7 (List_1_t3420105ACC85EC0363642A2775985EECE6EC41F6* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Tuple_2_tECBABFFE5F6AEC7406FA67604949A78C26B1CEF3* (*) (List_1_t3420105ACC85EC0363642A2775985EECE6EC41F6*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T2 System.Tuple`2<System.Double,System.Int32>::get_Item2()
inline int32_t Tuple_2_get_Item2_mBA3C6612F072776B30C52648A160FD7F27ABBBED_inline (Tuple_2_tECBABFFE5F6AEC7406FA67604949A78C26B1CEF3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Tuple_2_tECBABFFE5F6AEC7406FA67604949A78C26B1CEF3*, const RuntimeMethod*))Tuple_2_get_Item2_mBA3C6612F072776B30C52648A160FD7F27ABBBED_gshared_inline)(__this, method);
}
// System.Void =a76=::=ccF2=(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Da76U3D_U3DccF2U3D_m4C783475EE4C4E62BA9A05FA1571B1BEBE587E31_inline (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, double p0, const RuntimeMethod* method) ;
// System.Void =a76=::=ccF4=(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Da76U3D_U3DccF4U3D_mE25853505CFA115851D2601D0C039AC0D56EF4E5_inline (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, double p0, const RuntimeMethod* method) ;
// System.Void =a76=::=ccF6=(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Da76U3D_U3DccF6U3D_m2F9E337AF4D427B7F9AC812738949A6F1B332209_inline (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, double p0, const RuntimeMethod* method) ;
// System.Void =a76=::=ccF8=(Microsoft.Geospatial.VectorMath.Vector3D)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Da76U3D_U3DccF8U3D_m303E46F8AC4532E774762C2D86C41FBFA739188C_inline (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, const RuntimeMethod* method) ;
// System.Void =a76=::=ccfA=(Microsoft.Geospatial.VectorMath.Vector3D)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Da76U3D_U3DccfAU3D_m8ECE84940939B1EA04F29793FF0663A386945680_inline (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, const RuntimeMethod* method) ;
// System.Void =a76=::=ccfB=(Microsoft.Geospatial.VectorMath.Vector3D)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Da76U3D_U3DccfBU3D_m89E93A27B1B545943A3B70DA64278FA5253F52D4_inline (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, const RuntimeMethod* method) ;
// System.Void =a76=/=ba13=::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Dba13U3D__ctor_m18F27C63ED45673DEEB455C9AC3241EF258D5522 (U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C* __this, const RuntimeMethod* method) ;
// Microsoft.Geospatial.VectorMath.Vector3D Microsoft.Geospatial.VectorMath.Vector3D::op_Addition(Microsoft.Geospatial.VectorMath.Vector3D,Microsoft.Geospatial.VectorMath.Vector3D)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE Vector3D_op_Addition_m979683491399744DD382B1D632407ED65878F710_inline (Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___left0, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___right1, const RuntimeMethod* method) ;
// T1 System.Tuple`2<System.Double,System.Int32>::get_Item1()
inline double Tuple_2_get_Item1_m8147AD192D772AFECA4A9F9DA04AE72072CFCD53_inline (Tuple_2_tECBABFFE5F6AEC7406FA67604949A78C26B1CEF3* __this, const RuntimeMethod* method)
{
	return ((  double (*) (Tuple_2_tECBABFFE5F6AEC7406FA67604949A78C26B1CEF3*, const RuntimeMethod*))Tuple_2_get_Item1_m8147AD192D772AFECA4A9F9DA04AE72072CFCD53_gshared_inline)(__this, method);
}
// System.Int32 System.Double::CompareTo(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Double_CompareTo_m40FD7CA33B178CCFA4B6755267DC67841092CCFC (double* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void =a77=::=ccfc=(=a8f=)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Da77U3D_U3DccfcU3D_m88CCD939B448EF9C77FD2DE3AA7DF3E7B638B5D3_inline (U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* __this, U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE p0, const RuntimeMethod* method) ;
// System.Void =a77=::=ccfd=(=a8f=)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Da77U3D_U3DccfdU3D_m6F21997A9BF09494850364BAFE11E51C597EA797_inline (U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* __this, U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE p0, const RuntimeMethod* method) ;
// System.Void =a77=::=ccfe=(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Da77U3D_U3DccfeU3D_mFAD9F685594EE62614C05E1BA7BACFE22662AFC2_inline (U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* __this, double p0, const RuntimeMethod* method) ;
// System.Void =a77=::.ctor(=a8f=,=a8f=,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da77U3D__ctor_m38F91B372DC39895693ACF5FB577930AEC2D3294 (U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* __this, U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE p0, U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE p1, double p2, const RuntimeMethod* method) ;
// System.Void =a77=::.ctor(System.Double,System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da77U3D__ctor_m9936B5CA399089320CB17DC475CC9E62E67276FC (U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* __this, double p0, double p1, double p2, double p3, double p4, const RuntimeMethod* method) ;
// System.Nullable`1<=a77=> =a7E=::=ccCA=(System.Collections.Generic.IList`1<=a8f=>,System.Single[],System.Single[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t09CD51E16A5F5DDB2281A6D153ACD580FAF1D657 U3Da7EU3D_U3DccCAU3D_m022943A170E95BB15D48CBA63D3B19EC2270FCE8 (RuntimeObject* p0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* p1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* p2, int32_t* p3, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<=a77=>::get_HasValue()
inline bool Nullable_1_get_HasValue_m72C35810CC34AE063C37D418BAE8B097E15C17D9_inline (Nullable_1_t09CD51E16A5F5DDB2281A6D153ACD580FAF1D657* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t09CD51E16A5F5DDB2281A6D153ACD580FAF1D657*, const RuntimeMethod*))Nullable_1_get_HasValue_m72C35810CC34AE063C37D418BAE8B097E15C17D9_gshared_inline)(__this, method);
}
// T System.Nullable`1<=a77=>::get_Value()
inline U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E Nullable_1_get_Value_m209AA059F79DC3ACA5DA5B4198DD76D0F4E76910 (Nullable_1_t09CD51E16A5F5DDB2281A6D153ACD580FAF1D657* __this, const RuntimeMethod* method)
{
	return ((  U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E (*) (Nullable_1_t09CD51E16A5F5DDB2281A6D153ACD580FAF1D657*, const RuntimeMethod*))Nullable_1_get_Value_m209AA059F79DC3ACA5DA5B4198DD76D0F4E76910_gshared)(__this, method);
}
// =a8f= =a77=::=ccfC=()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE U3Da77U3D_U3DccfCU3D_m9D42C6003AA6C3B641FFEA5BB66BDB620CDA4D72_inline (U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* __this, const RuntimeMethod* method) ;
// =a8f= =a77=::=ccfD=()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE U3Da77U3D_U3DccfDU3D_mDCE67E3AEB40998AC51980A4543AC92678D8DB9E_inline (U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* __this, const RuntimeMethod* method) ;
// System.Double =a77=::=ccfE=()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double U3Da77U3D_U3DccfEU3D_m7B0F078B2A5C9827B525D33688D21E4CAFF228A8_inline (U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* __this, const RuntimeMethod* method) ;
// System.Void =a77=::=ccfF=(=a8f=&,=a8f=&,=a8f=&,=a8f=&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da77U3D_U3DccfFU3D_mD3AA2D48B612F7F5834494CB569C59DA65B0A3E2 (U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* __this, U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE* p0, U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE* p1, U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE* p2, U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE* p3, const RuntimeMethod* method) ;
// System.String =a77=::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3Da77U3D_ToString_mF1DF80DC2CDD0E49B29F89CA50C8EA59C0B3DA24 (U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* __this, const RuntimeMethod* method) ;
// System.Boolean =a8f=::op_Equality(=a8f=,=a8f=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da8fU3D_op_Equality_m122E810D581ECC0AA69BFB8B59D8A31000DCE031 (U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE p0, U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE p1, const RuntimeMethod* method) ;
// System.Boolean =a77=::Equals(=a77=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da77U3D_Equals_mD78CBFC02F6C0083EFEF1E803F045C5F064BDC0D (U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* __this, U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E ___other0, const RuntimeMethod* method) ;
// System.Boolean =a77=::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da77U3D_Equals_m9B1A5BBB96274E083E3E576C954D101FA43E5DD5 (U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 =a8f=::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3Da8fU3D_GetHashCode_m5910A5B2169A7519CF2928C645D7A6589BEF9B69 (U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE* __this, const RuntimeMethod* method) ;
// System.Int32 =a77=::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3Da77U3D_GetHashCode_m7135C39AE5D05243333E4484D06750AD0B8DD1EE (U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* __this, const RuntimeMethod* method) ;
// System.Boolean =a77=::op_Equality(=a77=,=a77=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da77U3D_op_Equality_mA4A305D81FEAC1C54CC370F7E1EADB41FB90027F (U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E p0, U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E p1, const RuntimeMethod* method) ;
// System.Double Microsoft.Geospatial.VectorMath.Vector3D::LengthSq()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Vector3D_LengthSq_m216411FB00036916CB90867E008F49D4EF0E80B1 (Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* __this, const RuntimeMethod* method) ;
// System.Double Microsoft.Geospatial.VectorMath.Vector3D::Dot(Microsoft.Geospatial.VectorMath.Vector3D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Vector3D_Dot_mA28769CA15B693CBA9AEE261263896A3F256398A (Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___right0, const RuntimeMethod* method) ;
// System.Void =a78=::.ctor(Microsoft.Geospatial.VectorMath.Vector3D,Microsoft.Geospatial.VectorMath.Vector3D,Microsoft.Geospatial.VectorMath.Vector3D,Microsoft.Geospatial.VectorMath.Vector3D,Microsoft.Geospatial.VectorMath.Vector3D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da78U3D__ctor_m1A07F4B30475154A92384F665C022CDD5ABF24A0 (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p1, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p2, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p3, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p4, const RuntimeMethod* method) ;
// Microsoft.Geospatial.VectorMath.Vector3D =a78=::=ccff=()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE U3Da78U3D_U3DccffU3D_mF94F355CC6844DD261BD59F3340732815C051376_inline (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, const RuntimeMethod* method) ;
// Microsoft.Geospatial.VectorMath.Vector3D =a78=::=ccf1=()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE U3Da78U3D_U3Dccf1U3D_m3125D9F93CE3404F043C2058AD16A3E6A41A2B02_inline (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, const RuntimeMethod* method) ;
// Microsoft.Geospatial.VectorMath.Vector3D =a78=::=ccf0=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE U3Da78U3D_U3Dccf0U3D_m72810293E80CA9D68858FC7C0257BBF8265BFDF1 (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, const RuntimeMethod* method) ;
// Microsoft.Geospatial.VectorMath.Vector3D =a78=::=ccf2=()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE U3Da78U3D_U3Dccf2U3D_m3948C8FB4A28044E98CB085AB1AFEA9F4FC2E4B1_inline (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, const RuntimeMethod* method) ;
// Microsoft.Geospatial.VectorMath.Vector3D =a78=::=ccf3=()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE U3Da78U3D_U3Dccf3U3D_m5BF078FAE49C24AE65C3B4E384C437E7982D6874_inline (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, const RuntimeMethod* method) ;
// Microsoft.Geospatial.VectorMath.Vector3D =a78=::=ccf4=()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE U3Da78U3D_U3Dccf4U3D_m9B9B9AAC3F936C5800637568FA6EB64EDD347D34_inline (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, const RuntimeMethod* method) ;
// Microsoft.Geospatial.VectorMath.Vector3D Microsoft.Geospatial.VectorMath.Vector3D::op_Subtraction(Microsoft.Geospatial.VectorMath.Vector3D,Microsoft.Geospatial.VectorMath.Vector3D)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE Vector3D_op_Subtraction_m31FAB3812ACF593B7AAD79A718523F0A6A867B77_inline (Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___left0, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___right1, const RuntimeMethod* method) ;
// System.Double Microsoft.Geospatial.VectorMath.Vector3D::Dot(Microsoft.Geospatial.VectorMath.Vector3D,Microsoft.Geospatial.VectorMath.Vector3D)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Vector3D_Dot_m519C38861792FEDA6CF1220E4D1D1488C455ECEB_inline (Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___left0, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___right1, const RuntimeMethod* method) ;
// System.Boolean =a78=::=ccf5=(Microsoft.Geospatial.VectorMath.Vector3D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da78U3D_U3Dccf5U3D_mC7BF254FEB881799F53BD9DD197CC77ADE540AC2 (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, const RuntimeMethod* method) ;
// System.Double =a78=::=ccf6=(Microsoft.Geospatial.VectorMath.Vector3D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3Da78U3D_U3Dccf6U3D_m0916A49E072AFE9EB3BE0EADA0CE394043D980A9 (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, const RuntimeMethod* method) ;
// System.Double =a78=::=ccf7=(Microsoft.Geospatial.VectorMath.Vector3D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3Da78U3D_U3Dccf7U3D_mC3AD800A7872F749B9DBFF5DC1395C86F9F66236 (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, const RuntimeMethod* method) ;
// System.Int32 System.Math::Sign(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Sign_mA4D918D42B753CFEF3AC049AEF14C7FDE07FFD7E (double ___value0, const RuntimeMethod* method) ;
// System.Double System.Math::Min(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Min_m6F49B85AE4935E4AF3AB6128B3B5E55A6C4A1716 (double ___val10, double ___val21, const RuntimeMethod* method) ;
// Microsoft.Geospatial.VectorMath.Vector3D Microsoft.Geospatial.VectorMath.Vector3D::op_Multiply(Microsoft.Geospatial.VectorMath.Vector3D,System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE Vector3D_op_Multiply_m8F7375087CE226F2693DE34AE6F16EC20FE4EFCE_inline (Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___left0, double ___right1, const RuntimeMethod* method) ;
// System.Double =a78=::=ccf8=(Microsoft.Geospatial.VectorMath.Vector3D,Microsoft.Geospatial.VectorMath.Vector3D&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3Da78U3D_U3Dccf8U3D_mE44939D3B0DC9FF2FD06165680F78C4287631C25 (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* p1, const RuntimeMethod* method) ;
// System.Double =a78=::=ccf9=(Microsoft.Geospatial.VectorMath.Vector3D,Microsoft.Geospatial.VectorMath.Vector3D&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3Da78U3D_U3Dccf9U3D_mAE94BEFCF0E36A33817898BE416FA6DF148B6421 (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* p1, const RuntimeMethod* method) ;
// System.Boolean =a78=::=cc0B=(Microsoft.Geospatial.VectorMath.Ray3D,System.Double,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da78U3D_U3Dcc0BU3D_m1F26AC548F9FBDC92B608A700F7B97ADD24CBD71 (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, Ray3D_t0684CF26FA625F1962485FFFA4B822789BB532D0 p0, double p1, double* p2, const RuntimeMethod* method) ;
// System.Boolean =a78=::=cc0A=(Microsoft.Geospatial.VectorMath.Ray3D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da78U3D_U3Dcc0AU3D_m9CAE090A04AD518BB5320820D095190B4295D37A (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, Ray3D_t0684CF26FA625F1962485FFFA4B822789BB532D0 p0, const RuntimeMethod* method) ;
// System.Boolean =a78=::=cc0a=(Microsoft.Geospatial.VectorMath.Ray3D,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da78U3D_U3Dcc0aU3D_m124AD58783E32002CF87F0B5146D78E3EAC72CE8 (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, Ray3D_t0684CF26FA625F1962485FFFA4B822789BB532D0 p0, double* p1, const RuntimeMethod* method) ;
// Microsoft.Geospatial.VectorMath.Vector3D Microsoft.Geospatial.VectorMath.Vector3D::op_Addition(Microsoft.Geospatial.VectorMath.Vector3D,System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE Vector3D_op_Addition_mC6EB2C1437A6C5487604125706FA82628EE89E07_inline (Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___left0, double ___right1, const RuntimeMethod* method) ;
// System.Double Microsoft.Geospatial.VectorMath.Vector3D::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Vector3D_get_Item_mEC2503D6BD5EAEDC27EDB1EDBCDBFDAFC7DDE665 (Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* __this, int32_t ___componentIndex0, const RuntimeMethod* method) ;
// System.Void Microsoft.Geospatial.VectorMath.Vector3D::set_Item(System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3D_set_Item_m7F1C15D41CF9E6BDF31DBDDD0068308E63F1C711 (Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* __this, int32_t ___componentIndex0, double ___value1, const RuntimeMethod* method) ;
// System.String =a78=::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3Da78U3D_ToString_m213AE8F62B0BCE2488DEC5A4D3E7840E4B4D5F73 (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.Geospatial.VectorMath.Vector3D::op_Equality(Microsoft.Geospatial.VectorMath.Vector3D,Microsoft.Geospatial.VectorMath.Vector3D)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3D_op_Equality_m46109FC0F31174D38098EC0D6BEB613A7A7828E6_inline (Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___left0, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___right1, const RuntimeMethod* method) ;
// System.Boolean =a78=::Equals(=a78=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da78U3D_Equals_m9ACC20703E916DC05A493ABD0CF7DA2FE44A163D (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7 ___other0, const RuntimeMethod* method) ;
// System.Boolean =a78=::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da78U3D_Equals_m4BACA3409978E730634566DBAF8E68A4C4FCD4DD (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 Microsoft.Geospatial.VectorMath.Vector3D::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3D_GetHashCode_mE893D6FADFCA4514DDD9C05E9725A5DCE7B9344C (Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* __this, const RuntimeMethod* method) ;
// System.Int32 =a78=::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3Da78U3D_GetHashCode_m2E466008B95EA78C70FE939EB33F3FB9686E886F (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, const RuntimeMethod* method) ;
// System.Boolean =a78=::op_Equality(=a78=,=a78=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da78U3D_op_Equality_mCA2106953CAEF26DA245331412AFB176759D54D7 (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7 p0, U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7 p1, const RuntimeMethod* method) ;
// System.Int64 System.BitConverter::DoubleToInt64Bits(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline (double ___value0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void =a71=/=ba12=::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Dba12U3D__ctor_m6403E70526B22B17640E692E47B33A06FD9277FB (U3Dba12U3D_tA1A447F139DAF11B1EE9A6F0DEC213F1326F21F3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Microsoft.Geospatial.VectorMath.Vector3D =a71=/=ba12=::=cec4=(=a71=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE U3Dba12U3D_U3Dcec4U3D_m5B15022B680FDE1087BD32AF0FE5ACB7AF8872D8 (U3Dba12U3D_tA1A447F139DAF11B1EE9A6F0DEC213F1326F21F3* __this, U3Da71U3D_tDD1F0880680B4507C03D6793FE608A486356B390 p0, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = __this->___U3Ddc22U3D_0;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_1;
		L_1 = U3Da71U3D_U3DccC8U3D_mB154EBF8989B99A6527DA4A7ABF3BF35044BC86D((&p0), L_0, NULL);
		return L_1;
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
// System.Int32 =a72=::=cccD=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3DdE4bU3D_0;
		return L_0;
	}
}
// System.Void =a72=::=cccd=(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da72U3D_U3DcccdU3D_m07ADE7D20F3502511CEE782FB55F604720E184B3 (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, int32_t p0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = p0;
		__this->___U3DdE4bU3D_0 = L_0;
		return;
	}
}
// System.Int32 =a72=::=cccE=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3DdE4CU3D_1;
		return L_0;
	}
}
// System.Void =a72=::=ccce=(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da72U3D_U3DccceU3D_mE9A72A4E77E1119BF727DFB1AAD62EC005971C6D (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, int32_t p0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = p0;
		__this->___U3DdE4CU3D_1 = L_0;
		return;
	}
}
// System.Double[] =a72=::=cccF=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7 (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, const RuntimeMethod* method) 
{
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = __this->___U3DdE4cU3D_2;
		return L_0;
	}
}
// System.Void =a72=::=cccf=(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da72U3D_U3DcccfU3D_m6C8385E491BEDDD10A6DE674A8DD11C54F12E617 (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* p0, const RuntimeMethod* method) 
{
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = p0;
		__this->___U3DdE4cU3D_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3DdE4cU3D_2), (void*)L_0);
		return;
	}
}
// =a72= =a72=::=ccc0=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* U3Da72U3D_U3Dccc0U3D_m7EF74124EC6F73A5E28358B3D55A85B47CF02FB0 (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* V_0 = NULL;
	{
		int32_t L_0;
		L_0 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(__this, NULL);
		int32_t L_1;
		L_1 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(__this, NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_2 = (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D*)il2cpp_codegen_object_new(U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		U3Da72U3D__ctor_m4A6DFDF5FDB11319F42795A034A92F123D4BA67C(L_2, L_0, L_1, NULL);
		V_0 = L_2;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_3 = V_0;
		U3Da72U3D_U3Dccc1U3D_mC0A73E455B6CC5002EA1EB9E487DA2ECA3F7A33D(__this, L_3, NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_4 = V_0;
		return L_4;
	}
}
// System.Void =a72=::=ccc1=(=a72=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da72U3D_U3Dccc1U3D_mC0A73E455B6CC5002EA1EB9E487DA2ECA3F7A33D (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* p0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral320772EF40302B49A179DB96BAD02224E97B4018)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da72U3D_U3Dccc1U3D_mC0A73E455B6CC5002EA1EB9E487DA2ECA3F7A33D_RuntimeMethod_var)));
	}

IL_000e:
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_2 = p0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(L_2, NULL);
		int32_t L_4;
		L_4 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(__this, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_002a;
		}
	}
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_5 = p0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(L_5, NULL);
		int32_t L_7;
		L_7 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(__this, NULL);
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_0035;
		}
	}

IL_002a:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDAE05ED355C78F7DFBA7AFF1A06DE50C04EBF8B2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da72U3D_U3Dccc1U3D_mC0A73E455B6CC5002EA1EB9E487DA2ECA3F7A33D_RuntimeMethod_var)));
	}

IL_0035:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0064;
	}

IL_003b:
	{
		V_2 = 0;
		goto IL_0057;
	}

IL_003f:
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_9 = p0;
		int32_t L_10 = V_2;
		int32_t L_11 = V_1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_12;
		L_12 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(__this, NULL);
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		double L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_9);
		U3Da72U3D_U3Dccc7U3D_m7A0E032BC9A5A87614BD1D760ADB984901308AFC(L_9, L_10, L_11, L_15, NULL);
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0057:
	{
		int32_t L_18 = V_2;
		int32_t L_19;
		L_19 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(__this, NULL);
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0064:
	{
		int32_t L_21 = V_1;
		int32_t L_22;
		L_22 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(__this, NULL);
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_003b;
		}
	}
	{
		return;
	}
}
// System.Void =a72=::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da72U3D__ctor_m4A6DFDF5FDB11319F42795A034A92F123D4BA67C (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, int32_t p0, int32_t p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = p0;
		U3Da72U3D_U3DcccdU3D_m07ADE7D20F3502511CEE782FB55F604720E184B3_inline(__this, L_0, NULL);
		int32_t L_1 = p1;
		U3Da72U3D_U3DccceU3D_mE9A72A4E77E1119BF727DFB1AAD62EC005971C6D_inline(__this, L_1, NULL);
		int32_t L_2 = p0;
		int32_t L_3 = p1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_4 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_2, L_3)));
		U3Da72U3D_U3DcccfU3D_m6C8385E491BEDDD10A6DE674A8DD11C54F12E617_inline(__this, L_4, NULL);
		return;
	}
}
// System.Void =a72=::.ctor(System.Int32,System.Int32,System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da72U3D__ctor_m378872DEED2187C9D0177E3DBAB56E36E1A9E413 (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, int32_t p0, int32_t p1, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___data2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = p0;
		U3Da72U3D_U3DcccdU3D_m07ADE7D20F3502511CEE782FB55F604720E184B3_inline(__this, L_0, NULL);
		int32_t L_1 = p1;
		U3Da72U3D_U3DccceU3D_mE9A72A4E77E1119BF727DFB1AAD62EC005971C6D_inline(__this, L_1, NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2 = ___data2;
		NullCheck((RuntimeArray*)L_2);
		RuntimeObject* L_3;
		L_3 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_2, NULL);
		U3Da72U3D_U3DcccfU3D_m6C8385E491BEDDD10A6DE674A8DD11C54F12E617_inline(__this, ((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)Castclass((RuntimeObject*)L_3, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var)), NULL);
		return;
	}
}
// System.Object =a72=::=ccc2=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Da72U3D_U3Dccc2U3D_mB0BB6856485E75462C1D0C5B3F85363CBE3BF0F5 (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(__this, NULL);
		int32_t L_1;
		L_1 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(__this, NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2;
		L_2 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(__this, NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_3 = (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D*)il2cpp_codegen_object_new(U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3Da72U3D__ctor_m378872DEED2187C9D0177E3DBAB56E36E1A9E413(L_3, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// =a8F= =a72=::=ccc3=(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* U3Da72U3D_U3Dccc3U3D_mFF315C2B0DC2DED2F44806661707ABB9188D40AF (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, int32_t p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0;
		L_0 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(__this, NULL);
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_1 = (U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3*)il2cpp_codegen_object_new(U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		U3Da8FU3D__ctor_mCC053C57FA6C93DE3036B6C25A9F85DB7829F9B5(L_1, L_0, NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0023;
	}

IL_0010:
	{
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = V_1;
		int32_t L_5 = p0;
		double L_6;
		L_6 = U3Da72U3D_U3Dccc6U3D_m323850489F4D3AAD389FB35659D15F9276AD0495(__this, L_4, L_5, NULL);
		NullCheck(L_2);
		U3Da8FU3D_U3Dcc6dU3D_m0B569B31D41E95FF927623963ABCE273B7384714(L_2, L_3, L_6, NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0023:
	{
		int32_t L_8 = V_1;
		int32_t L_9;
		L_9 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(__this, NULL);
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0010;
		}
	}
	{
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_10 = V_0;
		return L_10;
	}
}
// =a8F= =a72=::=ccc4=(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* U3Da72U3D_U3Dccc4U3D_m867712B8DDEC17EA5B4D6E0FC438E19BF54C6DBD (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, int32_t p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0;
		L_0 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(__this, NULL);
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_1 = (U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3*)il2cpp_codegen_object_new(U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		U3Da8FU3D__ctor_mCC053C57FA6C93DE3036B6C25A9F85DB7829F9B5(L_1, L_0, NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0023;
	}

IL_0010:
	{
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = p0;
		int32_t L_5 = V_1;
		double L_6;
		L_6 = U3Da72U3D_U3Dccc6U3D_m323850489F4D3AAD389FB35659D15F9276AD0495(__this, L_4, L_5, NULL);
		NullCheck(L_2);
		U3Da8FU3D_U3Dcc6dU3D_m0B569B31D41E95FF927623963ABCE273B7384714(L_2, L_3, L_6, NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0023:
	{
		int32_t L_8 = V_1;
		int32_t L_9;
		L_9 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(__this, NULL);
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0010;
		}
	}
	{
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_10 = V_0;
		return L_10;
	}
}
// =a72= =a72=::=ccc5=(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* U3Da72U3D_U3Dccc5U3D_m7D4A120E50EA3A1B28517D9EF5A6F28FEBA6A4EE (int32_t p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = p0;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_2 = (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D*)il2cpp_codegen_object_new(U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		U3Da72U3D__ctor_m4A6DFDF5FDB11319F42795A034A92F123D4BA67C(L_2, L_0, L_1, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0025;
	}

IL_000c:
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_3 = V_0;
		NullCheck(L_3);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_4;
		L_4 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(L_3, NULL);
		int32_t L_5 = V_1;
		int32_t L_6 = p0;
		int32_t L_7 = V_1;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), L_7))), (double)(1.0));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0025:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = p0;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_000c;
		}
	}
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_11 = V_0;
		return L_11;
	}
}
// System.Double =a72=::=ccc6=(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3Da72U3D_U3Dccc6U3D_m323850489F4D3AAD389FB35659D15F9276AD0495 (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, int32_t p0, int32_t p1, const RuntimeMethod* method) 
{
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0;
		L_0 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(__this, NULL);
		int32_t L_1 = p0;
		int32_t L_2;
		L_2 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(__this, NULL);
		int32_t L_3 = p1;
		NullCheck(L_0);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, L_2)), L_3));
		double L_5 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
// System.Void =a72=::=ccc7=(System.Int32,System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da72U3D_U3Dccc7U3D_m7A0E032BC9A5A87614BD1D760ADB984901308AFC (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, int32_t p0, int32_t p1, double p2, const RuntimeMethod* method) 
{
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0;
		L_0 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(__this, NULL);
		int32_t L_1 = p0;
		int32_t L_2;
		L_2 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(__this, NULL);
		int32_t L_3 = p1;
		double L_4 = p2;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, L_2)), L_3))), (double)L_4);
		return;
	}
}
// =a8F= =a72=::op_Multiply(=a72=,=a8F=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* U3Da72U3D_op_Multiply_mF877262D434B6D7B2E98E9345D6499BC8B5747E7 (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* p0, U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	double V_3 = 0.0;
	int32_t V_4 = 0;
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da72U3D_op_Multiply_mF877262D434B6D7B2E98E9345D6499BC8B5747E7_RuntimeMethod_var)));
	}

IL_000e:
	{
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_2 = p1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9DFFC3267C5F999585E61B45BA9C8DF18D4B02CA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da72U3D_op_Multiply_mF877262D434B6D7B2E98E9345D6499BC8B5747E7_RuntimeMethod_var)));
	}

IL_001c:
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_4 = p0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(L_4, NULL);
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_6 = p1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = U3Da8FU3D_U3Dcc6FU3D_m1684DC7C36C51B01B5C703AAFCDFFDD40D4E8B4F_inline(L_6, NULL);
		if ((((int32_t)L_5) == ((int32_t)L_7)))
		{
			goto IL_005b;
		}
	}
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_8 = p0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(L_8, NULL);
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_10);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_12 = p0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(L_12, NULL);
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_16 = p1;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = U3Da8FU3D_U3Dcc6FU3D_m1684DC7C36C51B01B5C703AAFCDFFDD40D4E8B4F_inline(L_16, NULL);
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_18);
		String_t* L_20;
		L_20 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1393A66A08C7A6D10DB2E8047EBD3D6987AF7A4F)), L_11, L_15, L_19, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_21 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_21);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_21, L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da72U3D_op_Multiply_mF877262D434B6D7B2E98E9345D6499BC8B5747E7_RuntimeMethod_var)));
	}

IL_005b:
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_22 = p0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(L_22, NULL);
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_24 = (U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3*)il2cpp_codegen_object_new(U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		U3Da8FU3D__ctor_mCC053C57FA6C93DE3036B6C25A9F85DB7829F9B5(L_24, L_23, NULL);
		V_0 = L_24;
		V_1 = 0;
		V_2 = 0;
		goto IL_00b0;
	}

IL_006d:
	{
		V_3 = (0.0);
		V_4 = 0;
		goto IL_009a;
	}

IL_007c:
	{
		double L_25 = V_3;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_26 = p0;
		NullCheck(L_26);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_27;
		L_27 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(L_26, NULL);
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		double L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_31 = p1;
		int32_t L_32 = V_4;
		NullCheck(L_31);
		double L_33;
		L_33 = U3Da8FU3D_U3Dcc6DU3D_mFC2E109CCA616464F32983ED84E77ADA0078ABF6(L_31, L_32, NULL);
		V_3 = ((double)il2cpp_codegen_add(L_25, ((double)il2cpp_codegen_multiply(L_30, L_33))));
		int32_t L_34 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		int32_t L_35 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_009a:
	{
		int32_t L_36 = V_4;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_37 = p0;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(L_37, NULL);
		if ((((int32_t)L_36) < ((int32_t)L_38)))
		{
			goto IL_007c;
		}
	}
	{
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_39 = V_0;
		int32_t L_40 = V_2;
		double L_41 = V_3;
		NullCheck(L_39);
		U3Da8FU3D_U3Dcc6dU3D_m0B569B31D41E95FF927623963ABCE273B7384714(L_39, L_40, L_41, NULL);
		int32_t L_42 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00b0:
	{
		int32_t L_43 = V_2;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_44 = p0;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(L_44, NULL);
		if ((((int32_t)L_43) < ((int32_t)L_45)))
		{
			goto IL_006d;
		}
	}
	{
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_46 = V_0;
		return L_46;
	}
}
// System.Void =a72=::=ccc8=(=a72=,System.Int32,System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da72U3D_U3Dccc8U3D_mF748D4EDDB12212EB6EE1982204ADE7D2EEADBA0 (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* p0, int32_t p1, int32_t p2, double p3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_2 = NULL;
	int32_t V_3 = 0;
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89ADD2DB1FBF30630EEA02FAAF144060CA0E908)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da72U3D_U3Dccc8U3D_mF748D4EDDB12212EB6EE1982204ADE7D2EEADBA0_RuntimeMethod_var)));
	}

IL_000e:
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_2 = p0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(L_2, NULL);
		int32_t L_4 = p1;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_3, L_4));
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_5 = p0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(L_5, NULL);
		int32_t L_7 = p2;
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_6, L_7));
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_8 = p0;
		NullCheck(L_8);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_9;
		L_9 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(L_8, NULL);
		V_2 = L_9;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_10 = p0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(L_10, NULL);
		V_3 = L_11;
		goto IL_0048;
	}

IL_0030:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_12 = V_2;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		double* L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)));
		double L_15 = *((double*)L_14);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_16 = V_2;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		double L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		double L_20 = p3;
		*((double*)L_14) = (double)((double)il2cpp_codegen_add(L_15, ((double)il2cpp_codegen_multiply(L_19, L_20))));
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0048:
	{
		int32_t L_23 = V_3;
		int32_t L_24 = L_23;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_24, 1));
		if ((((int32_t)L_24) > ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		return;
	}
}
// System.Void =a72=::=ccc9=(=a72=,System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da72U3D_U3Dccc9U3D_m245E0C941BC9347A9B882B7021142AF290F7F217 (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* p0, int32_t p1, double p2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_1 = NULL;
	int32_t V_2 = 0;
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89ADD2DB1FBF30630EEA02FAAF144060CA0E908)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da72U3D_U3Dccc9U3D_m245E0C941BC9347A9B882B7021142AF290F7F217_RuntimeMethod_var)));
	}

IL_000e:
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_2 = p0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(L_2, NULL);
		int32_t L_4 = p1;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_3, L_4));
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_5 = p0;
		NullCheck(L_5);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_6;
		L_6 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(L_5, NULL);
		V_1 = L_6;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_7 = p0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(L_7, NULL);
		V_2 = L_8;
		goto IL_0037;
	}

IL_0027:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		double* L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)));
		double L_12 = *((double*)L_11);
		double L_13 = p2;
		*((double*)L_11) = (double)((double)il2cpp_codegen_multiply(L_12, L_13));
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0037:
	{
		int32_t L_15 = V_2;
		int32_t L_16 = L_15;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		if ((((int32_t)L_16) > ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		return;
	}
}
// System.Void =a72=::=ccDA=(=a72=,=a72=,System.Int32[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da72U3D_U3DccDAU3D_mE851B39B27E5F97D6F48384A5A74B8C22B3C51FD (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* p0, U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* p1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* p2, int32_t p3, int32_t p4, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_2 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	double V_6 = 0.0;
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_0 = p0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(L_0, NULL);
		int32_t L_2 = p3;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_1, L_2));
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_3 = p0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(L_3, NULL);
		int32_t L_5 = p4;
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_4, L_5));
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_6 = p0;
		NullCheck(L_6);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_7;
		L_7 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(L_6, NULL);
		V_2 = L_7;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_8 = p1;
		NullCheck(L_8);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_9;
		L_9 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(L_8, NULL);
		V_3 = L_9;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_10 = p0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(L_10, NULL);
		V_4 = L_11;
		goto IL_0053;
	}

IL_002b:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_12 = V_2;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		double L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_6 = L_15;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_16 = V_2;
		int32_t L_17 = V_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_18 = V_2;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		double L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (double)L_21);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_22 = V_2;
		int32_t L_23 = V_1;
		double L_24 = V_6;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (double)L_24);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_25 = V_3;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		double L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_6 = L_28;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_29 = V_3;
		int32_t L_30 = V_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_31 = V_3;
		int32_t L_32 = V_1;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		double L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (double)L_34);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_35 = V_3;
		int32_t L_36 = V_1;
		double L_37 = V_6;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (double)L_37);
		int32_t L_38 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		int32_t L_39 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_0053:
	{
		int32_t L_40 = V_4;
		int32_t L_41 = L_40;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_41, 1));
		if ((((int32_t)L_41) > ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = p2;
		int32_t L_43 = p3;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		int32_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		V_5 = L_45;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = p2;
		int32_t L_47 = p3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = p2;
		int32_t L_49 = p4;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		int32_t L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_47), (int32_t)L_51);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = p2;
		int32_t L_53 = p4;
		int32_t L_54 = V_5;
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (int32_t)L_54);
		return;
	}
}
// =a72= =a72=::=ccDa=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* U3Da72U3D_U3DccDaU3D_mF714BE7585FAB49B0EA71E615F51E7983BACC216 (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(__this, NULL);
		int32_t L_1;
		L_1 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(__this, NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2;
		L_2 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(__this, NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_3 = (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D*)il2cpp_codegen_object_new(U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3Da72U3D__ctor_m378872DEED2187C9D0177E3DBAB56E36E1A9E413(L_3, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Void =a72=::=ccDB=(=a72=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da72U3D_U3DccDBU3D_m524C1F893C57CD2B96BA0963E4DE87369559D8EC (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* p0, const RuntimeMethod* method) 
{
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89ADD2DB1FBF30630EEA02FAAF144060CA0E908)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da72U3D_U3DccDBU3D_m524C1F893C57CD2B96BA0963E4DE87369559D8EC_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2;
		L_2 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(__this, NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_3 = p0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(L_3, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_5;
		L_5 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(__this, NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_6 = p0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(L_6, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_003c;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_8;
		L_8 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(__this, NULL);
		NullCheck(L_8);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_9 = p0;
		NullCheck(L_9);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_10;
		L_10 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(L_9, NULL);
		NullCheck(L_10);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0047;
		}
	}

IL_003c:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFB803FB240663A73DE1DCB833C322A2795E66F49)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da72U3D_U3DccDBU3D_m524C1F893C57CD2B96BA0963E4DE87369559D8EC_RuntimeMethod_var)));
	}

IL_0047:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_12;
		L_12 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(__this, NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_13 = p0;
		NullCheck(L_13);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_14;
		L_14 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(L_13, NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_15;
		L_15 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(__this, NULL);
		NullCheck(L_15);
		Array_Copy_m4239F97ECC23A71F4191B8722362A1AA38E2E98F((RuntimeArray*)L_12, (RuntimeArray*)L_14, ((int32_t)(((RuntimeArray*)L_15)->max_length)), NULL);
		return;
	}
}
// =a72= =a72=::=ccDb=(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* U3Da72U3D_U3DccDbU3D_m89A1D44397F8B10BCD4E056CF0803B89BC8BBE47 (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, bool p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* V_1 = NULL;
	U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	double V_7 = 0.0;
	int32_t V_8 = 0;
	double V_9 = 0.0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	double V_12 = 0.0;
	int32_t V_13 = 0;
	double V_14 = 0.0;
	int32_t V_15 = 0;
	double V_16 = 0.0;
	{
		int32_t L_0;
		L_0 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(__this, NULL);
		int32_t L_1;
		L_1 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(__this, NULL);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0019;
		}
	}
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_2 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8781B4C5341A4655BA409EE2225D54277FC75ADD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da72U3D_U3DccDbU3D_m89A1D44397F8B10BCD4E056CF0803B89BC8BBE47_RuntimeMethod_var)));
	}

IL_0019:
	{
		int32_t L_3;
		L_3 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(__this, NULL);
		V_0 = L_3;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_4;
		L_4 = U3Da72U3D_U3DccDaU3D_mF714BE7585FAB49B0EA71E615F51E7983BACC216(__this, NULL);
		V_1 = L_4;
		int32_t L_5 = V_0;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_6;
		L_6 = U3Da72U3D_U3Dccc5U3D_m7D4A120E50EA3A1B28517D9EF5A6F28FEBA6A4EE(L_5, NULL);
		V_2 = L_6;
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_3 = L_8;
		V_4 = 0;
		goto IL_0046;
	}

IL_003a:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_3;
		int32_t L_10 = V_4;
		int32_t L_11 = V_4;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (int32_t)L_11);
		int32_t L_12 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0046:
	{
		int32_t L_13 = V_4;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_003a;
		}
	}
	{
		V_5 = 0;
		goto IL_00ed;
	}

IL_0053:
	{
		int32_t L_15 = V_5;
		V_6 = L_15;
		V_7 = (0.0);
		goto IL_006a;
	}

IL_0064:
	{
		int32_t L_16 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_006a:
	{
		int32_t L_17 = V_6;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) >= ((int32_t)L_18)))
		{
			goto IL_008b;
		}
	}
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_19 = V_1;
		NullCheck(L_19);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_20;
		L_20 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(L_19, NULL);
		int32_t L_21 = V_5;
		int32_t L_22 = V_6;
		int32_t L_23 = V_0;
		NullCheck(L_20);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add(L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23))));
		double L_25 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		double L_26 = L_25;
		V_7 = L_26;
		if ((((double)L_26) == ((double)(0.0))))
		{
			goto IL_0064;
		}
	}

IL_008b:
	{
		double L_27 = V_7;
		if ((!(((double)L_27) == ((double)(0.0)))))
		{
			goto IL_009a;
		}
	}
	{
		return (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D*)NULL;
	}

IL_009a:
	{
		int32_t L_28 = V_5;
		int32_t L_29 = V_6;
		if ((((int32_t)L_28) == ((int32_t)L_29)))
		{
			goto IL_00ac;
		}
	}
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_30 = V_1;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_31 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_3;
		int32_t L_33 = V_5;
		int32_t L_34 = V_6;
		U3Da72U3D_U3DccDAU3D_mE851B39B27E5F97D6F48384A5A74B8C22B3C51FD(L_30, L_31, L_32, L_33, L_34, NULL);
	}

IL_00ac:
	{
		int32_t L_35 = V_5;
		V_8 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		goto IL_00e2;
	}

IL_00b4:
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_36 = V_1;
		int32_t L_37 = V_8;
		int32_t L_38 = V_5;
		NullCheck(L_36);
		double L_39;
		L_39 = U3Da72U3D_U3Dccc6U3D_m323850489F4D3AAD389FB35659D15F9276AD0495(L_36, L_37, L_38, NULL);
		double L_40 = V_7;
		V_9 = ((double)(((-L_39))/L_40));
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_41 = V_1;
		int32_t L_42 = V_8;
		int32_t L_43 = V_5;
		double L_44 = V_9;
		U3Da72U3D_U3Dccc8U3D_mF748D4EDDB12212EB6EE1982204ADE7D2EEADBA0(L_41, L_42, L_43, L_44, NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_45 = V_2;
		int32_t L_46 = V_8;
		int32_t L_47 = V_5;
		double L_48 = V_9;
		U3Da72U3D_U3Dccc8U3D_mF748D4EDDB12212EB6EE1982204ADE7D2EEADBA0(L_45, L_46, L_47, L_48, NULL);
		int32_t L_49 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_00e2:
	{
		int32_t L_50 = V_8;
		int32_t L_51 = V_0;
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_52 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_00ed:
	{
		int32_t L_53 = V_5;
		int32_t L_54 = V_0;
		if ((((int32_t)L_53) < ((int32_t)L_54)))
		{
			goto IL_0053;
		}
	}
	{
		bool L_55 = p0;
		if (!L_55)
		{
			goto IL_01df;
		}
	}
	{
		V_10 = 1;
		goto IL_019d;
	}

IL_0103:
	{
		int32_t L_56 = V_10;
		V_11 = L_56;
		V_12 = (0.0);
		goto IL_011a;
	}

IL_0114:
	{
		int32_t L_57 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_011a:
	{
		int32_t L_58 = V_11;
		if ((((int32_t)L_58) < ((int32_t)0)))
		{
			goto IL_013b;
		}
	}
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_59 = V_1;
		NullCheck(L_59);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_60;
		L_60 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(L_59, NULL);
		int32_t L_61 = V_11;
		int32_t L_62 = V_11;
		int32_t L_63 = V_0;
		NullCheck(L_60);
		int32_t L_64 = ((int32_t)il2cpp_codegen_add(L_61, ((int32_t)il2cpp_codegen_multiply(L_62, L_63))));
		double L_65 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		double L_66 = L_65;
		V_12 = L_66;
		if ((((double)L_66) == ((double)(0.0))))
		{
			goto IL_0114;
		}
	}

IL_013b:
	{
		double L_67 = V_12;
		if ((!(((double)L_67) == ((double)(0.0)))))
		{
			goto IL_014a;
		}
	}
	{
		return (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D*)NULL;
	}

IL_014a:
	{
		int32_t L_68 = V_10;
		int32_t L_69 = V_11;
		if ((((int32_t)L_68) == ((int32_t)L_69)))
		{
			goto IL_015c;
		}
	}
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_70 = V_1;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_71 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_72 = V_3;
		int32_t L_73 = V_10;
		int32_t L_74 = V_11;
		U3Da72U3D_U3DccDAU3D_mE851B39B27E5F97D6F48384A5A74B8C22B3C51FD(L_70, L_71, L_72, L_73, L_74, NULL);
	}

IL_015c:
	{
		int32_t L_75 = V_10;
		V_13 = ((int32_t)il2cpp_codegen_subtract(L_75, 1));
		goto IL_0192;
	}

IL_0164:
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_76 = V_1;
		int32_t L_77 = V_13;
		int32_t L_78 = V_10;
		NullCheck(L_76);
		double L_79;
		L_79 = U3Da72U3D_U3Dccc6U3D_m323850489F4D3AAD389FB35659D15F9276AD0495(L_76, L_77, L_78, NULL);
		double L_80 = V_12;
		V_14 = ((double)(((-L_79))/L_80));
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_81 = V_1;
		int32_t L_82 = V_13;
		int32_t L_83 = V_10;
		double L_84 = V_14;
		U3Da72U3D_U3Dccc8U3D_mF748D4EDDB12212EB6EE1982204ADE7D2EEADBA0(L_81, L_82, L_83, L_84, NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_85 = V_2;
		int32_t L_86 = V_13;
		int32_t L_87 = V_10;
		double L_88 = V_14;
		U3Da72U3D_U3Dccc8U3D_mF748D4EDDB12212EB6EE1982204ADE7D2EEADBA0(L_85, L_86, L_87, L_88, NULL);
		int32_t L_89 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_subtract(L_89, 1));
	}

IL_0192:
	{
		int32_t L_90 = V_13;
		if ((((int32_t)L_90) >= ((int32_t)0)))
		{
			goto IL_0164;
		}
	}
	{
		int32_t L_91 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_91, 1));
	}

IL_019d:
	{
		int32_t L_92 = V_10;
		int32_t L_93 = V_0;
		if ((((int32_t)L_92) < ((int32_t)L_93)))
		{
			goto IL_0103;
		}
	}
	{
		V_15 = 0;
		goto IL_01da;
	}

IL_01aa:
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_94 = V_1;
		int32_t L_95 = V_15;
		int32_t L_96 = V_15;
		NullCheck(L_94);
		double L_97;
		L_97 = U3Da72U3D_U3Dccc6U3D_m323850489F4D3AAD389FB35659D15F9276AD0495(L_94, L_95, L_96, NULL);
		V_16 = ((double)((1.0)/L_97));
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_98 = V_1;
		int32_t L_99 = V_15;
		double L_100 = V_16;
		U3Da72U3D_U3Dccc9U3D_m245E0C941BC9347A9B882B7021142AF290F7F217(L_98, L_99, L_100, NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_101 = V_2;
		int32_t L_102 = V_15;
		double L_103 = V_16;
		U3Da72U3D_U3Dccc9U3D_m245E0C941BC9347A9B882B7021142AF290F7F217(L_101, L_102, L_103, NULL);
		int32_t L_104 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_104, 1));
	}

IL_01da:
	{
		int32_t L_105 = V_15;
		int32_t L_106 = V_0;
		if ((((int32_t)L_105) < ((int32_t)L_106)))
		{
			goto IL_01aa;
		}
	}

IL_01df:
	{
		bool L_107 = p0;
		if (L_107)
		{
			goto IL_01e4;
		}
	}
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_108 = V_1;
		return L_108;
	}

IL_01e4:
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_109 = V_2;
		return L_109;
	}
}
// =a72= =a72=::=ccDC=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* U3Da72U3D_U3DccDCU3D_mED72B254B85851F21ADC24804CFB9A67162ACFD3 (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, const RuntimeMethod* method) 
{
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_0;
		L_0 = U3Da72U3D_U3DccDcU3D_mAADE777F0AD5FF7A8A0E49B14DB8B563F2D726FA(__this, (bool)1, NULL);
		return L_0;
	}
}
// =a72= =a72=::=ccDc=(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* U3Da72U3D_U3DccDcU3D_mAADE777F0AD5FF7A8A0E49B14DB8B563F2D726FA (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, bool p0, const RuntimeMethod* method) 
{
	U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* G_B2_0 = NULL;
	U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* G_B1_0 = NULL;
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_0;
		L_0 = U3Da72U3D_U3DccDbU3D_m89A1D44397F8B10BCD4E056CF0803B89BC8BBE47(__this, (bool)1, NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_1 = L_0;
		bool L_2 = p0;
		G_B1_0 = L_1;
		if (!((int32_t)(((((RuntimeObject*)(U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_2)))
		{
			G_B2_0 = L_1;
			goto IL_001a;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral104EA5AA2F48D575D526220F8AFC3A4B0751084F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da72U3D_U3DccDcU3D_mAADE777F0AD5FF7A8A0E49B14DB8B563F2D726FA_RuntimeMethod_var)));
	}

IL_001a:
	{
		return G_B2_0;
	}
}
// System.Double =a72=::=ccDD=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3Da72U3D_U3DccDDU3D_mC87A1E571FC934D1C987AA91A15C6C4EC8001645 (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, const RuntimeMethod* method) 
{
	U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* V_0 = NULL;
	double V_1 = 0.0;
	int32_t V_2 = 0;
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_0;
		L_0 = U3Da72U3D_U3DccDbU3D_m89A1D44397F8B10BCD4E056CF0803B89BC8BBE47(__this, (bool)0, NULL);
		V_0 = L_0;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_1 = V_0;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		return (0.0);
	}

IL_0015:
	{
		V_1 = (1.0);
		V_2 = 0;
		goto IL_0032;
	}

IL_0023:
	{
		double L_2 = V_1;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_3 = V_0;
		int32_t L_4 = V_2;
		int32_t L_5 = V_2;
		NullCheck(L_3);
		double L_6;
		L_6 = U3Da72U3D_U3Dccc6U3D_m323850489F4D3AAD389FB35659D15F9276AD0495(L_3, L_4, L_5, NULL);
		V_1 = ((double)il2cpp_codegen_multiply(L_2, L_6));
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0032:
	{
		int32_t L_8 = V_2;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(L_9, NULL);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0023;
		}
	}
	{
		double L_11 = V_1;
		return L_11;
	}
}
// =a72= =a72=::op_Multiply(=a72=,=a72=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* U3Da72U3D_op_Multiply_m9BDE9649F2B9D10145CB8F1A8920236243BE845F (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* p0, U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	double V_3 = 0.0;
	int32_t V_4 = 0;
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da72U3D_op_Multiply_m9BDE9649F2B9D10145CB8F1A8920236243BE845F_RuntimeMethod_var)));
	}

IL_000e:
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_2 = p1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da72U3D_op_Multiply_m9BDE9649F2B9D10145CB8F1A8920236243BE845F_RuntimeMethod_var)));
	}

IL_001c:
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_4 = p0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(L_4, NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_6 = p1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(L_6, NULL);
		if ((((int32_t)L_5) == ((int32_t)L_7)))
		{
			goto IL_0078;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_10 = p0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(L_10, NULL);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_12);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_13);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_9;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_15 = p0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(L_15, NULL);
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_17);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_18);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_14;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_20 = p1;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(L_20, NULL);
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_22);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_23);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_23);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_19;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_25 = p1;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(L_25, NULL);
		int32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_27);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_28);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_28);
		String_t* L_29;
		L_29 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFF4DBA5E7E83065AE51544F4218CDA19344D6D5F)), L_24, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_30 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_30);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_30, L_29, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da72U3D_op_Multiply_m9BDE9649F2B9D10145CB8F1A8920236243BE845F_RuntimeMethod_var)));
	}

IL_0078:
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_31 = p0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(L_31, NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_33 = p1;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(L_33, NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_35 = (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D*)il2cpp_codegen_object_new(U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		U3Da72U3D__ctor_m4A6DFDF5FDB11319F42795A034A92F123D4BA67C(L_35, L_32, L_34, NULL);
		V_0 = L_35;
		V_1 = 0;
		goto IL_00e1;
	}

IL_008e:
	{
		V_2 = 0;
		goto IL_00d4;
	}

IL_0092:
	{
		V_3 = (0.0);
		V_4 = 0;
		goto IL_00bd;
	}

IL_00a1:
	{
		double L_36 = V_3;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_37 = p0;
		int32_t L_38 = V_1;
		int32_t L_39 = V_4;
		NullCheck(L_37);
		double L_40;
		L_40 = U3Da72U3D_U3Dccc6U3D_m323850489F4D3AAD389FB35659D15F9276AD0495(L_37, L_38, L_39, NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_41 = p1;
		int32_t L_42 = V_4;
		int32_t L_43 = V_2;
		NullCheck(L_41);
		double L_44;
		L_44 = U3Da72U3D_U3Dccc6U3D_m323850489F4D3AAD389FB35659D15F9276AD0495(L_41, L_42, L_43, NULL);
		V_3 = ((double)il2cpp_codegen_add(L_36, ((double)il2cpp_codegen_multiply(L_40, L_44))));
		int32_t L_45 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00bd:
	{
		int32_t L_46 = V_4;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_47 = p0;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(L_47, NULL);
		if ((((int32_t)L_46) < ((int32_t)L_48)))
		{
			goto IL_00a1;
		}
	}
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_49 = V_0;
		int32_t L_50 = V_1;
		int32_t L_51 = V_2;
		double L_52 = V_3;
		NullCheck(L_49);
		U3Da72U3D_U3Dccc7U3D_m7A0E032BC9A5A87614BD1D760ADB984901308AFC(L_49, L_50, L_51, L_52, NULL);
		int32_t L_53 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_00d4:
	{
		int32_t L_54 = V_2;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_55 = V_0;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(L_55, NULL);
		if ((((int32_t)L_54) < ((int32_t)L_56)))
		{
			goto IL_0092;
		}
	}
	{
		int32_t L_57 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_00e1:
	{
		int32_t L_58 = V_1;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_59 = V_0;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(L_59, NULL);
		if ((((int32_t)L_58) < ((int32_t)L_60)))
		{
			goto IL_008e;
		}
	}
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_61 = V_0;
		return L_61;
	}
}
// System.Double =a72=::=ccDd=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3Da72U3D_U3DccDdU3D_m6B9E12D1C74DAAB5295D9DC2A18F0560E5D9DDE6 (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0;
		L_0 = U3Da72U3D_U3DccDEU3D_mF2A55E971C13CCAE262C2B5147CDF79EADC69C8C(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = sqrt(L_0);
		return L_1;
	}
}
// System.Double =a72=::=ccDE=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3Da72U3D_U3DccDEU3D_mF2A55E971C13CCAE262C2B5147CDF79EADC69C8C (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_1 = NULL;
	int32_t V_2 = 0;
	double V_3 = 0.0;
	{
		V_0 = (0.0);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0;
		L_0 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(__this, NULL);
		V_1 = L_0;
		V_2 = 0;
		goto IL_0023;
	}

IL_0015:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		double L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_3 = L_4;
		double L_5 = V_0;
		double L_6 = V_3;
		double L_7 = V_3;
		V_0 = ((double)il2cpp_codegen_add(L_5, ((double)il2cpp_codegen_multiply(L_6, L_7))));
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0023:
	{
		int32_t L_9 = V_2;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0015;
		}
	}
	{
		double L_11 = V_0;
		return L_11;
	}
}
// =a72= =a72=::op_Multiply(=a72=,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* U3Da72U3D_op_Multiply_m29E039EE1BFC50A2219CA82D340839E22C41E1FB (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* p0, double p1, const RuntimeMethod* method) 
{
	U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* V_0 = NULL;
	int32_t V_1 = 0;
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da72U3D_op_Multiply_m29E039EE1BFC50A2219CA82D340839E22C41E1FB_RuntimeMethod_var)));
	}

IL_000e:
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_2 = p0;
		NullCheck(L_2);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_3;
		L_3 = U3Da72U3D_U3DccDaU3D_mF714BE7585FAB49B0EA71E615F51E7983BACC216(L_2, NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_002e;
	}

IL_0019:
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_4 = V_0;
		NullCheck(L_4);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_5;
		L_5 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(L_4, NULL);
		int32_t L_6 = V_1;
		NullCheck(L_5);
		double* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)));
		double L_8 = *((double*)L_7);
		double L_9 = p1;
		*((double*)L_7) = (double)((double)il2cpp_codegen_multiply(L_8, L_9));
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002e:
	{
		int32_t L_11 = V_1;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_12 = p0;
		NullCheck(L_12);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_13;
		L_13 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(L_12, NULL);
		NullCheck(L_13);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0019;
		}
	}
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_14 = V_0;
		return L_14;
	}
}
// =a72= =a72=::op_Multiply(System.Double,=a72=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* U3Da72U3D_op_Multiply_mC0E3E5A70ECC7461E2D4BC0EA6896EAC3335DE5A (double p0, U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* p1, const RuntimeMethod* method) 
{
	U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* V_0 = NULL;
	int32_t V_1 = 0;
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_0 = p1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da72U3D_op_Multiply_mC0E3E5A70ECC7461E2D4BC0EA6896EAC3335DE5A_RuntimeMethod_var)));
	}

IL_000e:
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_2 = p1;
		NullCheck(L_2);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_3;
		L_3 = U3Da72U3D_U3DccDaU3D_mF714BE7585FAB49B0EA71E615F51E7983BACC216(L_2, NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_002e;
	}

IL_0019:
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_4 = V_0;
		NullCheck(L_4);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_5;
		L_5 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(L_4, NULL);
		int32_t L_6 = V_1;
		NullCheck(L_5);
		double* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)));
		double L_8 = *((double*)L_7);
		double L_9 = p0;
		*((double*)L_7) = (double)((double)il2cpp_codegen_multiply(L_8, L_9));
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002e:
	{
		int32_t L_11 = V_1;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_12 = p1;
		NullCheck(L_12);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_13;
		L_13 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(L_12, NULL);
		NullCheck(L_13);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0019;
		}
	}
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_14 = V_0;
		return L_14;
	}
}
// =a72= =a72=::op_Addition(=a72=,=a72=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* U3Da72U3D_op_Addition_mA31292C5B8AB6ECB8FD14D181C81352E804171CF (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* p0, U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* p1, const RuntimeMethod* method) 
{
	U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* V_0 = NULL;
	int32_t V_1 = 0;
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da72U3D_op_Addition_mA31292C5B8AB6ECB8FD14D181C81352E804171CF_RuntimeMethod_var)));
	}

IL_000e:
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_2 = p1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da72U3D_op_Addition_mA31292C5B8AB6ECB8FD14D181C81352E804171CF_RuntimeMethod_var)));
	}

IL_001c:
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_4 = p0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(L_4, NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_6 = p1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(L_6, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_0038;
		}
	}
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_8 = p0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(L_8, NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_10 = p1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(L_10, NULL);
		if ((((int32_t)L_9) == ((int32_t)L_11)))
		{
			goto IL_0086;
		}
	}

IL_0038:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_12;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_14 = p0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(L_14, NULL);
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_16);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_17);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_13;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_19 = p0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(L_19, NULL);
		int32_t L_21 = L_20;
		RuntimeObject* L_22 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_21);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_22);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_18;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_24 = p1;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(L_24, NULL);
		int32_t L_26 = L_25;
		RuntimeObject* L_27 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_26);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_27);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_27);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = L_23;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_29 = p1;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(L_29, NULL);
		int32_t L_31 = L_30;
		RuntimeObject* L_32 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_31);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_32);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_32);
		String_t* L_33;
		L_33 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFF4DBA5E7E83065AE51544F4218CDA19344D6D5F)), L_28, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_34 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_34);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_34, L_33, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da72U3D_op_Addition_mA31292C5B8AB6ECB8FD14D181C81352E804171CF_RuntimeMethod_var)));
	}

IL_0086:
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_35 = p0;
		NullCheck(L_35);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_36;
		L_36 = U3Da72U3D_U3DccDaU3D_mF714BE7585FAB49B0EA71E615F51E7983BACC216(L_35, NULL);
		V_0 = L_36;
		V_1 = 0;
		goto IL_00ad;
	}

IL_0091:
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_37 = V_0;
		NullCheck(L_37);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_38;
		L_38 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(L_37, NULL);
		int32_t L_39 = V_1;
		NullCheck(L_38);
		double* L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)));
		double L_41 = *((double*)L_40);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_42 = p1;
		NullCheck(L_42);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_43;
		L_43 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(L_42, NULL);
		int32_t L_44 = V_1;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		double L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		*((double*)L_40) = (double)((double)il2cpp_codegen_add(L_41, L_46));
		int32_t L_47 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_00ad:
	{
		int32_t L_48 = V_1;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_49 = p0;
		NullCheck(L_49);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_50;
		L_50 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(L_49, NULL);
		NullCheck(L_50);
		if ((((int32_t)L_48) < ((int32_t)((int32_t)(((RuntimeArray*)L_50)->max_length)))))
		{
			goto IL_0091;
		}
	}
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_51 = V_0;
		return L_51;
	}
}
// =a72= =a72=::op_Subtraction(=a72=,=a72=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* U3Da72U3D_op_Subtraction_mDB43B162A1504FFE6594FABF1DA37A461BBC9132 (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* p0, U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* p1, const RuntimeMethod* method) 
{
	U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* V_0 = NULL;
	int32_t V_1 = 0;
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da72U3D_op_Subtraction_mDB43B162A1504FFE6594FABF1DA37A461BBC9132_RuntimeMethod_var)));
	}

IL_000e:
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_2 = p1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da72U3D_op_Subtraction_mDB43B162A1504FFE6594FABF1DA37A461BBC9132_RuntimeMethod_var)));
	}

IL_001c:
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_4 = p0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(L_4, NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_6 = p1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(L_6, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_0038;
		}
	}
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_8 = p0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(L_8, NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_10 = p1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(L_10, NULL);
		if ((((int32_t)L_9) == ((int32_t)L_11)))
		{
			goto IL_0086;
		}
	}

IL_0038:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_12;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_14 = p0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(L_14, NULL);
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_16);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_17);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_13;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_19 = p0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(L_19, NULL);
		int32_t L_21 = L_20;
		RuntimeObject* L_22 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_21);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_22);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_18;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_24 = p1;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(L_24, NULL);
		int32_t L_26 = L_25;
		RuntimeObject* L_27 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_26);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_27);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_27);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = L_23;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_29 = p1;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(L_29, NULL);
		int32_t L_31 = L_30;
		RuntimeObject* L_32 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_31);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_32);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_32);
		String_t* L_33;
		L_33 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFF4DBA5E7E83065AE51544F4218CDA19344D6D5F)), L_28, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_34 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_34);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_34, L_33, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da72U3D_op_Subtraction_mDB43B162A1504FFE6594FABF1DA37A461BBC9132_RuntimeMethod_var)));
	}

IL_0086:
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_35 = p0;
		NullCheck(L_35);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_36;
		L_36 = U3Da72U3D_U3DccDaU3D_mF714BE7585FAB49B0EA71E615F51E7983BACC216(L_35, NULL);
		V_0 = L_36;
		V_1 = 0;
		goto IL_00ad;
	}

IL_0091:
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_37 = V_0;
		NullCheck(L_37);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_38;
		L_38 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(L_37, NULL);
		int32_t L_39 = V_1;
		NullCheck(L_38);
		double* L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)));
		double L_41 = *((double*)L_40);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_42 = p1;
		NullCheck(L_42);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_43;
		L_43 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(L_42, NULL);
		int32_t L_44 = V_1;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		double L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		*((double*)L_40) = (double)((double)il2cpp_codegen_subtract(L_41, L_46));
		int32_t L_47 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_00ad:
	{
		int32_t L_48 = V_1;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_49 = p0;
		NullCheck(L_49);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_50;
		L_50 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(L_49, NULL);
		NullCheck(L_50);
		if ((((int32_t)L_48) < ((int32_t)((int32_t)(((RuntimeArray*)L_50)->max_length)))))
		{
			goto IL_0091;
		}
	}
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_51 = V_0;
		return L_51;
	}
}
// System.Void =a72=::=ccDe=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da72U3D_U3DccDeU3D_m39157D4AB11A4AAE6EA2CBBC9983AA321C6673E8 (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, const RuntimeMethod* method) 
{
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0;
		L_0 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(__this, NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1;
		L_1 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(__this, NULL);
		NullCheck(L_1);
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_0, 0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		return;
	}
}
// System.Boolean =a72=::=ccDF=(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da72U3D_U3DccDFU3D_mDF813314FF19E8D760954D12CCADD44874F23FC2 (double p0, double p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = p0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = fabs(L_0);
		double L_2 = p1;
		double L_3;
		L_3 = fabs(L_2);
		return (bool)((((int32_t)((!(((double)L_1) <= ((double)((double)il2cpp_codegen_multiply((9.9999999999999998E-13), L_3)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void =a72=::=ccDf=(=a72=,System.Double,System.Double,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da72U3D_U3DccDfU3D_mC46C1FE4177E70E831FEDA5A0BE4C6B8DFCEED11 (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* p0, double p1, double p2, int32_t p3, int32_t p4, int32_t p5, int32_t p6, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	{
		int32_t L_0 = p3;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_1 = p0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(L_1, NULL);
		int32_t L_3 = p4;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, L_2)), L_3));
		int32_t L_4 = p5;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_5 = p0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(L_5, NULL);
		int32_t L_7 = p6;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_4, L_6)), L_7));
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_8 = p0;
		NullCheck(L_8);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_9;
		L_9 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(L_8, NULL);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		double L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_2 = L_12;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_13 = p0;
		NullCheck(L_13);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_14;
		L_14 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(L_13, NULL);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		double L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_3 = L_17;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_18 = p0;
		NullCheck(L_18);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_19;
		L_19 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(L_18, NULL);
		int32_t L_20 = V_0;
		double L_21 = V_2;
		double L_22 = p1;
		double L_23 = V_3;
		double L_24 = V_2;
		double L_25 = p2;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (double)((double)il2cpp_codegen_subtract(L_21, ((double)il2cpp_codegen_multiply(L_22, ((double)il2cpp_codegen_add(L_23, ((double)il2cpp_codegen_multiply(L_24, L_25)))))))));
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_26 = p0;
		NullCheck(L_26);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_27;
		L_27 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(L_26, NULL);
		int32_t L_28 = V_1;
		double L_29 = V_3;
		double L_30 = p1;
		double L_31 = V_2;
		double L_32 = V_3;
		double L_33 = p2;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (double)((double)il2cpp_codegen_add(L_29, ((double)il2cpp_codegen_multiply(L_30, ((double)il2cpp_codegen_subtract(L_31, ((double)il2cpp_codegen_multiply(L_32, L_33)))))))));
		return;
	}
}
// System.Void =a72=::=ccD0=(=a8F=&,=a72=&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da72U3D_U3DccD0U3D_m7D66356BCD1F826FDAD59C9699D440ABF7B0A307 (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3** p0, U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D** p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = U3Da72U3D_U3Dccc2U3D_mB0BB6856485E75462C1D0C5B3F85363CBE3BF0F5(__this, NULL);
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3** L_1 = p0;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D** L_2 = p1;
		NullCheck(((U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D*)CastclassClass((RuntimeObject*)L_0, U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D_il2cpp_TypeInfo_var)));
		U3Da72U3D_U3DccD1U3D_m645061DC636AE808AF1A05DFC81EEA41F45F5B18(((U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D*)CastclassClass((RuntimeObject*)L_0, U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D_il2cpp_TypeInfo_var)), L_1, L_2, NULL);
		return;
	}
}
// System.Void =a72=::=ccD1=(=a8F=&,=a72=&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da72U3D_U3DccD1U3D_m645061DC636AE808AF1A05DFC81EEA41F45F5B18 (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3** p0, U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D** p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_0 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_1 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_2 = NULL;
	double V_3 = 0.0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	double V_6 = 0.0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	double V_9 = 0.0;
	int32_t V_10 = 0;
	double V_11 = 0.0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	double V_18 = 0.0;
	double V_19 = 0.0;
	double V_20 = 0.0;
	double V_21 = 0.0;
	double V_22 = 0.0;
	double V_23 = 0.0;
	double V_24 = 0.0;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	double V_27 = 0.0;
	int32_t V_28 = 0;
	double V_29 = 0.0;
	double V_30 = 0.0;
	int32_t V_31 = 0;
	double V_32 = 0.0;
	double V_33 = 0.0;
	int32_t V_34 = 0;
	double V_35 = 0.0;
	double V_36 = 0.0;
	int32_t V_37 = 0;
	double V_38 = 0.0;
	double V_39 = 0.0;
	int32_t V_40 = 0;
	double G_B24_0 = 0.0;
	{
		int32_t L_0;
		L_0 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(__this, NULL);
		int32_t L_1;
		L_1 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(__this, NULL);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0019;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral228AB24DC50DA92F8EEC9AF61F44ECDB0839AFCE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da72U3D_U3DccD1U3D_m645061DC636AE808AF1A05DFC81EEA41F45F5B18_RuntimeMethod_var)));
	}

IL_0019:
	{
		int32_t L_3;
		L_3 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(__this, NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_4 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_0 = L_4;
		int32_t L_5;
		L_5 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(__this, NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_6 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_1 = L_6;
		int32_t L_7;
		L_7 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(__this, NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_8 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_2 = L_8;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D** L_9 = p1;
		int32_t L_10;
		L_10 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(__this, NULL);
		int32_t L_11;
		L_11 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(__this, NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_12 = (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D*)il2cpp_codegen_object_new(U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		U3Da72U3D__ctor_m4A6DFDF5FDB11319F42795A034A92F123D4BA67C(L_12, L_10, L_11, NULL);
		*((RuntimeObject**)L_9) = (RuntimeObject*)L_12;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_9, (void*)(RuntimeObject*)L_12);
		V_3 = (-1.7976931348623157E+308);
		V_4 = 0;
		goto IL_0079;
	}

IL_005f:
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D** L_13 = p1;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_14 = *((U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D**)L_13);
		int32_t L_15 = V_4;
		int32_t L_16 = V_4;
		NullCheck(L_14);
		U3Da72U3D_U3Dccc7U3D_m7A0E032BC9A5A87614BD1D760ADB984901308AFC(L_14, L_15, L_16, (1.0), NULL);
		int32_t L_17 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0079:
	{
		int32_t L_18 = V_4;
		int32_t L_19;
		L_19 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(__this, NULL);
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_005f;
		}
	}
	{
		V_5 = 0;
		goto IL_00de;
	}

IL_0088:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_20 = V_0;
		int32_t L_21 = V_5;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_22 = V_2;
		int32_t L_23 = V_5;
		int32_t L_24 = V_5;
		int32_t L_25 = V_5;
		double L_26;
		L_26 = U3Da72U3D_U3Dccc6U3D_m323850489F4D3AAD389FB35659D15F9276AD0495(__this, L_24, L_25, NULL);
		double L_27 = L_26;
		V_6 = L_27;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (double)L_27);
		double L_28 = V_6;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (double)L_28);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (double)(0.0));
		int32_t L_31 = V_5;
		V_7 = L_31;
		goto IL_00ce;
	}

IL_00b2:
	{
		double L_32 = V_3;
		int32_t L_33 = V_7;
		int32_t L_34 = V_5;
		double L_35;
		L_35 = U3Da72U3D_U3Dccc6U3D_m323850489F4D3AAD389FB35659D15F9276AD0495(__this, L_33, L_34, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_36;
		L_36 = fabs(L_35);
		double L_37;
		L_37 = Math_Max_mD1AD971AB9981B8A59BC5B5BEB7DD6A5A5E82AD6(L_32, L_36, NULL);
		V_3 = L_37;
		int32_t L_38 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00ce:
	{
		int32_t L_39 = V_7;
		int32_t L_40;
		L_40 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(__this, NULL);
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_00b2;
		}
	}
	{
		int32_t L_41 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00de:
	{
		int32_t L_42 = V_5;
		int32_t L_43;
		L_43 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(__this, NULL);
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_0088;
		}
	}
	{
		double L_44 = V_3;
		if ((!(((double)L_44) == ((double)(0.0)))))
		{
			goto IL_0104;
		}
	}
	{
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3** L_45 = p0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_46 = V_2;
		int32_t L_47;
		L_47 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(__this, NULL);
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_48 = (U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3*)il2cpp_codegen_object_new(U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		U3Da8FU3D__ctor_m81C46FD7E2A23C0988AAA06D6738FE6557C85D8F(L_48, L_46, 0, L_47, NULL);
		*((RuntimeObject**)L_45) = (RuntimeObject*)L_48;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_45, (void*)(RuntimeObject*)L_48);
		return;
	}

IL_0104:
	{
		V_8 = 1;
		goto IL_0600;
	}

IL_010c:
	{
		V_9 = (0.0);
		V_10 = 0;
		V_12 = 0;
		goto IL_016a;
	}

IL_011f:
	{
		int32_t L_49 = V_10;
		int32_t L_50 = V_12;
		V_13 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_49, L_50)), 1));
		int32_t L_51 = V_12;
		V_14 = ((int32_t)il2cpp_codegen_add(L_51, 1));
		goto IL_014f;
	}

IL_0130:
	{
		double L_52 = V_9;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53;
		L_53 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(__this, NULL);
		int32_t L_54 = V_13;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		double L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_57;
		L_57 = fabs(L_56);
		V_9 = ((double)il2cpp_codegen_add(L_52, L_57));
		int32_t L_58 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		int32_t L_59 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_014f:
	{
		int32_t L_60 = V_14;
		int32_t L_61;
		L_61 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(__this, NULL);
		if ((((int32_t)L_60) < ((int32_t)L_61)))
		{
			goto IL_0130;
		}
	}
	{
		int32_t L_62 = V_10;
		int32_t L_63;
		L_63 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(__this, NULL);
		V_10 = ((int32_t)il2cpp_codegen_add(L_62, L_63));
		int32_t L_64 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_64, 1));
	}

IL_016a:
	{
		int32_t L_65 = V_12;
		int32_t L_66;
		L_66 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(__this, NULL);
		if ((((int32_t)L_65) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_66, 1)))))
		{
			goto IL_011f;
		}
	}
	{
		int32_t L_67;
		L_67 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(__this, NULL);
		double L_68 = V_9;
		double L_69 = V_3;
		if ((((double)L_68) < ((double)((double)il2cpp_codegen_multiply(L_69, (9.9999999999999998E-13))))))
		{
			goto IL_0609;
		}
	}
	{
		int32_t L_70 = V_8;
		if ((((int32_t)L_70) < ((int32_t)4)))
		{
			goto IL_01a5;
		}
	}
	{
		G_B24_0 = (0.0);
		goto IL_01c0;
	}

IL_01a5:
	{
		double L_71 = V_9;
		int32_t L_72;
		L_72 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(__this, NULL);
		int32_t L_73;
		L_73 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(__this, NULL);
		G_B24_0 = ((double)(((double)il2cpp_codegen_multiply((0.20000000000000001), L_71))/((double)((int32_t)il2cpp_codegen_multiply(L_72, L_73)))));
	}

IL_01c0:
	{
		V_11 = G_B24_0;
		V_10 = 0;
		V_15 = 0;
		goto IL_05b1;
	}

IL_01cd:
	{
		int32_t L_74 = V_10;
		int32_t L_75 = V_15;
		V_16 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_74, L_75)), 1));
		int32_t L_76 = V_15;
		V_17 = ((int32_t)il2cpp_codegen_add(L_76, 1));
		goto IL_0588;
	}

IL_01e1:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_77;
		L_77 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(__this, NULL);
		int32_t L_78 = V_16;
		NullCheck(L_77);
		int32_t L_79 = L_78;
		double L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		V_18 = L_80;
		double L_81 = V_18;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_82;
		L_82 = fabs(L_81);
		V_19 = ((double)il2cpp_codegen_multiply((100.0), L_82));
		int32_t L_83 = V_8;
		if ((((int32_t)L_83) <= ((int32_t)4)))
		{
			goto IL_0235;
		}
	}
	{
		double L_84 = V_19;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_85 = V_2;
		int32_t L_86 = V_15;
		NullCheck(L_85);
		int32_t L_87 = L_86;
		double L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		bool L_89;
		L_89 = U3Da72U3D_U3DccDFU3D_mDF813314FF19E8D760954D12CCADD44874F23FC2(L_84, L_88, NULL);
		if (!L_89)
		{
			goto IL_0235;
		}
	}
	{
		double L_90 = V_19;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_91 = V_2;
		int32_t L_92 = V_17;
		NullCheck(L_91);
		int32_t L_93 = L_92;
		double L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		bool L_95;
		L_95 = U3Da72U3D_U3DccDFU3D_mDF813314FF19E8D760954D12CCADD44874F23FC2(L_90, L_94, NULL);
		if (!L_95)
		{
			goto IL_0235;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_96;
		L_96 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(__this, NULL);
		int32_t L_97 = V_16;
		NullCheck(L_96);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(L_97), (double)(0.0));
		goto IL_057c;
	}

IL_0235:
	{
		double L_98 = V_11;
		double L_99 = V_18;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_100;
		L_100 = fabs(L_99);
		if ((((double)L_98) > ((double)L_100)))
		{
			goto IL_057c;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_101 = V_2;
		int32_t L_102 = V_17;
		NullCheck(L_101);
		int32_t L_103 = L_102;
		double L_104 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_105 = V_2;
		int32_t L_106 = V_15;
		NullCheck(L_105);
		int32_t L_107 = L_106;
		double L_108 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		V_20 = ((double)il2cpp_codegen_subtract(L_104, L_108));
		double L_109 = V_19;
		double L_110 = V_20;
		bool L_111;
		L_111 = U3Da72U3D_U3DccDFU3D_mDF813314FF19E8D760954D12CCADD44874F23FC2(L_109, L_110, NULL);
		if (!L_111)
		{
			goto IL_0262;
		}
	}
	{
		double L_112 = V_18;
		double L_113 = V_20;
		V_21 = ((double)(L_112/L_113));
		goto IL_02ad;
	}

IL_0262:
	{
		double L_114 = V_20;
		double L_115 = V_18;
		V_27 = ((double)(((double)il2cpp_codegen_multiply((0.5), L_114))/L_115));
		double L_116 = V_27;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_117;
		L_117 = fabs(L_116);
		double L_118 = V_27;
		double L_119 = V_27;
		double L_120;
		L_120 = sqrt(((double)il2cpp_codegen_add((1.0), ((double)il2cpp_codegen_multiply(L_118, L_119)))));
		V_21 = ((double)((1.0)/((double)il2cpp_codegen_add(L_117, L_120))));
		double L_121 = V_27;
		if ((!(((double)L_121) < ((double)(0.0)))))
		{
			goto IL_02ad;
		}
	}
	{
		double L_122 = V_21;
		V_21 = ((-L_122));
	}

IL_02ad:
	{
		double L_123 = V_21;
		double L_124 = V_21;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_125;
		L_125 = sqrt(((double)il2cpp_codegen_add((1.0), ((double)il2cpp_codegen_multiply(L_123, L_124)))));
		V_22 = ((double)((1.0)/L_125));
		double L_126 = V_21;
		double L_127 = V_22;
		V_23 = ((double)il2cpp_codegen_multiply(L_126, L_127));
		double L_128 = V_23;
		double L_129 = V_22;
		V_24 = ((double)(L_128/((double)il2cpp_codegen_add((1.0), L_129))));
		double L_130 = V_21;
		double L_131 = V_18;
		V_20 = ((double)il2cpp_codegen_multiply(L_130, L_131));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_132 = V_1;
		int32_t L_133 = V_15;
		NullCheck(L_132);
		double* L_134 = ((L_132)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_133)));
		double L_135 = *((double*)L_134);
		double L_136 = V_20;
		*((double*)L_134) = (double)((double)il2cpp_codegen_subtract(L_135, L_136));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_137 = V_1;
		int32_t L_138 = V_17;
		NullCheck(L_137);
		double* L_139 = ((L_137)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_138)));
		double L_140 = *((double*)L_139);
		double L_141 = V_20;
		*((double*)L_139) = (double)((double)il2cpp_codegen_add(L_140, L_141));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_142 = V_2;
		int32_t L_143 = V_15;
		NullCheck(L_142);
		double* L_144 = ((L_142)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_143)));
		double L_145 = *((double*)L_144);
		double L_146 = V_20;
		*((double*)L_144) = (double)((double)il2cpp_codegen_subtract(L_145, L_146));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_147 = V_2;
		int32_t L_148 = V_17;
		NullCheck(L_147);
		double* L_149 = ((L_147)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_148)));
		double L_150 = *((double*)L_149);
		double L_151 = V_20;
		*((double*)L_149) = (double)((double)il2cpp_codegen_add(L_150, L_151));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_152;
		L_152 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(__this, NULL);
		int32_t L_153 = V_16;
		NullCheck(L_152);
		(L_152)->SetAt(static_cast<il2cpp_array_size_t>(L_153), (double)(0.0));
		int32_t L_154 = V_15;
		V_25 = L_154;
		int32_t L_155 = V_17;
		V_26 = L_155;
		V_28 = 0;
		goto IL_03ee;
	}

IL_0346:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_156;
		L_156 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(__this, NULL);
		int32_t L_157 = V_25;
		NullCheck(L_156);
		int32_t L_158 = L_157;
		double L_159 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_158));
		V_29 = L_159;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_160;
		L_160 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(__this, NULL);
		int32_t L_161 = V_26;
		NullCheck(L_160);
		int32_t L_162 = L_161;
		double L_163 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		V_30 = L_163;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_164;
		L_164 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(__this, NULL);
		int32_t L_165 = V_25;
		double L_166 = V_29;
		double L_167 = V_23;
		double L_168 = V_30;
		double L_169 = V_29;
		double L_170 = V_24;
		NullCheck(L_164);
		(L_164)->SetAt(static_cast<il2cpp_array_size_t>(L_165), (double)((double)il2cpp_codegen_subtract(L_166, ((double)il2cpp_codegen_multiply(L_167, ((double)il2cpp_codegen_add(L_168, ((double)il2cpp_codegen_multiply(L_169, L_170)))))))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_171;
		L_171 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(__this, NULL);
		int32_t L_172 = V_26;
		double L_173 = V_30;
		double L_174 = V_23;
		double L_175 = V_29;
		double L_176 = V_30;
		double L_177 = V_24;
		NullCheck(L_171);
		(L_171)->SetAt(static_cast<il2cpp_array_size_t>(L_172), (double)((double)il2cpp_codegen_add(L_173, ((double)il2cpp_codegen_multiply(L_174, ((double)il2cpp_codegen_subtract(L_175, ((double)il2cpp_codegen_multiply(L_176, L_177)))))))));
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D** L_178 = p1;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_179 = *((U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D**)L_178);
		NullCheck(L_179);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_180;
		L_180 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(L_179, NULL);
		int32_t L_181 = V_25;
		NullCheck(L_180);
		int32_t L_182 = L_181;
		double L_183 = (L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_182));
		V_29 = L_183;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D** L_184 = p1;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_185 = *((U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D**)L_184);
		NullCheck(L_185);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_186;
		L_186 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(L_185, NULL);
		int32_t L_187 = V_26;
		NullCheck(L_186);
		int32_t L_188 = L_187;
		double L_189 = (L_186)->GetAt(static_cast<il2cpp_array_size_t>(L_188));
		V_30 = L_189;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D** L_190 = p1;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_191 = *((U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D**)L_190);
		NullCheck(L_191);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_192;
		L_192 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(L_191, NULL);
		int32_t L_193 = V_25;
		double L_194 = V_29;
		double L_195 = V_23;
		double L_196 = V_30;
		double L_197 = V_29;
		double L_198 = V_24;
		NullCheck(L_192);
		(L_192)->SetAt(static_cast<il2cpp_array_size_t>(L_193), (double)((double)il2cpp_codegen_subtract(L_194, ((double)il2cpp_codegen_multiply(L_195, ((double)il2cpp_codegen_add(L_196, ((double)il2cpp_codegen_multiply(L_197, L_198)))))))));
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D** L_199 = p1;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_200 = *((U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D**)L_199);
		NullCheck(L_200);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_201;
		L_201 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(L_200, NULL);
		int32_t L_202 = V_26;
		double L_203 = V_30;
		double L_204 = V_23;
		double L_205 = V_29;
		double L_206 = V_30;
		double L_207 = V_24;
		NullCheck(L_201);
		(L_201)->SetAt(static_cast<il2cpp_array_size_t>(L_202), (double)((double)il2cpp_codegen_add(L_203, ((double)il2cpp_codegen_multiply(L_204, ((double)il2cpp_codegen_subtract(L_205, ((double)il2cpp_codegen_multiply(L_206, L_207)))))))));
		int32_t L_208 = V_28;
		V_28 = ((int32_t)il2cpp_codegen_add(L_208, 1));
		int32_t L_209 = V_25;
		int32_t L_210;
		L_210 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(__this, NULL);
		V_25 = ((int32_t)il2cpp_codegen_add(L_209, L_210));
		int32_t L_211 = V_26;
		int32_t L_212;
		L_212 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(__this, NULL);
		V_26 = ((int32_t)il2cpp_codegen_add(L_211, L_212));
	}

IL_03ee:
	{
		int32_t L_213 = V_28;
		int32_t L_214 = V_15;
		if ((((int32_t)L_213) < ((int32_t)L_214)))
		{
			goto IL_0346;
		}
	}
	{
		int32_t L_215 = V_15;
		V_31 = L_215;
		goto IL_0461;
	}

IL_03fd:
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D** L_216 = p1;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_217 = *((U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D**)L_216);
		NullCheck(L_217);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_218;
		L_218 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(L_217, NULL);
		int32_t L_219 = V_25;
		NullCheck(L_218);
		int32_t L_220 = L_219;
		double L_221 = (L_218)->GetAt(static_cast<il2cpp_array_size_t>(L_220));
		V_32 = L_221;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D** L_222 = p1;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_223 = *((U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D**)L_222);
		NullCheck(L_223);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_224;
		L_224 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(L_223, NULL);
		int32_t L_225 = V_26;
		NullCheck(L_224);
		int32_t L_226 = L_225;
		double L_227 = (L_224)->GetAt(static_cast<il2cpp_array_size_t>(L_226));
		V_33 = L_227;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D** L_228 = p1;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_229 = *((U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D**)L_228);
		NullCheck(L_229);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_230;
		L_230 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(L_229, NULL);
		int32_t L_231 = V_25;
		double L_232 = V_32;
		double L_233 = V_23;
		double L_234 = V_33;
		double L_235 = V_32;
		double L_236 = V_24;
		NullCheck(L_230);
		(L_230)->SetAt(static_cast<il2cpp_array_size_t>(L_231), (double)((double)il2cpp_codegen_subtract(L_232, ((double)il2cpp_codegen_multiply(L_233, ((double)il2cpp_codegen_add(L_234, ((double)il2cpp_codegen_multiply(L_235, L_236)))))))));
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D** L_237 = p1;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_238 = *((U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D**)L_237);
		NullCheck(L_238);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_239;
		L_239 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(L_238, NULL);
		int32_t L_240 = V_26;
		double L_241 = V_33;
		double L_242 = V_23;
		double L_243 = V_32;
		double L_244 = V_33;
		double L_245 = V_24;
		NullCheck(L_239);
		(L_239)->SetAt(static_cast<il2cpp_array_size_t>(L_240), (double)((double)il2cpp_codegen_add(L_241, ((double)il2cpp_codegen_multiply(L_242, ((double)il2cpp_codegen_subtract(L_243, ((double)il2cpp_codegen_multiply(L_244, L_245)))))))));
		int32_t L_246 = V_31;
		V_31 = ((int32_t)il2cpp_codegen_add(L_246, 1));
		int32_t L_247 = V_25;
		int32_t L_248;
		L_248 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(__this, NULL);
		V_25 = ((int32_t)il2cpp_codegen_add(L_247, L_248));
		int32_t L_249 = V_26;
		int32_t L_250;
		L_250 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(__this, NULL);
		V_26 = ((int32_t)il2cpp_codegen_add(L_249, L_250));
	}

IL_0461:
	{
		int32_t L_251 = V_31;
		int32_t L_252;
		L_252 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(__this, NULL);
		if ((((int32_t)L_251) < ((int32_t)L_252)))
		{
			goto IL_03fd;
		}
	}
	{
		int32_t L_253 = V_15;
		int32_t L_254;
		L_254 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(__this, NULL);
		int32_t L_255 = V_15;
		V_25 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_253, L_254)), L_255)), 1));
		int32_t L_256 = V_15;
		int32_t L_257;
		L_257 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(__this, NULL);
		int32_t L_258 = V_17;
		V_26 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_256, 1)), L_257)), L_258));
		int32_t L_259 = V_15;
		V_34 = ((int32_t)il2cpp_codegen_add(L_259, 1));
		goto IL_04ee;
	}

IL_0493:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_260;
		L_260 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(__this, NULL);
		int32_t L_261 = V_25;
		NullCheck(L_260);
		int32_t L_262 = L_261;
		double L_263 = (L_260)->GetAt(static_cast<il2cpp_array_size_t>(L_262));
		V_35 = L_263;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_264;
		L_264 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(__this, NULL);
		int32_t L_265 = V_26;
		NullCheck(L_264);
		int32_t L_266 = L_265;
		double L_267 = (L_264)->GetAt(static_cast<il2cpp_array_size_t>(L_266));
		V_36 = L_267;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_268;
		L_268 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(__this, NULL);
		int32_t L_269 = V_25;
		double L_270 = V_35;
		double L_271 = V_23;
		double L_272 = V_36;
		double L_273 = V_35;
		double L_274 = V_24;
		NullCheck(L_268);
		(L_268)->SetAt(static_cast<il2cpp_array_size_t>(L_269), (double)((double)il2cpp_codegen_subtract(L_270, ((double)il2cpp_codegen_multiply(L_271, ((double)il2cpp_codegen_add(L_272, ((double)il2cpp_codegen_multiply(L_273, L_274)))))))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_275;
		L_275 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(__this, NULL);
		int32_t L_276 = V_26;
		double L_277 = V_36;
		double L_278 = V_23;
		double L_279 = V_35;
		double L_280 = V_36;
		double L_281 = V_24;
		NullCheck(L_275);
		(L_275)->SetAt(static_cast<il2cpp_array_size_t>(L_276), (double)((double)il2cpp_codegen_add(L_277, ((double)il2cpp_codegen_multiply(L_278, ((double)il2cpp_codegen_subtract(L_279, ((double)il2cpp_codegen_multiply(L_280, L_281)))))))));
		int32_t L_282 = V_34;
		V_34 = ((int32_t)il2cpp_codegen_add(L_282, 1));
		int32_t L_283 = V_25;
		V_25 = ((int32_t)il2cpp_codegen_add(L_283, 1));
		int32_t L_284 = V_26;
		int32_t L_285;
		L_285 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(__this, NULL);
		V_26 = ((int32_t)il2cpp_codegen_add(L_284, L_285));
	}

IL_04ee:
	{
		int32_t L_286 = V_34;
		int32_t L_287 = V_17;
		if ((((int32_t)L_286) < ((int32_t)L_287)))
		{
			goto IL_0493;
		}
	}
	{
		int32_t L_288 = V_15;
		int32_t L_289;
		L_289 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(__this, NULL);
		int32_t L_290 = V_17;
		V_25 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_288, L_289)), L_290)), 1));
		int32_t L_291 = V_17;
		int32_t L_292;
		L_292 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(__this, NULL);
		int32_t L_293 = V_17;
		V_26 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_291, L_292)), L_293)), 1));
		int32_t L_294 = V_17;
		V_37 = ((int32_t)il2cpp_codegen_add(L_294, 1));
		goto IL_0572;
	}

IL_051c:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_295;
		L_295 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(__this, NULL);
		int32_t L_296 = V_25;
		NullCheck(L_295);
		int32_t L_297 = L_296;
		double L_298 = (L_295)->GetAt(static_cast<il2cpp_array_size_t>(L_297));
		V_38 = L_298;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_299;
		L_299 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(__this, NULL);
		int32_t L_300 = V_26;
		NullCheck(L_299);
		int32_t L_301 = L_300;
		double L_302 = (L_299)->GetAt(static_cast<il2cpp_array_size_t>(L_301));
		V_39 = L_302;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_303;
		L_303 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(__this, NULL);
		int32_t L_304 = V_25;
		double L_305 = V_38;
		double L_306 = V_23;
		double L_307 = V_39;
		double L_308 = V_38;
		double L_309 = V_24;
		NullCheck(L_303);
		(L_303)->SetAt(static_cast<il2cpp_array_size_t>(L_304), (double)((double)il2cpp_codegen_subtract(L_305, ((double)il2cpp_codegen_multiply(L_306, ((double)il2cpp_codegen_add(L_307, ((double)il2cpp_codegen_multiply(L_308, L_309)))))))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_310;
		L_310 = U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline(__this, NULL);
		int32_t L_311 = V_26;
		double L_312 = V_39;
		double L_313 = V_23;
		double L_314 = V_38;
		double L_315 = V_39;
		double L_316 = V_24;
		NullCheck(L_310);
		(L_310)->SetAt(static_cast<il2cpp_array_size_t>(L_311), (double)((double)il2cpp_codegen_add(L_312, ((double)il2cpp_codegen_multiply(L_313, ((double)il2cpp_codegen_subtract(L_314, ((double)il2cpp_codegen_multiply(L_315, L_316)))))))));
		int32_t L_317 = V_37;
		V_37 = ((int32_t)il2cpp_codegen_add(L_317, 1));
		int32_t L_318 = V_25;
		V_25 = ((int32_t)il2cpp_codegen_add(L_318, 1));
		int32_t L_319 = V_26;
		V_26 = ((int32_t)il2cpp_codegen_add(L_319, 1));
	}

IL_0572:
	{
		int32_t L_320 = V_37;
		int32_t L_321;
		L_321 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(__this, NULL);
		if ((((int32_t)L_320) < ((int32_t)L_321)))
		{
			goto IL_051c;
		}
	}

IL_057c:
	{
		int32_t L_322 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_322, 1));
		int32_t L_323 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_323, 1));
	}

IL_0588:
	{
		int32_t L_324 = V_17;
		int32_t L_325;
		L_325 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(__this, NULL);
		if ((((int32_t)L_324) < ((int32_t)L_325)))
		{
			goto IL_01e1;
		}
	}
	{
		int32_t L_326 = V_15;
		int32_t L_327 = V_10;
		int32_t L_328;
		L_328 = U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline(__this, NULL);
		V_10 = ((int32_t)il2cpp_codegen_add(L_327, L_328));
		int32_t L_329 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_329, 1));
	}

IL_05b1:
	{
		int32_t L_330 = V_15;
		int32_t L_331;
		L_331 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(__this, NULL);
		if ((((int32_t)L_330) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_331, 1)))))
		{
			goto IL_01cd;
		}
	}
	{
		V_40 = 0;
		goto IL_05f0;
	}

IL_05c5:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_332 = V_0;
		int32_t L_333 = V_40;
		NullCheck(L_332);
		double* L_334 = ((L_332)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_333)));
		double L_335 = *((double*)L_334);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_336 = V_1;
		int32_t L_337 = V_40;
		NullCheck(L_336);
		int32_t L_338 = L_337;
		double L_339 = (L_336)->GetAt(static_cast<il2cpp_array_size_t>(L_338));
		*((double*)L_334) = (double)((double)il2cpp_codegen_add(L_335, L_339));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_340 = V_2;
		int32_t L_341 = V_40;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_342 = V_0;
		int32_t L_343 = V_40;
		NullCheck(L_342);
		int32_t L_344 = L_343;
		double L_345 = (L_342)->GetAt(static_cast<il2cpp_array_size_t>(L_344));
		NullCheck(L_340);
		(L_340)->SetAt(static_cast<il2cpp_array_size_t>(L_341), (double)L_345);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_346 = V_1;
		int32_t L_347 = V_40;
		NullCheck(L_346);
		(L_346)->SetAt(static_cast<il2cpp_array_size_t>(L_347), (double)(0.0));
		int32_t L_348 = V_40;
		V_40 = ((int32_t)il2cpp_codegen_add(L_348, 1));
	}

IL_05f0:
	{
		int32_t L_349 = V_40;
		int32_t L_350;
		L_350 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(__this, NULL);
		if ((((int32_t)L_349) < ((int32_t)L_350)))
		{
			goto IL_05c5;
		}
	}
	{
		int32_t L_351 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_351, 1));
	}

IL_0600:
	{
		int32_t L_352 = V_8;
		if ((((int32_t)L_352) <= ((int32_t)((int32_t)50))))
		{
			goto IL_010c;
		}
	}

IL_0609:
	{
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3** L_353 = p0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_354 = V_2;
		int32_t L_355;
		L_355 = U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline(__this, NULL);
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_356 = (U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3*)il2cpp_codegen_object_new(U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3_il2cpp_TypeInfo_var);
		NullCheck(L_356);
		U3Da8FU3D__ctor_m81C46FD7E2A23C0988AAA06D6738FE6557C85D8F(L_356, L_354, 0, L_355, NULL);
		*((RuntimeObject**)L_353) = (RuntimeObject*)L_356;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_353, (void*)(RuntimeObject*)L_356);
		return;
	}
}
// =a72= =a72=::=ccD2=(System.Collections.Generic.IList`1<System.Tuple`2<=a8F=,=a8F=>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* U3Da72U3D_U3DccD2U3D_m4DCE86251CE7C4F2F7CE8E224FAFB54ECBB3DB6B (RuntimeObject* p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t92267DED5FA52194B916160CB74C7DAA99D974E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tE1761D37BF13B1D1869E606734317EF0FC903B67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item1_m86F50E5081DC2F94A3D838C7C8F9E7F52F18F4D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item2_m149F088C73FA6853C9AACAABA740324D885A7404_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Dba10U3DU5BU5DU5BU5D_t26AD4E6385AE94048B1A2BD5D0846E481D967832_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Dba10U3DU5BU5D_t7DCA8B587918C44E6A024063E9B6D68021C52945_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Dba10U3D_tB4E39C735B5CE1F4F0BD0E3094BA8F4A0DB3765A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3Dba10U3DU5BU5DU5BU5D_t26AD4E6385AE94048B1A2BD5D0846E481D967832* V_1 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_2 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	double V_7 = 0.0;
	{
		RuntimeObject* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15D1491DF34184D383348E060DC5EEB7C5F37B89)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da72U3D_U3DccD2U3D_m4DCE86251CE7C4F2F7CE8E224FAFB54ECBB3DB6B_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = p0;
		NullCheck(L_2);
		Tuple_2_tF85E3CCE7EC534DB0FBEF647C171160416163449* L_3;
		L_3 = InterfaceFuncInvoker1< Tuple_2_tF85E3CCE7EC534DB0FBEF647C171160416163449*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Tuple`2<=a8F=,=a8F=>>::get_Item(System.Int32) */, IList_1_tE1761D37BF13B1D1869E606734317EF0FC903B67_il2cpp_TypeInfo_var, L_2, 0);
		NullCheck(L_3);
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_4;
		L_4 = Tuple_2_get_Item1_m86F50E5081DC2F94A3D838C7C8F9E7F52F18F4D1_inline(L_3, Tuple_2_get_Item1_m86F50E5081DC2F94A3D838C7C8F9E7F52F18F4D1_RuntimeMethod_var);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = U3Da8FU3D_U3Dcc6FU3D_m1684DC7C36C51B01B5C703AAFCDFFDD40D4E8B4F_inline(L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		RuntimeObject* L_7 = p0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Tuple`2<=a8F=,=a8F=>>::get_Count() */, ICollection_1_t92267DED5FA52194B916160CB74C7DAA99D974E0_il2cpp_TypeInfo_var, L_7);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_6, 1))) <= ((int32_t)L_8)))
		{
			goto IL_0036;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2506E0C72D0C9223C3B1DD659E561E3C7E9D41AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da72U3D_U3DccD2U3D_m4DCE86251CE7C4F2F7CE8E224FAFB54ECBB3DB6B_RuntimeMethod_var)));
	}

IL_0036:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)2)))
		{
			goto IL_0045;
		}
	}
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_11 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral131054F07E39EC19C8A4BA303006B843A86593BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da72U3D_U3DccD2U3D_m4DCE86251CE7C4F2F7CE8E224FAFB54ECBB3DB6B_RuntimeMethod_var)));
	}

IL_0045:
	{
		RuntimeObject* L_12 = p0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Tuple`2<=a8F=,=a8F=>>::get_Count() */, ICollection_1_t92267DED5FA52194B916160CB74C7DAA99D974E0_il2cpp_TypeInfo_var, L_12);
		if ((((int32_t)L_13) == ((int32_t)4)))
		{
			goto IL_0059;
		}
	}
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_14 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2E322AFD549EF9F59EDA98039EE5065CE3B38E42)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da72U3D_U3DccD2U3D_m4DCE86251CE7C4F2F7CE8E224FAFB54ECBB3DB6B_RuntimeMethod_var)));
	}

IL_0059:
	{
		int32_t L_15 = V_0;
		int32_t L_16 = V_0;
		U3Dba10U3DU5BU5DU5BU5D_t26AD4E6385AE94048B1A2BD5D0846E481D967832* L_17 = (U3Dba10U3DU5BU5DU5BU5D_t26AD4E6385AE94048B1A2BD5D0846E481D967832*)(U3Dba10U3DU5BU5DU5BU5D_t26AD4E6385AE94048B1A2BD5D0846E481D967832*)SZArrayNew(U3Dba10U3DU5BU5DU5BU5D_t26AD4E6385AE94048B1A2BD5D0846E481D967832_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_15, 1)), 2)), L_16)));
		V_1 = L_17;
		V_4 = 0;
		goto IL_00c5;
	}

IL_006b:
	{
		U3Dba10U3DU5BU5DU5BU5D_t26AD4E6385AE94048B1A2BD5D0846E481D967832* L_18 = V_1;
		int32_t L_19 = V_4;
		int32_t L_20 = V_0;
		int32_t L_21 = V_0;
		U3Dba10U3DU5BU5D_t7DCA8B587918C44E6A024063E9B6D68021C52945* L_22 = (U3Dba10U3DU5BU5D_t7DCA8B587918C44E6A024063E9B6D68021C52945*)(U3Dba10U3DU5BU5D_t7DCA8B587918C44E6A024063E9B6D68021C52945*)SZArrayNew(U3Dba10U3DU5BU5D_t7DCA8B587918C44E6A024063E9B6D68021C52945_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_20, 1)), 2)), L_21)));
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_22);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (U3Dba10U3DU5BU5D_t7DCA8B587918C44E6A024063E9B6D68021C52945*)L_22);
		V_5 = 0;
		goto IL_00b5;
	}

IL_0080:
	{
		U3Dba10U3DU5BU5DU5BU5D_t26AD4E6385AE94048B1A2BD5D0846E481D967832* L_23 = V_1;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		U3Dba10U3DU5BU5D_t7DCA8B587918C44E6A024063E9B6D68021C52945* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		int32_t L_27 = V_5;
		U3Dba10U3D_tB4E39C735B5CE1F4F0BD0E3094BA8F4A0DB3765A* L_28 = (U3Dba10U3D_tB4E39C735B5CE1F4F0BD0E3094BA8F4A0DB3765A*)il2cpp_codegen_object_new(U3Dba10U3D_tB4E39C735B5CE1F4F0BD0E3094BA8F4A0DB3765A_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		U3Dba10U3D__ctor_m00369DF4BBF1187C6D90B93A54E77467B1A04FA2(L_28, NULL);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_28);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (U3Dba10U3D_tB4E39C735B5CE1F4F0BD0E3094BA8F4A0DB3765A*)L_28);
		U3Dba10U3DU5BU5DU5BU5D_t26AD4E6385AE94048B1A2BD5D0846E481D967832* L_29 = V_1;
		int32_t L_30 = V_4;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		U3Dba10U3DU5BU5D_t7DCA8B587918C44E6A024063E9B6D68021C52945* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		int32_t L_33 = V_5;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		U3Dba10U3D_tB4E39C735B5CE1F4F0BD0E3094BA8F4A0DB3765A* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		U3Dba10U3D_U3Dcec1U3D_mFE598B342E14D7DD8806A5DEA1D578B79F53E607_inline(L_35, (0.0), NULL);
		U3Dba10U3DU5BU5DU5BU5D_t26AD4E6385AE94048B1A2BD5D0846E481D967832* L_36 = V_1;
		int32_t L_37 = V_4;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		U3Dba10U3DU5BU5D_t7DCA8B587918C44E6A024063E9B6D68021C52945* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		int32_t L_40 = V_5;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		U3Dba10U3D_tB4E39C735B5CE1F4F0BD0E3094BA8F4A0DB3765A* L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		int32_t L_43 = V_5;
		NullCheck(L_42);
		U3Dba10U3D_U3DcecfU3D_mBEBEF567FFF40F9C7A58409866D369236F7439CF_inline(L_42, L_43, NULL);
		int32_t L_44 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00b5:
	{
		int32_t L_45 = V_5;
		U3Dba10U3DU5BU5DU5BU5D_t26AD4E6385AE94048B1A2BD5D0846E481D967832* L_46 = V_1;
		int32_t L_47 = V_4;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		U3Dba10U3DU5BU5D_t7DCA8B587918C44E6A024063E9B6D68021C52945* L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_49);
		if ((((int32_t)L_45) < ((int32_t)((int32_t)(((RuntimeArray*)L_49)->max_length)))))
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_50 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_00c5:
	{
		int32_t L_51 = V_4;
		U3Dba10U3DU5BU5DU5BU5D_t26AD4E6385AE94048B1A2BD5D0846E481D967832* L_52 = V_1;
		NullCheck(L_52);
		if ((((int32_t)L_51) < ((int32_t)((int32_t)(((RuntimeArray*)L_52)->max_length)))))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_53 = V_0;
		int32_t L_54 = V_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_55 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_53, 1)), 2)), L_54)));
		V_2 = L_55;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_56 = V_2;
		NullCheck((RuntimeArray*)L_56);
		Array_Initialize_mA2B5E07BC65B448E268C932D5A686F3A50DB0A82((RuntimeArray*)L_56, NULL);
		int32_t L_57 = V_0;
		int32_t L_58 = V_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_59 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_57, 1)), 2)), L_58)), 1)));
		V_3 = L_59;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_60 = V_3;
		NullCheck((RuntimeArray*)L_60);
		Array_Initialize_mA2B5E07BC65B448E268C932D5A686F3A50DB0A82((RuntimeArray*)L_60, NULL);
		V_6 = 0;
		goto IL_0294;
	}

IL_00fc:
	{
		U3Dba10U3DU5BU5DU5BU5D_t26AD4E6385AE94048B1A2BD5D0846E481D967832* L_61 = V_1;
		int32_t L_62 = V_6;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		U3Dba10U3DU5BU5D_t7DCA8B587918C44E6A024063E9B6D68021C52945* L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		NullCheck(L_64);
		int32_t L_65 = 0;
		U3Dba10U3D_tB4E39C735B5CE1F4F0BD0E3094BA8F4A0DB3765A* L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		U3Dba10U3DU5BU5DU5BU5D_t26AD4E6385AE94048B1A2BD5D0846E481D967832* L_67 = V_1;
		int32_t L_68 = V_6;
		NullCheck(L_67);
		int32_t L_69 = ((int32_t)il2cpp_codegen_add(L_68, 4));
		U3Dba10U3DU5BU5D_t7DCA8B587918C44E6A024063E9B6D68021C52945* L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_70);
		int32_t L_71 = 3;
		U3Dba10U3D_tB4E39C735B5CE1F4F0BD0E3094BA8F4A0DB3765A* L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		RuntimeObject* L_73 = p0;
		int32_t L_74 = V_6;
		NullCheck(L_73);
		Tuple_2_tF85E3CCE7EC534DB0FBEF647C171160416163449* L_75;
		L_75 = InterfaceFuncInvoker1< Tuple_2_tF85E3CCE7EC534DB0FBEF647C171160416163449*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Tuple`2<=a8F=,=a8F=>>::get_Item(System.Int32) */, IList_1_tE1761D37BF13B1D1869E606734317EF0FC903B67_il2cpp_TypeInfo_var, L_73, L_74);
		NullCheck(L_75);
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_76;
		L_76 = Tuple_2_get_Item1_m86F50E5081DC2F94A3D838C7C8F9E7F52F18F4D1_inline(L_75, Tuple_2_get_Item1_m86F50E5081DC2F94A3D838C7C8F9E7F52F18F4D1_RuntimeMethod_var);
		NullCheck(L_76);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_77;
		L_77 = U3Da8FU3D_U3Dcc6EU3D_mBB69AB7F608B84B329D1B1588B12E7703C637829_inline(L_76, NULL);
		NullCheck(L_77);
		int32_t L_78 = 0;
		double L_79 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		double L_80 = L_79;
		V_7 = L_80;
		NullCheck(L_72);
		U3Dba10U3D_U3Dcec1U3D_mFE598B342E14D7DD8806A5DEA1D578B79F53E607_inline(L_72, L_80, NULL);
		double L_81 = V_7;
		NullCheck(L_66);
		U3Dba10U3D_U3Dcec1U3D_mFE598B342E14D7DD8806A5DEA1D578B79F53E607_inline(L_66, L_81, NULL);
		U3Dba10U3DU5BU5DU5BU5D_t26AD4E6385AE94048B1A2BD5D0846E481D967832* L_82 = V_1;
		int32_t L_83 = V_6;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		U3Dba10U3DU5BU5D_t7DCA8B587918C44E6A024063E9B6D68021C52945* L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_85);
		int32_t L_86 = 1;
		U3Dba10U3D_tB4E39C735B5CE1F4F0BD0E3094BA8F4A0DB3765A* L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		U3Dba10U3DU5BU5DU5BU5D_t26AD4E6385AE94048B1A2BD5D0846E481D967832* L_88 = V_1;
		int32_t L_89 = V_6;
		NullCheck(L_88);
		int32_t L_90 = ((int32_t)il2cpp_codegen_add(L_89, 4));
		U3Dba10U3DU5BU5D_t7DCA8B587918C44E6A024063E9B6D68021C52945* L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		NullCheck(L_91);
		int32_t L_92 = 4;
		U3Dba10U3D_tB4E39C735B5CE1F4F0BD0E3094BA8F4A0DB3765A* L_93 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		RuntimeObject* L_94 = p0;
		int32_t L_95 = V_6;
		NullCheck(L_94);
		Tuple_2_tF85E3CCE7EC534DB0FBEF647C171160416163449* L_96;
		L_96 = InterfaceFuncInvoker1< Tuple_2_tF85E3CCE7EC534DB0FBEF647C171160416163449*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Tuple`2<=a8F=,=a8F=>>::get_Item(System.Int32) */, IList_1_tE1761D37BF13B1D1869E606734317EF0FC903B67_il2cpp_TypeInfo_var, L_94, L_95);
		NullCheck(L_96);
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_97;
		L_97 = Tuple_2_get_Item1_m86F50E5081DC2F94A3D838C7C8F9E7F52F18F4D1_inline(L_96, Tuple_2_get_Item1_m86F50E5081DC2F94A3D838C7C8F9E7F52F18F4D1_RuntimeMethod_var);
		NullCheck(L_97);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_98;
		L_98 = U3Da8FU3D_U3Dcc6EU3D_mBB69AB7F608B84B329D1B1588B12E7703C637829_inline(L_97, NULL);
		NullCheck(L_98);
		int32_t L_99 = 1;
		double L_100 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		double L_101 = L_100;
		V_7 = L_101;
		NullCheck(L_93);
		U3Dba10U3D_U3Dcec1U3D_mFE598B342E14D7DD8806A5DEA1D578B79F53E607_inline(L_93, L_101, NULL);
		double L_102 = V_7;
		NullCheck(L_87);
		U3Dba10U3D_U3Dcec1U3D_mFE598B342E14D7DD8806A5DEA1D578B79F53E607_inline(L_87, L_102, NULL);
		U3Dba10U3DU5BU5DU5BU5D_t26AD4E6385AE94048B1A2BD5D0846E481D967832* L_103 = V_1;
		int32_t L_104 = V_6;
		NullCheck(L_103);
		int32_t L_105 = L_104;
		U3Dba10U3DU5BU5D_t7DCA8B587918C44E6A024063E9B6D68021C52945* L_106 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		NullCheck(L_106);
		int32_t L_107 = 2;
		U3Dba10U3D_tB4E39C735B5CE1F4F0BD0E3094BA8F4A0DB3765A* L_108 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		U3Dba10U3DU5BU5DU5BU5D_t26AD4E6385AE94048B1A2BD5D0846E481D967832* L_109 = V_1;
		int32_t L_110 = V_6;
		NullCheck(L_109);
		int32_t L_111 = ((int32_t)il2cpp_codegen_add(L_110, 4));
		U3Dba10U3DU5BU5D_t7DCA8B587918C44E6A024063E9B6D68021C52945* L_112 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		NullCheck(L_112);
		int32_t L_113 = 5;
		U3Dba10U3D_tB4E39C735B5CE1F4F0BD0E3094BA8F4A0DB3765A* L_114 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		double L_115 = (1.0);
		V_7 = L_115;
		NullCheck(L_114);
		U3Dba10U3D_U3Dcec1U3D_mFE598B342E14D7DD8806A5DEA1D578B79F53E607_inline(L_114, L_115, NULL);
		double L_116 = V_7;
		NullCheck(L_108);
		U3Dba10U3D_U3Dcec1U3D_mFE598B342E14D7DD8806A5DEA1D578B79F53E607_inline(L_108, L_116, NULL);
		U3Dba10U3DU5BU5DU5BU5D_t26AD4E6385AE94048B1A2BD5D0846E481D967832* L_117 = V_1;
		int32_t L_118 = V_6;
		NullCheck(L_117);
		int32_t L_119 = L_118;
		U3Dba10U3DU5BU5D_t7DCA8B587918C44E6A024063E9B6D68021C52945* L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		NullCheck(L_120);
		int32_t L_121 = 6;
		U3Dba10U3D_tB4E39C735B5CE1F4F0BD0E3094BA8F4A0DB3765A* L_122 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		RuntimeObject* L_123 = p0;
		int32_t L_124 = V_6;
		NullCheck(L_123);
		Tuple_2_tF85E3CCE7EC534DB0FBEF647C171160416163449* L_125;
		L_125 = InterfaceFuncInvoker1< Tuple_2_tF85E3CCE7EC534DB0FBEF647C171160416163449*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Tuple`2<=a8F=,=a8F=>>::get_Item(System.Int32) */, IList_1_tE1761D37BF13B1D1869E606734317EF0FC903B67_il2cpp_TypeInfo_var, L_123, L_124);
		NullCheck(L_125);
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_126;
		L_126 = Tuple_2_get_Item1_m86F50E5081DC2F94A3D838C7C8F9E7F52F18F4D1_inline(L_125, Tuple_2_get_Item1_m86F50E5081DC2F94A3D838C7C8F9E7F52F18F4D1_RuntimeMethod_var);
		NullCheck(L_126);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_127;
		L_127 = U3Da8FU3D_U3Dcc6EU3D_mBB69AB7F608B84B329D1B1588B12E7703C637829_inline(L_126, NULL);
		NullCheck(L_127);
		int32_t L_128 = 0;
		double L_129 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		RuntimeObject* L_130 = p0;
		int32_t L_131 = V_6;
		NullCheck(L_130);
		Tuple_2_tF85E3CCE7EC534DB0FBEF647C171160416163449* L_132;
		L_132 = InterfaceFuncInvoker1< Tuple_2_tF85E3CCE7EC534DB0FBEF647C171160416163449*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Tuple`2<=a8F=,=a8F=>>::get_Item(System.Int32) */, IList_1_tE1761D37BF13B1D1869E606734317EF0FC903B67_il2cpp_TypeInfo_var, L_130, L_131);
		NullCheck(L_132);
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_133;
		L_133 = Tuple_2_get_Item2_m149F088C73FA6853C9AACAABA740324D885A7404_inline(L_132, Tuple_2_get_Item2_m149F088C73FA6853C9AACAABA740324D885A7404_RuntimeMethod_var);
		NullCheck(L_133);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_134;
		L_134 = U3Da8FU3D_U3Dcc6EU3D_mBB69AB7F608B84B329D1B1588B12E7703C637829_inline(L_133, NULL);
		NullCheck(L_134);
		int32_t L_135 = 0;
		double L_136 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		NullCheck(L_122);
		U3Dba10U3D_U3Dcec1U3D_mFE598B342E14D7DD8806A5DEA1D578B79F53E607_inline(L_122, ((double)il2cpp_codegen_multiply(((-L_129)), L_136)), NULL);
		U3Dba10U3DU5BU5DU5BU5D_t26AD4E6385AE94048B1A2BD5D0846E481D967832* L_137 = V_1;
		int32_t L_138 = V_6;
		NullCheck(L_137);
		int32_t L_139 = L_138;
		U3Dba10U3DU5BU5D_t7DCA8B587918C44E6A024063E9B6D68021C52945* L_140 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		NullCheck(L_140);
		int32_t L_141 = 7;
		U3Dba10U3D_tB4E39C735B5CE1F4F0BD0E3094BA8F4A0DB3765A* L_142 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		RuntimeObject* L_143 = p0;
		int32_t L_144 = V_6;
		NullCheck(L_143);
		Tuple_2_tF85E3CCE7EC534DB0FBEF647C171160416163449* L_145;
		L_145 = InterfaceFuncInvoker1< Tuple_2_tF85E3CCE7EC534DB0FBEF647C171160416163449*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Tuple`2<=a8F=,=a8F=>>::get_Item(System.Int32) */, IList_1_tE1761D37BF13B1D1869E606734317EF0FC903B67_il2cpp_TypeInfo_var, L_143, L_144);
		NullCheck(L_145);
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_146;
		L_146 = Tuple_2_get_Item1_m86F50E5081DC2F94A3D838C7C8F9E7F52F18F4D1_inline(L_145, Tuple_2_get_Item1_m86F50E5081DC2F94A3D838C7C8F9E7F52F18F4D1_RuntimeMethod_var);
		NullCheck(L_146);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_147;
		L_147 = U3Da8FU3D_U3Dcc6EU3D_mBB69AB7F608B84B329D1B1588B12E7703C637829_inline(L_146, NULL);
		NullCheck(L_147);
		int32_t L_148 = 1;
		double L_149 = (L_147)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
		RuntimeObject* L_150 = p0;
		int32_t L_151 = V_6;
		NullCheck(L_150);
		Tuple_2_tF85E3CCE7EC534DB0FBEF647C171160416163449* L_152;
		L_152 = InterfaceFuncInvoker1< Tuple_2_tF85E3CCE7EC534DB0FBEF647C171160416163449*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Tuple`2<=a8F=,=a8F=>>::get_Item(System.Int32) */, IList_1_tE1761D37BF13B1D1869E606734317EF0FC903B67_il2cpp_TypeInfo_var, L_150, L_151);
		NullCheck(L_152);
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_153;
		L_153 = Tuple_2_get_Item2_m149F088C73FA6853C9AACAABA740324D885A7404_inline(L_152, Tuple_2_get_Item2_m149F088C73FA6853C9AACAABA740324D885A7404_RuntimeMethod_var);
		NullCheck(L_153);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_154;
		L_154 = U3Da8FU3D_U3Dcc6EU3D_mBB69AB7F608B84B329D1B1588B12E7703C637829_inline(L_153, NULL);
		NullCheck(L_154);
		int32_t L_155 = 0;
		double L_156 = (L_154)->GetAt(static_cast<il2cpp_array_size_t>(L_155));
		NullCheck(L_142);
		U3Dba10U3D_U3Dcec1U3D_mFE598B342E14D7DD8806A5DEA1D578B79F53E607_inline(L_142, ((double)il2cpp_codegen_multiply(((-L_149)), L_156)), NULL);
		U3Dba10U3DU5BU5DU5BU5D_t26AD4E6385AE94048B1A2BD5D0846E481D967832* L_157 = V_1;
		int32_t L_158 = V_6;
		NullCheck(L_157);
		int32_t L_159 = ((int32_t)il2cpp_codegen_add(L_158, 4));
		U3Dba10U3DU5BU5D_t7DCA8B587918C44E6A024063E9B6D68021C52945* L_160 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		NullCheck(L_160);
		int32_t L_161 = 6;
		U3Dba10U3D_tB4E39C735B5CE1F4F0BD0E3094BA8F4A0DB3765A* L_162 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
		RuntimeObject* L_163 = p0;
		int32_t L_164 = V_6;
		NullCheck(L_163);
		Tuple_2_tF85E3CCE7EC534DB0FBEF647C171160416163449* L_165;
		L_165 = InterfaceFuncInvoker1< Tuple_2_tF85E3CCE7EC534DB0FBEF647C171160416163449*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Tuple`2<=a8F=,=a8F=>>::get_Item(System.Int32) */, IList_1_tE1761D37BF13B1D1869E606734317EF0FC903B67_il2cpp_TypeInfo_var, L_163, L_164);
		NullCheck(L_165);
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_166;
		L_166 = Tuple_2_get_Item1_m86F50E5081DC2F94A3D838C7C8F9E7F52F18F4D1_inline(L_165, Tuple_2_get_Item1_m86F50E5081DC2F94A3D838C7C8F9E7F52F18F4D1_RuntimeMethod_var);
		NullCheck(L_166);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_167;
		L_167 = U3Da8FU3D_U3Dcc6EU3D_mBB69AB7F608B84B329D1B1588B12E7703C637829_inline(L_166, NULL);
		NullCheck(L_167);
		int32_t L_168 = 0;
		double L_169 = (L_167)->GetAt(static_cast<il2cpp_array_size_t>(L_168));
		RuntimeObject* L_170 = p0;
		int32_t L_171 = V_6;
		NullCheck(L_170);
		Tuple_2_tF85E3CCE7EC534DB0FBEF647C171160416163449* L_172;
		L_172 = InterfaceFuncInvoker1< Tuple_2_tF85E3CCE7EC534DB0FBEF647C171160416163449*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Tuple`2<=a8F=,=a8F=>>::get_Item(System.Int32) */, IList_1_tE1761D37BF13B1D1869E606734317EF0FC903B67_il2cpp_TypeInfo_var, L_170, L_171);
		NullCheck(L_172);
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_173;
		L_173 = Tuple_2_get_Item2_m149F088C73FA6853C9AACAABA740324D885A7404_inline(L_172, Tuple_2_get_Item2_m149F088C73FA6853C9AACAABA740324D885A7404_RuntimeMethod_var);
		NullCheck(L_173);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_174;
		L_174 = U3Da8FU3D_U3Dcc6EU3D_mBB69AB7F608B84B329D1B1588B12E7703C637829_inline(L_173, NULL);
		NullCheck(L_174);
		int32_t L_175 = 1;
		double L_176 = (L_174)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
		NullCheck(L_162);
		U3Dba10U3D_U3Dcec1U3D_mFE598B342E14D7DD8806A5DEA1D578B79F53E607_inline(L_162, ((double)il2cpp_codegen_multiply(((-L_169)), L_176)), NULL);
		U3Dba10U3DU5BU5DU5BU5D_t26AD4E6385AE94048B1A2BD5D0846E481D967832* L_177 = V_1;
		int32_t L_178 = V_6;
		NullCheck(L_177);
		int32_t L_179 = ((int32_t)il2cpp_codegen_add(L_178, 4));
		U3Dba10U3DU5BU5D_t7DCA8B587918C44E6A024063E9B6D68021C52945* L_180 = (L_177)->GetAt(static_cast<il2cpp_array_size_t>(L_179));
		NullCheck(L_180);
		int32_t L_181 = 7;
		U3Dba10U3D_tB4E39C735B5CE1F4F0BD0E3094BA8F4A0DB3765A* L_182 = (L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		RuntimeObject* L_183 = p0;
		int32_t L_184 = V_6;
		NullCheck(L_183);
		Tuple_2_tF85E3CCE7EC534DB0FBEF647C171160416163449* L_185;
		L_185 = InterfaceFuncInvoker1< Tuple_2_tF85E3CCE7EC534DB0FBEF647C171160416163449*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Tuple`2<=a8F=,=a8F=>>::get_Item(System.Int32) */, IList_1_tE1761D37BF13B1D1869E606734317EF0FC903B67_il2cpp_TypeInfo_var, L_183, L_184);
		NullCheck(L_185);
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_186;
		L_186 = Tuple_2_get_Item1_m86F50E5081DC2F94A3D838C7C8F9E7F52F18F4D1_inline(L_185, Tuple_2_get_Item1_m86F50E5081DC2F94A3D838C7C8F9E7F52F18F4D1_RuntimeMethod_var);
		NullCheck(L_186);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_187;
		L_187 = U3Da8FU3D_U3Dcc6EU3D_mBB69AB7F608B84B329D1B1588B12E7703C637829_inline(L_186, NULL);
		NullCheck(L_187);
		int32_t L_188 = 1;
		double L_189 = (L_187)->GetAt(static_cast<il2cpp_array_size_t>(L_188));
		RuntimeObject* L_190 = p0;
		int32_t L_191 = V_6;
		NullCheck(L_190);
		Tuple_2_tF85E3CCE7EC534DB0FBEF647C171160416163449* L_192;
		L_192 = InterfaceFuncInvoker1< Tuple_2_tF85E3CCE7EC534DB0FBEF647C171160416163449*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Tuple`2<=a8F=,=a8F=>>::get_Item(System.Int32) */, IList_1_tE1761D37BF13B1D1869E606734317EF0FC903B67_il2cpp_TypeInfo_var, L_190, L_191);
		NullCheck(L_192);
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_193;
		L_193 = Tuple_2_get_Item2_m149F088C73FA6853C9AACAABA740324D885A7404_inline(L_192, Tuple_2_get_Item2_m149F088C73FA6853C9AACAABA740324D885A7404_RuntimeMethod_var);
		NullCheck(L_193);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_194;
		L_194 = U3Da8FU3D_U3Dcc6EU3D_mBB69AB7F608B84B329D1B1588B12E7703C637829_inline(L_193, NULL);
		NullCheck(L_194);
		int32_t L_195 = 1;
		double L_196 = (L_194)->GetAt(static_cast<il2cpp_array_size_t>(L_195));
		NullCheck(L_182);
		U3Dba10U3D_U3Dcec1U3D_mFE598B342E14D7DD8806A5DEA1D578B79F53E607_inline(L_182, ((double)il2cpp_codegen_multiply(((-L_189)), L_196)), NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_197 = V_2;
		int32_t L_198 = V_6;
		RuntimeObject* L_199 = p0;
		int32_t L_200 = V_6;
		NullCheck(L_199);
		Tuple_2_tF85E3CCE7EC534DB0FBEF647C171160416163449* L_201;
		L_201 = InterfaceFuncInvoker1< Tuple_2_tF85E3CCE7EC534DB0FBEF647C171160416163449*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Tuple`2<=a8F=,=a8F=>>::get_Item(System.Int32) */, IList_1_tE1761D37BF13B1D1869E606734317EF0FC903B67_il2cpp_TypeInfo_var, L_199, L_200);
		NullCheck(L_201);
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_202;
		L_202 = Tuple_2_get_Item2_m149F088C73FA6853C9AACAABA740324D885A7404_inline(L_201, Tuple_2_get_Item2_m149F088C73FA6853C9AACAABA740324D885A7404_RuntimeMethod_var);
		NullCheck(L_202);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_203;
		L_203 = U3Da8FU3D_U3Dcc6EU3D_mBB69AB7F608B84B329D1B1588B12E7703C637829_inline(L_202, NULL);
		NullCheck(L_203);
		int32_t L_204 = 0;
		double L_205 = (L_203)->GetAt(static_cast<il2cpp_array_size_t>(L_204));
		NullCheck(L_197);
		(L_197)->SetAt(static_cast<il2cpp_array_size_t>(L_198), (double)L_205);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_206 = V_2;
		int32_t L_207 = V_6;
		RuntimeObject* L_208 = p0;
		int32_t L_209 = V_6;
		NullCheck(L_208);
		Tuple_2_tF85E3CCE7EC534DB0FBEF647C171160416163449* L_210;
		L_210 = InterfaceFuncInvoker1< Tuple_2_tF85E3CCE7EC534DB0FBEF647C171160416163449*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Tuple`2<=a8F=,=a8F=>>::get_Item(System.Int32) */, IList_1_tE1761D37BF13B1D1869E606734317EF0FC903B67_il2cpp_TypeInfo_var, L_208, L_209);
		NullCheck(L_210);
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_211;
		L_211 = Tuple_2_get_Item2_m149F088C73FA6853C9AACAABA740324D885A7404_inline(L_210, Tuple_2_get_Item2_m149F088C73FA6853C9AACAABA740324D885A7404_RuntimeMethod_var);
		NullCheck(L_211);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_212;
		L_212 = U3Da8FU3D_U3Dcc6EU3D_mBB69AB7F608B84B329D1B1588B12E7703C637829_inline(L_211, NULL);
		NullCheck(L_212);
		int32_t L_213 = 1;
		double L_214 = (L_212)->GetAt(static_cast<il2cpp_array_size_t>(L_213));
		NullCheck(L_206);
		(L_206)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_207, 4))), (double)L_214);
		int32_t L_215 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_215, 1));
	}

IL_0294:
	{
		int32_t L_216 = V_6;
		RuntimeObject* L_217 = p0;
		NullCheck(L_217);
		int32_t L_218;
		L_218 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Tuple`2<=a8F=,=a8F=>>::get_Count() */, ICollection_1_t92267DED5FA52194B916160CB74C7DAA99D974E0_il2cpp_TypeInfo_var, L_217);
		if ((((int32_t)L_216) < ((int32_t)L_218)))
		{
			goto IL_00fc;
		}
	}
	{
		U3Dba10U3DU5BU5DU5BU5D_t26AD4E6385AE94048B1A2BD5D0846E481D967832* L_219 = V_1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_220 = V_3;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_221 = V_2;
		U3Da7eU3D_U3DccCEU3D_m843E4876F27253B6C5B6F1BAAD45C4A43D6256DA(L_219, L_220, L_221, ((int32_t)200), (1.0E-10), NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_222 = V_3;
		NullCheck(L_222);
		(L_222)->SetAt(static_cast<il2cpp_array_size_t>(8), (double)(1.0));
		int32_t L_223 = V_0;
		int32_t L_224 = V_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_225 = V_3;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_226 = (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D*)il2cpp_codegen_object_new(U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D_il2cpp_TypeInfo_var);
		NullCheck(L_226);
		U3Da72U3D__ctor_m378872DEED2187C9D0177E3DBAB56E36E1A9E413(L_226, ((int32_t)il2cpp_codegen_add(L_223, 1)), ((int32_t)il2cpp_codegen_add(L_224, 1)), L_225, NULL);
		return L_226;
	}
}
// =a72= =a72=::=ccD3=(System.Collections.Generic.IList`1<System.Tuple`2<=a8F=,=a8F=>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* U3Da72U3D_U3DccD3U3D_mD73047510B55C3A1DAE82386ECA795CC12807E1A (RuntimeObject* p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t92267DED5FA52194B916160CB74C7DAA99D974E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t68C985BB3EFAB6573AB304EA7DAF4B0204FF79AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t72021ED206CD27BEEB5C3D10DF7C89F353F32648_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tE1761D37BF13B1D1869E606734317EF0FC903B67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item1_m86F50E5081DC2F94A3D838C7C8F9E7F52F18F4D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item2_m149F088C73FA6853C9AACAABA740324D885A7404_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da8FU3DU5BU5D_tA5801B19CFADA59A962C4D73671059B3D3822AA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3Da8FU3DU5BU5D_tA5801B19CFADA59A962C4D73671059B3D3822AA8* V_1 = NULL;
	U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* V_2 = NULL;
	U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* V_3 = NULL;
	U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* V_4 = NULL;
	U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* V_5 = NULL;
	int32_t V_6 = 0;
	RuntimeObject* V_7 = NULL;
	U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* V_8 = NULL;
	U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* V_16 = NULL;
	double V_17 = 0.0;
	int32_t V_18 = 0;
	U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* V_19 = NULL;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* V_23 = NULL;
	int32_t V_24 = 0;
	{
		RuntimeObject* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15D1491DF34184D383348E060DC5EEB7C5F37B89)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da72U3D_U3DccD3U3D_mD73047510B55C3A1DAE82386ECA795CC12807E1A_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = p0;
		NullCheck(L_2);
		Tuple_2_tF85E3CCE7EC534DB0FBEF647C171160416163449* L_3;
		L_3 = InterfaceFuncInvoker1< Tuple_2_tF85E3CCE7EC534DB0FBEF647C171160416163449*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Tuple`2<=a8F=,=a8F=>>::get_Item(System.Int32) */, IList_1_tE1761D37BF13B1D1869E606734317EF0FC903B67_il2cpp_TypeInfo_var, L_2, 0);
		NullCheck(L_3);
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_4;
		L_4 = Tuple_2_get_Item1_m86F50E5081DC2F94A3D838C7C8F9E7F52F18F4D1_inline(L_3, Tuple_2_get_Item1_m86F50E5081DC2F94A3D838C7C8F9E7F52F18F4D1_RuntimeMethod_var);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = U3Da8FU3D_U3Dcc6FU3D_m1684DC7C36C51B01B5C703AAFCDFFDD40D4E8B4F_inline(L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		RuntimeObject* L_7 = p0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Tuple`2<=a8F=,=a8F=>>::get_Count() */, ICollection_1_t92267DED5FA52194B916160CB74C7DAA99D974E0_il2cpp_TypeInfo_var, L_7);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_6, 1))) <= ((int32_t)L_8)))
		{
			goto IL_0036;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2506E0C72D0C9223C3B1DD659E561E3C7E9D41AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da72U3D_U3DccD3U3D_mD73047510B55C3A1DAE82386ECA795CC12807E1A_RuntimeMethod_var)));
	}

IL_0036:
	{
		int32_t L_10 = V_0;
		U3Da8FU3DU5BU5D_tA5801B19CFADA59A962C4D73671059B3D3822AA8* L_11 = (U3Da8FU3DU5BU5D_tA5801B19CFADA59A962C4D73671059B3D3822AA8*)(U3Da8FU3DU5BU5D_tA5801B19CFADA59A962C4D73671059B3D3822AA8*)SZArrayNew(U3Da8FU3DU5BU5D_tA5801B19CFADA59A962C4D73671059B3D3822AA8_il2cpp_TypeInfo_var, (uint32_t)L_10);
		V_1 = L_11;
		V_6 = 0;
		goto IL_0054;
	}

IL_0042:
	{
		U3Da8FU3DU5BU5D_tA5801B19CFADA59A962C4D73671059B3D3822AA8* L_12 = V_1;
		int32_t L_13 = V_6;
		int32_t L_14 = V_0;
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_15 = (U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3*)il2cpp_codegen_object_new(U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		U3Da8FU3D__ctor_mCC053C57FA6C93DE3036B6C25A9F85DB7829F9B5(L_15, ((int32_t)il2cpp_codegen_add(L_14, 1)), NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3*)L_15);
		int32_t L_16 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0054:
	{
		int32_t L_17 = V_6;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_0;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_21 = (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D*)il2cpp_codegen_object_new(U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		U3Da72U3D__ctor_m4A6DFDF5FDB11319F42795A034A92F123D4BA67C(L_21, ((int32_t)il2cpp_codegen_add(L_19, 1)), ((int32_t)il2cpp_codegen_add(L_20, 1)), NULL);
		V_2 = L_21;
		int32_t L_22 = V_0;
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_23 = (U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3*)il2cpp_codegen_object_new(U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		U3Da8FU3D__ctor_mCC053C57FA6C93DE3036B6C25A9F85DB7829F9B5(L_23, ((int32_t)il2cpp_codegen_add(L_22, 1)), NULL);
		V_3 = L_23;
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_24 = V_3;
		int32_t L_25 = V_0;
		NullCheck(L_24);
		U3Da8FU3D_U3Dcc6dU3D_m0B569B31D41E95FF927623963ABCE273B7384714(L_24, L_25, (1.0), NULL);
		RuntimeObject* L_26 = p0;
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Tuple`2<=a8F=,=a8F=>>::GetEnumerator() */, IEnumerable_1_t68C985BB3EFAB6573AB304EA7DAF4B0204FF79AB_il2cpp_TypeInfo_var, L_26);
		V_7 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0176:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_7;
					if (!L_28)
					{
						goto IL_0181;
					}
				}
				{
					RuntimeObject* L_29 = V_7;
					NullCheck(L_29);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_29);
				}

IL_0181:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0168_1;
			}

IL_008b_1:
			{
				RuntimeObject* L_30 = V_7;
				NullCheck(L_30);
				Tuple_2_tF85E3CCE7EC534DB0FBEF647C171160416163449* L_31;
				L_31 = InterfaceFuncInvoker0< Tuple_2_tF85E3CCE7EC534DB0FBEF647C171160416163449* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Tuple`2<=a8F=,=a8F=>>::get_Current() */, IEnumerator_1_t72021ED206CD27BEEB5C3D10DF7C89F353F32648_il2cpp_TypeInfo_var, L_30);
				Tuple_2_tF85E3CCE7EC534DB0FBEF647C171160416163449* L_32 = L_31;
				NullCheck(L_32);
				U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_33;
				L_33 = Tuple_2_get_Item1_m86F50E5081DC2F94A3D838C7C8F9E7F52F18F4D1_inline(L_32, Tuple_2_get_Item1_m86F50E5081DC2F94A3D838C7C8F9E7F52F18F4D1_RuntimeMethod_var);
				V_8 = L_33;
				NullCheck(L_32);
				U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_34;
				L_34 = Tuple_2_get_Item2_m149F088C73FA6853C9AACAABA740324D885A7404_inline(L_32, Tuple_2_get_Item2_m149F088C73FA6853C9AACAABA740324D885A7404_RuntimeMethod_var);
				V_9 = L_34;
				V_10 = 0;
				goto IL_00bd_1;
			}

IL_00a6_1:
			{
				U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_35 = V_3;
				int32_t L_36 = V_10;
				U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_37 = V_8;
				int32_t L_38 = V_10;
				NullCheck(L_37);
				double L_39;
				L_39 = U3Da8FU3D_U3Dcc6DU3D_mFC2E109CCA616464F32983ED84E77ADA0078ABF6(L_37, L_38, NULL);
				NullCheck(L_35);
				U3Da8FU3D_U3Dcc6dU3D_m0B569B31D41E95FF927623963ABCE273B7384714(L_35, L_36, L_39, NULL);
				int32_t L_40 = V_10;
				V_10 = ((int32_t)il2cpp_codegen_add(L_40, 1));
			}

IL_00bd_1:
			{
				int32_t L_41 = V_10;
				int32_t L_42 = V_0;
				if ((((int32_t)L_41) < ((int32_t)L_42)))
				{
					goto IL_00a6_1;
				}
			}
			{
				V_11 = 0;
				goto IL_0160_1;
			}

IL_00ca_1:
			{
				int32_t L_43 = V_11;
				V_12 = L_43;
				goto IL_0109_1;
			}

IL_00d0_1:
			{
				U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_44 = V_2;
				V_13 = L_44;
				int32_t L_45 = V_11;
				V_14 = L_45;
				int32_t L_46 = V_12;
				V_15 = L_46;
				U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_47 = V_13;
				int32_t L_48 = V_14;
				int32_t L_49 = V_15;
				U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_50 = V_13;
				int32_t L_51 = V_14;
				int32_t L_52 = V_15;
				NullCheck(L_50);
				double L_53;
				L_53 = U3Da72U3D_U3Dccc6U3D_m323850489F4D3AAD389FB35659D15F9276AD0495(L_50, L_51, L_52, NULL);
				U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_54 = V_3;
				int32_t L_55 = V_11;
				NullCheck(L_54);
				double L_56;
				L_56 = U3Da8FU3D_U3Dcc6DU3D_mFC2E109CCA616464F32983ED84E77ADA0078ABF6(L_54, L_55, NULL);
				U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_57 = V_3;
				int32_t L_58 = V_12;
				NullCheck(L_57);
				double L_59;
				L_59 = U3Da8FU3D_U3Dcc6DU3D_mFC2E109CCA616464F32983ED84E77ADA0078ABF6(L_57, L_58, NULL);
				NullCheck(L_47);
				U3Da72U3D_U3Dccc7U3D_m7A0E032BC9A5A87614BD1D760ADB984901308AFC(L_47, L_48, L_49, ((double)il2cpp_codegen_add(L_53, ((double)il2cpp_codegen_multiply(L_56, L_59)))), NULL);
				int32_t L_60 = V_12;
				V_12 = ((int32_t)il2cpp_codegen_add(L_60, 1));
			}

IL_0109_1:
			{
				int32_t L_61 = V_12;
				int32_t L_62 = V_0;
				if ((((int32_t)L_61) <= ((int32_t)L_62)))
				{
					goto IL_00d0_1;
				}
			}
			{
				int32_t L_63 = V_11;
				int32_t L_64 = V_0;
				if ((((int32_t)L_63) >= ((int32_t)L_64)))
				{
					goto IL_015a_1;
				}
			}
			{
				U3Da8FU3DU5BU5D_tA5801B19CFADA59A962C4D73671059B3D3822AA8* L_65 = V_1;
				int32_t L_66 = V_11;
				NullCheck(L_65);
				int32_t L_67 = L_66;
				U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
				V_16 = L_68;
				U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_69 = V_9;
				int32_t L_70 = V_11;
				NullCheck(L_69);
				double L_71;
				L_71 = U3Da8FU3D_U3Dcc6DU3D_mFC2E109CCA616464F32983ED84E77ADA0078ABF6(L_69, L_70, NULL);
				V_17 = L_71;
				V_18 = 0;
				goto IL_0155_1;
			}

IL_0129_1:
			{
				U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_72 = V_16;
				V_19 = L_72;
				int32_t L_73 = V_18;
				V_15 = L_73;
				U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_74 = V_19;
				int32_t L_75 = V_15;
				U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_76 = V_19;
				int32_t L_77 = V_15;
				NullCheck(L_76);
				double L_78;
				L_78 = U3Da8FU3D_U3Dcc6DU3D_mFC2E109CCA616464F32983ED84E77ADA0078ABF6(L_76, L_77, NULL);
				U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_79 = V_3;
				int32_t L_80 = V_18;
				NullCheck(L_79);
				double L_81;
				L_81 = U3Da8FU3D_U3Dcc6DU3D_mFC2E109CCA616464F32983ED84E77ADA0078ABF6(L_79, L_80, NULL);
				double L_82 = V_17;
				NullCheck(L_74);
				U3Da8FU3D_U3Dcc6dU3D_m0B569B31D41E95FF927623963ABCE273B7384714(L_74, L_75, ((double)il2cpp_codegen_add(L_78, ((double)il2cpp_codegen_multiply(L_81, L_82)))), NULL);
				int32_t L_83 = V_18;
				V_18 = ((int32_t)il2cpp_codegen_add(L_83, 1));
			}

IL_0155_1:
			{
				int32_t L_84 = V_18;
				int32_t L_85 = V_0;
				if ((((int32_t)L_84) <= ((int32_t)L_85)))
				{
					goto IL_0129_1;
				}
			}

IL_015a_1:
			{
				int32_t L_86 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_86, 1));
			}

IL_0160_1:
			{
				int32_t L_87 = V_11;
				int32_t L_88 = V_0;
				if ((((int32_t)L_87) <= ((int32_t)L_88)))
				{
					goto IL_00ca_1;
				}
			}

IL_0168_1:
			{
				RuntimeObject* L_89 = V_7;
				NullCheck(L_89);
				bool L_90;
				L_90 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_89);
				if (L_90)
				{
					goto IL_008b_1;
				}
			}
			{
				goto IL_0182;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0182:
	{
		V_20 = 0;
		goto IL_01b2;
	}

IL_0187:
	{
		V_21 = 0;
		goto IL_01a6;
	}

IL_018c:
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_91 = V_2;
		int32_t L_92 = V_20;
		int32_t L_93 = V_21;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_94 = V_2;
		int32_t L_95 = V_21;
		int32_t L_96 = V_20;
		NullCheck(L_94);
		double L_97;
		L_97 = U3Da72U3D_U3Dccc6U3D_m323850489F4D3AAD389FB35659D15F9276AD0495(L_94, L_95, L_96, NULL);
		NullCheck(L_91);
		U3Da72U3D_U3Dccc7U3D_m7A0E032BC9A5A87614BD1D760ADB984901308AFC(L_91, L_92, L_93, L_97, NULL);
		int32_t L_98 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_01a6:
	{
		int32_t L_99 = V_21;
		int32_t L_100 = V_20;
		if ((((int32_t)L_99) < ((int32_t)L_100)))
		{
			goto IL_018c;
		}
	}
	{
		int32_t L_101 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_101, 1));
	}

IL_01b2:
	{
		int32_t L_102 = V_20;
		int32_t L_103 = V_0;
		if ((((int32_t)L_102) <= ((int32_t)L_103)))
		{
			goto IL_0187;
		}
	}
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_104 = V_2;
		NullCheck(L_104);
		double L_105;
		L_105 = U3Da72U3D_U3DccDDU3D_mC87A1E571FC934D1C987AA91A15C6C4EC8001645(L_104, NULL);
		if ((!(((double)L_105) == ((double)(0.0)))))
		{
			goto IL_01ca;
		}
	}
	{
		return (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D*)NULL;
	}

IL_01ca:
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_106 = V_2;
		NullCheck(L_106);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_107;
		L_107 = U3Da72U3D_U3DccDCU3D_mED72B254B85851F21ADC24804CFB9A67162ACFD3(L_106, NULL);
		V_4 = L_107;
		int32_t L_108 = V_0;
		int32_t L_109 = V_0;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_110 = (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D*)il2cpp_codegen_object_new(U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D_il2cpp_TypeInfo_var);
		NullCheck(L_110);
		U3Da72U3D__ctor_m4A6DFDF5FDB11319F42795A034A92F123D4BA67C(L_110, ((int32_t)il2cpp_codegen_add(L_108, 1)), ((int32_t)il2cpp_codegen_add(L_109, 1)), NULL);
		V_5 = L_110;
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_111 = V_5;
		int32_t L_112 = V_0;
		int32_t L_113 = V_0;
		NullCheck(L_111);
		U3Da72U3D_U3Dccc7U3D_m7A0E032BC9A5A87614BD1D760ADB984901308AFC(L_111, L_112, L_113, (1.0), NULL);
		V_22 = 0;
		goto IL_022d;
	}

IL_01f6:
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_114 = V_4;
		U3Da8FU3DU5BU5D_tA5801B19CFADA59A962C4D73671059B3D3822AA8* L_115 = V_1;
		int32_t L_116 = V_22;
		NullCheck(L_115);
		int32_t L_117 = L_116;
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_119;
		L_119 = U3Da72U3D_op_Multiply_mF877262D434B6D7B2E98E9345D6499BC8B5747E7(L_114, L_118, NULL);
		V_23 = L_119;
		V_24 = 0;
		goto IL_0222;
	}

IL_0208:
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_120 = V_5;
		int32_t L_121 = V_22;
		int32_t L_122 = V_24;
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_123 = V_23;
		int32_t L_124 = V_24;
		NullCheck(L_123);
		double L_125;
		L_125 = U3Da8FU3D_U3Dcc6DU3D_mFC2E109CCA616464F32983ED84E77ADA0078ABF6(L_123, L_124, NULL);
		NullCheck(L_120);
		U3Da72U3D_U3Dccc7U3D_m7A0E032BC9A5A87614BD1D760ADB984901308AFC(L_120, L_121, L_122, L_125, NULL);
		int32_t L_126 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_add(L_126, 1));
	}

IL_0222:
	{
		int32_t L_127 = V_24;
		int32_t L_128 = V_0;
		if ((((int32_t)L_127) <= ((int32_t)L_128)))
		{
			goto IL_0208;
		}
	}
	{
		int32_t L_129 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_add(L_129, 1));
	}

IL_022d:
	{
		int32_t L_130 = V_22;
		int32_t L_131 = V_0;
		if ((((int32_t)L_130) < ((int32_t)L_131)))
		{
			goto IL_01f6;
		}
	}
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_132 = V_5;
		return L_132;
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
// System.Void =a73=::.ctor(=a8f=,=a8f=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da73U3D__ctor_m6EB476162502B57243B09741BDA5D48AAFC502ED (U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* __this, U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE p0, U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE p1, const RuntimeMethod* method) 
{
	{
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_0 = p0;
		double L_1 = L_0.___U3DdBFAU3D_4;
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_2 = p0;
		double L_3 = L_2.___U3DdBFaU3D_5;
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_4 = p1;
		double L_5 = L_4.___U3DdBFAU3D_4;
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_6 = p1;
		double L_7 = L_6.___U3DdBFaU3D_5;
		U3Da73U3D__ctor_m785507D16A03EE1898AF9010FFDAC9EF5F496962(__this, L_1, L_3, L_5, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3Da73U3D__ctor_m6EB476162502B57243B09741BDA5D48AAFC502ED_AdjustorThunk (RuntimeObject* __this, U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE p0, U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE p1, const RuntimeMethod* method)
{
	U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2*>(__this + _offset);
	U3Da73U3D__ctor_m6EB476162502B57243B09741BDA5D48AAFC502ED(_thisAdjusted, p0, p1, method);
}
// System.Void =a73=::.ctor(System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da73U3D__ctor_m785507D16A03EE1898AF9010FFDAC9EF5F496962 (U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* __this, double p0, double p1, double p2, double p3, const RuntimeMethod* method) 
{
	{
		double L_0 = p0;
		__this->___U3DdBD5U3D_2 = L_0;
		double L_1 = p1;
		__this->___U3DdBD6U3D_3 = L_1;
		double L_2 = p2;
		__this->___U3DdBD7U3D_4 = L_2;
		double L_3 = p3;
		__this->___U3DdBD8U3D_5 = L_3;
		return;
	}
}
IL2CPP_EXTERN_C  void U3Da73U3D__ctor_m785507D16A03EE1898AF9010FFDAC9EF5F496962_AdjustorThunk (RuntimeObject* __this, double p0, double p1, double p2, double p3, const RuntimeMethod* method)
{
	U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2*>(__this + _offset);
	U3Da73U3D__ctor_m785507D16A03EE1898AF9010FFDAC9EF5F496962(_thisAdjusted, p0, p1, p2, p3, method);
}
// =a73= =a73=::op_Addition(=a73=,=a73=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 U3Da73U3D_op_Addition_mDEA3611DF0FDF42F77F67CA4347C29539ADDF4BA (U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 p0, U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 p1, const RuntimeMethod* method) 
{
	{
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_0 = p0;
		double L_1 = L_0.___U3DdBD5U3D_2;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_2 = p1;
		double L_3 = L_2.___U3DdBD5U3D_2;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_4 = p0;
		double L_5 = L_4.___U3DdBD6U3D_3;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_6 = p1;
		double L_7 = L_6.___U3DdBD6U3D_3;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_8 = p0;
		double L_9 = L_8.___U3DdBD7U3D_4;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_10 = p1;
		double L_11 = L_10.___U3DdBD7U3D_4;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_12 = p0;
		double L_13 = L_12.___U3DdBD8U3D_5;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_14 = p1;
		double L_15 = L_14.___U3DdBD8U3D_5;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		U3Da73U3D__ctor_m785507D16A03EE1898AF9010FFDAC9EF5F496962((&L_16), ((double)il2cpp_codegen_add(L_1, L_3)), ((double)il2cpp_codegen_add(L_5, L_7)), ((double)il2cpp_codegen_add(L_9, L_11)), ((double)il2cpp_codegen_add(L_13, L_15)), /*hidden argument*/NULL);
		return L_16;
	}
}
// =a73= =a73=::op_Subtraction(=a73=,=a73=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 U3Da73U3D_op_Subtraction_m421299D3FBE9BA6AE420315CEBE3DDE7C15DC538 (U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 p0, U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 p1, const RuntimeMethod* method) 
{
	{
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_0 = p0;
		double L_1 = L_0.___U3DdBD5U3D_2;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_2 = p1;
		double L_3 = L_2.___U3DdBD5U3D_2;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_4 = p0;
		double L_5 = L_4.___U3DdBD6U3D_3;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_6 = p1;
		double L_7 = L_6.___U3DdBD6U3D_3;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_8 = p0;
		double L_9 = L_8.___U3DdBD7U3D_4;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_10 = p1;
		double L_11 = L_10.___U3DdBD7U3D_4;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_12 = p0;
		double L_13 = L_12.___U3DdBD8U3D_5;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_14 = p1;
		double L_15 = L_14.___U3DdBD8U3D_5;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		U3Da73U3D__ctor_m785507D16A03EE1898AF9010FFDAC9EF5F496962((&L_16), ((double)il2cpp_codegen_subtract(L_1, L_3)), ((double)il2cpp_codegen_subtract(L_5, L_7)), ((double)il2cpp_codegen_subtract(L_9, L_11)), ((double)il2cpp_codegen_subtract(L_13, L_15)), /*hidden argument*/NULL);
		return L_16;
	}
}
// =a73= =a73=::op_UnaryNegation(=a73=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 U3Da73U3D_op_UnaryNegation_m589B5A1D84071E318A5324C7CCBE1A46C03DD209 (U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 p0, const RuntimeMethod* method) 
{
	{
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_0 = p0;
		double L_1 = L_0.___U3DdBD5U3D_2;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_2 = p0;
		double L_3 = L_2.___U3DdBD6U3D_3;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_4 = p0;
		double L_5 = L_4.___U3DdBD7U3D_4;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_6 = p0;
		double L_7 = L_6.___U3DdBD8U3D_5;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		U3Da73U3D__ctor_m785507D16A03EE1898AF9010FFDAC9EF5F496962((&L_8), ((-L_1)), ((-L_3)), ((-L_5)), ((-L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// =a73= =a73=::op_Multiply(=a73=,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 U3Da73U3D_op_Multiply_m46725825B9E7FFE1CACD05518AC9327852FA571F (U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 p0, double p1, const RuntimeMethod* method) 
{
	{
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_0 = p0;
		double L_1 = L_0.___U3DdBD5U3D_2;
		double L_2 = p1;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_3 = p0;
		double L_4 = L_3.___U3DdBD6U3D_3;
		double L_5 = p1;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_6 = p0;
		double L_7 = L_6.___U3DdBD7U3D_4;
		double L_8 = p1;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_9 = p0;
		double L_10 = L_9.___U3DdBD8U3D_5;
		double L_11 = p1;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		U3Da73U3D__ctor_m785507D16A03EE1898AF9010FFDAC9EF5F496962((&L_12), ((double)il2cpp_codegen_multiply(L_1, L_2)), ((double)il2cpp_codegen_multiply(L_4, L_5)), ((double)il2cpp_codegen_multiply(L_7, L_8)), ((double)il2cpp_codegen_multiply(L_10, L_11)), /*hidden argument*/NULL);
		return L_12;
	}
}
// =a73= =a73=::op_Multiply(System.Double,=a73=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 U3Da73U3D_op_Multiply_m68CA9F8B5DD77D89CD6DB0A2C44AE6B0562A9F8A (double p0, U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 p1, const RuntimeMethod* method) 
{
	{
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_0 = p1;
		double L_1 = L_0.___U3DdBD5U3D_2;
		double L_2 = p0;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_3 = p1;
		double L_4 = L_3.___U3DdBD6U3D_3;
		double L_5 = p0;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_6 = p1;
		double L_7 = L_6.___U3DdBD7U3D_4;
		double L_8 = p0;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_9 = p1;
		double L_10 = L_9.___U3DdBD8U3D_5;
		double L_11 = p0;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		U3Da73U3D__ctor_m785507D16A03EE1898AF9010FFDAC9EF5F496962((&L_12), ((double)il2cpp_codegen_multiply(L_1, L_2)), ((double)il2cpp_codegen_multiply(L_4, L_5)), ((double)il2cpp_codegen_multiply(L_7, L_8)), ((double)il2cpp_codegen_multiply(L_10, L_11)), /*hidden argument*/NULL);
		return L_12;
	}
}
// =a73= =a73=::op_Multiply(=a73=,=a73=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 U3Da73U3D_op_Multiply_m32E46424C6154D1F52570A8B43E1798D9320FAF6 (U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 p0, U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 p1, const RuntimeMethod* method) 
{
	{
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_0 = p0;
		double L_1 = L_0.___U3DdBD5U3D_2;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_2 = p1;
		double L_3 = L_2.___U3DdBD5U3D_2;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_4 = p0;
		double L_5 = L_4.___U3DdBD6U3D_3;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_6 = p1;
		double L_7 = L_6.___U3DdBD7U3D_4;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_8 = p0;
		double L_9 = L_8.___U3DdBD5U3D_2;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_10 = p1;
		double L_11 = L_10.___U3DdBD6U3D_3;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_12 = p0;
		double L_13 = L_12.___U3DdBD6U3D_3;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_14 = p1;
		double L_15 = L_14.___U3DdBD8U3D_5;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_16 = p0;
		double L_17 = L_16.___U3DdBD7U3D_4;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_18 = p1;
		double L_19 = L_18.___U3DdBD5U3D_2;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_20 = p0;
		double L_21 = L_20.___U3DdBD8U3D_5;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_22 = p1;
		double L_23 = L_22.___U3DdBD7U3D_4;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_24 = p0;
		double L_25 = L_24.___U3DdBD7U3D_4;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_26 = p1;
		double L_27 = L_26.___U3DdBD6U3D_3;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_28 = p0;
		double L_29 = L_28.___U3DdBD8U3D_5;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_30 = p1;
		double L_31 = L_30.___U3DdBD8U3D_5;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_32;
		memset((&L_32), 0, sizeof(L_32));
		U3Da73U3D__ctor_m785507D16A03EE1898AF9010FFDAC9EF5F496962((&L_32), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_1, L_3)), ((double)il2cpp_codegen_multiply(L_5, L_7)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_9, L_11)), ((double)il2cpp_codegen_multiply(L_13, L_15)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_17, L_19)), ((double)il2cpp_codegen_multiply(L_21, L_23)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_25, L_27)), ((double)il2cpp_codegen_multiply(L_29, L_31)))), /*hidden argument*/NULL);
		return L_32;
	}
}
// =a8f= =a73=::op_Multiply(=a73=,=a8f=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE U3Da73U3D_op_Multiply_m596C64A5ED35D8B92F8B089EAD9980953AEAC540 (U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 p0, U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE p1, const RuntimeMethod* method) 
{
	{
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_0 = p0;
		double L_1 = L_0.___U3DdBD5U3D_2;
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_2 = p1;
		double L_3 = L_2.___U3DdBFAU3D_4;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_4 = p0;
		double L_5 = L_4.___U3DdBD7U3D_4;
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_6 = p1;
		double L_7 = L_6.___U3DdBFaU3D_5;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_8 = p0;
		double L_9 = L_8.___U3DdBD6U3D_3;
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_10 = p1;
		double L_11 = L_10.___U3DdBFAU3D_4;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_12 = p0;
		double L_13 = L_12.___U3DdBD8U3D_5;
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_14 = p1;
		double L_15 = L_14.___U3DdBFaU3D_5;
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_16;
		memset((&L_16), 0, sizeof(L_16));
		U3Da8fU3D__ctor_m9D7FCE73C72E54267B13BCDE59BB82A5DA9C0DCD((&L_16), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_1, L_3)), ((double)il2cpp_codegen_multiply(L_5, L_7)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_9, L_11)), ((double)il2cpp_codegen_multiply(L_13, L_15)))), /*hidden argument*/NULL);
		return L_16;
	}
}
// =a73= =a73=::=ccD4=(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 U3Da73U3D_U3DccD4U3D_m4ABA6D06FCC3CBFC08A7570693415AE1E766AFE0 (double p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	{
		double L_0 = p0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = cos(L_0);
		V_0 = L_1;
		double L_2 = p0;
		double L_3;
		L_3 = sin(L_2);
		V_1 = L_3;
		double L_4 = V_0;
		double L_5 = V_1;
		double L_6 = V_1;
		double L_7 = V_0;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		U3Da73U3D__ctor_m785507D16A03EE1898AF9010FFDAC9EF5F496962((&L_8), L_4, L_5, ((-L_6)), L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Double =a73=::=ccD5=(System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3Da73U3D_U3DccD5U3D_m716CD2FCCF53FEED066AF8AD08E0AC316B2AEB29 (double p0, double p1, double p2, double p3, const RuntimeMethod* method) 
{
	{
		double L_0 = p0;
		double L_1 = p3;
		double L_2 = p2;
		double L_3 = p1;
		return ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_0, L_1)), ((double)il2cpp_codegen_multiply(L_2, L_3))));
	}
}
// System.Boolean =a73=::op_Equality(=a73=,=a73=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da73U3D_op_Equality_mA91AC5D2ADDB511D52547BEC6F2324DC6C72D362 (U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 p0, U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 p1, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = U3Da73U3D_U3DccdCU3D_mC8E2D2483D447A30DF7EBAF2547D378F8E26276F((&p0), (&p1), NULL);
		return L_0;
	}
}
// System.Boolean =a73=::op_Inequality(=a73=,=a73=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da73U3D_op_Inequality_mC3FA7F8BB79542D1C5597C4AAEC041CD8AE476C9 (U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 p0, U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 p1, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = U3Da73U3D_U3DccdCU3D_mC8E2D2483D447A30DF7EBAF2547D378F8E26276F((&p0), (&p1), NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean =a73=::=ccD6=(=a73=,=a73=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da73U3D_U3DccD6U3D_m92A8AC1DE5369B055F8AB1636D93F5607CF8193A (U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 p0, U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 p1, const RuntimeMethod* method) 
{
	{
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_0 = p1;
		bool L_1;
		L_1 = U3Da73U3D_Equals_m2BEE0296899C4C6053D01EECF461979AC26A3562((&p0), L_0, NULL);
		return L_1;
	}
}
// =a73= =a73=::=ccD7=(=a73=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 U3Da73U3D_U3DccD7U3D_m3943B58AA308A1D25786499FC038D12661F139D5 (U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* __this, U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 p0, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3DdBD5U3D_2;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_1 = p0;
		double L_2 = L_1.___U3DdBD5U3D_2;
		double L_3 = __this->___U3DdBD6U3D_3;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_4 = p0;
		double L_5 = L_4.___U3DdBD6U3D_3;
		double L_6 = __this->___U3DdBD7U3D_4;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_7 = p0;
		double L_8 = L_7.___U3DdBD7U3D_4;
		double L_9 = __this->___U3DdBD8U3D_5;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_10 = p0;
		double L_11 = L_10.___U3DdBD8U3D_5;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		U3Da73U3D__ctor_m785507D16A03EE1898AF9010FFDAC9EF5F496962((&L_12), ((double)il2cpp_codegen_add(L_0, L_2)), ((double)il2cpp_codegen_add(L_3, L_5)), ((double)il2cpp_codegen_add(L_6, L_8)), ((double)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C  U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 U3Da73U3D_U3DccD7U3D_m3943B58AA308A1D25786499FC038D12661F139D5_AdjustorThunk (RuntimeObject* __this, U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 p0, const RuntimeMethod* method)
{
	U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2*>(__this + _offset);
	U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 _returnValue;
	_returnValue = U3Da73U3D_U3DccD7U3D_m3943B58AA308A1D25786499FC038D12661F139D5(_thisAdjusted, p0, method);
	return _returnValue;
}
// =a73= =a73=::=ccD8=(=a73=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 U3Da73U3D_U3DccD8U3D_mCD1AE976D02EE0EA1785E0854FEEFD5B7913AA2C (U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* __this, U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 p0, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3DdBD5U3D_2;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_1 = p0;
		double L_2 = L_1.___U3DdBD5U3D_2;
		double L_3 = __this->___U3DdBD6U3D_3;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_4 = p0;
		double L_5 = L_4.___U3DdBD6U3D_3;
		double L_6 = __this->___U3DdBD7U3D_4;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_7 = p0;
		double L_8 = L_7.___U3DdBD7U3D_4;
		double L_9 = __this->___U3DdBD8U3D_5;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_10 = p0;
		double L_11 = L_10.___U3DdBD8U3D_5;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		U3Da73U3D__ctor_m785507D16A03EE1898AF9010FFDAC9EF5F496962((&L_12), ((double)il2cpp_codegen_subtract(L_0, L_2)), ((double)il2cpp_codegen_subtract(L_3, L_5)), ((double)il2cpp_codegen_subtract(L_6, L_8)), ((double)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C  U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 U3Da73U3D_U3DccD8U3D_mCD1AE976D02EE0EA1785E0854FEEFD5B7913AA2C_AdjustorThunk (RuntimeObject* __this, U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 p0, const RuntimeMethod* method)
{
	U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2*>(__this + _offset);
	U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 _returnValue;
	_returnValue = U3Da73U3D_U3DccD8U3D_mCD1AE976D02EE0EA1785E0854FEEFD5B7913AA2C(_thisAdjusted, p0, method);
	return _returnValue;
}
// =a73= =a73=::=ccD9=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 U3Da73U3D_U3DccD9U3D_mB6440A752DFFBBDC20454BDDD48334CA37F480EF (U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3DdBD5U3D_2;
		double L_1 = __this->___U3DdBD6U3D_3;
		double L_2 = __this->___U3DdBD7U3D_4;
		double L_3 = __this->___U3DdBD8U3D_5;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		U3Da73U3D__ctor_m785507D16A03EE1898AF9010FFDAC9EF5F496962((&L_4), ((-L_0)), ((-L_1)), ((-L_2)), ((-L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 U3Da73U3D_U3DccD9U3D_mB6440A752DFFBBDC20454BDDD48334CA37F480EF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2*>(__this + _offset);
	U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 _returnValue;
	_returnValue = U3Da73U3D_U3DccD9U3D_mB6440A752DFFBBDC20454BDDD48334CA37F480EF(_thisAdjusted, method);
	return _returnValue;
}
// =a73= =a73=::=ccdA=(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 U3Da73U3D_U3DccdAU3D_mC64F2C5965BE1D6EAD6EF94DED17AE93DC98C77A (U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* __this, double p0, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3DdBD5U3D_2;
		double L_1 = p0;
		double L_2 = __this->___U3DdBD6U3D_3;
		double L_3 = p0;
		double L_4 = __this->___U3DdBD7U3D_4;
		double L_5 = p0;
		double L_6 = __this->___U3DdBD8U3D_5;
		double L_7 = p0;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		U3Da73U3D__ctor_m785507D16A03EE1898AF9010FFDAC9EF5F496962((&L_8), ((double)il2cpp_codegen_multiply(L_0, L_1)), ((double)il2cpp_codegen_multiply(((-L_2)), L_3)), ((double)il2cpp_codegen_multiply(L_4, L_5)), ((double)il2cpp_codegen_multiply(((-L_6)), L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C  U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 U3Da73U3D_U3DccdAU3D_mC64F2C5965BE1D6EAD6EF94DED17AE93DC98C77A_AdjustorThunk (RuntimeObject* __this, double p0, const RuntimeMethod* method)
{
	U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2*>(__this + _offset);
	U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 _returnValue;
	_returnValue = U3Da73U3D_U3DccdAU3D_mC64F2C5965BE1D6EAD6EF94DED17AE93DC98C77A(_thisAdjusted, p0, method);
	return _returnValue;
}
// System.Double =a73=::=ccda=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3Da73U3D_U3DccdaU3D_mEF626EA512438D725A5DF3A1E139D1D7443C0825 (U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = __this->___U3DdBD5U3D_2;
		double L_1 = __this->___U3DdBD6U3D_3;
		double L_2 = __this->___U3DdBD7U3D_4;
		double L_3 = __this->___U3DdBD8U3D_5;
		il2cpp_codegen_runtime_class_init_inline(U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = U3Da73U3D_U3DccD5U3D_m716CD2FCCF53FEED066AF8AD08E0AC316B2AEB29(L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  double U3Da73U3D_U3DccdaU3D_mEF626EA512438D725A5DF3A1E139D1D7443C0825_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2*>(__this + _offset);
	double _returnValue;
	_returnValue = U3Da73U3D_U3DccdaU3D_mEF626EA512438D725A5DF3A1E139D1D7443C0825(_thisAdjusted, method);
	return _returnValue;
}
// =a73= =a73=::=ccdB=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 U3Da73U3D_U3DccdBU3D_mB944A10DD7462CA1803FFF268BEF8837E4A6D538 (U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3DdBD5U3D_2;
		double L_1 = __this->___U3DdBD7U3D_4;
		double L_2 = __this->___U3DdBD6U3D_3;
		double L_3 = __this->___U3DdBD8U3D_5;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		U3Da73U3D__ctor_m785507D16A03EE1898AF9010FFDAC9EF5F496962((&L_4), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 U3Da73U3D_U3DccdBU3D_mB944A10DD7462CA1803FFF268BEF8837E4A6D538_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2*>(__this + _offset);
	U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 _returnValue;
	_returnValue = U3Da73U3D_U3DccdBU3D_mB944A10DD7462CA1803FFF268BEF8837E4A6D538(_thisAdjusted, method);
	return _returnValue;
}
// =a73= =a73=::=ccdb=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 U3Da73U3D_U3DccdbU3D_m62D0B36B7A30951FB36EE533925E1528D557510F (U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		double L_0;
		L_0 = U3Da73U3D_U3DccdaU3D_mEF626EA512438D725A5DF3A1E139D1D7443C0825(__this, NULL);
		V_0 = L_0;
		double L_1 = V_0;
		if ((((double)L_1) == ((double)(0.0))))
		{
			goto IL_0043;
		}
	}
	{
		double L_2 = V_0;
		double L_3 = __this->___U3DdBD8U3D_5;
		double L_4 = __this->___U3DdBD6U3D_3;
		double L_5 = __this->___U3DdBD7U3D_4;
		double L_6 = __this->___U3DdBD5U3D_2;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		U3Da73U3D__ctor_m785507D16A03EE1898AF9010FFDAC9EF5F496962((&L_7), L_3, ((-L_4)), ((-L_5)), L_6, /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2_il2cpp_TypeInfo_var);
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_8;
		L_8 = U3Da73U3D_op_Multiply_m68CA9F8B5DD77D89CD6DB0A2C44AE6B0562A9F8A(((double)((1.0)/L_2)), L_7, NULL);
		return L_8;
	}

IL_0043:
	{
		il2cpp_codegen_runtime_class_init_inline(U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2_il2cpp_TypeInfo_var);
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_9 = ((U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2_StaticFields*)il2cpp_codegen_static_fields_for(U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2_il2cpp_TypeInfo_var))->___U3DdBD4U3D_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C  U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 U3Da73U3D_U3DccdbU3D_m62D0B36B7A30951FB36EE533925E1528D557510F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2*>(__this + _offset);
	U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 _returnValue;
	_returnValue = U3Da73U3D_U3DccdbU3D_m62D0B36B7A30951FB36EE533925E1528D557510F(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean =a73=::Equals(=a73=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da73U3D_Equals_m2BEE0296899C4C6053D01EECF461979AC26A3562 (U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* __this, U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 ___other0, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = U3Da73U3D_U3DccdCU3D_mC8E2D2483D447A30DF7EBAF2547D378F8E26276F(__this, (&___other0), NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool U3Da73U3D_Equals_m2BEE0296899C4C6053D01EECF461979AC26A3562_AdjustorThunk (RuntimeObject* __this, U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 ___other0, const RuntimeMethod* method)
{
	U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2*>(__this + _offset);
	bool _returnValue;
	_returnValue = U3Da73U3D_Equals_m2BEE0296899C4C6053D01EECF461979AC26A3562(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean =a73=::=ccdC=(=a73=&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da73U3D_U3DccdCU3D_mC8E2D2483D447A30DF7EBAF2547D378F8E26276F (U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* __this, U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* p0, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3DdBD5U3D_2;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* L_1 = p0;
		double L_2 = L_1->___U3DdBD5U3D_2;
		if ((!(((double)L_0) == ((double)L_2))))
		{
			goto IL_0039;
		}
	}
	{
		double L_3 = __this->___U3DdBD6U3D_3;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* L_4 = p0;
		double L_5 = L_4->___U3DdBD6U3D_3;
		if ((!(((double)L_3) == ((double)L_5))))
		{
			goto IL_0039;
		}
	}
	{
		double L_6 = __this->___U3DdBD7U3D_4;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* L_7 = p0;
		double L_8 = L_7->___U3DdBD7U3D_4;
		if ((!(((double)L_6) == ((double)L_8))))
		{
			goto IL_0039;
		}
	}
	{
		double L_9 = __this->___U3DdBD8U3D_5;
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* L_10 = p0;
		double L_11 = L_10->___U3DdBD8U3D_5;
		return (bool)((((double)L_9) == ((double)L_11))? 1 : 0);
	}

IL_0039:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool U3Da73U3D_U3DccdCU3D_mC8E2D2483D447A30DF7EBAF2547D378F8E26276F_AdjustorThunk (RuntimeObject* __this, U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* p0, const RuntimeMethod* method)
{
	U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2*>(__this + _offset);
	bool _returnValue;
	_returnValue = U3Da73U3D_U3DccdCU3D_mC8E2D2483D447A30DF7EBAF2547D378F8E26276F(_thisAdjusted, p0, method);
	return _returnValue;
}
// System.Boolean =a73=::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da73U3D_Equals_m3CC46E9B9A9344540C2D6A94D14AC8943A6FB6BD (U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		V_0 = ((*(U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2*)((U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2*)(U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2*)UnBox(L_1, U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2_il2cpp_TypeInfo_var))));
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_2 = V_0;
		bool L_3;
		L_3 = U3Da73U3D_Equals_m2BEE0296899C4C6053D01EECF461979AC26A3562(__this, L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool U3Da73U3D_Equals_m3CC46E9B9A9344540C2D6A94D14AC8943A6FB6BD_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2*>(__this + _offset);
	bool _returnValue;
	_returnValue = U3Da73U3D_Equals_m3CC46E9B9A9344540C2D6A94D14AC8943A6FB6BD(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 =a73=::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3Da73U3D_GetHashCode_mD407D6DBC7DE71EF6DFBBF2E8B4B9403A2B94C23 (U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* __this, const RuntimeMethod* method) 
{
	{
		double* L_0 = (&__this->___U3DdBD5U3D_2);
		int32_t L_1;
		L_1 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_0, NULL);
		double* L_2 = (&__this->___U3DdBD6U3D_3);
		int32_t L_3;
		L_3 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_2, NULL);
		double* L_4 = (&__this->___U3DdBD7U3D_4);
		int32_t L_5;
		L_5 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_4, NULL);
		double* L_6 = (&__this->___U3DdBD8U3D_5);
		int32_t L_7;
		L_7 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_6, NULL);
		return ((int32_t)(((int32_t)(((int32_t)(L_1^L_3))^L_5))^L_7));
	}
}
IL2CPP_EXTERN_C  int32_t U3Da73U3D_GetHashCode_mD407D6DBC7DE71EF6DFBBF2E8B4B9403A2B94C23_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = U3Da73U3D_GetHashCode_mD407D6DBC7DE71EF6DFBBF2E8B4B9403A2B94C23(_thisAdjusted, method);
	return _returnValue;
}
// System.Void =a73=::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da73U3D__cctor_m09FD5BFC755CFB217F7D8FCF516292DB56D664E0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		U3Da73U3D__ctor_m785507D16A03EE1898AF9010FFDAC9EF5F496962((&L_0), (1.0), (0.0), (0.0), (1.0), /*hidden argument*/NULL);
		((U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2_StaticFields*)il2cpp_codegen_static_fields_for(U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2_il2cpp_TypeInfo_var))->___U3DdBD3U3D_0 = L_0;
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
// System.Void =a74=::.ctor(Microsoft.Geospatial.VectorMath.Vector3D,Microsoft.Geospatial.VectorMath.Vector3D,Microsoft.Geospatial.VectorMath.Vector3D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da74U3D__ctor_m11897E67B3471D2A3CE06CDD150E4D38BE6294CC (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p1, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p2, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = p0;
		double L_1 = L_0.___X_7;
		__this->___U3DdBdaU3D_2 = L_1;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_2 = p0;
		double L_3 = L_2.___Y_8;
		__this->___U3DdBdBU3D_3 = L_3;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_4 = p0;
		double L_5 = L_4.___Z_9;
		__this->___U3DdBdbU3D_4 = L_5;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_6 = p1;
		double L_7 = L_6.___X_7;
		__this->___U3DdBdCU3D_5 = L_7;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_8 = p1;
		double L_9 = L_8.___Y_8;
		__this->___U3DdBdcU3D_6 = L_9;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_10 = p1;
		double L_11 = L_10.___Z_9;
		__this->___U3DdBdDU3D_7 = L_11;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_12 = p2;
		double L_13 = L_12.___X_7;
		__this->___U3DdBddU3D_8 = L_13;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_14 = p2;
		double L_15 = L_14.___Y_8;
		__this->___U3DdBdEU3D_9 = L_15;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_16 = p2;
		double L_17 = L_16.___Z_9;
		__this->___U3DdBdeU3D_10 = L_17;
		return;
	}
}
IL2CPP_EXTERN_C  void U3Da74U3D__ctor_m11897E67B3471D2A3CE06CDD150E4D38BE6294CC_AdjustorThunk (RuntimeObject* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p1, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p2, const RuntimeMethod* method)
{
	U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0*>(__this + _offset);
	U3Da74U3D__ctor_m11897E67B3471D2A3CE06CDD150E4D38BE6294CC(_thisAdjusted, p0, p1, p2, method);
}
// System.Void =a74=::.ctor(Microsoft.Geospatial.VectorMath.Vector3D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da74U3D__ctor_m79946E636E21CCD02B3734FFE658BB7E17F7930F (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = p0;
		double L_1 = L_0.___X_7;
		__this->___U3DdBdaU3D_2 = L_1;
		__this->___U3DdBdBU3D_3 = (0.0);
		__this->___U3DdBdbU3D_4 = (0.0);
		__this->___U3DdBdCU3D_5 = (0.0);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_2 = p0;
		double L_3 = L_2.___Y_8;
		__this->___U3DdBdcU3D_6 = L_3;
		__this->___U3DdBdDU3D_7 = (0.0);
		__this->___U3DdBddU3D_8 = (0.0);
		__this->___U3DdBdEU3D_9 = (0.0);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_4 = p0;
		double L_5 = L_4.___Z_9;
		__this->___U3DdBdeU3D_10 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void U3Da74U3D__ctor_m79946E636E21CCD02B3734FFE658BB7E17F7930F_AdjustorThunk (RuntimeObject* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, const RuntimeMethod* method)
{
	U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0*>(__this + _offset);
	U3Da74U3D__ctor_m79946E636E21CCD02B3734FFE658BB7E17F7930F(_thisAdjusted, p0, method);
}
// System.Void =a74=::.ctor(System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da74U3D__ctor_m974FCEAB89608607A8A978647F40307F26F064E9 (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* __this, double p0, double p1, double p2, double p3, double p4, double p5, double p6, double p7, double p8, const RuntimeMethod* method) 
{
	{
		double L_0 = p0;
		__this->___U3DdBdaU3D_2 = L_0;
		double L_1 = p1;
		__this->___U3DdBdBU3D_3 = L_1;
		double L_2 = p2;
		__this->___U3DdBdbU3D_4 = L_2;
		double L_3 = p3;
		__this->___U3DdBdCU3D_5 = L_3;
		double L_4 = p4;
		__this->___U3DdBdcU3D_6 = L_4;
		double L_5 = p5;
		__this->___U3DdBdDU3D_7 = L_5;
		double L_6 = p6;
		__this->___U3DdBddU3D_8 = L_6;
		double L_7 = p7;
		__this->___U3DdBdEU3D_9 = L_7;
		double L_8 = p8;
		__this->___U3DdBdeU3D_10 = L_8;
		return;
	}
}
IL2CPP_EXTERN_C  void U3Da74U3D__ctor_m974FCEAB89608607A8A978647F40307F26F064E9_AdjustorThunk (RuntimeObject* __this, double p0, double p1, double p2, double p3, double p4, double p5, double p6, double p7, double p8, const RuntimeMethod* method)
{
	U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0*>(__this + _offset);
	U3Da74U3D__ctor_m974FCEAB89608607A8A978647F40307F26F064E9(_thisAdjusted, p0, p1, p2, p3, p4, p5, p6, p7, p8, method);
}
// System.Void =a74=::.ctor(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da74U3D__ctor_mCDA10AAF7D2F26F830415F78C19B37C6628B3DA7 (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* p0, const RuntimeMethod* method) 
{
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = p0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		double L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = p0;
		NullCheck(L_3);
		int32_t L_4 = 1;
		double L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_6 = p0;
		NullCheck(L_6);
		int32_t L_7 = 2;
		double L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_9 = p0;
		NullCheck(L_9);
		int32_t L_10 = 3;
		double L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_12 = p0;
		NullCheck(L_12);
		int32_t L_13 = 4;
		double L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_15 = p0;
		NullCheck(L_15);
		int32_t L_16 = 5;
		double L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_18 = p0;
		NullCheck(L_18);
		int32_t L_19 = 6;
		double L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_21 = p0;
		NullCheck(L_21);
		int32_t L_22 = 7;
		double L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_24 = p0;
		NullCheck(L_24);
		int32_t L_25 = 8;
		double L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		U3Da74U3D__ctor_m974FCEAB89608607A8A978647F40307F26F064E9(__this, L_2, L_5, L_8, L_11, L_14, L_17, L_20, L_23, L_26, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3Da74U3D__ctor_mCDA10AAF7D2F26F830415F78C19B37C6628B3DA7_AdjustorThunk (RuntimeObject* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* p0, const RuntimeMethod* method)
{
	U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0*>(__this + _offset);
	U3Da74U3D__ctor_mCDA10AAF7D2F26F830415F78C19B37C6628B3DA7(_thisAdjusted, p0, method);
}
// =a74= =a74=::op_Addition(=a74=,=a74=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 U3Da74U3D_op_Addition_mC4DBC3B361A4E217904941374D0EA99055D6E97A (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 p0, U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 p1, const RuntimeMethod* method) 
{
	{
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_0 = p1;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_1;
		L_1 = U3Da74U3D_U3Dccd0U3D_m51E22C050BFD01655951E1493801785611F06BB2((&p0), L_0, NULL);
		return L_1;
	}
}
// =a74= =a74=::op_Subtraction(=a74=,=a74=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 U3Da74U3D_op_Subtraction_mAB4B8F1DCCA33CAA9C86B9C183BD1423EC542146 (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 p0, U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 p1, const RuntimeMethod* method) 
{
	{
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_0 = p1;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_1;
		L_1 = U3Da74U3D_U3Dccd1U3D_mD293A2528046C27A15A11FF4E1D9A474AFDB72D9((&p0), L_0, NULL);
		return L_1;
	}
}
// =a74= =a74=::op_UnaryNegation(=a74=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 U3Da74U3D_op_UnaryNegation_m6C8F8D33B2B4AF5A4E2FDD2441F38D8C701367BE (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 p0, const RuntimeMethod* method) 
{
	{
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_0;
		L_0 = U3Da74U3D_U3Dccd2U3D_m6A9FC2FC4B0BE47639F047037D279A507FEA8C20((&p0), NULL);
		return L_0;
	}
}
// =a74= =a74=::op_Multiply(=a74=,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 U3Da74U3D_op_Multiply_m11ACB22D7E85637E6F579A5D7A3AC7B01DD173CF (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 p0, double p1, const RuntimeMethod* method) 
{
	{
		double L_0 = p1;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_1;
		L_1 = U3Da74U3D_U3Dccd3U3D_m40E8FC0E2A12C7CED3F8AD4BF25F7D853CB772DA((&p0), L_0, NULL);
		return L_1;
	}
}
// =a74= =a74=::op_Multiply(System.Double,=a74=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 U3Da74U3D_op_Multiply_mB14231C010F61C9B35BD3A8F9E4709926E47A5F0 (double p0, U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 p1, const RuntimeMethod* method) 
{
	{
		double L_0 = p0;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_1;
		L_1 = U3Da74U3D_U3Dccd3U3D_m40E8FC0E2A12C7CED3F8AD4BF25F7D853CB772DA((&p1), L_0, NULL);
		return L_1;
	}
}
// =a74= =a74=::op_Multiply(=a74=,=a74=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 U3Da74U3D_op_Multiply_m01A9D248FCBD8B688696A3C414E06DDB88E820A1 (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 p0, U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 p1, const RuntimeMethod* method) 
{
	{
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_0 = p0;
		double L_1 = L_0.___U3DdBdaU3D_2;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_2 = p1;
		double L_3 = L_2.___U3DdBdaU3D_2;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_4 = p0;
		double L_5 = L_4.___U3DdBdBU3D_3;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_6 = p1;
		double L_7 = L_6.___U3DdBdCU3D_5;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_8 = p0;
		double L_9 = L_8.___U3DdBdbU3D_4;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_10 = p1;
		double L_11 = L_10.___U3DdBddU3D_8;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_12 = p0;
		double L_13 = L_12.___U3DdBdaU3D_2;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_14 = p1;
		double L_15 = L_14.___U3DdBdBU3D_3;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_16 = p0;
		double L_17 = L_16.___U3DdBdBU3D_3;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_18 = p1;
		double L_19 = L_18.___U3DdBdcU3D_6;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_20 = p0;
		double L_21 = L_20.___U3DdBdbU3D_4;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_22 = p1;
		double L_23 = L_22.___U3DdBdEU3D_9;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_24 = p0;
		double L_25 = L_24.___U3DdBdaU3D_2;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_26 = p1;
		double L_27 = L_26.___U3DdBdbU3D_4;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_28 = p0;
		double L_29 = L_28.___U3DdBdBU3D_3;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_30 = p1;
		double L_31 = L_30.___U3DdBdDU3D_7;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_32 = p0;
		double L_33 = L_32.___U3DdBdbU3D_4;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_34 = p1;
		double L_35 = L_34.___U3DdBdeU3D_10;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_36 = p0;
		double L_37 = L_36.___U3DdBdCU3D_5;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_38 = p1;
		double L_39 = L_38.___U3DdBdaU3D_2;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_40 = p0;
		double L_41 = L_40.___U3DdBdcU3D_6;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_42 = p1;
		double L_43 = L_42.___U3DdBdCU3D_5;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_44 = p0;
		double L_45 = L_44.___U3DdBdDU3D_7;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_46 = p1;
		double L_47 = L_46.___U3DdBddU3D_8;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_48 = p0;
		double L_49 = L_48.___U3DdBdCU3D_5;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_50 = p1;
		double L_51 = L_50.___U3DdBdBU3D_3;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_52 = p0;
		double L_53 = L_52.___U3DdBdcU3D_6;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_54 = p1;
		double L_55 = L_54.___U3DdBdcU3D_6;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_56 = p0;
		double L_57 = L_56.___U3DdBdDU3D_7;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_58 = p1;
		double L_59 = L_58.___U3DdBdEU3D_9;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_60 = p0;
		double L_61 = L_60.___U3DdBdCU3D_5;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_62 = p1;
		double L_63 = L_62.___U3DdBdbU3D_4;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_64 = p0;
		double L_65 = L_64.___U3DdBdcU3D_6;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_66 = p1;
		double L_67 = L_66.___U3DdBdDU3D_7;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_68 = p0;
		double L_69 = L_68.___U3DdBdDU3D_7;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_70 = p1;
		double L_71 = L_70.___U3DdBdeU3D_10;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_72 = p0;
		double L_73 = L_72.___U3DdBddU3D_8;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_74 = p1;
		double L_75 = L_74.___U3DdBdaU3D_2;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_76 = p0;
		double L_77 = L_76.___U3DdBdEU3D_9;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_78 = p1;
		double L_79 = L_78.___U3DdBdCU3D_5;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_80 = p0;
		double L_81 = L_80.___U3DdBdeU3D_10;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_82 = p1;
		double L_83 = L_82.___U3DdBddU3D_8;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_84 = p0;
		double L_85 = L_84.___U3DdBddU3D_8;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_86 = p1;
		double L_87 = L_86.___U3DdBdBU3D_3;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_88 = p0;
		double L_89 = L_88.___U3DdBdEU3D_9;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_90 = p1;
		double L_91 = L_90.___U3DdBdcU3D_6;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_92 = p0;
		double L_93 = L_92.___U3DdBdeU3D_10;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_94 = p1;
		double L_95 = L_94.___U3DdBdEU3D_9;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_96 = p0;
		double L_97 = L_96.___U3DdBddU3D_8;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_98 = p1;
		double L_99 = L_98.___U3DdBdbU3D_4;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_100 = p0;
		double L_101 = L_100.___U3DdBdEU3D_9;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_102 = p1;
		double L_103 = L_102.___U3DdBdDU3D_7;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_104 = p0;
		double L_105 = L_104.___U3DdBdeU3D_10;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_106 = p1;
		double L_107 = L_106.___U3DdBdeU3D_10;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_108;
		memset((&L_108), 0, sizeof(L_108));
		U3Da74U3D__ctor_m974FCEAB89608607A8A978647F40307F26F064E9((&L_108), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_1, L_3)), ((double)il2cpp_codegen_multiply(L_5, L_7)))), ((double)il2cpp_codegen_multiply(L_9, L_11)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_13, L_15)), ((double)il2cpp_codegen_multiply(L_17, L_19)))), ((double)il2cpp_codegen_multiply(L_21, L_23)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_25, L_27)), ((double)il2cpp_codegen_multiply(L_29, L_31)))), ((double)il2cpp_codegen_multiply(L_33, L_35)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_37, L_39)), ((double)il2cpp_codegen_multiply(L_41, L_43)))), ((double)il2cpp_codegen_multiply(L_45, L_47)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_49, L_51)), ((double)il2cpp_codegen_multiply(L_53, L_55)))), ((double)il2cpp_codegen_multiply(L_57, L_59)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_61, L_63)), ((double)il2cpp_codegen_multiply(L_65, L_67)))), ((double)il2cpp_codegen_multiply(L_69, L_71)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_73, L_75)), ((double)il2cpp_codegen_multiply(L_77, L_79)))), ((double)il2cpp_codegen_multiply(L_81, L_83)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_85, L_87)), ((double)il2cpp_codegen_multiply(L_89, L_91)))), ((double)il2cpp_codegen_multiply(L_93, L_95)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_97, L_99)), ((double)il2cpp_codegen_multiply(L_101, L_103)))), ((double)il2cpp_codegen_multiply(L_105, L_107)))), /*hidden argument*/NULL);
		return L_108;
	}
}
// =a8f= =a74=::op_Multiply(=a8f=,=a74=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE U3Da74U3D_op_Multiply_m39E114C7EC097114771513FB65D58CE376C80D9A (U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE p0, U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 p1, const RuntimeMethod* method) 
{
	{
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_0 = p0;
		double L_1 = L_0.___U3DdBFAU3D_4;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_2 = p1;
		double L_3 = L_2.___U3DdBdaU3D_2;
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_4 = p0;
		double L_5 = L_4.___U3DdBFaU3D_5;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_6 = p1;
		double L_7 = L_6.___U3DdBdCU3D_5;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_8 = p1;
		double L_9 = L_8.___U3DdBddU3D_8;
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_10 = p0;
		double L_11 = L_10.___U3DdBFAU3D_4;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_12 = p1;
		double L_13 = L_12.___U3DdBdBU3D_3;
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_14 = p0;
		double L_15 = L_14.___U3DdBFaU3D_5;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_16 = p1;
		double L_17 = L_16.___U3DdBdcU3D_6;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_18 = p1;
		double L_19 = L_18.___U3DdBdEU3D_9;
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_20;
		memset((&L_20), 0, sizeof(L_20));
		U3Da8fU3D__ctor_m9D7FCE73C72E54267B13BCDE59BB82A5DA9C0DCD((&L_20), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_1, L_3)), ((double)il2cpp_codegen_multiply(L_5, L_7)))), L_9)), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_11, L_13)), ((double)il2cpp_codegen_multiply(L_15, L_17)))), L_19)), /*hidden argument*/NULL);
		return L_20;
	}
}
// System.Boolean =a74=::op_Equality(=a74=,=a74=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da74U3D_op_Equality_m7595615FD5486BB9F9E93D4A9AFF60150ED1C85A (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 p0, U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 p1, const RuntimeMethod* method) 
{
	{
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_0 = p0;
		double L_1 = L_0.___U3DdBdaU3D_2;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_2 = p1;
		double L_3 = L_2.___U3DdBdaU3D_2;
		if ((!(((double)L_1) == ((double)L_3))))
		{
			goto IL_007f;
		}
	}
	{
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_4 = p0;
		double L_5 = L_4.___U3DdBdBU3D_3;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_6 = p1;
		double L_7 = L_6.___U3DdBdBU3D_3;
		if ((!(((double)L_5) == ((double)L_7))))
		{
			goto IL_007f;
		}
	}
	{
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_8 = p0;
		double L_9 = L_8.___U3DdBdbU3D_4;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_10 = p1;
		double L_11 = L_10.___U3DdBdbU3D_4;
		if ((!(((double)L_9) == ((double)L_11))))
		{
			goto IL_007f;
		}
	}
	{
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_12 = p0;
		double L_13 = L_12.___U3DdBdCU3D_5;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_14 = p1;
		double L_15 = L_14.___U3DdBdCU3D_5;
		if ((!(((double)L_13) == ((double)L_15))))
		{
			goto IL_007f;
		}
	}
	{
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_16 = p0;
		double L_17 = L_16.___U3DdBdcU3D_6;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_18 = p1;
		double L_19 = L_18.___U3DdBdcU3D_6;
		if ((!(((double)L_17) == ((double)L_19))))
		{
			goto IL_007f;
		}
	}
	{
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_20 = p0;
		double L_21 = L_20.___U3DdBdDU3D_7;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_22 = p1;
		double L_23 = L_22.___U3DdBdDU3D_7;
		if ((!(((double)L_21) == ((double)L_23))))
		{
			goto IL_007f;
		}
	}
	{
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_24 = p0;
		double L_25 = L_24.___U3DdBddU3D_8;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_26 = p1;
		double L_27 = L_26.___U3DdBddU3D_8;
		if ((!(((double)L_25) == ((double)L_27))))
		{
			goto IL_007f;
		}
	}
	{
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_28 = p0;
		double L_29 = L_28.___U3DdBdEU3D_9;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_30 = p1;
		double L_31 = L_30.___U3DdBdEU3D_9;
		if ((!(((double)L_29) == ((double)L_31))))
		{
			goto IL_007f;
		}
	}
	{
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_32 = p0;
		double L_33 = L_32.___U3DdBdeU3D_10;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_34 = p1;
		double L_35 = L_34.___U3DdBdeU3D_10;
		return (bool)((((double)L_33) == ((double)L_35))? 1 : 0);
	}

IL_007f:
	{
		return (bool)0;
	}
}
// System.Boolean =a74=::op_Inequality(=a74=,=a74=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da74U3D_op_Inequality_mA8F083C9274AF5C415B8B921C5E486B97AA56184 (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 p0, U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_0 = p0;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_1 = p1;
		il2cpp_codegen_runtime_class_init_inline(U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = U3Da74U3D_op_Equality_m7595615FD5486BB9F9E93D4A9AFF60150ED1C85A(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// =a74= =a74=::=ccdc=(Microsoft.Geospatial.VectorMath.Vector3D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 U3Da74U3D_U3DccdcU3D_m5EC29E7BBB32655BE83F3220E4031E87EC3AD810 (Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = p0;
		double L_1 = L_0.___Z_9;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_2 = p0;
		double L_3 = L_2.___Y_8;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_4 = p0;
		double L_5 = L_4.___Z_9;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_6 = p0;
		double L_7 = L_6.___X_7;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_8 = p0;
		double L_9 = L_8.___Y_8;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_10 = p0;
		double L_11 = L_10.___X_7;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_12;
		memset((&L_12), 0, sizeof(L_12));
		U3Da74U3D__ctor_m974FCEAB89608607A8A978647F40307F26F064E9((&L_12), (0.0), L_1, ((-L_3)), ((-L_5)), (0.0), L_7, L_9, ((-L_11)), (0.0), /*hidden argument*/NULL);
		return L_12;
	}
}
// =a74= =a74=::=ccdD=(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 U3Da74U3D_U3DccdDU3D_mE0CF9868BBF3CAA1E4F5D0FD87F1E7A3EF3B70B8 (double p0, double p1, const RuntimeMethod* method) 
{
	{
		double L_0 = p0;
		double L_1 = p1;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_2;
		memset((&L_2), 0, sizeof(L_2));
		U3Da74U3D__ctor_m974FCEAB89608607A8A978647F40307F26F064E9((&L_2), (1.0), (0.0), (0.0), (0.0), (1.0), (0.0), L_0, L_1, (1.0), /*hidden argument*/NULL);
		return L_2;
	}
}
// =a74= =a74=::=ccdd=(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 U3Da74U3D_U3DccddU3D_mAD36CD97D58385A99CBEB696A9C48D83059A9343 (double p0, double p1, const RuntimeMethod* method) 
{
	{
		double L_0 = p0;
		double L_1 = p1;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_2;
		memset((&L_2), 0, sizeof(L_2));
		U3Da74U3D__ctor_m974FCEAB89608607A8A978647F40307F26F064E9((&L_2), L_0, (0.0), (0.0), (0.0), L_1, (0.0), (0.0), (0.0), (1.0), /*hidden argument*/NULL);
		return L_2;
	}
}
// =a74= =a74=::=ccdE=(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 U3Da74U3D_U3DccdEU3D_m300F00EABAE337BE9C40D526BEB027A58CE5013A (double p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	{
		double L_0 = p0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = cos(L_0);
		V_0 = L_1;
		double L_2 = p0;
		double L_3;
		L_3 = sin(L_2);
		V_1 = L_3;
		double L_4 = V_0;
		double L_5 = V_1;
		double L_6 = V_1;
		double L_7 = V_0;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_8;
		memset((&L_8), 0, sizeof(L_8));
		U3Da74U3D__ctor_m974FCEAB89608607A8A978647F40307F26F064E9((&L_8), L_4, L_5, (0.0), ((-L_6)), L_7, (0.0), (0.0), (0.0), (1.0), /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Double =a74=::=ccde=(System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3Da74U3D_U3DccdeU3D_m8EAB01F0B4E8A310F4624CCE588B10A4E8890975 (double p0, double p1, double p2, double p3, double p4, double p5, double p6, double p7, double p8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = p0;
		double L_1 = p4;
		double L_2 = p7;
		double L_3 = p5;
		double L_4 = p8;
		il2cpp_codegen_runtime_class_init_inline(U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2_il2cpp_TypeInfo_var);
		double L_5;
		L_5 = U3Da73U3D_U3DccD5U3D_m716CD2FCCF53FEED066AF8AD08E0AC316B2AEB29(L_1, L_2, L_3, L_4, NULL);
		double L_6 = p3;
		double L_7 = p1;
		double L_8 = p7;
		double L_9 = p2;
		double L_10 = p8;
		double L_11;
		L_11 = U3Da73U3D_U3DccD5U3D_m716CD2FCCF53FEED066AF8AD08E0AC316B2AEB29(L_7, L_8, L_9, L_10, NULL);
		double L_12 = p6;
		double L_13 = p1;
		double L_14 = p4;
		double L_15 = p2;
		double L_16 = p5;
		double L_17;
		L_17 = U3Da73U3D_U3DccD5U3D_m716CD2FCCF53FEED066AF8AD08E0AC316B2AEB29(L_13, L_14, L_15, L_16, NULL);
		return ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_0, L_5)), ((double)il2cpp_codegen_multiply(L_6, L_11)))), ((double)il2cpp_codegen_multiply(L_12, L_17))));
	}
}
// System.Boolean =a74=::=ccdF=(=a74=,=a74=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da74U3D_U3DccdFU3D_m42EB861021E2D8A4BF3DA8D375C584C11AA9AF6E (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 p0, U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_0 = p0;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_1 = p1;
		il2cpp_codegen_runtime_class_init_inline(U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = U3Da74U3D_op_Equality_m7595615FD5486BB9F9E93D4A9AFF60150ED1C85A(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Double[] =a74=::=ccdf=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* U3Da74U3D_U3DccdfU3D_m841124D4988C0966F298FE4C152D8CD7CBDBA8FC (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = L_0;
		double L_2 = __this->___U3DdBdaU3D_2;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)L_2);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = L_1;
		double L_4 = __this->___U3DdBdBU3D_3;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)L_4);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_5 = L_3;
		double L_6 = __this->___U3DdBdbU3D_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)L_6);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_7 = L_5;
		double L_8 = __this->___U3DdBdCU3D_5;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_8);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_9 = L_7;
		double L_10 = __this->___U3DdBdcU3D_6;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (double)L_10);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_11 = L_9;
		double L_12 = __this->___U3DdBdDU3D_7;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (double)L_12);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_13 = L_11;
		double L_14 = __this->___U3DdBddU3D_8;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (double)L_14);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_15 = L_13;
		double L_16 = __this->___U3DdBdEU3D_9;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (double)L_16);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_17 = L_15;
		double L_18 = __this->___U3DdBdeU3D_10;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (double)L_18);
		return L_17;
	}
}
IL2CPP_EXTERN_C  DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* U3Da74U3D_U3DccdfU3D_m841124D4988C0966F298FE4C152D8CD7CBDBA8FC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0*>(__this + _offset);
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* _returnValue;
	_returnValue = U3Da74U3D_U3DccdfU3D_m841124D4988C0966F298FE4C152D8CD7CBDBA8FC(_thisAdjusted, method);
	return _returnValue;
}
// =a74= =a74=::=ccd0=(=a74=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 U3Da74U3D_U3Dccd0U3D_m51E22C050BFD01655951E1493801785611F06BB2 (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* __this, U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 p0, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3DdBdaU3D_2;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_1 = p0;
		double L_2 = L_1.___U3DdBdaU3D_2;
		double L_3 = __this->___U3DdBdBU3D_3;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_4 = p0;
		double L_5 = L_4.___U3DdBdBU3D_3;
		double L_6 = __this->___U3DdBdbU3D_4;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_7 = p0;
		double L_8 = L_7.___U3DdBdbU3D_4;
		double L_9 = __this->___U3DdBdCU3D_5;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_10 = p0;
		double L_11 = L_10.___U3DdBdCU3D_5;
		double L_12 = __this->___U3DdBdcU3D_6;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_13 = p0;
		double L_14 = L_13.___U3DdBdcU3D_6;
		double L_15 = __this->___U3DdBdDU3D_7;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_16 = p0;
		double L_17 = L_16.___U3DdBdDU3D_7;
		double L_18 = __this->___U3DdBddU3D_8;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_19 = p0;
		double L_20 = L_19.___U3DdBddU3D_8;
		double L_21 = __this->___U3DdBdEU3D_9;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_22 = p0;
		double L_23 = L_22.___U3DdBdEU3D_9;
		double L_24 = __this->___U3DdBdeU3D_10;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_25 = p0;
		double L_26 = L_25.___U3DdBdeU3D_10;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_27;
		memset((&L_27), 0, sizeof(L_27));
		U3Da74U3D__ctor_m974FCEAB89608607A8A978647F40307F26F064E9((&L_27), ((double)il2cpp_codegen_add(L_0, L_2)), ((double)il2cpp_codegen_add(L_3, L_5)), ((double)il2cpp_codegen_add(L_6, L_8)), ((double)il2cpp_codegen_add(L_9, L_11)), ((double)il2cpp_codegen_add(L_12, L_14)), ((double)il2cpp_codegen_add(L_15, L_17)), ((double)il2cpp_codegen_add(L_18, L_20)), ((double)il2cpp_codegen_add(L_21, L_23)), ((double)il2cpp_codegen_add(L_24, L_26)), /*hidden argument*/NULL);
		return L_27;
	}
}
IL2CPP_EXTERN_C  U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 U3Da74U3D_U3Dccd0U3D_m51E22C050BFD01655951E1493801785611F06BB2_AdjustorThunk (RuntimeObject* __this, U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 p0, const RuntimeMethod* method)
{
	U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0*>(__this + _offset);
	U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 _returnValue;
	_returnValue = U3Da74U3D_U3Dccd0U3D_m51E22C050BFD01655951E1493801785611F06BB2(_thisAdjusted, p0, method);
	return _returnValue;
}
// =a74= =a74=::=ccd1=(=a74=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 U3Da74U3D_U3Dccd1U3D_mD293A2528046C27A15A11FF4E1D9A474AFDB72D9 (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* __this, U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 p0, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3DdBdaU3D_2;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_1 = p0;
		double L_2 = L_1.___U3DdBdaU3D_2;
		double L_3 = __this->___U3DdBdBU3D_3;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_4 = p0;
		double L_5 = L_4.___U3DdBdBU3D_3;
		double L_6 = __this->___U3DdBdbU3D_4;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_7 = p0;
		double L_8 = L_7.___U3DdBdbU3D_4;
		double L_9 = __this->___U3DdBdCU3D_5;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_10 = p0;
		double L_11 = L_10.___U3DdBdCU3D_5;
		double L_12 = __this->___U3DdBdcU3D_6;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_13 = p0;
		double L_14 = L_13.___U3DdBdcU3D_6;
		double L_15 = __this->___U3DdBdDU3D_7;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_16 = p0;
		double L_17 = L_16.___U3DdBdDU3D_7;
		double L_18 = __this->___U3DdBddU3D_8;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_19 = p0;
		double L_20 = L_19.___U3DdBddU3D_8;
		double L_21 = __this->___U3DdBdEU3D_9;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_22 = p0;
		double L_23 = L_22.___U3DdBdEU3D_9;
		double L_24 = __this->___U3DdBdeU3D_10;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_25 = p0;
		double L_26 = L_25.___U3DdBdeU3D_10;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_27;
		memset((&L_27), 0, sizeof(L_27));
		U3Da74U3D__ctor_m974FCEAB89608607A8A978647F40307F26F064E9((&L_27), ((double)il2cpp_codegen_subtract(L_0, L_2)), ((double)il2cpp_codegen_subtract(L_3, L_5)), ((double)il2cpp_codegen_subtract(L_6, L_8)), ((double)il2cpp_codegen_subtract(L_9, L_11)), ((double)il2cpp_codegen_subtract(L_12, L_14)), ((double)il2cpp_codegen_subtract(L_15, L_17)), ((double)il2cpp_codegen_subtract(L_18, L_20)), ((double)il2cpp_codegen_subtract(L_21, L_23)), ((double)il2cpp_codegen_subtract(L_24, L_26)), /*hidden argument*/NULL);
		return L_27;
	}
}
IL2CPP_EXTERN_C  U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 U3Da74U3D_U3Dccd1U3D_mD293A2528046C27A15A11FF4E1D9A474AFDB72D9_AdjustorThunk (RuntimeObject* __this, U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 p0, const RuntimeMethod* method)
{
	U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0*>(__this + _offset);
	U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 _returnValue;
	_returnValue = U3Da74U3D_U3Dccd1U3D_mD293A2528046C27A15A11FF4E1D9A474AFDB72D9(_thisAdjusted, p0, method);
	return _returnValue;
}
// =a74= =a74=::=ccd2=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 U3Da74U3D_U3Dccd2U3D_m6A9FC2FC4B0BE47639F047037D279A507FEA8C20 (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3DdBdaU3D_2;
		double L_1 = __this->___U3DdBdBU3D_3;
		double L_2 = __this->___U3DdBdbU3D_4;
		double L_3 = __this->___U3DdBdCU3D_5;
		double L_4 = __this->___U3DdBdcU3D_6;
		double L_5 = __this->___U3DdBdDU3D_7;
		double L_6 = __this->___U3DdBddU3D_8;
		double L_7 = __this->___U3DdBdEU3D_9;
		double L_8 = __this->___U3DdBdeU3D_10;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_9;
		memset((&L_9), 0, sizeof(L_9));
		U3Da74U3D__ctor_m974FCEAB89608607A8A978647F40307F26F064E9((&L_9), ((-L_0)), ((-L_1)), ((-L_2)), ((-L_3)), ((-L_4)), ((-L_5)), ((-L_6)), ((-L_7)), ((-L_8)), /*hidden argument*/NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C  U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 U3Da74U3D_U3Dccd2U3D_m6A9FC2FC4B0BE47639F047037D279A507FEA8C20_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0*>(__this + _offset);
	U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 _returnValue;
	_returnValue = U3Da74U3D_U3Dccd2U3D_m6A9FC2FC4B0BE47639F047037D279A507FEA8C20(_thisAdjusted, method);
	return _returnValue;
}
// =a74= =a74=::=ccd3=(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 U3Da74U3D_U3Dccd3U3D_m40E8FC0E2A12C7CED3F8AD4BF25F7D853CB772DA (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* __this, double p0, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3DdBdaU3D_2;
		double L_1 = p0;
		double L_2 = __this->___U3DdBdBU3D_3;
		double L_3 = p0;
		double L_4 = __this->___U3DdBdbU3D_4;
		double L_5 = p0;
		double L_6 = __this->___U3DdBdCU3D_5;
		double L_7 = p0;
		double L_8 = __this->___U3DdBdcU3D_6;
		double L_9 = p0;
		double L_10 = __this->___U3DdBdDU3D_7;
		double L_11 = p0;
		double L_12 = __this->___U3DdBddU3D_8;
		double L_13 = p0;
		double L_14 = __this->___U3DdBdEU3D_9;
		double L_15 = p0;
		double L_16 = __this->___U3DdBdeU3D_10;
		double L_17 = p0;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_18;
		memset((&L_18), 0, sizeof(L_18));
		U3Da74U3D__ctor_m974FCEAB89608607A8A978647F40307F26F064E9((&L_18), ((double)il2cpp_codegen_multiply(L_0, L_1)), ((double)il2cpp_codegen_multiply(L_2, L_3)), ((double)il2cpp_codegen_multiply(L_4, L_5)), ((double)il2cpp_codegen_multiply(L_6, L_7)), ((double)il2cpp_codegen_multiply(L_8, L_9)), ((double)il2cpp_codegen_multiply(L_10, L_11)), ((double)il2cpp_codegen_multiply(L_12, L_13)), ((double)il2cpp_codegen_multiply(L_14, L_15)), ((double)il2cpp_codegen_multiply(L_16, L_17)), /*hidden argument*/NULL);
		return L_18;
	}
}
IL2CPP_EXTERN_C  U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 U3Da74U3D_U3Dccd3U3D_m40E8FC0E2A12C7CED3F8AD4BF25F7D853CB772DA_AdjustorThunk (RuntimeObject* __this, double p0, const RuntimeMethod* method)
{
	U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0*>(__this + _offset);
	U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 _returnValue;
	_returnValue = U3Da74U3D_U3Dccd3U3D_m40E8FC0E2A12C7CED3F8AD4BF25F7D853CB772DA(_thisAdjusted, p0, method);
	return _returnValue;
}
// System.Double =a74=::=ccd4=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3Da74U3D_U3Dccd4U3D_m1C1DEE312AD83B08AD176F7435967A5CE0CB3241 (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = __this->___U3DdBdaU3D_2;
		double L_1 = __this->___U3DdBdBU3D_3;
		double L_2 = __this->___U3DdBdbU3D_4;
		double L_3 = __this->___U3DdBdCU3D_5;
		double L_4 = __this->___U3DdBdcU3D_6;
		double L_5 = __this->___U3DdBdDU3D_7;
		double L_6 = __this->___U3DdBddU3D_8;
		double L_7 = __this->___U3DdBdEU3D_9;
		double L_8 = __this->___U3DdBdeU3D_10;
		il2cpp_codegen_runtime_class_init_inline(U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0_il2cpp_TypeInfo_var);
		double L_9;
		L_9 = U3Da74U3D_U3DccdeU3D_m8EAB01F0B4E8A310F4624CCE588B10A4E8890975(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C  double U3Da74U3D_U3Dccd4U3D_m1C1DEE312AD83B08AD176F7435967A5CE0CB3241_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0*>(__this + _offset);
	double _returnValue;
	_returnValue = U3Da74U3D_U3Dccd4U3D_m1C1DEE312AD83B08AD176F7435967A5CE0CB3241(_thisAdjusted, method);
	return _returnValue;
}
// =a74= =a74=::=ccd5=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 U3Da74U3D_U3Dccd5U3D_m4E29C774B992B6DFD31B2B74DFC6CDB64AACA59E (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		double L_0;
		L_0 = U3Da74U3D_U3Dccd4U3D_m1C1DEE312AD83B08AD176F7435967A5CE0CB3241(__this, NULL);
		V_0 = L_0;
		double L_1 = V_0;
		if ((((double)L_1) == ((double)(0.0))))
		{
			goto IL_002a;
		}
	}
	{
		double L_2 = V_0;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_3;
		L_3 = U3Da74U3D_U3Dccd9U3D_m34340C6F630005521874EB9188418093555DF306(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0_il2cpp_TypeInfo_var);
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_4;
		L_4 = U3Da74U3D_op_Multiply_mB14231C010F61C9B35BD3A8F9E4709926E47A5F0(((double)((1.0)/L_2)), L_3, NULL);
		return L_4;
	}

IL_002a:
	{
		il2cpp_codegen_runtime_class_init_inline(U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0_il2cpp_TypeInfo_var);
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_5 = ((U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0_StaticFields*)il2cpp_codegen_static_fields_for(U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0_il2cpp_TypeInfo_var))->___U3DdBdAU3D_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 U3Da74U3D_U3Dccd5U3D_m4E29C774B992B6DFD31B2B74DFC6CDB64AACA59E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0*>(__this + _offset);
	U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 _returnValue;
	_returnValue = U3Da74U3D_U3Dccd5U3D_m4E29C774B992B6DFD31B2B74DFC6CDB64AACA59E(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean =a74=::Equals(=a74=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da74U3D_Equals_m95545B7259435165CEC8AD6614974B537EF9DE14 (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* __this, U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 ___other0, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3DdBdaU3D_2;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_1 = ___other0;
		double L_2 = L_1.___U3DdBdaU3D_2;
		if ((!(((double)L_0) == ((double)L_2))))
		{
			goto IL_007f;
		}
	}
	{
		double L_3 = __this->___U3DdBdBU3D_3;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_4 = ___other0;
		double L_5 = L_4.___U3DdBdBU3D_3;
		if ((!(((double)L_3) == ((double)L_5))))
		{
			goto IL_007f;
		}
	}
	{
		double L_6 = __this->___U3DdBdbU3D_4;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_7 = ___other0;
		double L_8 = L_7.___U3DdBdbU3D_4;
		if ((!(((double)L_6) == ((double)L_8))))
		{
			goto IL_007f;
		}
	}
	{
		double L_9 = __this->___U3DdBdCU3D_5;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_10 = ___other0;
		double L_11 = L_10.___U3DdBdCU3D_5;
		if ((!(((double)L_9) == ((double)L_11))))
		{
			goto IL_007f;
		}
	}
	{
		double L_12 = __this->___U3DdBdcU3D_6;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_13 = ___other0;
		double L_14 = L_13.___U3DdBdcU3D_6;
		if ((!(((double)L_12) == ((double)L_14))))
		{
			goto IL_007f;
		}
	}
	{
		double L_15 = __this->___U3DdBdDU3D_7;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_16 = ___other0;
		double L_17 = L_16.___U3DdBdDU3D_7;
		if ((!(((double)L_15) == ((double)L_17))))
		{
			goto IL_007f;
		}
	}
	{
		double L_18 = __this->___U3DdBddU3D_8;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_19 = ___other0;
		double L_20 = L_19.___U3DdBddU3D_8;
		if ((!(((double)L_18) == ((double)L_20))))
		{
			goto IL_007f;
		}
	}
	{
		double L_21 = __this->___U3DdBdEU3D_9;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_22 = ___other0;
		double L_23 = L_22.___U3DdBdEU3D_9;
		if ((!(((double)L_21) == ((double)L_23))))
		{
			goto IL_007f;
		}
	}
	{
		double L_24 = __this->___U3DdBdeU3D_10;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_25 = ___other0;
		double L_26 = L_25.___U3DdBdeU3D_10;
		return (bool)((((double)L_24) == ((double)L_26))? 1 : 0);
	}

IL_007f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool U3Da74U3D_Equals_m95545B7259435165CEC8AD6614974B537EF9DE14_AdjustorThunk (RuntimeObject* __this, U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 ___other0, const RuntimeMethod* method)
{
	U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0*>(__this + _offset);
	bool _returnValue;
	_returnValue = U3Da74U3D_Equals_m95545B7259435165CEC8AD6614974B537EF9DE14(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean =a74=::=ccd6=(=a74=&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da74U3D_U3Dccd6U3D_m7692E65A65242FBF74C88C00054D66E22321DAF6 (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* __this, U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* p0, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3DdBdaU3D_2;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* L_1 = p0;
		double L_2 = L_1->___U3DdBdaU3D_2;
		if ((!(((double)L_0) == ((double)L_2))))
		{
			goto IL_007f;
		}
	}
	{
		double L_3 = __this->___U3DdBdBU3D_3;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* L_4 = p0;
		double L_5 = L_4->___U3DdBdBU3D_3;
		if ((!(((double)L_3) == ((double)L_5))))
		{
			goto IL_007f;
		}
	}
	{
		double L_6 = __this->___U3DdBdbU3D_4;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* L_7 = p0;
		double L_8 = L_7->___U3DdBdbU3D_4;
		if ((!(((double)L_6) == ((double)L_8))))
		{
			goto IL_007f;
		}
	}
	{
		double L_9 = __this->___U3DdBdCU3D_5;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* L_10 = p0;
		double L_11 = L_10->___U3DdBdCU3D_5;
		if ((!(((double)L_9) == ((double)L_11))))
		{
			goto IL_007f;
		}
	}
	{
		double L_12 = __this->___U3DdBdcU3D_6;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* L_13 = p0;
		double L_14 = L_13->___U3DdBdcU3D_6;
		if ((!(((double)L_12) == ((double)L_14))))
		{
			goto IL_007f;
		}
	}
	{
		double L_15 = __this->___U3DdBdDU3D_7;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* L_16 = p0;
		double L_17 = L_16->___U3DdBdDU3D_7;
		if ((!(((double)L_15) == ((double)L_17))))
		{
			goto IL_007f;
		}
	}
	{
		double L_18 = __this->___U3DdBddU3D_8;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* L_19 = p0;
		double L_20 = L_19->___U3DdBddU3D_8;
		if ((!(((double)L_18) == ((double)L_20))))
		{
			goto IL_007f;
		}
	}
	{
		double L_21 = __this->___U3DdBdEU3D_9;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* L_22 = p0;
		double L_23 = L_22->___U3DdBdEU3D_9;
		if ((!(((double)L_21) == ((double)L_23))))
		{
			goto IL_007f;
		}
	}
	{
		double L_24 = __this->___U3DdBdeU3D_10;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* L_25 = p0;
		double L_26 = L_25->___U3DdBdeU3D_10;
		return (bool)((((double)L_24) == ((double)L_26))? 1 : 0);
	}

IL_007f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool U3Da74U3D_U3Dccd6U3D_m7692E65A65242FBF74C88C00054D66E22321DAF6_AdjustorThunk (RuntimeObject* __this, U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* p0, const RuntimeMethod* method)
{
	U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0*>(__this + _offset);
	bool _returnValue;
	_returnValue = U3Da74U3D_U3Dccd6U3D_m7692E65A65242FBF74C88C00054D66E22321DAF6(_thisAdjusted, p0, method);
	return _returnValue;
}
// System.Boolean =a74=::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da74U3D_Equals_m16D29ABF2F95288EB3A549ED8FBEF6143B2707C5 (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0_il2cpp_TypeInfo_var)))
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		V_0 = ((*(U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0*)((U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0*)(U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0*)UnBox(L_1, U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0_il2cpp_TypeInfo_var))));
		bool L_2;
		L_2 = U3Da74U3D_U3Dccd6U3D_m7692E65A65242FBF74C88C00054D66E22321DAF6(__this, (&V_0), NULL);
		return L_2;
	}

IL_0018:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool U3Da74U3D_Equals_m16D29ABF2F95288EB3A549ED8FBEF6143B2707C5_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0*>(__this + _offset);
	bool _returnValue;
	_returnValue = U3Da74U3D_Equals_m16D29ABF2F95288EB3A549ED8FBEF6143B2707C5(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 =a74=::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3Da74U3D_GetHashCode_mD06522DC6B6D39E37366D1DB05EB15BD7D59C581 (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* __this, const RuntimeMethod* method) 
{
	{
		double* L_0 = (&__this->___U3DdBdaU3D_2);
		int32_t L_1;
		L_1 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_0, NULL);
		double* L_2 = (&__this->___U3DdBdBU3D_3);
		int32_t L_3;
		L_3 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_2, NULL);
		double* L_4 = (&__this->___U3DdBdbU3D_4);
		int32_t L_5;
		L_5 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_4, NULL);
		double* L_6 = (&__this->___U3DdBdCU3D_5);
		int32_t L_7;
		L_7 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_6, NULL);
		double* L_8 = (&__this->___U3DdBdcU3D_6);
		int32_t L_9;
		L_9 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_8, NULL);
		double* L_10 = (&__this->___U3DdBdDU3D_7);
		int32_t L_11;
		L_11 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_10, NULL);
		double* L_12 = (&__this->___U3DdBddU3D_8);
		int32_t L_13;
		L_13 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_12, NULL);
		double* L_14 = (&__this->___U3DdBdEU3D_9);
		int32_t L_15;
		L_15 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_14, NULL);
		double* L_16 = (&__this->___U3DdBdeU3D_10);
		int32_t L_17;
		L_17 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_16, NULL);
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_1^L_3))^L_5))^L_7))^L_9))^L_11))^L_13))^L_15))^L_17));
	}
}
IL2CPP_EXTERN_C  int32_t U3Da74U3D_GetHashCode_mD06522DC6B6D39E37366D1DB05EB15BD7D59C581_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = U3Da74U3D_GetHashCode_mD06522DC6B6D39E37366D1DB05EB15BD7D59C581(_thisAdjusted, method);
	return _returnValue;
}
// =a74= =a74=::=ccd7=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 U3Da74U3D_U3Dccd7U3D_m0E76576C5A280AEBB59666B2781FCE20FD0E753C (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3DdBdaU3D_2;
		double L_1 = __this->___U3DdBdCU3D_5;
		double L_2 = __this->___U3DdBddU3D_8;
		double L_3 = __this->___U3DdBdBU3D_3;
		double L_4 = __this->___U3DdBdcU3D_6;
		double L_5 = __this->___U3DdBdEU3D_9;
		double L_6 = __this->___U3DdBdbU3D_4;
		double L_7 = __this->___U3DdBdDU3D_7;
		double L_8 = __this->___U3DdBdeU3D_10;
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_9;
		memset((&L_9), 0, sizeof(L_9));
		U3Da74U3D__ctor_m974FCEAB89608607A8A978647F40307F26F064E9((&L_9), L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C  U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 U3Da74U3D_U3Dccd7U3D_m0E76576C5A280AEBB59666B2781FCE20FD0E753C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0*>(__this + _offset);
	U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 _returnValue;
	_returnValue = U3Da74U3D_U3Dccd7U3D_m0E76576C5A280AEBB59666B2781FCE20FD0E753C(_thisAdjusted, method);
	return _returnValue;
}
// =a8f= =a74=::=ccd8=(=a8f=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE U3Da74U3D_U3Dccd8U3D_m785CD916C6CDBCB7B872B882769701C0ECBF53BC (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* __this, U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE p0, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_0 = p0;
		double L_1 = L_0.___U3DdBFAU3D_4;
		double L_2 = __this->___U3DdBdbU3D_4;
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_3 = p0;
		double L_4 = L_3.___U3DdBFaU3D_5;
		double L_5 = __this->___U3DdBdDU3D_7;
		double L_6 = __this->___U3DdBdeU3D_10;
		V_0 = ((double)((1.0)/((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_1, L_2)), ((double)il2cpp_codegen_multiply(L_4, L_5)))), L_6))));
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_7 = p0;
		double L_8 = L_7.___U3DdBFAU3D_4;
		double L_9 = __this->___U3DdBdaU3D_2;
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_10 = p0;
		double L_11 = L_10.___U3DdBFaU3D_5;
		double L_12 = __this->___U3DdBdCU3D_5;
		double L_13 = __this->___U3DdBddU3D_8;
		double L_14 = V_0;
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_15 = p0;
		double L_16 = L_15.___U3DdBFAU3D_4;
		double L_17 = __this->___U3DdBdBU3D_3;
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_18 = p0;
		double L_19 = L_18.___U3DdBFaU3D_5;
		double L_20 = __this->___U3DdBdcU3D_6;
		double L_21 = __this->___U3DdBdEU3D_9;
		double L_22 = V_0;
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_23;
		memset((&L_23), 0, sizeof(L_23));
		U3Da8fU3D__ctor_m9D7FCE73C72E54267B13BCDE59BB82A5DA9C0DCD((&L_23), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_8, L_9)), ((double)il2cpp_codegen_multiply(L_11, L_12)))), L_13)), L_14)), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_16, L_17)), ((double)il2cpp_codegen_multiply(L_19, L_20)))), L_21)), L_22)), /*hidden argument*/NULL);
		return L_23;
	}
}
IL2CPP_EXTERN_C  U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE U3Da74U3D_U3Dccd8U3D_m785CD916C6CDBCB7B872B882769701C0ECBF53BC_AdjustorThunk (RuntimeObject* __this, U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE p0, const RuntimeMethod* method)
{
	U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0*>(__this + _offset);
	U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE _returnValue;
	_returnValue = U3Da74U3D_U3Dccd8U3D_m785CD916C6CDBCB7B872B882769701C0ECBF53BC(_thisAdjusted, p0, method);
	return _returnValue;
}
// =a74= =a74=::=ccd9=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 U3Da74U3D_U3Dccd9U3D_m34340C6F630005521874EB9188418093555DF306 (U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = __this->___U3DdBdcU3D_6;
		double L_1 = __this->___U3DdBdEU3D_9;
		double L_2 = __this->___U3DdBdDU3D_7;
		double L_3 = __this->___U3DdBdeU3D_10;
		il2cpp_codegen_runtime_class_init_inline(U3Da73U3D_t1807FEE841D17BEA8890A5799135C9E10B1793D2_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = U3Da73U3D_U3DccD5U3D_m716CD2FCCF53FEED066AF8AD08E0AC316B2AEB29(L_0, L_1, L_2, L_3, NULL);
		double L_5 = __this->___U3DdBdBU3D_3;
		double L_6 = __this->___U3DdBdEU3D_9;
		double L_7 = __this->___U3DdBdbU3D_4;
		double L_8 = __this->___U3DdBdeU3D_10;
		double L_9;
		L_9 = U3Da73U3D_U3DccD5U3D_m716CD2FCCF53FEED066AF8AD08E0AC316B2AEB29(L_5, L_6, L_7, L_8, NULL);
		double L_10 = __this->___U3DdBdBU3D_3;
		double L_11 = __this->___U3DdBdcU3D_6;
		double L_12 = __this->___U3DdBdbU3D_4;
		double L_13 = __this->___U3DdBdeU3D_10;
		double L_14;
		L_14 = U3Da73U3D_U3DccD5U3D_m716CD2FCCF53FEED066AF8AD08E0AC316B2AEB29(L_10, L_11, L_12, L_13, NULL);
		double L_15 = __this->___U3DdBdCU3D_5;
		double L_16 = __this->___U3DdBddU3D_8;
		double L_17 = __this->___U3DdBdDU3D_7;
		double L_18 = __this->___U3DdBdeU3D_10;
		double L_19;
		L_19 = U3Da73U3D_U3DccD5U3D_m716CD2FCCF53FEED066AF8AD08E0AC316B2AEB29(L_15, L_16, L_17, L_18, NULL);
		double L_20 = __this->___U3DdBdaU3D_2;
		double L_21 = __this->___U3DdBddU3D_8;
		double L_22 = __this->___U3DdBdDU3D_7;
		double L_23 = __this->___U3DdBdeU3D_10;
		double L_24;
		L_24 = U3Da73U3D_U3DccD5U3D_m716CD2FCCF53FEED066AF8AD08E0AC316B2AEB29(L_20, L_21, L_22, L_23, NULL);
		double L_25 = __this->___U3DdBdaU3D_2;
		double L_26 = __this->___U3DdBdCU3D_5;
		double L_27 = __this->___U3DdBdbU3D_4;
		double L_28 = __this->___U3DdBdDU3D_7;
		double L_29;
		L_29 = U3Da73U3D_U3DccD5U3D_m716CD2FCCF53FEED066AF8AD08E0AC316B2AEB29(L_25, L_26, L_27, L_28, NULL);
		double L_30 = __this->___U3DdBdCU3D_5;
		double L_31 = __this->___U3DdBddU3D_8;
		double L_32 = __this->___U3DdBdcU3D_6;
		double L_33 = __this->___U3DdBdEU3D_9;
		double L_34;
		L_34 = U3Da73U3D_U3DccD5U3D_m716CD2FCCF53FEED066AF8AD08E0AC316B2AEB29(L_30, L_31, L_32, L_33, NULL);
		double L_35 = __this->___U3DdBdaU3D_2;
		double L_36 = __this->___U3DdBddU3D_8;
		double L_37 = __this->___U3DdBdBU3D_3;
		double L_38 = __this->___U3DdBdEU3D_9;
		double L_39;
		L_39 = U3Da73U3D_U3DccD5U3D_m716CD2FCCF53FEED066AF8AD08E0AC316B2AEB29(L_35, L_36, L_37, L_38, NULL);
		double L_40 = __this->___U3DdBdaU3D_2;
		double L_41 = __this->___U3DdBdCU3D_5;
		double L_42 = __this->___U3DdBdBU3D_3;
		double L_43 = __this->___U3DdBdcU3D_6;
		double L_44;
		L_44 = U3Da73U3D_U3DccD5U3D_m716CD2FCCF53FEED066AF8AD08E0AC316B2AEB29(L_40, L_41, L_42, L_43, NULL);
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_45;
		memset((&L_45), 0, sizeof(L_45));
		U3Da74U3D__ctor_m974FCEAB89608607A8A978647F40307F26F064E9((&L_45), L_4, ((double)il2cpp_codegen_multiply((-1.0), L_9)), L_14, ((double)il2cpp_codegen_multiply((-1.0), L_19)), L_24, ((double)il2cpp_codegen_multiply((-1.0), L_29)), L_34, ((double)il2cpp_codegen_multiply((-1.0), L_39)), L_44, /*hidden argument*/NULL);
		return L_45;
	}
}
IL2CPP_EXTERN_C  U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 U3Da74U3D_U3Dccd9U3D_m34340C6F630005521874EB9188418093555DF306_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0*>(__this + _offset);
	U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 _returnValue;
	_returnValue = U3Da74U3D_U3Dccd9U3D_m34340C6F630005521874EB9188418093555DF306(_thisAdjusted, method);
	return _returnValue;
}
// System.Void =a74=::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da74U3D__cctor_m1E3942BDD08CA1898229E4121D60410A5765214A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		U3Da74U3D__ctor_m974FCEAB89608607A8A978647F40307F26F064E9((&L_0), (1.0), (0.0), (0.0), (0.0), (1.0), (0.0), (0.0), (0.0), (1.0), /*hidden argument*/NULL);
		((U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0_StaticFields*)il2cpp_codegen_static_fields_for(U3Da74U3D_t3C649892148BC71E0547E9C373452642637A4BB0_il2cpp_TypeInfo_var))->___U3DdBD9U3D_0 = L_0;
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
// System.Void =a75=::.ctor(System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da75U3D__ctor_mE3BBD648173DE5B1AFF6305475F1B580A19D411C (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, double p0, double p1, double p2, double p3, double p4, double p5, double p6, double p7, double p8, double p9, double p10, double p11, double p12, double p13, double p14, double p15, const RuntimeMethod* method) 
{
	{
		double L_0 = p0;
		__this->___U3DdBd1U3D_3 = L_0;
		double L_1 = p1;
		__this->___U3DdBd2U3D_4 = L_1;
		double L_2 = p2;
		__this->___U3DdBd3U3D_5 = L_2;
		double L_3 = p3;
		__this->___U3DdBd4U3D_6 = L_3;
		double L_4 = p4;
		__this->___U3DdBd5U3D_7 = L_4;
		double L_5 = p5;
		__this->___U3DdBd6U3D_8 = L_5;
		double L_6 = p6;
		__this->___U3DdBd7U3D_9 = L_6;
		double L_7 = p7;
		__this->___U3DdBd8U3D_10 = L_7;
		double L_8 = p8;
		__this->___U3DdBd9U3D_11 = L_8;
		double L_9 = p9;
		__this->___U3DdBEAU3D_12 = L_9;
		double L_10 = p10;
		__this->___U3DdBEaU3D_13 = L_10;
		double L_11 = p11;
		__this->___U3DdBEBU3D_14 = L_11;
		double L_12 = p12;
		__this->___U3DdBEbU3D_15 = L_12;
		double L_13 = p13;
		__this->___U3DdBECU3D_16 = L_13;
		double L_14 = p14;
		__this->___U3DdBEcU3D_17 = L_14;
		double L_15 = p15;
		__this->___U3DdBEDU3D_18 = L_15;
		return;
	}
}
IL2CPP_EXTERN_C  void U3Da75U3D__ctor_mE3BBD648173DE5B1AFF6305475F1B580A19D411C_AdjustorThunk (RuntimeObject* __this, double p0, double p1, double p2, double p3, double p4, double p5, double p6, double p7, double p8, double p9, double p10, double p11, double p12, double p13, double p14, double p15, const RuntimeMethod* method)
{
	U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC*>(__this + _offset);
	U3Da75U3D__ctor_mE3BBD648173DE5B1AFF6305475F1B580A19D411C(_thisAdjusted, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, method);
}
// System.Void =a75=::.ctor(=a75=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da75U3D__ctor_m8A42933A9EBAFE88DEF2A36793B2D09C2DBAE5FE (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC p0, const RuntimeMethod* method) 
{
	{
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_0 = p0;
		double L_1 = L_0.___U3DdBd1U3D_3;
		__this->___U3DdBd1U3D_3 = L_1;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_2 = p0;
		double L_3 = L_2.___U3DdBd2U3D_4;
		__this->___U3DdBd2U3D_4 = L_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_4 = p0;
		double L_5 = L_4.___U3DdBd3U3D_5;
		__this->___U3DdBd3U3D_5 = L_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_6 = p0;
		double L_7 = L_6.___U3DdBd4U3D_6;
		__this->___U3DdBd4U3D_6 = L_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_8 = p0;
		double L_9 = L_8.___U3DdBd5U3D_7;
		__this->___U3DdBd5U3D_7 = L_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_10 = p0;
		double L_11 = L_10.___U3DdBd6U3D_8;
		__this->___U3DdBd6U3D_8 = L_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_12 = p0;
		double L_13 = L_12.___U3DdBd7U3D_9;
		__this->___U3DdBd7U3D_9 = L_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_14 = p0;
		double L_15 = L_14.___U3DdBd8U3D_10;
		__this->___U3DdBd8U3D_10 = L_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_16 = p0;
		double L_17 = L_16.___U3DdBd9U3D_11;
		__this->___U3DdBd9U3D_11 = L_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_18 = p0;
		double L_19 = L_18.___U3DdBEAU3D_12;
		__this->___U3DdBEAU3D_12 = L_19;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_20 = p0;
		double L_21 = L_20.___U3DdBEaU3D_13;
		__this->___U3DdBEaU3D_13 = L_21;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_22 = p0;
		double L_23 = L_22.___U3DdBEBU3D_14;
		__this->___U3DdBEBU3D_14 = L_23;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_24 = p0;
		double L_25 = L_24.___U3DdBEbU3D_15;
		__this->___U3DdBEbU3D_15 = L_25;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_26 = p0;
		double L_27 = L_26.___U3DdBECU3D_16;
		__this->___U3DdBECU3D_16 = L_27;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_28 = p0;
		double L_29 = L_28.___U3DdBEcU3D_17;
		__this->___U3DdBEcU3D_17 = L_29;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_30 = p0;
		double L_31 = L_30.___U3DdBEDU3D_18;
		__this->___U3DdBEDU3D_18 = L_31;
		return;
	}
}
IL2CPP_EXTERN_C  void U3Da75U3D__ctor_m8A42933A9EBAFE88DEF2A36793B2D09C2DBAE5FE_AdjustorThunk (RuntimeObject* __this, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC p0, const RuntimeMethod* method)
{
	U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC*>(__this + _offset);
	U3Da75U3D__ctor_m8A42933A9EBAFE88DEF2A36793B2D09C2DBAE5FE(_thisAdjusted, p0, method);
}
// System.Void =a75=::.ctor(=a75=&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da75U3D__ctor_mA4132D477D317E4002BAF660A6D1922D71BC17EB (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* p0, const RuntimeMethod* method) 
{
	{
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_0 = p0;
		double L_1 = L_0->___U3DdBd1U3D_3;
		__this->___U3DdBd1U3D_3 = L_1;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_2 = p0;
		double L_3 = L_2->___U3DdBd2U3D_4;
		__this->___U3DdBd2U3D_4 = L_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_4 = p0;
		double L_5 = L_4->___U3DdBd3U3D_5;
		__this->___U3DdBd3U3D_5 = L_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_6 = p0;
		double L_7 = L_6->___U3DdBd4U3D_6;
		__this->___U3DdBd4U3D_6 = L_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_8 = p0;
		double L_9 = L_8->___U3DdBd5U3D_7;
		__this->___U3DdBd5U3D_7 = L_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_10 = p0;
		double L_11 = L_10->___U3DdBd6U3D_8;
		__this->___U3DdBd6U3D_8 = L_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_12 = p0;
		double L_13 = L_12->___U3DdBd7U3D_9;
		__this->___U3DdBd7U3D_9 = L_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_14 = p0;
		double L_15 = L_14->___U3DdBd8U3D_10;
		__this->___U3DdBd8U3D_10 = L_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_16 = p0;
		double L_17 = L_16->___U3DdBd9U3D_11;
		__this->___U3DdBd9U3D_11 = L_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_18 = p0;
		double L_19 = L_18->___U3DdBEAU3D_12;
		__this->___U3DdBEAU3D_12 = L_19;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_20 = p0;
		double L_21 = L_20->___U3DdBEaU3D_13;
		__this->___U3DdBEaU3D_13 = L_21;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_22 = p0;
		double L_23 = L_22->___U3DdBEBU3D_14;
		__this->___U3DdBEBU3D_14 = L_23;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_24 = p0;
		double L_25 = L_24->___U3DdBEbU3D_15;
		__this->___U3DdBEbU3D_15 = L_25;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_26 = p0;
		double L_27 = L_26->___U3DdBECU3D_16;
		__this->___U3DdBECU3D_16 = L_27;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_28 = p0;
		double L_29 = L_28->___U3DdBEcU3D_17;
		__this->___U3DdBEcU3D_17 = L_29;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_30 = p0;
		double L_31 = L_30->___U3DdBEDU3D_18;
		__this->___U3DdBEDU3D_18 = L_31;
		return;
	}
}
IL2CPP_EXTERN_C  void U3Da75U3D__ctor_mA4132D477D317E4002BAF660A6D1922D71BC17EB_AdjustorThunk (RuntimeObject* __this, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* p0, const RuntimeMethod* method)
{
	U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC*>(__this + _offset);
	U3Da75U3D__ctor_mA4132D477D317E4002BAF660A6D1922D71BC17EB(_thisAdjusted, p0, method);
}
// System.Void =a75=::.ctor(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da75U3D__ctor_m0F3EAA9BADEA159921A34908E4FB8A6AB882716F (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* p0, const RuntimeMethod* method) 
{
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF5879EB54A6F529C447B74748DDD4533AAC5D364)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da75U3D__ctor_m0F3EAA9BADEA159921A34908E4FB8A6AB882716F_RuntimeMethod_var)));
	}

IL_000e:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2 = p0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		double L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		__this->___U3DdBd1U3D_3 = L_4;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_5 = p0;
		NullCheck(L_5);
		int32_t L_6 = 1;
		double L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		__this->___U3DdBd2U3D_4 = L_7;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_8 = p0;
		NullCheck(L_8);
		int32_t L_9 = 2;
		double L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		__this->___U3DdBd3U3D_5 = L_10;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_11 = p0;
		NullCheck(L_11);
		int32_t L_12 = 3;
		double L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		__this->___U3DdBd4U3D_6 = L_13;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_14 = p0;
		NullCheck(L_14);
		int32_t L_15 = 4;
		double L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		__this->___U3DdBd5U3D_7 = L_16;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_17 = p0;
		NullCheck(L_17);
		int32_t L_18 = 5;
		double L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		__this->___U3DdBd6U3D_8 = L_19;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_20 = p0;
		NullCheck(L_20);
		int32_t L_21 = 6;
		double L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		__this->___U3DdBd7U3D_9 = L_22;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_23 = p0;
		NullCheck(L_23);
		int32_t L_24 = 7;
		double L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		__this->___U3DdBd8U3D_10 = L_25;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_26 = p0;
		NullCheck(L_26);
		int32_t L_27 = 8;
		double L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		__this->___U3DdBd9U3D_11 = L_28;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_29 = p0;
		NullCheck(L_29);
		int32_t L_30 = ((int32_t)9);
		double L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		__this->___U3DdBEAU3D_12 = L_31;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_32 = p0;
		NullCheck(L_32);
		int32_t L_33 = ((int32_t)10);
		double L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		__this->___U3DdBEaU3D_13 = L_34;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_35 = p0;
		NullCheck(L_35);
		int32_t L_36 = ((int32_t)11);
		double L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		__this->___U3DdBEBU3D_14 = L_37;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_38 = p0;
		NullCheck(L_38);
		int32_t L_39 = ((int32_t)12);
		double L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		__this->___U3DdBEbU3D_15 = L_40;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_41 = p0;
		NullCheck(L_41);
		int32_t L_42 = ((int32_t)13);
		double L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		__this->___U3DdBECU3D_16 = L_43;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_44 = p0;
		NullCheck(L_44);
		int32_t L_45 = ((int32_t)14);
		double L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		__this->___U3DdBEcU3D_17 = L_46;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_47 = p0;
		NullCheck(L_47);
		int32_t L_48 = ((int32_t)15);
		double L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		__this->___U3DdBEDU3D_18 = L_49;
		return;
	}
}
IL2CPP_EXTERN_C  void U3Da75U3D__ctor_m0F3EAA9BADEA159921A34908E4FB8A6AB882716F_AdjustorThunk (RuntimeObject* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* p0, const RuntimeMethod* method)
{
	U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC*>(__this + _offset);
	U3Da75U3D__ctor_m0F3EAA9BADEA159921A34908E4FB8A6AB882716F(_thisAdjusted, p0, method);
}
// System.Double =a75=::=ccEA=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3Da75U3D_U3DccEAU3D_m2A0B4C60D26E1851C2503E37B4B909E23A653B44 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3DdBEbU3D_15;
		return L_0;
	}
}
IL2CPP_EXTERN_C  double U3Da75U3D_U3DccEAU3D_m2A0B4C60D26E1851C2503E37B4B909E23A653B44_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC*>(__this + _offset);
	double _returnValue;
	_returnValue = U3Da75U3D_U3DccEAU3D_m2A0B4C60D26E1851C2503E37B4B909E23A653B44_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void =a75=::=ccEa=(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da75U3D_U3DccEaU3D_mADFC1F8E7CFE3F3686C325442574CA7B2A2364B9 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, double p0, const RuntimeMethod* method) 
{
	{
		double L_0 = p0;
		__this->___U3DdBEbU3D_15 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void U3Da75U3D_U3DccEaU3D_mADFC1F8E7CFE3F3686C325442574CA7B2A2364B9_AdjustorThunk (RuntimeObject* __this, double p0, const RuntimeMethod* method)
{
	U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC*>(__this + _offset);
	U3Da75U3D_U3DccEaU3D_mADFC1F8E7CFE3F3686C325442574CA7B2A2364B9_inline(_thisAdjusted, p0, method);
}
// System.Double =a75=::=ccEB=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3Da75U3D_U3DccEBU3D_mF359D3692FA7E2DD4168535819902EB710FF5B85 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3DdBECU3D_16;
		return L_0;
	}
}
IL2CPP_EXTERN_C  double U3Da75U3D_U3DccEBU3D_mF359D3692FA7E2DD4168535819902EB710FF5B85_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC*>(__this + _offset);
	double _returnValue;
	_returnValue = U3Da75U3D_U3DccEBU3D_mF359D3692FA7E2DD4168535819902EB710FF5B85_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void =a75=::=ccEb=(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da75U3D_U3DccEbU3D_m010FB09878E2E9D14E248A36621C1C8BCEA90882 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, double p0, const RuntimeMethod* method) 
{
	{
		double L_0 = p0;
		__this->___U3DdBECU3D_16 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void U3Da75U3D_U3DccEbU3D_m010FB09878E2E9D14E248A36621C1C8BCEA90882_AdjustorThunk (RuntimeObject* __this, double p0, const RuntimeMethod* method)
{
	U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC*>(__this + _offset);
	U3Da75U3D_U3DccEbU3D_m010FB09878E2E9D14E248A36621C1C8BCEA90882_inline(_thisAdjusted, p0, method);
}
// System.Double =a75=::=ccEC=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3Da75U3D_U3DccECU3D_mB98CE43F9CF5CEF5FDEFEA2579C9902C74D27D08 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3DdBEcU3D_17;
		return L_0;
	}
}
IL2CPP_EXTERN_C  double U3Da75U3D_U3DccECU3D_mB98CE43F9CF5CEF5FDEFEA2579C9902C74D27D08_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC*>(__this + _offset);
	double _returnValue;
	_returnValue = U3Da75U3D_U3DccECU3D_mB98CE43F9CF5CEF5FDEFEA2579C9902C74D27D08_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void =a75=::=ccEc=(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da75U3D_U3DccEcU3D_m874EA69FFCB99888094B324AF522A4009F9FE100 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, double p0, const RuntimeMethod* method) 
{
	{
		double L_0 = p0;
		__this->___U3DdBEcU3D_17 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void U3Da75U3D_U3DccEcU3D_m874EA69FFCB99888094B324AF522A4009F9FE100_AdjustorThunk (RuntimeObject* __this, double p0, const RuntimeMethod* method)
{
	U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC*>(__this + _offset);
	U3Da75U3D_U3DccEcU3D_m874EA69FFCB99888094B324AF522A4009F9FE100_inline(_thisAdjusted, p0, method);
}
// System.Boolean =a75=::=ccED=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da75U3D_U3DccEDU3D_m313A68DA8284E9D4E6E6F9A6DF899B0FB4DC0F3C (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3DdBEbU3D_15;
		if ((!(((double)L_0) == ((double)(0.0)))))
		{
			goto IL_0129;
		}
	}
	{
		double L_1 = __this->___U3DdBECU3D_16;
		if ((!(((double)L_1) == ((double)(0.0)))))
		{
			goto IL_0129;
		}
	}
	{
		double L_2 = __this->___U3DdBEcU3D_17;
		if ((!(((double)L_2) == ((double)(0.0)))))
		{
			goto IL_0129;
		}
	}
	{
		double L_3 = __this->___U3DdBEDU3D_18;
		if ((!(((double)L_3) == ((double)(0.0)))))
		{
			goto IL_0129;
		}
	}
	{
		double L_4 = __this->___U3DdBd1U3D_3;
		if ((!(((double)L_4) == ((double)(0.0)))))
		{
			goto IL_0129;
		}
	}
	{
		double L_5 = __this->___U3DdBd2U3D_4;
		if ((!(((double)L_5) == ((double)(0.0)))))
		{
			goto IL_0129;
		}
	}
	{
		double L_6 = __this->___U3DdBd3U3D_5;
		if ((!(((double)L_6) == ((double)(0.0)))))
		{
			goto IL_0129;
		}
	}
	{
		double L_7 = __this->___U3DdBd4U3D_6;
		if ((!(((double)L_7) == ((double)(0.0)))))
		{
			goto IL_0129;
		}
	}
	{
		double L_8 = __this->___U3DdBd5U3D_7;
		if ((!(((double)L_8) == ((double)(0.0)))))
		{
			goto IL_0129;
		}
	}
	{
		double L_9 = __this->___U3DdBd6U3D_8;
		if ((!(((double)L_9) == ((double)(0.0)))))
		{
			goto IL_0129;
		}
	}
	{
		double L_10 = __this->___U3DdBd7U3D_9;
		if ((!(((double)L_10) == ((double)(0.0)))))
		{
			goto IL_0129;
		}
	}
	{
		double L_11 = __this->___U3DdBd8U3D_10;
		if ((!(((double)L_11) == ((double)(0.0)))))
		{
			goto IL_0129;
		}
	}
	{
		double L_12 = __this->___U3DdBd9U3D_11;
		if ((!(((double)L_12) == ((double)(0.0)))))
		{
			goto IL_0129;
		}
	}
	{
		double L_13 = __this->___U3DdBEAU3D_12;
		if ((!(((double)L_13) == ((double)(0.0)))))
		{
			goto IL_0129;
		}
	}
	{
		double L_14 = __this->___U3DdBEaU3D_13;
		if ((!(((double)L_14) == ((double)(0.0)))))
		{
			goto IL_0129;
		}
	}
	{
		double L_15 = __this->___U3DdBEBU3D_14;
		return (bool)((((double)L_15) == ((double)(0.0)))? 1 : 0);
	}

IL_0129:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool U3Da75U3D_U3DccEDU3D_m313A68DA8284E9D4E6E6F9A6DF899B0FB4DC0F3C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC*>(__this + _offset);
	bool _returnValue;
	_returnValue = U3Da75U3D_U3DccEDU3D_m313A68DA8284E9D4E6E6F9A6DF899B0FB4DC0F3C(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean =a75=::=ccEd=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da75U3D_U3DccEdU3D_m5947426A3332CDC6E85924386605FDC6439F8F0B (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3DdBEbU3D_15;
		if ((!(((double)L_0) == ((double)(0.0)))))
		{
			goto IL_0129;
		}
	}
	{
		double L_1 = __this->___U3DdBECU3D_16;
		if ((!(((double)L_1) == ((double)(0.0)))))
		{
			goto IL_0129;
		}
	}
	{
		double L_2 = __this->___U3DdBEcU3D_17;
		if ((!(((double)L_2) == ((double)(0.0)))))
		{
			goto IL_0129;
		}
	}
	{
		double L_3 = __this->___U3DdBEDU3D_18;
		if ((!(((double)L_3) == ((double)(1.0)))))
		{
			goto IL_0129;
		}
	}
	{
		double L_4 = __this->___U3DdBd1U3D_3;
		if ((!(((double)L_4) == ((double)(1.0)))))
		{
			goto IL_0129;
		}
	}
	{
		double L_5 = __this->___U3DdBd2U3D_4;
		if ((!(((double)L_5) == ((double)(0.0)))))
		{
			goto IL_0129;
		}
	}
	{
		double L_6 = __this->___U3DdBd3U3D_5;
		if ((!(((double)L_6) == ((double)(0.0)))))
		{
			goto IL_0129;
		}
	}
	{
		double L_7 = __this->___U3DdBd4U3D_6;
		if ((!(((double)L_7) == ((double)(0.0)))))
		{
			goto IL_0129;
		}
	}
	{
		double L_8 = __this->___U3DdBd5U3D_7;
		if ((!(((double)L_8) == ((double)(0.0)))))
		{
			goto IL_0129;
		}
	}
	{
		double L_9 = __this->___U3DdBd6U3D_8;
		if ((!(((double)L_9) == ((double)(1.0)))))
		{
			goto IL_0129;
		}
	}
	{
		double L_10 = __this->___U3DdBd7U3D_9;
		if ((!(((double)L_10) == ((double)(0.0)))))
		{
			goto IL_0129;
		}
	}
	{
		double L_11 = __this->___U3DdBd8U3D_10;
		if ((!(((double)L_11) == ((double)(0.0)))))
		{
			goto IL_0129;
		}
	}
	{
		double L_12 = __this->___U3DdBd9U3D_11;
		if ((!(((double)L_12) == ((double)(0.0)))))
		{
			goto IL_0129;
		}
	}
	{
		double L_13 = __this->___U3DdBEAU3D_12;
		if ((!(((double)L_13) == ((double)(0.0)))))
		{
			goto IL_0129;
		}
	}
	{
		double L_14 = __this->___U3DdBEaU3D_13;
		if ((!(((double)L_14) == ((double)(1.0)))))
		{
			goto IL_0129;
		}
	}
	{
		double L_15 = __this->___U3DdBEBU3D_14;
		return (bool)((((double)L_15) == ((double)(0.0)))? 1 : 0);
	}

IL_0129:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool U3Da75U3D_U3DccEdU3D_m5947426A3332CDC6E85924386605FDC6439F8F0B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC*>(__this + _offset);
	bool _returnValue;
	_returnValue = U3Da75U3D_U3DccEdU3D_m5947426A3332CDC6E85924386605FDC6439F8F0B(_thisAdjusted, method);
	return _returnValue;
}
// System.Double =a75=::=ccEE=(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3Da75U3D_U3DccEEU3D_m41B1B199C83DF2569543C0049898BEAE9EC97DA4 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, int32_t p0, int32_t p1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = p1;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_006b;
			}
			case 2:
			{
				goto IL_00bb;
			}
			case 3:
			{
				goto IL_010b;
			}
		}
	}
	{
		goto IL_015b;
	}

IL_001b:
	{
		int32_t L_1 = p0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0033;
			}
			case 1:
			{
				goto IL_003a;
			}
			case 2:
			{
				goto IL_0041;
			}
			case 3:
			{
				goto IL_0048;
			}
		}
	}
	{
		goto IL_004f;
	}

IL_0033:
	{
		double L_2 = __this->___U3DdBd1U3D_3;
		return L_2;
	}

IL_003a:
	{
		double L_3 = __this->___U3DdBd2U3D_4;
		return L_3;
	}

IL_0041:
	{
		double L_4 = __this->___U3DdBd3U3D_5;
		return L_4;
	}

IL_0048:
	{
		double L_5 = __this->___U3DdBd4U3D_6;
		return L_5;
	}

IL_004f:
	{
		int32_t L_6 = p0;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_7);
		int32_t L_9 = p1;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_10);
		String_t* L_12;
		L_12 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2DC756233000EEEBA87373FF3E461EF12B79A2F8)), L_8, L_11, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_13 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da75U3D_U3DccEEU3D_m41B1B199C83DF2569543C0049898BEAE9EC97DA4_RuntimeMethod_var)));
	}

IL_006b:
	{
		int32_t L_14 = p0;
		switch (L_14)
		{
			case 0:
			{
				goto IL_0083;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_0091;
			}
			case 3:
			{
				goto IL_0098;
			}
		}
	}
	{
		goto IL_009f;
	}

IL_0083:
	{
		double L_15 = __this->___U3DdBd5U3D_7;
		return L_15;
	}

IL_008a:
	{
		double L_16 = __this->___U3DdBd6U3D_8;
		return L_16;
	}

IL_0091:
	{
		double L_17 = __this->___U3DdBd7U3D_9;
		return L_17;
	}

IL_0098:
	{
		double L_18 = __this->___U3DdBd8U3D_10;
		return L_18;
	}

IL_009f:
	{
		int32_t L_19 = p0;
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_20);
		int32_t L_22 = p1;
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_23);
		String_t* L_25;
		L_25 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2DC756233000EEEBA87373FF3E461EF12B79A2F8)), L_21, L_24, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_26 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_26);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_26, L_25, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da75U3D_U3DccEEU3D_m41B1B199C83DF2569543C0049898BEAE9EC97DA4_RuntimeMethod_var)));
	}

IL_00bb:
	{
		int32_t L_27 = p0;
		switch (L_27)
		{
			case 0:
			{
				goto IL_00d3;
			}
			case 1:
			{
				goto IL_00da;
			}
			case 2:
			{
				goto IL_00e1;
			}
			case 3:
			{
				goto IL_00e8;
			}
		}
	}
	{
		goto IL_00ef;
	}

IL_00d3:
	{
		double L_28 = __this->___U3DdBd9U3D_11;
		return L_28;
	}

IL_00da:
	{
		double L_29 = __this->___U3DdBEAU3D_12;
		return L_29;
	}

IL_00e1:
	{
		double L_30 = __this->___U3DdBEaU3D_13;
		return L_30;
	}

IL_00e8:
	{
		double L_31 = __this->___U3DdBEBU3D_14;
		return L_31;
	}

IL_00ef:
	{
		int32_t L_32 = p0;
		int32_t L_33 = L_32;
		RuntimeObject* L_34 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_33);
		int32_t L_35 = p1;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_36);
		String_t* L_38;
		L_38 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2DC756233000EEEBA87373FF3E461EF12B79A2F8)), L_34, L_37, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_39 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_39);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_39, L_38, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da75U3D_U3DccEEU3D_m41B1B199C83DF2569543C0049898BEAE9EC97DA4_RuntimeMethod_var)));
	}

IL_010b:
	{
		int32_t L_40 = p0;
		switch (L_40)
		{
			case 0:
			{
				goto IL_0123;
			}
			case 1:
			{
				goto IL_012a;
			}
			case 2:
			{
				goto IL_0131;
			}
			case 3:
			{
				goto IL_0138;
			}
		}
	}
	{
		goto IL_013f;
	}

IL_0123:
	{
		double L_41 = __this->___U3DdBEbU3D_15;
		return L_41;
	}

IL_012a:
	{
		double L_42 = __this->___U3DdBECU3D_16;
		return L_42;
	}

IL_0131:
	{
		double L_43 = __this->___U3DdBEcU3D_17;
		return L_43;
	}

IL_0138:
	{
		double L_44 = __this->___U3DdBEDU3D_18;
		return L_44;
	}

IL_013f:
	{
		int32_t L_45 = p0;
		int32_t L_46 = L_45;
		RuntimeObject* L_47 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_46);
		int32_t L_48 = p1;
		int32_t L_49 = L_48;
		RuntimeObject* L_50 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_49);
		String_t* L_51;
		L_51 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2DC756233000EEEBA87373FF3E461EF12B79A2F8)), L_47, L_50, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_52 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_52);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_52, L_51, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_52, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da75U3D_U3DccEEU3D_m41B1B199C83DF2569543C0049898BEAE9EC97DA4_RuntimeMethod_var)));
	}

IL_015b:
	{
		int32_t L_53 = p0;
		int32_t L_54 = L_53;
		RuntimeObject* L_55 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_54);
		int32_t L_56 = p1;
		int32_t L_57 = L_56;
		RuntimeObject* L_58 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_57);
		String_t* L_59;
		L_59 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2DC756233000EEEBA87373FF3E461EF12B79A2F8)), L_55, L_58, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_60 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_60);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_60, L_59, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_60, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da75U3D_U3DccEEU3D_m41B1B199C83DF2569543C0049898BEAE9EC97DA4_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  double U3Da75U3D_U3DccEEU3D_m41B1B199C83DF2569543C0049898BEAE9EC97DA4_AdjustorThunk (RuntimeObject* __this, int32_t p0, int32_t p1, const RuntimeMethod* method)
{
	U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC*>(__this + _offset);
	double _returnValue;
	_returnValue = U3Da75U3D_U3DccEEU3D_m41B1B199C83DF2569543C0049898BEAE9EC97DA4(_thisAdjusted, p0, p1, method);
	return _returnValue;
}
// System.Void =a75=::=ccEe=(System.Int32,System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da75U3D_U3DccEeU3D_m3110F4F1A627022CB8B78EB9148CFB1284CD47D5 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, int32_t p0, int32_t p1, double p2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = p1;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_006f;
			}
			case 2:
			{
				goto IL_00c3;
			}
			case 3:
			{
				goto IL_0117;
			}
		}
	}
	{
		goto IL_016b;
	}

IL_001b:
	{
		int32_t L_1 = p0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0033;
			}
			case 1:
			{
				goto IL_003b;
			}
			case 2:
			{
				goto IL_0043;
			}
			case 3:
			{
				goto IL_004b;
			}
		}
	}
	{
		goto IL_0053;
	}

IL_0033:
	{
		double L_2 = p2;
		__this->___U3DdBd1U3D_3 = L_2;
		return;
	}

IL_003b:
	{
		double L_3 = p2;
		__this->___U3DdBd2U3D_4 = L_3;
		return;
	}

IL_0043:
	{
		double L_4 = p2;
		__this->___U3DdBd3U3D_5 = L_4;
		return;
	}

IL_004b:
	{
		double L_5 = p2;
		__this->___U3DdBd4U3D_6 = L_5;
		return;
	}

IL_0053:
	{
		int32_t L_6 = p0;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_7);
		int32_t L_9 = p1;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_10);
		String_t* L_12;
		L_12 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2DC756233000EEEBA87373FF3E461EF12B79A2F8)), L_8, L_11, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_13 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da75U3D_U3DccEeU3D_m3110F4F1A627022CB8B78EB9148CFB1284CD47D5_RuntimeMethod_var)));
	}

IL_006f:
	{
		int32_t L_14 = p0;
		switch (L_14)
		{
			case 0:
			{
				goto IL_0087;
			}
			case 1:
			{
				goto IL_008f;
			}
			case 2:
			{
				goto IL_0097;
			}
			case 3:
			{
				goto IL_009f;
			}
		}
	}
	{
		goto IL_00a7;
	}

IL_0087:
	{
		double L_15 = p2;
		__this->___U3DdBd5U3D_7 = L_15;
		return;
	}

IL_008f:
	{
		double L_16 = p2;
		__this->___U3DdBd6U3D_8 = L_16;
		return;
	}

IL_0097:
	{
		double L_17 = p2;
		__this->___U3DdBd7U3D_9 = L_17;
		return;
	}

IL_009f:
	{
		double L_18 = p2;
		__this->___U3DdBd8U3D_10 = L_18;
		return;
	}

IL_00a7:
	{
		int32_t L_19 = p0;
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_20);
		int32_t L_22 = p1;
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_23);
		String_t* L_25;
		L_25 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2DC756233000EEEBA87373FF3E461EF12B79A2F8)), L_21, L_24, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_26 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_26);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_26, L_25, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da75U3D_U3DccEeU3D_m3110F4F1A627022CB8B78EB9148CFB1284CD47D5_RuntimeMethod_var)));
	}

IL_00c3:
	{
		int32_t L_27 = p0;
		switch (L_27)
		{
			case 0:
			{
				goto IL_00db;
			}
			case 1:
			{
				goto IL_00e3;
			}
			case 2:
			{
				goto IL_00eb;
			}
			case 3:
			{
				goto IL_00f3;
			}
		}
	}
	{
		goto IL_00fb;
	}

IL_00db:
	{
		double L_28 = p2;
		__this->___U3DdBd9U3D_11 = L_28;
		return;
	}

IL_00e3:
	{
		double L_29 = p2;
		__this->___U3DdBEAU3D_12 = L_29;
		return;
	}

IL_00eb:
	{
		double L_30 = p2;
		__this->___U3DdBEaU3D_13 = L_30;
		return;
	}

IL_00f3:
	{
		double L_31 = p2;
		__this->___U3DdBEBU3D_14 = L_31;
		return;
	}

IL_00fb:
	{
		int32_t L_32 = p0;
		int32_t L_33 = L_32;
		RuntimeObject* L_34 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_33);
		int32_t L_35 = p1;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_36);
		String_t* L_38;
		L_38 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2DC756233000EEEBA87373FF3E461EF12B79A2F8)), L_34, L_37, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_39 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_39);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_39, L_38, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da75U3D_U3DccEeU3D_m3110F4F1A627022CB8B78EB9148CFB1284CD47D5_RuntimeMethod_var)));
	}

IL_0117:
	{
		int32_t L_40 = p0;
		switch (L_40)
		{
			case 0:
			{
				goto IL_012f;
			}
			case 1:
			{
				goto IL_0137;
			}
			case 2:
			{
				goto IL_013f;
			}
			case 3:
			{
				goto IL_0147;
			}
		}
	}
	{
		goto IL_014f;
	}

IL_012f:
	{
		double L_41 = p2;
		__this->___U3DdBEbU3D_15 = L_41;
		return;
	}

IL_0137:
	{
		double L_42 = p2;
		__this->___U3DdBECU3D_16 = L_42;
		return;
	}

IL_013f:
	{
		double L_43 = p2;
		__this->___U3DdBEcU3D_17 = L_43;
		return;
	}

IL_0147:
	{
		double L_44 = p2;
		__this->___U3DdBEDU3D_18 = L_44;
		return;
	}

IL_014f:
	{
		int32_t L_45 = p0;
		int32_t L_46 = L_45;
		RuntimeObject* L_47 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_46);
		int32_t L_48 = p1;
		int32_t L_49 = L_48;
		RuntimeObject* L_50 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_49);
		String_t* L_51;
		L_51 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2DC756233000EEEBA87373FF3E461EF12B79A2F8)), L_47, L_50, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_52 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_52);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_52, L_51, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_52, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da75U3D_U3DccEeU3D_m3110F4F1A627022CB8B78EB9148CFB1284CD47D5_RuntimeMethod_var)));
	}

IL_016b:
	{
		int32_t L_53 = p0;
		int32_t L_54 = L_53;
		RuntimeObject* L_55 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_54);
		int32_t L_56 = p1;
		int32_t L_57 = L_56;
		RuntimeObject* L_58 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_57);
		String_t* L_59;
		L_59 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2DC756233000EEEBA87373FF3E461EF12B79A2F8)), L_55, L_58, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_60 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_60);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_60, L_59, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_60, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da75U3D_U3DccEeU3D_m3110F4F1A627022CB8B78EB9148CFB1284CD47D5_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  void U3Da75U3D_U3DccEeU3D_m3110F4F1A627022CB8B78EB9148CFB1284CD47D5_AdjustorThunk (RuntimeObject* __this, int32_t p0, int32_t p1, double p2, const RuntimeMethod* method)
{
	U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC*>(__this + _offset);
	U3Da75U3D_U3DccEeU3D_m3110F4F1A627022CB8B78EB9148CFB1284CD47D5(_thisAdjusted, p0, p1, p2, method);
}
// =a75= =a75=::=ccEF=(=a75=,=a75=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC U3Da75U3D_U3DccEFU3D_mE3D2E7E19C669F1572B70126EB17ED37F6C0216C (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC p0, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC p1, const RuntimeMethod* method) 
{
	{
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_0 = p0;
		double L_1 = L_0.___U3DdBd1U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_2 = p1;
		double L_3 = L_2.___U3DdBd1U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_4 = p0;
		double L_5 = L_4.___U3DdBd2U3D_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_6 = p1;
		double L_7 = L_6.___U3DdBd2U3D_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_8 = p0;
		double L_9 = L_8.___U3DdBd3U3D_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_10 = p1;
		double L_11 = L_10.___U3DdBd3U3D_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_12 = p0;
		double L_13 = L_12.___U3DdBd4U3D_6;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_14 = p1;
		double L_15 = L_14.___U3DdBd4U3D_6;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_16 = p0;
		double L_17 = L_16.___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_18 = p1;
		double L_19 = L_18.___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_20 = p0;
		double L_21 = L_20.___U3DdBd6U3D_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_22 = p1;
		double L_23 = L_22.___U3DdBd6U3D_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_24 = p0;
		double L_25 = L_24.___U3DdBd7U3D_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_26 = p1;
		double L_27 = L_26.___U3DdBd7U3D_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_28 = p0;
		double L_29 = L_28.___U3DdBd8U3D_10;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_30 = p1;
		double L_31 = L_30.___U3DdBd8U3D_10;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_32 = p0;
		double L_33 = L_32.___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_34 = p1;
		double L_35 = L_34.___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_36 = p0;
		double L_37 = L_36.___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_38 = p1;
		double L_39 = L_38.___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_40 = p0;
		double L_41 = L_40.___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_42 = p1;
		double L_43 = L_42.___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_44 = p0;
		double L_45 = L_44.___U3DdBEBU3D_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_46 = p1;
		double L_47 = L_46.___U3DdBEBU3D_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_48 = p0;
		double L_49 = L_48.___U3DdBEbU3D_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_50 = p1;
		double L_51 = L_50.___U3DdBEbU3D_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_52 = p0;
		double L_53 = L_52.___U3DdBECU3D_16;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_54 = p1;
		double L_55 = L_54.___U3DdBECU3D_16;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_56 = p0;
		double L_57 = L_56.___U3DdBEcU3D_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_58 = p1;
		double L_59 = L_58.___U3DdBEcU3D_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_60 = p0;
		double L_61 = L_60.___U3DdBEDU3D_18;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_62 = p1;
		double L_63 = L_62.___U3DdBEDU3D_18;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_64;
		memset((&L_64), 0, sizeof(L_64));
		U3Da75U3D__ctor_mE3BBD648173DE5B1AFF6305475F1B580A19D411C((&L_64), ((double)il2cpp_codegen_add(L_1, L_3)), ((double)il2cpp_codegen_add(L_5, L_7)), ((double)il2cpp_codegen_add(L_9, L_11)), ((double)il2cpp_codegen_add(L_13, L_15)), ((double)il2cpp_codegen_add(L_17, L_19)), ((double)il2cpp_codegen_add(L_21, L_23)), ((double)il2cpp_codegen_add(L_25, L_27)), ((double)il2cpp_codegen_add(L_29, L_31)), ((double)il2cpp_codegen_add(L_33, L_35)), ((double)il2cpp_codegen_add(L_37, L_39)), ((double)il2cpp_codegen_add(L_41, L_43)), ((double)il2cpp_codegen_add(L_45, L_47)), ((double)il2cpp_codegen_add(L_49, L_51)), ((double)il2cpp_codegen_add(L_53, L_55)), ((double)il2cpp_codegen_add(L_57, L_59)), ((double)il2cpp_codegen_add(L_61, L_63)), /*hidden argument*/NULL);
		return L_64;
	}
}
// =a75= =a75=::=ccEf=(=a75=&,=a75=&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC U3Da75U3D_U3DccEfU3D_m0577DD182920AB5F84D11F5A093DF5347BB8AC9F (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* p0, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* p1, const RuntimeMethod* method) 
{
	{
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_0 = p0;
		double L_1 = L_0->___U3DdBd1U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_2 = p1;
		double L_3 = L_2->___U3DdBd1U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_4 = p0;
		double L_5 = L_4->___U3DdBd2U3D_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_6 = p1;
		double L_7 = L_6->___U3DdBd2U3D_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_8 = p0;
		double L_9 = L_8->___U3DdBd3U3D_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_10 = p1;
		double L_11 = L_10->___U3DdBd3U3D_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_12 = p0;
		double L_13 = L_12->___U3DdBd4U3D_6;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_14 = p1;
		double L_15 = L_14->___U3DdBd4U3D_6;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_16 = p0;
		double L_17 = L_16->___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_18 = p1;
		double L_19 = L_18->___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_20 = p0;
		double L_21 = L_20->___U3DdBd6U3D_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_22 = p1;
		double L_23 = L_22->___U3DdBd6U3D_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_24 = p0;
		double L_25 = L_24->___U3DdBd7U3D_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_26 = p1;
		double L_27 = L_26->___U3DdBd7U3D_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_28 = p0;
		double L_29 = L_28->___U3DdBd8U3D_10;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_30 = p1;
		double L_31 = L_30->___U3DdBd8U3D_10;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_32 = p0;
		double L_33 = L_32->___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_34 = p1;
		double L_35 = L_34->___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_36 = p0;
		double L_37 = L_36->___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_38 = p1;
		double L_39 = L_38->___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_40 = p0;
		double L_41 = L_40->___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_42 = p1;
		double L_43 = L_42->___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_44 = p0;
		double L_45 = L_44->___U3DdBEBU3D_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_46 = p1;
		double L_47 = L_46->___U3DdBEBU3D_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_48 = p0;
		double L_49 = L_48->___U3DdBEbU3D_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_50 = p1;
		double L_51 = L_50->___U3DdBEbU3D_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_52 = p0;
		double L_53 = L_52->___U3DdBECU3D_16;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_54 = p1;
		double L_55 = L_54->___U3DdBECU3D_16;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_56 = p0;
		double L_57 = L_56->___U3DdBEcU3D_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_58 = p1;
		double L_59 = L_58->___U3DdBEcU3D_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_60 = p0;
		double L_61 = L_60->___U3DdBEDU3D_18;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_62 = p1;
		double L_63 = L_62->___U3DdBEDU3D_18;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_64;
		memset((&L_64), 0, sizeof(L_64));
		U3Da75U3D__ctor_mE3BBD648173DE5B1AFF6305475F1B580A19D411C((&L_64), ((double)il2cpp_codegen_add(L_1, L_3)), ((double)il2cpp_codegen_add(L_5, L_7)), ((double)il2cpp_codegen_add(L_9, L_11)), ((double)il2cpp_codegen_add(L_13, L_15)), ((double)il2cpp_codegen_add(L_17, L_19)), ((double)il2cpp_codegen_add(L_21, L_23)), ((double)il2cpp_codegen_add(L_25, L_27)), ((double)il2cpp_codegen_add(L_29, L_31)), ((double)il2cpp_codegen_add(L_33, L_35)), ((double)il2cpp_codegen_add(L_37, L_39)), ((double)il2cpp_codegen_add(L_41, L_43)), ((double)il2cpp_codegen_add(L_45, L_47)), ((double)il2cpp_codegen_add(L_49, L_51)), ((double)il2cpp_codegen_add(L_53, L_55)), ((double)il2cpp_codegen_add(L_57, L_59)), ((double)il2cpp_codegen_add(L_61, L_63)), /*hidden argument*/NULL);
		return L_64;
	}
}
// =a75= =a75=::=ccE0=(=a75=,=a75=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC U3Da75U3D_U3DccE0U3D_m254CD3A2B2E7D29275E0113B2ACC8B2E072BE4E1 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC p0, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC p1, const RuntimeMethod* method) 
{
	{
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_0 = p0;
		double L_1 = L_0.___U3DdBd1U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_2 = p1;
		double L_3 = L_2.___U3DdBd1U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_4 = p0;
		double L_5 = L_4.___U3DdBd2U3D_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_6 = p1;
		double L_7 = L_6.___U3DdBd2U3D_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_8 = p0;
		double L_9 = L_8.___U3DdBd3U3D_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_10 = p1;
		double L_11 = L_10.___U3DdBd3U3D_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_12 = p0;
		double L_13 = L_12.___U3DdBd4U3D_6;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_14 = p1;
		double L_15 = L_14.___U3DdBd4U3D_6;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_16 = p0;
		double L_17 = L_16.___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_18 = p1;
		double L_19 = L_18.___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_20 = p0;
		double L_21 = L_20.___U3DdBd6U3D_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_22 = p1;
		double L_23 = L_22.___U3DdBd6U3D_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_24 = p0;
		double L_25 = L_24.___U3DdBd7U3D_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_26 = p1;
		double L_27 = L_26.___U3DdBd7U3D_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_28 = p0;
		double L_29 = L_28.___U3DdBd8U3D_10;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_30 = p1;
		double L_31 = L_30.___U3DdBd8U3D_10;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_32 = p0;
		double L_33 = L_32.___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_34 = p1;
		double L_35 = L_34.___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_36 = p0;
		double L_37 = L_36.___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_38 = p1;
		double L_39 = L_38.___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_40 = p0;
		double L_41 = L_40.___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_42 = p1;
		double L_43 = L_42.___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_44 = p0;
		double L_45 = L_44.___U3DdBEBU3D_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_46 = p1;
		double L_47 = L_46.___U3DdBEBU3D_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_48 = p0;
		double L_49 = L_48.___U3DdBEbU3D_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_50 = p1;
		double L_51 = L_50.___U3DdBEbU3D_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_52 = p0;
		double L_53 = L_52.___U3DdBECU3D_16;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_54 = p1;
		double L_55 = L_54.___U3DdBECU3D_16;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_56 = p0;
		double L_57 = L_56.___U3DdBEcU3D_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_58 = p1;
		double L_59 = L_58.___U3DdBEcU3D_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_60 = p0;
		double L_61 = L_60.___U3DdBEDU3D_18;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_62 = p1;
		double L_63 = L_62.___U3DdBEDU3D_18;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_64;
		memset((&L_64), 0, sizeof(L_64));
		U3Da75U3D__ctor_mE3BBD648173DE5B1AFF6305475F1B580A19D411C((&L_64), ((double)il2cpp_codegen_subtract(L_1, L_3)), ((double)il2cpp_codegen_subtract(L_5, L_7)), ((double)il2cpp_codegen_subtract(L_9, L_11)), ((double)il2cpp_codegen_subtract(L_13, L_15)), ((double)il2cpp_codegen_subtract(L_17, L_19)), ((double)il2cpp_codegen_subtract(L_21, L_23)), ((double)il2cpp_codegen_subtract(L_25, L_27)), ((double)il2cpp_codegen_subtract(L_29, L_31)), ((double)il2cpp_codegen_subtract(L_33, L_35)), ((double)il2cpp_codegen_subtract(L_37, L_39)), ((double)il2cpp_codegen_subtract(L_41, L_43)), ((double)il2cpp_codegen_subtract(L_45, L_47)), ((double)il2cpp_codegen_subtract(L_49, L_51)), ((double)il2cpp_codegen_subtract(L_53, L_55)), ((double)il2cpp_codegen_subtract(L_57, L_59)), ((double)il2cpp_codegen_subtract(L_61, L_63)), /*hidden argument*/NULL);
		return L_64;
	}
}
// =a75= =a75=::=ccE1=(=a75=&,=a75=&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC U3Da75U3D_U3DccE1U3D_m6DD88B684EBE05D9C870FEA2A40E6A81A4628469 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* p0, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* p1, const RuntimeMethod* method) 
{
	{
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_0 = p0;
		double L_1 = L_0->___U3DdBd1U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_2 = p1;
		double L_3 = L_2->___U3DdBd1U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_4 = p0;
		double L_5 = L_4->___U3DdBd2U3D_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_6 = p1;
		double L_7 = L_6->___U3DdBd2U3D_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_8 = p0;
		double L_9 = L_8->___U3DdBd3U3D_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_10 = p1;
		double L_11 = L_10->___U3DdBd3U3D_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_12 = p0;
		double L_13 = L_12->___U3DdBd4U3D_6;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_14 = p1;
		double L_15 = L_14->___U3DdBd4U3D_6;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_16 = p0;
		double L_17 = L_16->___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_18 = p1;
		double L_19 = L_18->___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_20 = p0;
		double L_21 = L_20->___U3DdBd6U3D_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_22 = p1;
		double L_23 = L_22->___U3DdBd6U3D_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_24 = p0;
		double L_25 = L_24->___U3DdBd7U3D_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_26 = p1;
		double L_27 = L_26->___U3DdBd7U3D_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_28 = p0;
		double L_29 = L_28->___U3DdBd8U3D_10;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_30 = p1;
		double L_31 = L_30->___U3DdBd8U3D_10;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_32 = p0;
		double L_33 = L_32->___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_34 = p1;
		double L_35 = L_34->___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_36 = p0;
		double L_37 = L_36->___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_38 = p1;
		double L_39 = L_38->___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_40 = p0;
		double L_41 = L_40->___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_42 = p1;
		double L_43 = L_42->___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_44 = p0;
		double L_45 = L_44->___U3DdBEBU3D_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_46 = p1;
		double L_47 = L_46->___U3DdBEBU3D_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_48 = p0;
		double L_49 = L_48->___U3DdBEbU3D_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_50 = p1;
		double L_51 = L_50->___U3DdBEbU3D_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_52 = p0;
		double L_53 = L_52->___U3DdBECU3D_16;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_54 = p1;
		double L_55 = L_54->___U3DdBECU3D_16;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_56 = p0;
		double L_57 = L_56->___U3DdBEcU3D_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_58 = p1;
		double L_59 = L_58->___U3DdBEcU3D_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_60 = p0;
		double L_61 = L_60->___U3DdBEDU3D_18;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_62 = p1;
		double L_63 = L_62->___U3DdBEDU3D_18;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_64;
		memset((&L_64), 0, sizeof(L_64));
		U3Da75U3D__ctor_mE3BBD648173DE5B1AFF6305475F1B580A19D411C((&L_64), ((double)il2cpp_codegen_subtract(L_1, L_3)), ((double)il2cpp_codegen_subtract(L_5, L_7)), ((double)il2cpp_codegen_subtract(L_9, L_11)), ((double)il2cpp_codegen_subtract(L_13, L_15)), ((double)il2cpp_codegen_subtract(L_17, L_19)), ((double)il2cpp_codegen_subtract(L_21, L_23)), ((double)il2cpp_codegen_subtract(L_25, L_27)), ((double)il2cpp_codegen_subtract(L_29, L_31)), ((double)il2cpp_codegen_subtract(L_33, L_35)), ((double)il2cpp_codegen_subtract(L_37, L_39)), ((double)il2cpp_codegen_subtract(L_41, L_43)), ((double)il2cpp_codegen_subtract(L_45, L_47)), ((double)il2cpp_codegen_subtract(L_49, L_51)), ((double)il2cpp_codegen_subtract(L_53, L_55)), ((double)il2cpp_codegen_subtract(L_57, L_59)), ((double)il2cpp_codegen_subtract(L_61, L_63)), /*hidden argument*/NULL);
		return L_64;
	}
}
// =a75= =a75=::=ccE2=(=a75=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC U3Da75U3D_U3DccE2U3D_m20CA22E140410D9C70C303E8D7B0631E77418455 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC_il2cpp_TypeInfo_var);
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_0;
		L_0 = U3Da75U3D_U3DccE3U3D_m6F5091781A47F54850BD065FD564869A8587BDA8((&p0), NULL);
		return L_0;
	}
}
// =a75= =a75=::=ccE3=(=a75=&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC U3Da75U3D_U3DccE3U3D_m6F5091781A47F54850BD065FD564869A8587BDA8 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	double V_9 = 0.0;
	double V_10 = 0.0;
	double V_11 = 0.0;
	double V_12 = 0.0;
	double V_13 = 0.0;
	double V_14 = 0.0;
	double V_15 = 0.0;
	double V_16 = 0.0;
	double V_17 = 0.0;
	U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC V_18;
	memset((&V_18), 0, sizeof(V_18));
	double V_19 = 0.0;
	double V_20 = 0.0;
	double V_21 = 0.0;
	{
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_0 = p0;
		double L_1 = L_0->___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_2 = p0;
		double L_3 = L_2->___U3DdBEDU3D_18;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_4 = p0;
		double L_5 = L_4->___U3DdBEcU3D_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_6 = p0;
		double L_7 = L_6->___U3DdBEBU3D_14;
		V_0 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_1, L_3)), ((double)il2cpp_codegen_multiply(L_5, L_7))));
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_8 = p0;
		double L_9 = L_8->___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_10 = p0;
		double L_11 = L_10->___U3DdBEDU3D_18;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_12 = p0;
		double L_13 = L_12->___U3DdBECU3D_16;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_14 = p0;
		double L_15 = L_14->___U3DdBEBU3D_14;
		V_1 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_9, L_11)), ((double)il2cpp_codegen_multiply(L_13, L_15))));
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_16 = p0;
		double L_17 = L_16->___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_18 = p0;
		double L_19 = L_18->___U3DdBEcU3D_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_20 = p0;
		double L_21 = L_20->___U3DdBECU3D_16;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_22 = p0;
		double L_23 = L_22->___U3DdBEaU3D_13;
		V_2 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_17, L_19)), ((double)il2cpp_codegen_multiply(L_21, L_23))));
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_24 = p0;
		double L_25 = L_24->___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_26 = p0;
		double L_27 = L_26->___U3DdBEDU3D_18;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_28 = p0;
		double L_29 = L_28->___U3DdBEbU3D_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_30 = p0;
		double L_31 = L_30->___U3DdBEBU3D_14;
		V_3 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_25, L_27)), ((double)il2cpp_codegen_multiply(L_29, L_31))));
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_32 = p0;
		double L_33 = L_32->___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_34 = p0;
		double L_35 = L_34->___U3DdBEcU3D_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_36 = p0;
		double L_37 = L_36->___U3DdBEbU3D_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_38 = p0;
		double L_39 = L_38->___U3DdBEaU3D_13;
		V_4 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_33, L_35)), ((double)il2cpp_codegen_multiply(L_37, L_39))));
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_40 = p0;
		double L_41 = L_40->___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_42 = p0;
		double L_43 = L_42->___U3DdBECU3D_16;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_44 = p0;
		double L_45 = L_44->___U3DdBEbU3D_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_46 = p0;
		double L_47 = L_46->___U3DdBEAU3D_12;
		V_5 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_41, L_43)), ((double)il2cpp_codegen_multiply(L_45, L_47))));
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_48 = p0;
		double L_49 = L_48->___U3DdBd7U3D_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_50 = p0;
		double L_51 = L_50->___U3DdBEDU3D_18;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_52 = p0;
		double L_53 = L_52->___U3DdBEcU3D_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_54 = p0;
		double L_55 = L_54->___U3DdBd8U3D_10;
		V_6 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_49, L_51)), ((double)il2cpp_codegen_multiply(L_53, L_55))));
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_56 = p0;
		double L_57 = L_56->___U3DdBd6U3D_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_58 = p0;
		double L_59 = L_58->___U3DdBEDU3D_18;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_60 = p0;
		double L_61 = L_60->___U3DdBECU3D_16;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_62 = p0;
		double L_63 = L_62->___U3DdBd8U3D_10;
		V_7 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_57, L_59)), ((double)il2cpp_codegen_multiply(L_61, L_63))));
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_64 = p0;
		double L_65 = L_64->___U3DdBd6U3D_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_66 = p0;
		double L_67 = L_66->___U3DdBEcU3D_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_68 = p0;
		double L_69 = L_68->___U3DdBECU3D_16;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_70 = p0;
		double L_71 = L_70->___U3DdBd7U3D_9;
		V_8 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_65, L_67)), ((double)il2cpp_codegen_multiply(L_69, L_71))));
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_72 = p0;
		double L_73 = L_72->___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_74 = p0;
		double L_75 = L_74->___U3DdBEDU3D_18;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_76 = p0;
		double L_77 = L_76->___U3DdBEbU3D_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_78 = p0;
		double L_79 = L_78->___U3DdBd8U3D_10;
		V_9 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_73, L_75)), ((double)il2cpp_codegen_multiply(L_77, L_79))));
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_80 = p0;
		double L_81 = L_80->___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_82 = p0;
		double L_83 = L_82->___U3DdBEcU3D_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_84 = p0;
		double L_85 = L_84->___U3DdBEbU3D_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_86 = p0;
		double L_87 = L_86->___U3DdBd7U3D_9;
		V_10 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_81, L_83)), ((double)il2cpp_codegen_multiply(L_85, L_87))));
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_88 = p0;
		double L_89 = L_88->___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_90 = p0;
		double L_91 = L_90->___U3DdBECU3D_16;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_92 = p0;
		double L_93 = L_92->___U3DdBEbU3D_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_94 = p0;
		double L_95 = L_94->___U3DdBd6U3D_8;
		V_11 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_89, L_91)), ((double)il2cpp_codegen_multiply(L_93, L_95))));
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_96 = p0;
		double L_97 = L_96->___U3DdBd7U3D_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_98 = p0;
		double L_99 = L_98->___U3DdBEBU3D_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_100 = p0;
		double L_101 = L_100->___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_102 = p0;
		double L_103 = L_102->___U3DdBd8U3D_10;
		V_12 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_97, L_99)), ((double)il2cpp_codegen_multiply(L_101, L_103))));
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_104 = p0;
		double L_105 = L_104->___U3DdBd6U3D_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_106 = p0;
		double L_107 = L_106->___U3DdBEBU3D_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_108 = p0;
		double L_109 = L_108->___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_110 = p0;
		double L_111 = L_110->___U3DdBd8U3D_10;
		V_13 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_105, L_107)), ((double)il2cpp_codegen_multiply(L_109, L_111))));
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_112 = p0;
		double L_113 = L_112->___U3DdBd6U3D_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_114 = p0;
		double L_115 = L_114->___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_116 = p0;
		double L_117 = L_116->___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_118 = p0;
		double L_119 = L_118->___U3DdBd7U3D_9;
		V_14 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_113, L_115)), ((double)il2cpp_codegen_multiply(L_117, L_119))));
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_120 = p0;
		double L_121 = L_120->___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_122 = p0;
		double L_123 = L_122->___U3DdBEBU3D_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_124 = p0;
		double L_125 = L_124->___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_126 = p0;
		double L_127 = L_126->___U3DdBd8U3D_10;
		V_15 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_121, L_123)), ((double)il2cpp_codegen_multiply(L_125, L_127))));
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_128 = p0;
		double L_129 = L_128->___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_130 = p0;
		double L_131 = L_130->___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_132 = p0;
		double L_133 = L_132->___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_134 = p0;
		double L_135 = L_134->___U3DdBd7U3D_9;
		V_16 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_129, L_131)), ((double)il2cpp_codegen_multiply(L_133, L_135))));
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_136 = p0;
		double L_137 = L_136->___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_138 = p0;
		double L_139 = L_138->___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_140 = p0;
		double L_141 = L_140->___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_142 = p0;
		double L_143 = L_142->___U3DdBd6U3D_8;
		V_17 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_137, L_139)), ((double)il2cpp_codegen_multiply(L_141, L_143))));
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_144 = p0;
		double L_145 = L_144->___U3DdBd6U3D_8;
		double L_146 = V_0;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_147 = p0;
		double L_148 = L_147->___U3DdBd7U3D_9;
		double L_149 = V_1;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_150 = p0;
		double L_151 = L_150->___U3DdBd8U3D_10;
		double L_152 = V_2;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_153 = p0;
		double L_154 = L_153->___U3DdBd5U3D_7;
		double L_155 = V_0;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_156 = p0;
		double L_157 = L_156->___U3DdBd7U3D_9;
		double L_158 = V_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_159 = p0;
		double L_160 = L_159->___U3DdBd8U3D_10;
		double L_161 = V_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_162 = p0;
		double L_163 = L_162->___U3DdBd5U3D_7;
		double L_164 = V_1;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_165 = p0;
		double L_166 = L_165->___U3DdBd6U3D_8;
		double L_167 = V_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_168 = p0;
		double L_169 = L_168->___U3DdBd8U3D_10;
		double L_170 = V_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_171 = p0;
		double L_172 = L_171->___U3DdBd5U3D_7;
		double L_173 = V_2;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_174 = p0;
		double L_175 = L_174->___U3DdBd6U3D_8;
		double L_176 = V_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_177 = p0;
		double L_178 = L_177->___U3DdBd7U3D_9;
		double L_179 = V_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_180 = p0;
		double L_181 = L_180->___U3DdBd2U3D_4;
		double L_182 = V_0;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_183 = p0;
		double L_184 = L_183->___U3DdBd3U3D_5;
		double L_185 = V_1;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_186 = p0;
		double L_187 = L_186->___U3DdBd4U3D_6;
		double L_188 = V_2;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_189 = p0;
		double L_190 = L_189->___U3DdBd1U3D_3;
		double L_191 = V_0;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_192 = p0;
		double L_193 = L_192->___U3DdBd3U3D_5;
		double L_194 = V_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_195 = p0;
		double L_196 = L_195->___U3DdBd4U3D_6;
		double L_197 = V_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_198 = p0;
		double L_199 = L_198->___U3DdBd1U3D_3;
		double L_200 = V_1;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_201 = p0;
		double L_202 = L_201->___U3DdBd2U3D_4;
		double L_203 = V_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_204 = p0;
		double L_205 = L_204->___U3DdBd4U3D_6;
		double L_206 = V_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_207 = p0;
		double L_208 = L_207->___U3DdBd1U3D_3;
		double L_209 = V_2;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_210 = p0;
		double L_211 = L_210->___U3DdBd2U3D_4;
		double L_212 = V_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_213 = p0;
		double L_214 = L_213->___U3DdBd3U3D_5;
		double L_215 = V_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_216 = p0;
		double L_217 = L_216->___U3DdBd2U3D_4;
		double L_218 = V_6;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_219 = p0;
		double L_220 = L_219->___U3DdBd3U3D_5;
		double L_221 = V_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_222 = p0;
		double L_223 = L_222->___U3DdBd4U3D_6;
		double L_224 = V_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_225 = p0;
		double L_226 = L_225->___U3DdBd1U3D_3;
		double L_227 = V_6;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_228 = p0;
		double L_229 = L_228->___U3DdBd3U3D_5;
		double L_230 = V_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_231 = p0;
		double L_232 = L_231->___U3DdBd4U3D_6;
		double L_233 = V_10;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_234 = p0;
		double L_235 = L_234->___U3DdBd1U3D_3;
		double L_236 = V_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_237 = p0;
		double L_238 = L_237->___U3DdBd2U3D_4;
		double L_239 = V_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_240 = p0;
		double L_241 = L_240->___U3DdBd4U3D_6;
		double L_242 = V_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_243 = p0;
		double L_244 = L_243->___U3DdBd1U3D_3;
		double L_245 = V_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_246 = p0;
		double L_247 = L_246->___U3DdBd2U3D_4;
		double L_248 = V_10;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_249 = p0;
		double L_250 = L_249->___U3DdBd3U3D_5;
		double L_251 = V_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_252 = p0;
		double L_253 = L_252->___U3DdBd2U3D_4;
		double L_254 = V_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_255 = p0;
		double L_256 = L_255->___U3DdBd3U3D_5;
		double L_257 = V_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_258 = p0;
		double L_259 = L_258->___U3DdBd4U3D_6;
		double L_260 = V_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_261 = p0;
		double L_262 = L_261->___U3DdBd1U3D_3;
		double L_263 = V_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_264 = p0;
		double L_265 = L_264->___U3DdBd3U3D_5;
		double L_266 = V_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_267 = p0;
		double L_268 = L_267->___U3DdBd4U3D_6;
		double L_269 = V_16;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_270 = p0;
		double L_271 = L_270->___U3DdBd1U3D_3;
		double L_272 = V_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_273 = p0;
		double L_274 = L_273->___U3DdBd2U3D_4;
		double L_275 = V_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_276 = p0;
		double L_277 = L_276->___U3DdBd4U3D_6;
		double L_278 = V_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_279 = p0;
		double L_280 = L_279->___U3DdBd1U3D_3;
		double L_281 = V_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_282 = p0;
		double L_283 = L_282->___U3DdBd2U3D_4;
		double L_284 = V_16;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_285 = p0;
		double L_286 = L_285->___U3DdBd3U3D_5;
		double L_287 = V_17;
		U3Da75U3D__ctor_mE3BBD648173DE5B1AFF6305475F1B580A19D411C((&V_18), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_145, L_146)), ((double)il2cpp_codegen_multiply(L_148, L_149)))), ((double)il2cpp_codegen_multiply(L_151, L_152)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_154, L_155)), ((double)il2cpp_codegen_multiply(L_157, L_158)))), ((double)il2cpp_codegen_multiply(L_160, L_161)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_163, L_164)), ((double)il2cpp_codegen_multiply(L_166, L_167)))), ((double)il2cpp_codegen_multiply(L_169, L_170)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_172, L_173)), ((double)il2cpp_codegen_multiply(L_175, L_176)))), ((double)il2cpp_codegen_multiply(L_178, L_179)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_181, L_182)), ((double)il2cpp_codegen_multiply(L_184, L_185)))), ((double)il2cpp_codegen_multiply(L_187, L_188)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_190, L_191)), ((double)il2cpp_codegen_multiply(L_193, L_194)))), ((double)il2cpp_codegen_multiply(L_196, L_197)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_199, L_200)), ((double)il2cpp_codegen_multiply(L_202, L_203)))), ((double)il2cpp_codegen_multiply(L_205, L_206)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_208, L_209)), ((double)il2cpp_codegen_multiply(L_211, L_212)))), ((double)il2cpp_codegen_multiply(L_214, L_215)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_217, L_218)), ((double)il2cpp_codegen_multiply(L_220, L_221)))), ((double)il2cpp_codegen_multiply(L_223, L_224)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_226, L_227)), ((double)il2cpp_codegen_multiply(L_229, L_230)))), ((double)il2cpp_codegen_multiply(L_232, L_233)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_235, L_236)), ((double)il2cpp_codegen_multiply(L_238, L_239)))), ((double)il2cpp_codegen_multiply(L_241, L_242)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_244, L_245)), ((double)il2cpp_codegen_multiply(L_247, L_248)))), ((double)il2cpp_codegen_multiply(L_250, L_251)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_253, L_254)), ((double)il2cpp_codegen_multiply(L_256, L_257)))), ((double)il2cpp_codegen_multiply(L_259, L_260)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_262, L_263)), ((double)il2cpp_codegen_multiply(L_265, L_266)))), ((double)il2cpp_codegen_multiply(L_268, L_269)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_271, L_272)), ((double)il2cpp_codegen_multiply(L_274, L_275)))), ((double)il2cpp_codegen_multiply(L_277, L_278)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_280, L_281)), ((double)il2cpp_codegen_multiply(L_283, L_284)))), ((double)il2cpp_codegen_multiply(L_286, L_287)))), NULL);
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_288 = p0;
		double L_289 = L_288->___U3DdBd1U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_290 = V_18;
		double L_291 = L_290.___U3DdBd1U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_292 = p0;
		double L_293 = L_292->___U3DdBd2U3D_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_294 = V_18;
		double L_295 = L_294.___U3DdBd2U3D_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_296 = p0;
		double L_297 = L_296->___U3DdBd3U3D_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_298 = V_18;
		double L_299 = L_298.___U3DdBd3U3D_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_300 = p0;
		double L_301 = L_300->___U3DdBd4U3D_6;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_302 = V_18;
		double L_303 = L_302.___U3DdBd4U3D_6;
		V_19 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_289, L_291)), ((double)il2cpp_codegen_multiply(L_293, L_295)))), ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_297, L_299)), ((double)il2cpp_codegen_multiply(L_301, L_303))))));
		double L_304 = V_19;
		if ((!(((double)L_304) == ((double)(0.0)))))
		{
			goto IL_041d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC_il2cpp_TypeInfo_var);
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_305 = ((U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC_StaticFields*)il2cpp_codegen_static_fields_for(U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC_il2cpp_TypeInfo_var))->___U3DdBd0U3D_2;
		return L_305;
	}

IL_041d:
	{
		double L_306 = V_19;
		V_20 = ((double)((1.0)/L_306));
		double L_307 = V_19;
		V_21 = ((double)((-1.0)/L_307));
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_308 = V_18;
		double L_309 = L_308.___U3DdBd1U3D_3;
		double L_310 = V_20;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_311 = V_18;
		double L_312 = L_311.___U3DdBd5U3D_7;
		double L_313 = V_21;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_314 = V_18;
		double L_315 = L_314.___U3DdBd9U3D_11;
		double L_316 = V_20;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_317 = V_18;
		double L_318 = L_317.___U3DdBEbU3D_15;
		double L_319 = V_21;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_320 = V_18;
		double L_321 = L_320.___U3DdBd2U3D_4;
		double L_322 = V_21;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_323 = V_18;
		double L_324 = L_323.___U3DdBd6U3D_8;
		double L_325 = V_20;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_326 = V_18;
		double L_327 = L_326.___U3DdBEAU3D_12;
		double L_328 = V_21;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_329 = V_18;
		double L_330 = L_329.___U3DdBECU3D_16;
		double L_331 = V_20;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_332 = V_18;
		double L_333 = L_332.___U3DdBd3U3D_5;
		double L_334 = V_20;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_335 = V_18;
		double L_336 = L_335.___U3DdBd7U3D_9;
		double L_337 = V_21;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_338 = V_18;
		double L_339 = L_338.___U3DdBEaU3D_13;
		double L_340 = V_20;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_341 = V_18;
		double L_342 = L_341.___U3DdBEcU3D_17;
		double L_343 = V_21;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_344 = V_18;
		double L_345 = L_344.___U3DdBd4U3D_6;
		double L_346 = V_21;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_347 = V_18;
		double L_348 = L_347.___U3DdBd8U3D_10;
		double L_349 = V_20;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_350 = V_18;
		double L_351 = L_350.___U3DdBEBU3D_14;
		double L_352 = V_21;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_353 = V_18;
		double L_354 = L_353.___U3DdBEDU3D_18;
		double L_355 = V_20;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_356;
		memset((&L_356), 0, sizeof(L_356));
		U3Da75U3D__ctor_mE3BBD648173DE5B1AFF6305475F1B580A19D411C((&L_356), ((double)il2cpp_codegen_multiply(L_309, L_310)), ((double)il2cpp_codegen_multiply(L_312, L_313)), ((double)il2cpp_codegen_multiply(L_315, L_316)), ((double)il2cpp_codegen_multiply(L_318, L_319)), ((double)il2cpp_codegen_multiply(L_321, L_322)), ((double)il2cpp_codegen_multiply(L_324, L_325)), ((double)il2cpp_codegen_multiply(L_327, L_328)), ((double)il2cpp_codegen_multiply(L_330, L_331)), ((double)il2cpp_codegen_multiply(L_333, L_334)), ((double)il2cpp_codegen_multiply(L_336, L_337)), ((double)il2cpp_codegen_multiply(L_339, L_340)), ((double)il2cpp_codegen_multiply(L_342, L_343)), ((double)il2cpp_codegen_multiply(L_345, L_346)), ((double)il2cpp_codegen_multiply(L_348, L_349)), ((double)il2cpp_codegen_multiply(L_351, L_352)), ((double)il2cpp_codegen_multiply(L_354, L_355)), /*hidden argument*/NULL);
		return L_356;
	}
}
// =a75= =a75=::=ccE4=(Microsoft.Geospatial.VectorMath.Vector3D,Microsoft.Geospatial.VectorMath.Vector3D,Microsoft.Geospatial.VectorMath.Vector3D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC U3Da75U3D_U3DccE4U3D_mCAD022A4E0D949FFCA476E955FA6E1CE5D75B658 (Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p1, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_runtime_class_init_inline(Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_il2cpp_TypeInfo_var);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0;
		L_0 = Vector3D_Subtract_mE2AD6B18714D2AA7E3A82A7B82FF98709B61F2FF_inline((&p0), (&p1), NULL);
		V_0 = L_0;
		Vector3D_Normalize_m5B5B25A714AD0FDB06FE954491450CE6B9CE15D7((&V_0), NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_1;
		L_1 = Vector3D_Cross_m93B93E940A2EFC94556E86F7D9DC00DE8D4025DB_inline((&p2), (&V_0), NULL);
		V_1 = L_1;
		Vector3D_Normalize_m5B5B25A714AD0FDB06FE954491450CE6B9CE15D7((&V_1), NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_2;
		L_2 = Vector3D_Cross_m93B93E940A2EFC94556E86F7D9DC00DE8D4025DB_inline((&V_0), (&V_1), NULL);
		V_2 = L_2;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_3 = V_1;
		double L_4 = L_3.___X_7;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_5 = V_2;
		double L_6 = L_5.___X_7;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_7 = V_0;
		double L_8 = L_7.___X_7;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_9 = V_1;
		double L_10 = L_9.___Y_8;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_11 = V_2;
		double L_12 = L_11.___Y_8;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_13 = V_0;
		double L_14 = L_13.___Y_8;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_15 = V_1;
		double L_16 = L_15.___Z_9;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_17 = V_2;
		double L_18 = L_17.___Z_9;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_19 = V_0;
		double L_20 = L_19.___Z_9;
		double L_21;
		L_21 = Vector3D_Dot_m69F3F42511544AC5B61669DB5CD6F7BB48DF95A3_inline((&V_1), (&p0), NULL);
		double L_22;
		L_22 = Vector3D_Dot_m69F3F42511544AC5B61669DB5CD6F7BB48DF95A3_inline((&V_2), (&p0), NULL);
		double L_23;
		L_23 = Vector3D_Dot_m69F3F42511544AC5B61669DB5CD6F7BB48DF95A3_inline((&V_0), (&p0), NULL);
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_24;
		memset((&L_24), 0, sizeof(L_24));
		U3Da75U3D__ctor_mE3BBD648173DE5B1AFF6305475F1B580A19D411C((&L_24), L_4, L_6, L_8, (0.0), L_10, L_12, L_14, (0.0), L_16, L_18, L_20, (0.0), ((-L_21)), ((-L_22)), ((-L_23)), (1.0), /*hidden argument*/NULL);
		return L_24;
	}
}
// =a75= =a75=::=ccE5=(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC U3Da75U3D_U3DccE5U3D_m501689D72A0300AEE896574BE8755DDC513E70DA (double p0, double p1, double p2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	{
		double L_0 = p1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = sin(L_0);
		V_0 = L_1;
		double L_2 = p1;
		double L_3;
		L_3 = cos(L_2);
		V_1 = L_3;
		double L_4 = p0;
		double L_5;
		L_5 = sin(L_4);
		V_2 = L_5;
		double L_6 = p0;
		double L_7;
		L_7 = cos(L_6);
		V_3 = L_7;
		double L_8 = p2;
		double L_9;
		L_9 = sin(L_8);
		V_4 = L_9;
		double L_10 = p2;
		double L_11;
		L_11 = cos(L_10);
		V_5 = L_11;
		double L_12 = V_5;
		double L_13 = V_3;
		double L_14 = V_4;
		double L_15 = V_0;
		double L_16 = V_2;
		double L_17 = V_4;
		double L_18 = V_1;
		double L_19 = V_5;
		double L_20 = V_2;
		double L_21 = V_4;
		double L_22 = V_0;
		double L_23 = V_3;
		double L_24 = V_4;
		double L_25 = V_3;
		double L_26 = V_5;
		double L_27 = V_0;
		double L_28 = V_2;
		double L_29 = V_5;
		double L_30 = V_1;
		double L_31 = V_4;
		double L_32 = V_2;
		double L_33 = V_5;
		double L_34 = V_0;
		double L_35 = V_3;
		double L_36 = V_1;
		double L_37 = V_2;
		double L_38 = V_0;
		double L_39 = V_1;
		double L_40 = V_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_41;
		memset((&L_41), 0, sizeof(L_41));
		U3Da75U3D__ctor_mE3BBD648173DE5B1AFF6305475F1B580A19D411C((&L_41), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_12, L_13)), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_14, L_15)), L_16)))), ((double)il2cpp_codegen_multiply(L_17, L_18)), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_19, ((-L_20)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_21, L_22)), L_23)))), (0.0), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((-L_24)), L_25)), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_26, L_27)), L_28)))), ((double)il2cpp_codegen_multiply(L_29, L_30)), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_31, L_32)), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_33, L_34)), L_35)))), (0.0), ((double)il2cpp_codegen_multiply(L_36, L_37)), ((-L_38)), ((double)il2cpp_codegen_multiply(L_39, L_40)), (0.0), (0.0), (0.0), (0.0), (1.0), /*hidden argument*/NULL);
		return L_41;
	}
}
// =a75= =a75=::=ccE6=(Microsoft.Geospatial.VectorMath.Vector3D,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC U3Da75U3D_U3DccE6U3D_m71D645A2921F8E029A29232608A448029E347861 (Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, double p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	double V_9 = 0.0;
	double V_10 = 0.0;
	{
		Vector3D_Normalize_m5B5B25A714AD0FDB06FE954491450CE6B9CE15D7((&p0), NULL);
		double L_0 = p1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = cos(L_0);
		V_0 = L_1;
		double L_2 = p1;
		double L_3;
		L_3 = sin(L_2);
		V_1 = L_3;
		double L_4 = V_0;
		V_2 = ((double)il2cpp_codegen_subtract((1.0), L_4));
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_5 = p0;
		double L_6 = L_5.___X_7;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_7 = p0;
		double L_8 = L_7.___X_7;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_9 = p0;
		double L_10 = L_9.___Y_8;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_11 = p0;
		double L_12 = L_11.___Y_8;
		V_3 = ((double)il2cpp_codegen_multiply(L_10, L_12));
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_13 = p0;
		double L_14 = L_13.___Z_9;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_15 = p0;
		double L_16 = L_15.___Z_9;
		V_4 = ((double)il2cpp_codegen_multiply(L_14, L_16));
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_17 = p0;
		double L_18 = L_17.___X_7;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_19 = p0;
		double L_20 = L_19.___Y_8;
		double L_21 = V_2;
		V_5 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_18, L_20)), L_21));
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_22 = p0;
		double L_23 = L_22.___X_7;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_24 = p0;
		double L_25 = L_24.___Z_9;
		double L_26 = V_2;
		V_6 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_23, L_25)), L_26));
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_27 = p0;
		double L_28 = L_27.___Y_8;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_29 = p0;
		double L_30 = L_29.___Z_9;
		double L_31 = V_2;
		V_7 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_28, L_30)), L_31));
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_32 = p0;
		double L_33 = L_32.___X_7;
		double L_34 = V_1;
		V_8 = ((double)il2cpp_codegen_multiply(L_33, L_34));
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_35 = p0;
		double L_36 = L_35.___Y_8;
		double L_37 = V_1;
		V_9 = ((double)il2cpp_codegen_multiply(L_36, L_37));
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_38 = p0;
		double L_39 = L_38.___Z_9;
		double L_40 = V_1;
		V_10 = ((double)il2cpp_codegen_multiply(L_39, L_40));
		double L_41 = V_2;
		double L_42 = V_0;
		double L_43 = V_5;
		double L_44 = V_10;
		double L_45 = V_6;
		double L_46 = V_9;
		double L_47 = V_5;
		double L_48 = V_10;
		double L_49 = V_3;
		double L_50 = V_2;
		double L_51 = V_0;
		double L_52 = V_7;
		double L_53 = V_8;
		double L_54 = V_6;
		double L_55 = V_9;
		double L_56 = V_7;
		double L_57 = V_8;
		double L_58 = V_4;
		double L_59 = V_2;
		double L_60 = V_0;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_61;
		memset((&L_61), 0, sizeof(L_61));
		U3Da75U3D__ctor_mE3BBD648173DE5B1AFF6305475F1B580A19D411C((&L_61), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_6, L_8)), L_41)), L_42)), ((double)il2cpp_codegen_add(L_43, L_44)), ((double)il2cpp_codegen_subtract(L_45, L_46)), (0.0), ((double)il2cpp_codegen_subtract(L_47, L_48)), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_49, L_50)), L_51)), ((double)il2cpp_codegen_add(L_52, L_53)), (0.0), ((double)il2cpp_codegen_add(L_54, L_55)), ((double)il2cpp_codegen_subtract(L_56, L_57)), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_58, L_59)), L_60)), (0.0), (0.0), (0.0), (0.0), (1.0), /*hidden argument*/NULL);
		return L_61;
	}
}
// =a75= =a75=::=ccE7=(=a8A=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC U3Da75U3D_U3DccE7U3D_m71B1F822534BF1B2EA3511D2E86273C8BFB471A9 (U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 p0, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	{
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_0 = p0;
		double L_1 = L_0.___U3DdBEfU3D_2;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_2 = p0;
		double L_3 = L_2.___U3DdBEfU3D_2;
		V_0 = ((double)il2cpp_codegen_multiply(L_1, L_3));
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_4 = p0;
		double L_5 = L_4.___U3DdBE0U3D_3;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_6 = p0;
		double L_7 = L_6.___U3DdBE0U3D_3;
		V_1 = ((double)il2cpp_codegen_multiply(L_5, L_7));
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_8 = p0;
		double L_9 = L_8.___U3DdBE1U3D_4;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_10 = p0;
		double L_11 = L_10.___U3DdBE1U3D_4;
		V_2 = ((double)il2cpp_codegen_multiply(L_9, L_11));
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_12 = p0;
		double L_13 = L_12.___U3DdBE2U3D_5;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_14 = p0;
		double L_15 = L_14.___U3DdBEfU3D_2;
		V_3 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_13, L_15)), (2.0)));
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_16 = p0;
		double L_17 = L_16.___U3DdBE2U3D_5;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_18 = p0;
		double L_19 = L_18.___U3DdBE0U3D_3;
		V_4 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_17, L_19)), (2.0)));
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_20 = p0;
		double L_21 = L_20.___U3DdBE2U3D_5;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_22 = p0;
		double L_23 = L_22.___U3DdBE1U3D_4;
		V_5 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_21, L_23)), (2.0)));
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_24 = p0;
		double L_25 = L_24.___U3DdBEfU3D_2;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_26 = p0;
		double L_27 = L_26.___U3DdBE0U3D_3;
		V_6 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_25, L_27)), (2.0)));
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_28 = p0;
		double L_29 = L_28.___U3DdBEfU3D_2;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_30 = p0;
		double L_31 = L_30.___U3DdBE1U3D_4;
		V_7 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_29, L_31)), (2.0)));
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_32 = p0;
		double L_33 = L_32.___U3DdBE0U3D_3;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_34 = p0;
		double L_35 = L_34.___U3DdBE1U3D_4;
		V_8 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_33, L_35)), (2.0)));
		double L_36 = V_1;
		double L_37 = V_2;
		double L_38 = V_6;
		double L_39 = V_5;
		double L_40 = V_7;
		double L_41 = V_4;
		double L_42 = V_6;
		double L_43 = V_5;
		double L_44 = V_0;
		double L_45 = V_2;
		double L_46 = V_8;
		double L_47 = V_3;
		double L_48 = V_7;
		double L_49 = V_4;
		double L_50 = V_8;
		double L_51 = V_3;
		double L_52 = V_0;
		double L_53 = V_1;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_54;
		memset((&L_54), 0, sizeof(L_54));
		U3Da75U3D__ctor_mE3BBD648173DE5B1AFF6305475F1B580A19D411C((&L_54), ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract((1.0), ((double)il2cpp_codegen_multiply((2.0), L_36)))), ((double)il2cpp_codegen_multiply((2.0), L_37)))), ((double)il2cpp_codegen_add(L_38, L_39)), ((double)il2cpp_codegen_subtract(L_40, L_41)), (0.0), ((double)il2cpp_codegen_subtract(L_42, L_43)), ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract((1.0), ((double)il2cpp_codegen_multiply((2.0), L_44)))), ((double)il2cpp_codegen_multiply((2.0), L_45)))), ((double)il2cpp_codegen_add(L_46, L_47)), (0.0), ((double)il2cpp_codegen_add(L_48, L_49)), ((double)il2cpp_codegen_subtract(L_50, L_51)), ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract((1.0), ((double)il2cpp_codegen_multiply((2.0), L_52)))), ((double)il2cpp_codegen_multiply((2.0), L_53)))), (0.0), (0.0), (0.0), (0.0), (1.0), /*hidden argument*/NULL);
		return L_54;
	}
}
// =a75= =a75=::=ccE8=(=a75=,=a75=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC U3Da75U3D_U3DccE8U3D_m9390F647BA20F83A9E1B65081A63CEB2571BAB9C (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC p0, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC_il2cpp_TypeInfo_var);
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_0;
		L_0 = U3Da75U3D_U3DccE9U3D_m3BF9E7DA68861FC5789EBDC88602A567AE1D77F9((&p0), (&p1), NULL);
		return L_0;
	}
}
// =a75= =a75=::=ccE9=(=a75=&,=a75=&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC U3Da75U3D_U3DccE9U3D_m3BF9E7DA68861FC5789EBDC88602A567AE1D77F9 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* p0, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* p1, const RuntimeMethod* method) 
{
	{
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_0 = p0;
		double L_1 = L_0->___U3DdBd1U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_2 = p1;
		double L_3 = L_2->___U3DdBd1U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_4 = p0;
		double L_5 = L_4->___U3DdBd2U3D_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_6 = p1;
		double L_7 = L_6->___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_8 = p0;
		double L_9 = L_8->___U3DdBd3U3D_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_10 = p1;
		double L_11 = L_10->___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_12 = p0;
		double L_13 = L_12->___U3DdBd4U3D_6;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_14 = p1;
		double L_15 = L_14->___U3DdBEbU3D_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_16 = p0;
		double L_17 = L_16->___U3DdBd1U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_18 = p1;
		double L_19 = L_18->___U3DdBd2U3D_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_20 = p0;
		double L_21 = L_20->___U3DdBd2U3D_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_22 = p1;
		double L_23 = L_22->___U3DdBd6U3D_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_24 = p0;
		double L_25 = L_24->___U3DdBd3U3D_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_26 = p1;
		double L_27 = L_26->___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_28 = p0;
		double L_29 = L_28->___U3DdBd4U3D_6;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_30 = p1;
		double L_31 = L_30->___U3DdBECU3D_16;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_32 = p0;
		double L_33 = L_32->___U3DdBd1U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_34 = p1;
		double L_35 = L_34->___U3DdBd3U3D_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_36 = p0;
		double L_37 = L_36->___U3DdBd2U3D_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_38 = p1;
		double L_39 = L_38->___U3DdBd7U3D_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_40 = p0;
		double L_41 = L_40->___U3DdBd3U3D_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_42 = p1;
		double L_43 = L_42->___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_44 = p0;
		double L_45 = L_44->___U3DdBd4U3D_6;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_46 = p1;
		double L_47 = L_46->___U3DdBEcU3D_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_48 = p0;
		double L_49 = L_48->___U3DdBd1U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_50 = p1;
		double L_51 = L_50->___U3DdBd4U3D_6;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_52 = p0;
		double L_53 = L_52->___U3DdBd2U3D_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_54 = p1;
		double L_55 = L_54->___U3DdBd8U3D_10;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_56 = p0;
		double L_57 = L_56->___U3DdBd3U3D_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_58 = p1;
		double L_59 = L_58->___U3DdBEBU3D_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_60 = p0;
		double L_61 = L_60->___U3DdBd4U3D_6;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_62 = p1;
		double L_63 = L_62->___U3DdBEDU3D_18;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_64 = p0;
		double L_65 = L_64->___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_66 = p1;
		double L_67 = L_66->___U3DdBd1U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_68 = p0;
		double L_69 = L_68->___U3DdBd6U3D_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_70 = p1;
		double L_71 = L_70->___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_72 = p0;
		double L_73 = L_72->___U3DdBd7U3D_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_74 = p1;
		double L_75 = L_74->___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_76 = p0;
		double L_77 = L_76->___U3DdBd8U3D_10;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_78 = p1;
		double L_79 = L_78->___U3DdBEbU3D_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_80 = p0;
		double L_81 = L_80->___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_82 = p1;
		double L_83 = L_82->___U3DdBd2U3D_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_84 = p0;
		double L_85 = L_84->___U3DdBd6U3D_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_86 = p1;
		double L_87 = L_86->___U3DdBd6U3D_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_88 = p0;
		double L_89 = L_88->___U3DdBd7U3D_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_90 = p1;
		double L_91 = L_90->___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_92 = p0;
		double L_93 = L_92->___U3DdBd8U3D_10;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_94 = p1;
		double L_95 = L_94->___U3DdBECU3D_16;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_96 = p0;
		double L_97 = L_96->___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_98 = p1;
		double L_99 = L_98->___U3DdBd3U3D_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_100 = p0;
		double L_101 = L_100->___U3DdBd6U3D_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_102 = p1;
		double L_103 = L_102->___U3DdBd7U3D_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_104 = p0;
		double L_105 = L_104->___U3DdBd7U3D_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_106 = p1;
		double L_107 = L_106->___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_108 = p0;
		double L_109 = L_108->___U3DdBd8U3D_10;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_110 = p1;
		double L_111 = L_110->___U3DdBEcU3D_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_112 = p0;
		double L_113 = L_112->___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_114 = p1;
		double L_115 = L_114->___U3DdBd4U3D_6;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_116 = p0;
		double L_117 = L_116->___U3DdBd6U3D_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_118 = p1;
		double L_119 = L_118->___U3DdBd8U3D_10;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_120 = p0;
		double L_121 = L_120->___U3DdBd7U3D_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_122 = p1;
		double L_123 = L_122->___U3DdBEBU3D_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_124 = p0;
		double L_125 = L_124->___U3DdBd8U3D_10;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_126 = p1;
		double L_127 = L_126->___U3DdBEDU3D_18;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_128 = p0;
		double L_129 = L_128->___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_130 = p1;
		double L_131 = L_130->___U3DdBd1U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_132 = p0;
		double L_133 = L_132->___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_134 = p1;
		double L_135 = L_134->___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_136 = p0;
		double L_137 = L_136->___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_138 = p1;
		double L_139 = L_138->___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_140 = p0;
		double L_141 = L_140->___U3DdBEBU3D_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_142 = p1;
		double L_143 = L_142->___U3DdBEbU3D_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_144 = p0;
		double L_145 = L_144->___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_146 = p1;
		double L_147 = L_146->___U3DdBd2U3D_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_148 = p0;
		double L_149 = L_148->___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_150 = p1;
		double L_151 = L_150->___U3DdBd6U3D_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_152 = p0;
		double L_153 = L_152->___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_154 = p1;
		double L_155 = L_154->___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_156 = p0;
		double L_157 = L_156->___U3DdBEBU3D_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_158 = p1;
		double L_159 = L_158->___U3DdBECU3D_16;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_160 = p0;
		double L_161 = L_160->___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_162 = p1;
		double L_163 = L_162->___U3DdBd3U3D_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_164 = p0;
		double L_165 = L_164->___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_166 = p1;
		double L_167 = L_166->___U3DdBd7U3D_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_168 = p0;
		double L_169 = L_168->___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_170 = p1;
		double L_171 = L_170->___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_172 = p0;
		double L_173 = L_172->___U3DdBEBU3D_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_174 = p1;
		double L_175 = L_174->___U3DdBEcU3D_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_176 = p0;
		double L_177 = L_176->___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_178 = p1;
		double L_179 = L_178->___U3DdBd4U3D_6;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_180 = p0;
		double L_181 = L_180->___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_182 = p1;
		double L_183 = L_182->___U3DdBd8U3D_10;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_184 = p0;
		double L_185 = L_184->___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_186 = p1;
		double L_187 = L_186->___U3DdBEBU3D_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_188 = p0;
		double L_189 = L_188->___U3DdBEBU3D_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_190 = p1;
		double L_191 = L_190->___U3DdBEDU3D_18;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_192 = p0;
		double L_193 = L_192->___U3DdBEbU3D_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_194 = p1;
		double L_195 = L_194->___U3DdBd1U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_196 = p0;
		double L_197 = L_196->___U3DdBECU3D_16;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_198 = p1;
		double L_199 = L_198->___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_200 = p0;
		double L_201 = L_200->___U3DdBEcU3D_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_202 = p1;
		double L_203 = L_202->___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_204 = p0;
		double L_205 = L_204->___U3DdBEDU3D_18;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_206 = p1;
		double L_207 = L_206->___U3DdBEbU3D_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_208 = p0;
		double L_209 = L_208->___U3DdBEbU3D_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_210 = p1;
		double L_211 = L_210->___U3DdBd2U3D_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_212 = p0;
		double L_213 = L_212->___U3DdBECU3D_16;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_214 = p1;
		double L_215 = L_214->___U3DdBd6U3D_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_216 = p0;
		double L_217 = L_216->___U3DdBEcU3D_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_218 = p1;
		double L_219 = L_218->___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_220 = p0;
		double L_221 = L_220->___U3DdBEDU3D_18;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_222 = p1;
		double L_223 = L_222->___U3DdBECU3D_16;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_224 = p0;
		double L_225 = L_224->___U3DdBEbU3D_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_226 = p1;
		double L_227 = L_226->___U3DdBd3U3D_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_228 = p0;
		double L_229 = L_228->___U3DdBECU3D_16;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_230 = p1;
		double L_231 = L_230->___U3DdBd7U3D_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_232 = p0;
		double L_233 = L_232->___U3DdBEcU3D_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_234 = p1;
		double L_235 = L_234->___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_236 = p0;
		double L_237 = L_236->___U3DdBEDU3D_18;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_238 = p1;
		double L_239 = L_238->___U3DdBEcU3D_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_240 = p0;
		double L_241 = L_240->___U3DdBEbU3D_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_242 = p1;
		double L_243 = L_242->___U3DdBd4U3D_6;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_244 = p0;
		double L_245 = L_244->___U3DdBECU3D_16;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_246 = p1;
		double L_247 = L_246->___U3DdBd8U3D_10;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_248 = p0;
		double L_249 = L_248->___U3DdBEcU3D_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_250 = p1;
		double L_251 = L_250->___U3DdBEBU3D_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_252 = p0;
		double L_253 = L_252->___U3DdBEDU3D_18;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_254 = p1;
		double L_255 = L_254->___U3DdBEDU3D_18;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_256;
		memset((&L_256), 0, sizeof(L_256));
		U3Da75U3D__ctor_mE3BBD648173DE5B1AFF6305475F1B580A19D411C((&L_256), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_1, L_3)), ((double)il2cpp_codegen_multiply(L_5, L_7)))), ((double)il2cpp_codegen_multiply(L_9, L_11)))), ((double)il2cpp_codegen_multiply(L_13, L_15)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_17, L_19)), ((double)il2cpp_codegen_multiply(L_21, L_23)))), ((double)il2cpp_codegen_multiply(L_25, L_27)))), ((double)il2cpp_codegen_multiply(L_29, L_31)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_33, L_35)), ((double)il2cpp_codegen_multiply(L_37, L_39)))), ((double)il2cpp_codegen_multiply(L_41, L_43)))), ((double)il2cpp_codegen_multiply(L_45, L_47)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_49, L_51)), ((double)il2cpp_codegen_multiply(L_53, L_55)))), ((double)il2cpp_codegen_multiply(L_57, L_59)))), ((double)il2cpp_codegen_multiply(L_61, L_63)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_65, L_67)), ((double)il2cpp_codegen_multiply(L_69, L_71)))), ((double)il2cpp_codegen_multiply(L_73, L_75)))), ((double)il2cpp_codegen_multiply(L_77, L_79)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_81, L_83)), ((double)il2cpp_codegen_multiply(L_85, L_87)))), ((double)il2cpp_codegen_multiply(L_89, L_91)))), ((double)il2cpp_codegen_multiply(L_93, L_95)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_97, L_99)), ((double)il2cpp_codegen_multiply(L_101, L_103)))), ((double)il2cpp_codegen_multiply(L_105, L_107)))), ((double)il2cpp_codegen_multiply(L_109, L_111)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_113, L_115)), ((double)il2cpp_codegen_multiply(L_117, L_119)))), ((double)il2cpp_codegen_multiply(L_121, L_123)))), ((double)il2cpp_codegen_multiply(L_125, L_127)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_129, L_131)), ((double)il2cpp_codegen_multiply(L_133, L_135)))), ((double)il2cpp_codegen_multiply(L_137, L_139)))), ((double)il2cpp_codegen_multiply(L_141, L_143)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_145, L_147)), ((double)il2cpp_codegen_multiply(L_149, L_151)))), ((double)il2cpp_codegen_multiply(L_153, L_155)))), ((double)il2cpp_codegen_multiply(L_157, L_159)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_161, L_163)), ((double)il2cpp_codegen_multiply(L_165, L_167)))), ((double)il2cpp_codegen_multiply(L_169, L_171)))), ((double)il2cpp_codegen_multiply(L_173, L_175)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_177, L_179)), ((double)il2cpp_codegen_multiply(L_181, L_183)))), ((double)il2cpp_codegen_multiply(L_185, L_187)))), ((double)il2cpp_codegen_multiply(L_189, L_191)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_193, L_195)), ((double)il2cpp_codegen_multiply(L_197, L_199)))), ((double)il2cpp_codegen_multiply(L_201, L_203)))), ((double)il2cpp_codegen_multiply(L_205, L_207)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_209, L_211)), ((double)il2cpp_codegen_multiply(L_213, L_215)))), ((double)il2cpp_codegen_multiply(L_217, L_219)))), ((double)il2cpp_codegen_multiply(L_221, L_223)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_225, L_227)), ((double)il2cpp_codegen_multiply(L_229, L_231)))), ((double)il2cpp_codegen_multiply(L_233, L_235)))), ((double)il2cpp_codegen_multiply(L_237, L_239)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_241, L_243)), ((double)il2cpp_codegen_multiply(L_245, L_247)))), ((double)il2cpp_codegen_multiply(L_249, L_251)))), ((double)il2cpp_codegen_multiply(L_253, L_255)))), /*hidden argument*/NULL);
		return L_256;
	}
}
// =a75= =a75=::=cceA=(System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC U3Da75U3D_U3DcceAU3D_mDC68DC2743AA5077736021BB0801FFFDEB70E4E5 (double p0, double p1, double p2, double p3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	{
		double L_0 = p0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = tan(((double)(L_0/(2.0))));
		V_0 = ((double)((1.0)/L_1));
		double L_2 = V_0;
		double L_3 = p1;
		double L_4 = p3;
		double L_5 = p2;
		V_1 = ((double)il2cpp_codegen_subtract(L_4, L_5));
		double L_6 = V_0;
		double L_7 = p3;
		double L_8 = V_1;
		double L_9 = p2;
		double L_10 = p3;
		double L_11 = V_1;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_12;
		memset((&L_12), 0, sizeof(L_12));
		U3Da75U3D__ctor_mE3BBD648173DE5B1AFF6305475F1B580A19D411C((&L_12), ((double)(L_2/L_3)), (0.0), (0.0), (0.0), (0.0), L_6, (0.0), (0.0), (0.0), (0.0), ((double)(L_7/L_8)), (1.0), (0.0), (0.0), ((double)(((double)il2cpp_codegen_multiply(((-L_9)), L_10))/L_11)), (0.0), /*hidden argument*/NULL);
		return L_12;
	}
}
// =a75= =a75=::=ccea=(System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC U3Da75U3D_U3DcceaU3D_mEA39978349D767013118F93C8FE02B2B0A75132F (double p0, double p1, double p2, double p3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	{
		double L_0 = p0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = tan(((double)(L_0/(2.0))));
		V_0 = ((double)((1.0)/L_1));
		double L_2 = V_0;
		double L_3 = p1;
		double L_4 = p2;
		double L_5 = p3;
		V_1 = ((double)il2cpp_codegen_subtract(L_4, L_5));
		double L_6 = V_0;
		double L_7 = p3;
		double L_8 = V_1;
		double L_9 = p2;
		double L_10 = p3;
		double L_11 = V_1;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_12;
		memset((&L_12), 0, sizeof(L_12));
		U3Da75U3D__ctor_mE3BBD648173DE5B1AFF6305475F1B580A19D411C((&L_12), ((double)(L_2/L_3)), (0.0), (0.0), (0.0), (0.0), L_6, (0.0), (0.0), (0.0), (0.0), ((double)(L_7/L_8)), (-1.0), (0.0), (0.0), ((double)(((double)il2cpp_codegen_multiply(L_9, L_10))/L_11)), (0.0), /*hidden argument*/NULL);
		return L_12;
	}
}
// =a75= =a75=::=cceB=(System.Double,System.Double,System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC U3Da75U3D_U3DcceBU3D_m9EEDAC2054C43FFAEB2FA8CA736BF8C999935C22 (double p0, double p1, double p2, double p3, double p4, double p5, const RuntimeMethod* method) 
{
	{
		double L_0 = p1;
		double L_1 = p0;
		double L_2 = p3;
		double L_3 = p2;
		double L_4 = p4;
		double L_5 = p5;
		double L_6 = p0;
		double L_7 = p1;
		double L_8 = p0;
		double L_9 = p1;
		double L_10 = p3;
		double L_11 = p2;
		double L_12 = p2;
		double L_13 = p3;
		double L_14 = p4;
		double L_15 = p4;
		double L_16 = p5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_17;
		memset((&L_17), 0, sizeof(L_17));
		U3Da75U3D__ctor_mE3BBD648173DE5B1AFF6305475F1B580A19D411C((&L_17), ((double)((2.0)/((double)il2cpp_codegen_subtract(L_0, L_1)))), (0.0), (0.0), (0.0), (0.0), ((double)((2.0)/((double)il2cpp_codegen_subtract(L_2, L_3)))), (0.0), (0.0), (0.0), (0.0), ((double)((1.0)/((double)il2cpp_codegen_subtract(L_4, L_5)))), (0.0), ((double)(((double)il2cpp_codegen_add(L_6, L_7))/((double)il2cpp_codegen_subtract(L_8, L_9)))), ((double)(((double)il2cpp_codegen_add(L_10, L_11))/((double)il2cpp_codegen_subtract(L_12, L_13)))), ((double)(L_14/((double)il2cpp_codegen_subtract(L_15, L_16)))), (1.0), /*hidden argument*/NULL);
		return L_17;
	}
}
// =a75= =a75=::=cceb=(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC U3Da75U3D_U3DccebU3D_m23BF626DBA92AF20F8EF91F21EAD066A2AF6AF58 (double p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	{
		double L_0 = p0;
		il2cpp_codegen_runtime_class_init_inline(U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC_il2cpp_TypeInfo_var);
		U3Da75U3D_U3DccFDU3D_m6C92C0E7C17D68CB37F2BD393D252692BD331239(L_0, (&V_0), (&V_1), NULL);
		double L_1 = V_1;
		double L_2 = V_0;
		double L_3 = V_0;
		double L_4 = V_1;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_5;
		memset((&L_5), 0, sizeof(L_5));
		U3Da75U3D__ctor_mE3BBD648173DE5B1AFF6305475F1B580A19D411C((&L_5), (1.0), (0.0), (0.0), (0.0), (0.0), L_1, L_2, (0.0), (0.0), ((-L_3)), L_4, (0.0), (0.0), (0.0), (0.0), (1.0), /*hidden argument*/NULL);
		return L_5;
	}
}
// =a75= =a75=::=cceC=(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC U3Da75U3D_U3DcceCU3D_m50E0A25DC54697965E9AE8F6D7CC38B651C62783 (double p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	{
		double L_0 = p0;
		il2cpp_codegen_runtime_class_init_inline(U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC_il2cpp_TypeInfo_var);
		U3Da75U3D_U3DccFDU3D_m6C92C0E7C17D68CB37F2BD393D252692BD331239(L_0, (&V_0), (&V_1), NULL);
		double L_1 = V_1;
		double L_2 = V_0;
		double L_3 = V_0;
		double L_4 = V_1;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_5;
		memset((&L_5), 0, sizeof(L_5));
		U3Da75U3D__ctor_mE3BBD648173DE5B1AFF6305475F1B580A19D411C((&L_5), L_1, (0.0), ((-L_2)), (0.0), (0.0), (1.0), (0.0), (0.0), L_3, (0.0), L_4, (0.0), (0.0), (0.0), (0.0), (1.0), /*hidden argument*/NULL);
		return L_5;
	}
}
// =a75= =a75=::=ccec=(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC U3Da75U3D_U3DccecU3D_mC1034C8C5CFEFB2D812BB97FF979069DD6799AB7 (double p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	{
		double L_0 = p0;
		il2cpp_codegen_runtime_class_init_inline(U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC_il2cpp_TypeInfo_var);
		U3Da75U3D_U3DccFDU3D_m6C92C0E7C17D68CB37F2BD393D252692BD331239(L_0, (&V_0), (&V_1), NULL);
		double L_1 = V_1;
		double L_2 = V_0;
		double L_3 = V_0;
		double L_4 = V_1;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_5;
		memset((&L_5), 0, sizeof(L_5));
		U3Da75U3D__ctor_mE3BBD648173DE5B1AFF6305475F1B580A19D411C((&L_5), L_1, L_2, (0.0), (0.0), ((-L_3)), L_4, (0.0), (0.0), (0.0), (0.0), (1.0), (0.0), (0.0), (0.0), (0.0), (1.0), /*hidden argument*/NULL);
		return L_5;
	}
}
// =a75= =a75=::=cceD=(Microsoft.Geospatial.VectorMath.Plane3D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC U3Da75U3D_U3DcceDU3D_m7D3837CE0FA0DCF4EEA75C17C07249773A2BC8BD (Plane3D_t9930B95330F63B305DC3A12F4763038EDBEBD7B0 p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		double L_0;
		L_0 = Plane3D_get_A_m9FE3C792A2473D3CE2559FF69B38CCED7FB47F51_inline((&p0), NULL);
		double L_1;
		L_1 = Plane3D_get_A_m9FE3C792A2473D3CE2559FF69B38CCED7FB47F51_inline((&p0), NULL);
		V_0 = ((double)il2cpp_codegen_multiply(L_0, L_1));
		double L_2;
		L_2 = Plane3D_get_B_mBBBDDA16D982F03642A38F8825E1EF4AAE04B259_inline((&p0), NULL);
		double L_3;
		L_3 = Plane3D_get_B_mBBBDDA16D982F03642A38F8825E1EF4AAE04B259_inline((&p0), NULL);
		V_1 = ((double)il2cpp_codegen_multiply(L_2, L_3));
		double L_4;
		L_4 = Plane3D_get_C_m80C61B3CB7D816C9798E08B34AF26BA784C0E144_inline((&p0), NULL);
		double L_5;
		L_5 = Plane3D_get_C_m80C61B3CB7D816C9798E08B34AF26BA784C0E144_inline((&p0), NULL);
		V_2 = ((double)il2cpp_codegen_multiply(L_4, L_5));
		il2cpp_codegen_runtime_class_init_inline(U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC_il2cpp_TypeInfo_var);
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_6 = ((U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC_StaticFields*)il2cpp_codegen_static_fields_for(U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC_il2cpp_TypeInfo_var))->___U3DdBdfU3D_1;
		V_3 = L_6;
		double L_7 = V_1;
		double L_8 = V_2;
		(&V_3)->___U3DdBd1U3D_3 = ((double)il2cpp_codegen_add(L_7, L_8));
		double L_9;
		L_9 = Plane3D_get_A_m9FE3C792A2473D3CE2559FF69B38CCED7FB47F51_inline((&p0), NULL);
		double L_10;
		L_10 = Plane3D_get_B_mBBBDDA16D982F03642A38F8825E1EF4AAE04B259_inline((&p0), NULL);
		(&V_3)->___U3DdBd2U3D_4 = ((double)il2cpp_codegen_multiply(((-L_9)), L_10));
		double L_11;
		L_11 = Plane3D_get_A_m9FE3C792A2473D3CE2559FF69B38CCED7FB47F51_inline((&p0), NULL);
		double L_12;
		L_12 = Plane3D_get_C_m80C61B3CB7D816C9798E08B34AF26BA784C0E144_inline((&p0), NULL);
		(&V_3)->___U3DdBd3U3D_5 = ((double)il2cpp_codegen_multiply(((-L_11)), L_12));
		double L_13;
		L_13 = Plane3D_get_B_mBBBDDA16D982F03642A38F8825E1EF4AAE04B259_inline((&p0), NULL);
		double L_14;
		L_14 = Plane3D_get_A_m9FE3C792A2473D3CE2559FF69B38CCED7FB47F51_inline((&p0), NULL);
		(&V_3)->___U3DdBd5U3D_7 = ((double)il2cpp_codegen_multiply(((-L_13)), L_14));
		double L_15 = V_0;
		double L_16 = V_2;
		(&V_3)->___U3DdBd6U3D_8 = ((double)il2cpp_codegen_add(L_15, L_16));
		double L_17;
		L_17 = Plane3D_get_B_mBBBDDA16D982F03642A38F8825E1EF4AAE04B259_inline((&p0), NULL);
		double L_18;
		L_18 = Plane3D_get_C_m80C61B3CB7D816C9798E08B34AF26BA784C0E144_inline((&p0), NULL);
		(&V_3)->___U3DdBd7U3D_9 = ((double)il2cpp_codegen_multiply(((-L_17)), L_18));
		double L_19;
		L_19 = Plane3D_get_C_m80C61B3CB7D816C9798E08B34AF26BA784C0E144_inline((&p0), NULL);
		double L_20;
		L_20 = Plane3D_get_A_m9FE3C792A2473D3CE2559FF69B38CCED7FB47F51_inline((&p0), NULL);
		(&V_3)->___U3DdBd9U3D_11 = ((double)il2cpp_codegen_multiply(((-L_19)), L_20));
		double L_21;
		L_21 = Plane3D_get_C_m80C61B3CB7D816C9798E08B34AF26BA784C0E144_inline((&p0), NULL);
		double L_22;
		L_22 = Plane3D_get_B_mBBBDDA16D982F03642A38F8825E1EF4AAE04B259_inline((&p0), NULL);
		(&V_3)->___U3DdBEAU3D_12 = ((double)il2cpp_codegen_multiply(((-L_21)), L_22));
		double L_23 = V_0;
		double L_24 = V_1;
		(&V_3)->___U3DdBEaU3D_13 = ((double)il2cpp_codegen_add(L_23, L_24));
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_25 = V_3;
		return L_25;
	}
}
// =a75= =a75=::=cced=(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC U3Da75U3D_U3DccedU3D_mE9D2ABA6B0634AA0B2EEB925608148819977ADCC (double p0, double p1, double p2, const RuntimeMethod* method) 
{
	{
		double L_0 = p0;
		double L_1 = p1;
		double L_2 = p2;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_3;
		memset((&L_3), 0, sizeof(L_3));
		U3Da75U3D__ctor_mE3BBD648173DE5B1AFF6305475F1B580A19D411C((&L_3), L_0, (0.0), (0.0), (0.0), (0.0), L_1, (0.0), (0.0), (0.0), (0.0), L_2, (0.0), (0.0), (0.0), (0.0), (1.0), /*hidden argument*/NULL);
		return L_3;
	}
}
// =a75= =a75=::=cceE=(Microsoft.Geospatial.VectorMath.Vector3D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC U3Da75U3D_U3DcceEU3D_m04F71AE78F470552A4E84EF64B24B96BFF6D66A0 (Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = p0;
		double L_1 = L_0.___X_7;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_2 = p0;
		double L_3 = L_2.___Y_8;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_4 = p0;
		double L_5 = L_4.___Z_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_6;
		memset((&L_6), 0, sizeof(L_6));
		U3Da75U3D__ctor_mE3BBD648173DE5B1AFF6305475F1B580A19D411C((&L_6), L_1, (0.0), (0.0), (0.0), (0.0), L_3, (0.0), (0.0), (0.0), (0.0), L_5, (0.0), (0.0), (0.0), (0.0), (1.0), /*hidden argument*/NULL);
		return L_6;
	}
}
// =a75= =a75=::=ccee=(=a75=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC U3Da75U3D_U3DcceeU3D_m74C0940D20AF996A00354EC9E9EFA7F1DA4063BF (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC p0, const RuntimeMethod* method) 
{
	{
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_0 = p0;
		double L_1 = L_0.___U3DdBd1U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_2 = p0;
		double L_3 = L_2.___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_4 = p0;
		double L_5 = L_4.___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_6 = p0;
		double L_7 = L_6.___U3DdBEbU3D_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_8 = p0;
		double L_9 = L_8.___U3DdBd2U3D_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_10 = p0;
		double L_11 = L_10.___U3DdBd6U3D_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_12 = p0;
		double L_13 = L_12.___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_14 = p0;
		double L_15 = L_14.___U3DdBECU3D_16;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_16 = p0;
		double L_17 = L_16.___U3DdBd3U3D_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_18 = p0;
		double L_19 = L_18.___U3DdBd7U3D_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_20 = p0;
		double L_21 = L_20.___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_22 = p0;
		double L_23 = L_22.___U3DdBEcU3D_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_24 = p0;
		double L_25 = L_24.___U3DdBd4U3D_6;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_26 = p0;
		double L_27 = L_26.___U3DdBd8U3D_10;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_28 = p0;
		double L_29 = L_28.___U3DdBEBU3D_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_30 = p0;
		double L_31 = L_30.___U3DdBEDU3D_18;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_32;
		memset((&L_32), 0, sizeof(L_32));
		U3Da75U3D__ctor_mE3BBD648173DE5B1AFF6305475F1B580A19D411C((&L_32), L_1, L_3, L_5, L_7, L_9, L_11, L_13, L_15, L_17, L_19, L_21, L_23, L_25, L_27, L_29, L_31, /*hidden argument*/NULL);
		return L_32;
	}
}
// =a75= =a75=::=cceF=(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC U3Da75U3D_U3DcceFU3D_m3B8B425DAAFFDB0479B759EAB44E9D6E97D9B6BD (double p0, double p1, double p2, const RuntimeMethod* method) 
{
	{
		double L_0 = p0;
		double L_1 = p1;
		double L_2 = p2;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_3;
		memset((&L_3), 0, sizeof(L_3));
		U3Da75U3D__ctor_mE3BBD648173DE5B1AFF6305475F1B580A19D411C((&L_3), (1.0), (0.0), (0.0), (0.0), (0.0), (1.0), (0.0), (0.0), (0.0), (0.0), (1.0), (0.0), L_0, L_1, L_2, (1.0), /*hidden argument*/NULL);
		return L_3;
	}
}
// =a75= =a75=::=ccef=(Microsoft.Geospatial.VectorMath.Vector3D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC U3Da75U3D_U3DccefU3D_m1141F2F0261D00FF4626BF5A99BD34C6CA38F053 (Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = p0;
		double L_1 = L_0.___X_7;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_2 = p0;
		double L_3 = L_2.___Y_8;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_4 = p0;
		double L_5 = L_4.___Z_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_6;
		memset((&L_6), 0, sizeof(L_6));
		U3Da75U3D__ctor_mE3BBD648173DE5B1AFF6305475F1B580A19D411C((&L_6), (1.0), (0.0), (0.0), (0.0), (0.0), (1.0), (0.0), (0.0), (0.0), (0.0), (1.0), (0.0), L_1, L_3, L_5, (1.0), /*hidden argument*/NULL);
		return L_6;
	}
}
// =a75= =a75=::=cce0=(Microsoft.Geospatial.VectorMath.Vector3D,=a8A=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC U3Da75U3D_U3Dcce0U3D_mD616CC16AC6846DCD16E97E2A228AB93F09310E0 (Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_0 = p1;
		double L_1 = L_0.___U3DdBEfU3D_2;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_2 = p1;
		double L_3 = L_2.___U3DdBE0U3D_3;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_4 = p1;
		double L_5 = L_4.___U3DdBE1U3D_4;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_6 = p1;
		double L_7 = L_6.___U3DdBE2U3D_5;
		U3Da8AU3D__ctor_m3D2630D700DE73C47B56F6BD184DC5019B722E00((&V_0), L_1, L_3, L_5, L_7, NULL);
		U3Da8AU3D_U3Dcc1CU3D_m9670FCF33ED8FF258967411DF5A8ED6F2D75A246((&V_0), NULL);
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_8 = V_0;
		double L_9 = L_8.___U3DdBE2U3D_5;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_10 = V_0;
		double L_11 = L_10.___U3DdBE2U3D_5;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_12 = V_0;
		double L_13 = L_12.___U3DdBEfU3D_2;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_14 = V_0;
		double L_15 = L_14.___U3DdBEfU3D_2;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_16 = V_0;
		double L_17 = L_16.___U3DdBEfU3D_2;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_18 = V_0;
		double L_19 = L_18.___U3DdBE0U3D_3;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_20 = V_0;
		double L_21 = L_20.___U3DdBE2U3D_5;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_22 = V_0;
		double L_23 = L_22.___U3DdBE1U3D_4;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_24 = V_0;
		double L_25 = L_24.___U3DdBEfU3D_2;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_26 = V_0;
		double L_27 = L_26.___U3DdBE1U3D_4;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_28 = V_0;
		double L_29 = L_28.___U3DdBE2U3D_5;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_30 = V_0;
		double L_31 = L_30.___U3DdBE0U3D_3;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_32 = p0;
		double L_33 = L_32.___X_7;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_34 = V_0;
		double L_35 = L_34.___U3DdBEfU3D_2;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_36 = V_0;
		double L_37 = L_36.___U3DdBE0U3D_3;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_38 = V_0;
		double L_39 = L_38.___U3DdBE2U3D_5;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_40 = V_0;
		double L_41 = L_40.___U3DdBE1U3D_4;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_42 = V_0;
		double L_43 = L_42.___U3DdBE2U3D_5;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_44 = V_0;
		double L_45 = L_44.___U3DdBE2U3D_5;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_46 = V_0;
		double L_47 = L_46.___U3DdBE0U3D_3;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_48 = V_0;
		double L_49 = L_48.___U3DdBE0U3D_3;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_50 = V_0;
		double L_51 = L_50.___U3DdBE0U3D_3;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_52 = V_0;
		double L_53 = L_52.___U3DdBE1U3D_4;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_54 = V_0;
		double L_55 = L_54.___U3DdBE2U3D_5;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_56 = V_0;
		double L_57 = L_56.___U3DdBEfU3D_2;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_58 = p0;
		double L_59 = L_58.___Y_8;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_60 = V_0;
		double L_61 = L_60.___U3DdBEfU3D_2;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_62 = V_0;
		double L_63 = L_62.___U3DdBE1U3D_4;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_64 = V_0;
		double L_65 = L_64.___U3DdBE2U3D_5;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_66 = V_0;
		double L_67 = L_66.___U3DdBE0U3D_3;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_68 = V_0;
		double L_69 = L_68.___U3DdBE0U3D_3;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_70 = V_0;
		double L_71 = L_70.___U3DdBE1U3D_4;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_72 = V_0;
		double L_73 = L_72.___U3DdBE2U3D_5;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_74 = V_0;
		double L_75 = L_74.___U3DdBEfU3D_2;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_76 = V_0;
		double L_77 = L_76.___U3DdBE2U3D_5;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_78 = V_0;
		double L_79 = L_78.___U3DdBE2U3D_5;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_80 = V_0;
		double L_81 = L_80.___U3DdBE1U3D_4;
		U3Da8AU3D_t3007EA6C9766C6531F978851D97AF54AEF47A634 L_82 = V_0;
		double L_83 = L_82.___U3DdBE1U3D_4;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_84 = p0;
		double L_85 = L_84.___Z_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_86;
		memset((&L_86), 0, sizeof(L_86));
		U3Da75U3D__ctor_mE3BBD648173DE5B1AFF6305475F1B580A19D411C((&L_86), ((double)il2cpp_codegen_multiply((2.0), ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_9, L_11)), ((double)il2cpp_codegen_multiply(L_13, L_15)))), (0.5))))), ((double)il2cpp_codegen_multiply((2.0), ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_17, L_19)), ((double)il2cpp_codegen_multiply(L_21, L_23)))))), ((double)il2cpp_codegen_multiply((2.0), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_25, L_27)), ((double)il2cpp_codegen_multiply(L_29, L_31)))))), L_33, ((double)il2cpp_codegen_multiply((2.0), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_35, L_37)), ((double)il2cpp_codegen_multiply(L_39, L_41)))))), ((double)il2cpp_codegen_multiply((2.0), ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_43, L_45)), ((double)il2cpp_codegen_multiply(L_47, L_49)))), (0.5))))), ((double)il2cpp_codegen_multiply((2.0), ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_51, L_53)), ((double)il2cpp_codegen_multiply(L_55, L_57)))))), L_59, ((double)il2cpp_codegen_multiply((2.0), ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_61, L_63)), ((double)il2cpp_codegen_multiply(L_65, L_67)))))), ((double)il2cpp_codegen_multiply((2.0), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_69, L_71)), ((double)il2cpp_codegen_multiply(L_73, L_75)))))), ((double)il2cpp_codegen_multiply((2.0), ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_77, L_79)), ((double)il2cpp_codegen_multiply(L_81, L_83)))), (0.5))))), L_85, (0.0), (0.0), (0.0), (1.0), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC_il2cpp_TypeInfo_var);
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_87;
		L_87 = U3Da75U3D_U3DcceeU3D_m74C0940D20AF996A00354EC9E9EFA7F1DA4063BF(L_86, NULL);
		return L_87;
	}
}
// =a75= =a75=::op_Addition(=a75=,=a75=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC U3Da75U3D_op_Addition_m0011D9AA13BB95D26B593EA26267599B535D11AE (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC p0, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_0 = p0;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_1 = p1;
		il2cpp_codegen_runtime_class_init_inline(U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC_il2cpp_TypeInfo_var);
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_2;
		L_2 = U3Da75U3D_U3DccEFU3D_mE3D2E7E19C669F1572B70126EB17ED37F6C0216C(L_0, L_1, NULL);
		return L_2;
	}
}
// =a75= =a75=::op_Subtraction(=a75=,=a75=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC U3Da75U3D_op_Subtraction_m069CDD758CB4CFF5E0F6A90D71A36CD9F445BDAE (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC p0, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_0 = p0;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_1 = p1;
		il2cpp_codegen_runtime_class_init_inline(U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC_il2cpp_TypeInfo_var);
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_2;
		L_2 = U3Da75U3D_U3DccE0U3D_m254CD3A2B2E7D29275E0113B2ACC8B2E072BE4E1(L_0, L_1, NULL);
		return L_2;
	}
}
// =a75= =a75=::op_Multiply(=a75=,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC U3Da75U3D_op_Multiply_mC772D55A1D38580C23D4EA061BD36347956D8C6F (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC p0, double p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_0 = p0;
		double L_1 = p1;
		il2cpp_codegen_runtime_class_init_inline(U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC_il2cpp_TypeInfo_var);
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_2;
		L_2 = U3Da75U3D_U3Dcce9U3D_mF8945E2F6618E90117435A6FFB8A65ABBC778EB2(L_0, L_1, NULL);
		return L_2;
	}
}
// =a75= =a75=::op_Multiply(=a75=,=a75=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC U3Da75U3D_op_Multiply_mDED9C1C0F3696794293E666BD6A289E0679F0B12 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC p0, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC p1, const RuntimeMethod* method) 
{
	{
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_0 = p0;
		double L_1 = L_0.___U3DdBd1U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_2 = p1;
		double L_3 = L_2.___U3DdBd1U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_4 = p0;
		double L_5 = L_4.___U3DdBd2U3D_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_6 = p1;
		double L_7 = L_6.___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_8 = p0;
		double L_9 = L_8.___U3DdBd3U3D_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_10 = p1;
		double L_11 = L_10.___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_12 = p0;
		double L_13 = L_12.___U3DdBd4U3D_6;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_14 = p1;
		double L_15 = L_14.___U3DdBEbU3D_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_16 = p0;
		double L_17 = L_16.___U3DdBd1U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_18 = p1;
		double L_19 = L_18.___U3DdBd2U3D_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_20 = p0;
		double L_21 = L_20.___U3DdBd2U3D_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_22 = p1;
		double L_23 = L_22.___U3DdBd6U3D_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_24 = p0;
		double L_25 = L_24.___U3DdBd3U3D_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_26 = p1;
		double L_27 = L_26.___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_28 = p0;
		double L_29 = L_28.___U3DdBd4U3D_6;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_30 = p1;
		double L_31 = L_30.___U3DdBECU3D_16;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_32 = p0;
		double L_33 = L_32.___U3DdBd1U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_34 = p1;
		double L_35 = L_34.___U3DdBd3U3D_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_36 = p0;
		double L_37 = L_36.___U3DdBd2U3D_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_38 = p1;
		double L_39 = L_38.___U3DdBd7U3D_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_40 = p0;
		double L_41 = L_40.___U3DdBd3U3D_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_42 = p1;
		double L_43 = L_42.___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_44 = p0;
		double L_45 = L_44.___U3DdBd4U3D_6;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_46 = p1;
		double L_47 = L_46.___U3DdBEcU3D_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_48 = p0;
		double L_49 = L_48.___U3DdBd1U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_50 = p1;
		double L_51 = L_50.___U3DdBd4U3D_6;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_52 = p0;
		double L_53 = L_52.___U3DdBd2U3D_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_54 = p1;
		double L_55 = L_54.___U3DdBd8U3D_10;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_56 = p0;
		double L_57 = L_56.___U3DdBd3U3D_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_58 = p1;
		double L_59 = L_58.___U3DdBEBU3D_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_60 = p0;
		double L_61 = L_60.___U3DdBd4U3D_6;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_62 = p1;
		double L_63 = L_62.___U3DdBEDU3D_18;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_64 = p0;
		double L_65 = L_64.___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_66 = p1;
		double L_67 = L_66.___U3DdBd1U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_68 = p0;
		double L_69 = L_68.___U3DdBd6U3D_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_70 = p1;
		double L_71 = L_70.___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_72 = p0;
		double L_73 = L_72.___U3DdBd7U3D_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_74 = p1;
		double L_75 = L_74.___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_76 = p0;
		double L_77 = L_76.___U3DdBd8U3D_10;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_78 = p1;
		double L_79 = L_78.___U3DdBEbU3D_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_80 = p0;
		double L_81 = L_80.___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_82 = p1;
		double L_83 = L_82.___U3DdBd2U3D_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_84 = p0;
		double L_85 = L_84.___U3DdBd6U3D_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_86 = p1;
		double L_87 = L_86.___U3DdBd6U3D_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_88 = p0;
		double L_89 = L_88.___U3DdBd7U3D_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_90 = p1;
		double L_91 = L_90.___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_92 = p0;
		double L_93 = L_92.___U3DdBd8U3D_10;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_94 = p1;
		double L_95 = L_94.___U3DdBECU3D_16;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_96 = p0;
		double L_97 = L_96.___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_98 = p1;
		double L_99 = L_98.___U3DdBd3U3D_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_100 = p0;
		double L_101 = L_100.___U3DdBd6U3D_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_102 = p1;
		double L_103 = L_102.___U3DdBd7U3D_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_104 = p0;
		double L_105 = L_104.___U3DdBd7U3D_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_106 = p1;
		double L_107 = L_106.___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_108 = p0;
		double L_109 = L_108.___U3DdBd8U3D_10;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_110 = p1;
		double L_111 = L_110.___U3DdBEcU3D_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_112 = p0;
		double L_113 = L_112.___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_114 = p1;
		double L_115 = L_114.___U3DdBd4U3D_6;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_116 = p0;
		double L_117 = L_116.___U3DdBd6U3D_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_118 = p1;
		double L_119 = L_118.___U3DdBd8U3D_10;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_120 = p0;
		double L_121 = L_120.___U3DdBd7U3D_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_122 = p1;
		double L_123 = L_122.___U3DdBEBU3D_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_124 = p0;
		double L_125 = L_124.___U3DdBd8U3D_10;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_126 = p1;
		double L_127 = L_126.___U3DdBEDU3D_18;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_128 = p0;
		double L_129 = L_128.___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_130 = p1;
		double L_131 = L_130.___U3DdBd1U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_132 = p0;
		double L_133 = L_132.___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_134 = p1;
		double L_135 = L_134.___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_136 = p0;
		double L_137 = L_136.___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_138 = p1;
		double L_139 = L_138.___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_140 = p0;
		double L_141 = L_140.___U3DdBEBU3D_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_142 = p1;
		double L_143 = L_142.___U3DdBEbU3D_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_144 = p0;
		double L_145 = L_144.___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_146 = p1;
		double L_147 = L_146.___U3DdBd2U3D_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_148 = p0;
		double L_149 = L_148.___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_150 = p1;
		double L_151 = L_150.___U3DdBd6U3D_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_152 = p0;
		double L_153 = L_152.___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_154 = p1;
		double L_155 = L_154.___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_156 = p0;
		double L_157 = L_156.___U3DdBEBU3D_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_158 = p1;
		double L_159 = L_158.___U3DdBECU3D_16;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_160 = p0;
		double L_161 = L_160.___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_162 = p1;
		double L_163 = L_162.___U3DdBd3U3D_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_164 = p0;
		double L_165 = L_164.___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_166 = p1;
		double L_167 = L_166.___U3DdBd7U3D_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_168 = p0;
		double L_169 = L_168.___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_170 = p1;
		double L_171 = L_170.___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_172 = p0;
		double L_173 = L_172.___U3DdBEBU3D_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_174 = p1;
		double L_175 = L_174.___U3DdBEcU3D_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_176 = p0;
		double L_177 = L_176.___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_178 = p1;
		double L_179 = L_178.___U3DdBd4U3D_6;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_180 = p0;
		double L_181 = L_180.___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_182 = p1;
		double L_183 = L_182.___U3DdBd8U3D_10;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_184 = p0;
		double L_185 = L_184.___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_186 = p1;
		double L_187 = L_186.___U3DdBEBU3D_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_188 = p0;
		double L_189 = L_188.___U3DdBEBU3D_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_190 = p1;
		double L_191 = L_190.___U3DdBEDU3D_18;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_192 = p0;
		double L_193 = L_192.___U3DdBEbU3D_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_194 = p1;
		double L_195 = L_194.___U3DdBd1U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_196 = p0;
		double L_197 = L_196.___U3DdBECU3D_16;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_198 = p1;
		double L_199 = L_198.___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_200 = p0;
		double L_201 = L_200.___U3DdBEcU3D_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_202 = p1;
		double L_203 = L_202.___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_204 = p0;
		double L_205 = L_204.___U3DdBEDU3D_18;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_206 = p1;
		double L_207 = L_206.___U3DdBEbU3D_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_208 = p0;
		double L_209 = L_208.___U3DdBEbU3D_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_210 = p1;
		double L_211 = L_210.___U3DdBd2U3D_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_212 = p0;
		double L_213 = L_212.___U3DdBECU3D_16;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_214 = p1;
		double L_215 = L_214.___U3DdBd6U3D_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_216 = p0;
		double L_217 = L_216.___U3DdBEcU3D_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_218 = p1;
		double L_219 = L_218.___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_220 = p0;
		double L_221 = L_220.___U3DdBEDU3D_18;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_222 = p1;
		double L_223 = L_222.___U3DdBECU3D_16;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_224 = p0;
		double L_225 = L_224.___U3DdBEbU3D_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_226 = p1;
		double L_227 = L_226.___U3DdBd3U3D_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_228 = p0;
		double L_229 = L_228.___U3DdBECU3D_16;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_230 = p1;
		double L_231 = L_230.___U3DdBd7U3D_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_232 = p0;
		double L_233 = L_232.___U3DdBEcU3D_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_234 = p1;
		double L_235 = L_234.___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_236 = p0;
		double L_237 = L_236.___U3DdBEDU3D_18;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_238 = p1;
		double L_239 = L_238.___U3DdBEcU3D_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_240 = p0;
		double L_241 = L_240.___U3DdBEbU3D_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_242 = p1;
		double L_243 = L_242.___U3DdBd4U3D_6;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_244 = p0;
		double L_245 = L_244.___U3DdBECU3D_16;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_246 = p1;
		double L_247 = L_246.___U3DdBd8U3D_10;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_248 = p0;
		double L_249 = L_248.___U3DdBEcU3D_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_250 = p1;
		double L_251 = L_250.___U3DdBEBU3D_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_252 = p0;
		double L_253 = L_252.___U3DdBEDU3D_18;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_254 = p1;
		double L_255 = L_254.___U3DdBEDU3D_18;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_256;
		memset((&L_256), 0, sizeof(L_256));
		U3Da75U3D__ctor_mE3BBD648173DE5B1AFF6305475F1B580A19D411C((&L_256), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_1, L_3)), ((double)il2cpp_codegen_multiply(L_5, L_7)))), ((double)il2cpp_codegen_multiply(L_9, L_11)))), ((double)il2cpp_codegen_multiply(L_13, L_15)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_17, L_19)), ((double)il2cpp_codegen_multiply(L_21, L_23)))), ((double)il2cpp_codegen_multiply(L_25, L_27)))), ((double)il2cpp_codegen_multiply(L_29, L_31)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_33, L_35)), ((double)il2cpp_codegen_multiply(L_37, L_39)))), ((double)il2cpp_codegen_multiply(L_41, L_43)))), ((double)il2cpp_codegen_multiply(L_45, L_47)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_49, L_51)), ((double)il2cpp_codegen_multiply(L_53, L_55)))), ((double)il2cpp_codegen_multiply(L_57, L_59)))), ((double)il2cpp_codegen_multiply(L_61, L_63)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_65, L_67)), ((double)il2cpp_codegen_multiply(L_69, L_71)))), ((double)il2cpp_codegen_multiply(L_73, L_75)))), ((double)il2cpp_codegen_multiply(L_77, L_79)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_81, L_83)), ((double)il2cpp_codegen_multiply(L_85, L_87)))), ((double)il2cpp_codegen_multiply(L_89, L_91)))), ((double)il2cpp_codegen_multiply(L_93, L_95)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_97, L_99)), ((double)il2cpp_codegen_multiply(L_101, L_103)))), ((double)il2cpp_codegen_multiply(L_105, L_107)))), ((double)il2cpp_codegen_multiply(L_109, L_111)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_113, L_115)), ((double)il2cpp_codegen_multiply(L_117, L_119)))), ((double)il2cpp_codegen_multiply(L_121, L_123)))), ((double)il2cpp_codegen_multiply(L_125, L_127)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_129, L_131)), ((double)il2cpp_codegen_multiply(L_133, L_135)))), ((double)il2cpp_codegen_multiply(L_137, L_139)))), ((double)il2cpp_codegen_multiply(L_141, L_143)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_145, L_147)), ((double)il2cpp_codegen_multiply(L_149, L_151)))), ((double)il2cpp_codegen_multiply(L_153, L_155)))), ((double)il2cpp_codegen_multiply(L_157, L_159)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_161, L_163)), ((double)il2cpp_codegen_multiply(L_165, L_167)))), ((double)il2cpp_codegen_multiply(L_169, L_171)))), ((double)il2cpp_codegen_multiply(L_173, L_175)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_177, L_179)), ((double)il2cpp_codegen_multiply(L_181, L_183)))), ((double)il2cpp_codegen_multiply(L_185, L_187)))), ((double)il2cpp_codegen_multiply(L_189, L_191)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_193, L_195)), ((double)il2cpp_codegen_multiply(L_197, L_199)))), ((double)il2cpp_codegen_multiply(L_201, L_203)))), ((double)il2cpp_codegen_multiply(L_205, L_207)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_209, L_211)), ((double)il2cpp_codegen_multiply(L_213, L_215)))), ((double)il2cpp_codegen_multiply(L_217, L_219)))), ((double)il2cpp_codegen_multiply(L_221, L_223)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_225, L_227)), ((double)il2cpp_codegen_multiply(L_229, L_231)))), ((double)il2cpp_codegen_multiply(L_233, L_235)))), ((double)il2cpp_codegen_multiply(L_237, L_239)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_241, L_243)), ((double)il2cpp_codegen_multiply(L_245, L_247)))), ((double)il2cpp_codegen_multiply(L_249, L_251)))), ((double)il2cpp_codegen_multiply(L_253, L_255)))), /*hidden argument*/NULL);
		return L_256;
	}
}
// Microsoft.Geospatial.VectorMath.Vector3D =a75=::op_Multiply(Microsoft.Geospatial.VectorMath.Vector3D,=a75=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE U3Da75U3D_op_Multiply_m62810FD4BE45FAC5EE5443E3477A93C463763ACD (Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC p1, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = p0;
		double L_1 = L_0.___X_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_2 = p1;
		double L_3 = L_2.___U3DdBd1U3D_3;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_4 = p0;
		double L_5 = L_4.___Y_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_6 = p1;
		double L_7 = L_6.___U3DdBd5U3D_7;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_8 = p0;
		double L_9 = L_8.___Z_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_10 = p1;
		double L_11 = L_10.___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_12 = p1;
		double L_13 = L_12.___U3DdBEbU3D_15;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_14 = p0;
		double L_15 = L_14.___X_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_16 = p1;
		double L_17 = L_16.___U3DdBd2U3D_4;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_18 = p0;
		double L_19 = L_18.___Y_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_20 = p1;
		double L_21 = L_20.___U3DdBd6U3D_8;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_22 = p0;
		double L_23 = L_22.___Z_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_24 = p1;
		double L_25 = L_24.___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_26 = p1;
		double L_27 = L_26.___U3DdBECU3D_16;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_28 = p0;
		double L_29 = L_28.___X_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_30 = p1;
		double L_31 = L_30.___U3DdBd3U3D_5;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_32 = p0;
		double L_33 = L_32.___Y_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_34 = p1;
		double L_35 = L_34.___U3DdBd7U3D_9;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_36 = p0;
		double L_37 = L_36.___Z_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_38 = p1;
		double L_39 = L_38.___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_40 = p1;
		double L_41 = L_40.___U3DdBEcU3D_17;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3D__ctor_m089D30E3C254B02097D9E58F833A0DAC855CE3E6((&L_42), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_1, L_3)), ((double)il2cpp_codegen_multiply(L_5, L_7)))), ((double)il2cpp_codegen_multiply(L_9, L_11)))), L_13)), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_15, L_17)), ((double)il2cpp_codegen_multiply(L_19, L_21)))), ((double)il2cpp_codegen_multiply(L_23, L_25)))), L_27)), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_29, L_31)), ((double)il2cpp_codegen_multiply(L_33, L_35)))), ((double)il2cpp_codegen_multiply(L_37, L_39)))), L_41)), /*hidden argument*/NULL);
		return L_42;
	}
}
// =a82= =a75=::op_Multiply(=a75=,=a82=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 U3Da75U3D_op_Multiply_m0526B47114C615DDA6299289D86FB0DD37619490 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC p0, U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_0 = p0;
		U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 L_1 = p1;
		il2cpp_codegen_runtime_class_init_inline(U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC_il2cpp_TypeInfo_var);
		U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 L_2;
		L_2 = U3Da75U3D_U3DccFAU3D_m2D711E85C1D1783E7CD7BE7454E86A472EC15C1B(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean =a75=::op_Equality(=a75=,=a75=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da75U3D_op_Equality_mFF0AC1A8BF9E2B9A51409F3AB47684428E2B42B1 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC p0, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC p1, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = U3Da75U3D_U3DccFaU3D_m41135BFAE5A9041BB18648D3272FB547CE88C693((&p0), (&p1), NULL);
		return L_0;
	}
}
// System.Boolean =a75=::op_Inequality(=a75=,=a75=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da75U3D_op_Inequality_m4F671F5AE33C91DA7968A9A235267044C6ABB03C (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC p0, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC p1, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = U3Da75U3D_U3DccFaU3D_m41135BFAE5A9041BB18648D3272FB547CE88C693((&p0), (&p1), NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean =a75=::=cce1=(=a75=,=a75=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da75U3D_U3Dcce1U3D_m8CBA42BBF436EF7FCC8D0C911C404612AB141F9F (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC p0, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC p1, const RuntimeMethod* method) 
{
	{
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_0 = p1;
		bool L_1;
		L_1 = U3Da75U3D_Equals_m4CD10B87D3CBD2EE4A83B17734331CF3DB736F15((&p0), L_0, NULL);
		return L_1;
	}
}
// System.Void =a75=::=cce2=(System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da75U3D_U3Dcce2U3D_mEDAF1DE68C7335B15863DC41EEA26BB966AE9B12 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, double p0, double p1, double p2, double p3, const RuntimeMethod* method) 
{
	{
		double L_0 = p0;
		double L_1 = p0;
		__this->___U3DdBd1U3D_3 = ((double)il2cpp_codegen_multiply(L_0, L_1));
		double L_2 = p0;
		double L_3 = p1;
		__this->___U3DdBd2U3D_4 = ((double)il2cpp_codegen_multiply(L_2, L_3));
		double L_4 = p0;
		double L_5 = p2;
		__this->___U3DdBd3U3D_5 = ((double)il2cpp_codegen_multiply(L_4, L_5));
		double L_6 = p0;
		double L_7 = p3;
		__this->___U3DdBd4U3D_6 = ((double)il2cpp_codegen_multiply(L_6, L_7));
		double L_8 = __this->___U3DdBd2U3D_4;
		__this->___U3DdBd5U3D_7 = L_8;
		double L_9 = p1;
		double L_10 = p1;
		__this->___U3DdBd6U3D_8 = ((double)il2cpp_codegen_multiply(L_9, L_10));
		double L_11 = p1;
		double L_12 = p2;
		__this->___U3DdBd7U3D_9 = ((double)il2cpp_codegen_multiply(L_11, L_12));
		double L_13 = p1;
		double L_14 = p3;
		__this->___U3DdBd8U3D_10 = ((double)il2cpp_codegen_multiply(L_13, L_14));
		double L_15 = __this->___U3DdBd3U3D_5;
		__this->___U3DdBd9U3D_11 = L_15;
		double L_16 = __this->___U3DdBd7U3D_9;
		__this->___U3DdBEAU3D_12 = L_16;
		double L_17 = p2;
		double L_18 = p2;
		__this->___U3DdBEaU3D_13 = ((double)il2cpp_codegen_multiply(L_17, L_18));
		double L_19 = p2;
		double L_20 = p3;
		__this->___U3DdBEBU3D_14 = ((double)il2cpp_codegen_multiply(L_19, L_20));
		double L_21 = __this->___U3DdBd4U3D_6;
		__this->___U3DdBEbU3D_15 = L_21;
		double L_22 = __this->___U3DdBd8U3D_10;
		__this->___U3DdBECU3D_16 = L_22;
		double L_23 = __this->___U3DdBEBU3D_14;
		__this->___U3DdBEcU3D_17 = L_23;
		double L_24 = p3;
		double L_25 = p3;
		__this->___U3DdBEDU3D_18 = ((double)il2cpp_codegen_multiply(L_24, L_25));
		return;
	}
}
IL2CPP_EXTERN_C  void U3Da75U3D_U3Dcce2U3D_mEDAF1DE68C7335B15863DC41EEA26BB966AE9B12_AdjustorThunk (RuntimeObject* __this, double p0, double p1, double p2, double p3, const RuntimeMethod* method)
{
	U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC*>(__this + _offset);
	U3Da75U3D_U3Dcce2U3D_mEDAF1DE68C7335B15863DC41EEA26BB966AE9B12(_thisAdjusted, p0, p1, p2, p3, method);
}
// System.Void =a75=::=cce3=(System.Double,=a75=&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da75U3D_U3Dcce3U3D_m4B11D79E3834FB8868E495D702012A2884DBA2FB (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, double p0, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* p1, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3DdBd1U3D_3;
		double L_1 = p0;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_2 = p1;
		double L_3 = L_2->___U3DdBd1U3D_3;
		__this->___U3DdBd1U3D_3 = ((double)il2cpp_codegen_add(L_0, ((double)il2cpp_codegen_multiply(L_1, L_3))));
		double L_4 = __this->___U3DdBd2U3D_4;
		double L_5 = p0;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_6 = p1;
		double L_7 = L_6->___U3DdBd2U3D_4;
		__this->___U3DdBd2U3D_4 = ((double)il2cpp_codegen_add(L_4, ((double)il2cpp_codegen_multiply(L_5, L_7))));
		double L_8 = __this->___U3DdBd3U3D_5;
		double L_9 = p0;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_10 = p1;
		double L_11 = L_10->___U3DdBd3U3D_5;
		__this->___U3DdBd3U3D_5 = ((double)il2cpp_codegen_add(L_8, ((double)il2cpp_codegen_multiply(L_9, L_11))));
		double L_12 = __this->___U3DdBd4U3D_6;
		double L_13 = p0;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_14 = p1;
		double L_15 = L_14->___U3DdBd4U3D_6;
		__this->___U3DdBd4U3D_6 = ((double)il2cpp_codegen_add(L_12, ((double)il2cpp_codegen_multiply(L_13, L_15))));
		double L_16 = __this->___U3DdBd5U3D_7;
		double L_17 = p0;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_18 = p1;
		double L_19 = L_18->___U3DdBd5U3D_7;
		__this->___U3DdBd5U3D_7 = ((double)il2cpp_codegen_add(L_16, ((double)il2cpp_codegen_multiply(L_17, L_19))));
		double L_20 = __this->___U3DdBd6U3D_8;
		double L_21 = p0;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_22 = p1;
		double L_23 = L_22->___U3DdBd6U3D_8;
		__this->___U3DdBd6U3D_8 = ((double)il2cpp_codegen_add(L_20, ((double)il2cpp_codegen_multiply(L_21, L_23))));
		double L_24 = __this->___U3DdBd7U3D_9;
		double L_25 = p0;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_26 = p1;
		double L_27 = L_26->___U3DdBd7U3D_9;
		__this->___U3DdBd7U3D_9 = ((double)il2cpp_codegen_add(L_24, ((double)il2cpp_codegen_multiply(L_25, L_27))));
		double L_28 = __this->___U3DdBd8U3D_10;
		double L_29 = p0;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_30 = p1;
		double L_31 = L_30->___U3DdBd8U3D_10;
		__this->___U3DdBd8U3D_10 = ((double)il2cpp_codegen_add(L_28, ((double)il2cpp_codegen_multiply(L_29, L_31))));
		double L_32 = __this->___U3DdBd9U3D_11;
		double L_33 = p0;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_34 = p1;
		double L_35 = L_34->___U3DdBd9U3D_11;
		__this->___U3DdBd9U3D_11 = ((double)il2cpp_codegen_add(L_32, ((double)il2cpp_codegen_multiply(L_33, L_35))));
		double L_36 = __this->___U3DdBEAU3D_12;
		double L_37 = p0;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_38 = p1;
		double L_39 = L_38->___U3DdBEAU3D_12;
		__this->___U3DdBEAU3D_12 = ((double)il2cpp_codegen_add(L_36, ((double)il2cpp_codegen_multiply(L_37, L_39))));
		double L_40 = __this->___U3DdBEaU3D_13;
		double L_41 = p0;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_42 = p1;
		double L_43 = L_42->___U3DdBEaU3D_13;
		__this->___U3DdBEaU3D_13 = ((double)il2cpp_codegen_add(L_40, ((double)il2cpp_codegen_multiply(L_41, L_43))));
		double L_44 = __this->___U3DdBEBU3D_14;
		double L_45 = p0;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_46 = p1;
		double L_47 = L_46->___U3DdBEBU3D_14;
		__this->___U3DdBEBU3D_14 = ((double)il2cpp_codegen_add(L_44, ((double)il2cpp_codegen_multiply(L_45, L_47))));
		double L_48 = __this->___U3DdBEbU3D_15;
		double L_49 = p0;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_50 = p1;
		double L_51 = L_50->___U3DdBEbU3D_15;
		__this->___U3DdBEbU3D_15 = ((double)il2cpp_codegen_add(L_48, ((double)il2cpp_codegen_multiply(L_49, L_51))));
		double L_52 = __this->___U3DdBECU3D_16;
		double L_53 = p0;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_54 = p1;
		double L_55 = L_54->___U3DdBECU3D_16;
		__this->___U3DdBECU3D_16 = ((double)il2cpp_codegen_add(L_52, ((double)il2cpp_codegen_multiply(L_53, L_55))));
		double L_56 = __this->___U3DdBEcU3D_17;
		double L_57 = p0;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_58 = p1;
		double L_59 = L_58->___U3DdBEcU3D_17;
		__this->___U3DdBEcU3D_17 = ((double)il2cpp_codegen_add(L_56, ((double)il2cpp_codegen_multiply(L_57, L_59))));
		double L_60 = __this->___U3DdBEDU3D_18;
		double L_61 = p0;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_62 = p1;
		double L_63 = L_62->___U3DdBEDU3D_18;
		__this->___U3DdBEDU3D_18 = ((double)il2cpp_codegen_add(L_60, ((double)il2cpp_codegen_multiply(L_61, L_63))));
		return;
	}
}
IL2CPP_EXTERN_C  void U3Da75U3D_U3Dcce3U3D_m4B11D79E3834FB8868E495D702012A2884DBA2FB_AdjustorThunk (RuntimeObject* __this, double p0, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* p1, const RuntimeMethod* method)
{
	U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC*>(__this + _offset);
	U3Da75U3D_U3Dcce3U3D_m4B11D79E3834FB8868E495D702012A2884DBA2FB(_thisAdjusted, p0, p1, method);
}
// Microsoft.Geospatial.VectorMath.Vector3D =a75=::=cce4=(Microsoft.Geospatial.VectorMath.Vector3D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE U3Da75U3D_U3Dcce4U3D_mF1B50D2D01DA667BA751ACB05008FDBB41F637AA (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = p0;
		double L_1 = L_0.___X_7;
		double L_2 = __this->___U3DdBd4U3D_6;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_3 = p0;
		double L_4 = L_3.___Y_8;
		double L_5 = __this->___U3DdBd8U3D_10;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_6 = p0;
		double L_7 = L_6.___Z_9;
		double L_8 = __this->___U3DdBEBU3D_14;
		double L_9 = __this->___U3DdBEDU3D_18;
		V_0 = ((double)((1.0)/((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_1, L_2)), ((double)il2cpp_codegen_multiply(L_4, L_5)))), ((double)il2cpp_codegen_multiply(L_7, L_8)))), L_9))));
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_10 = p0;
		double L_11 = L_10.___X_7;
		double L_12 = __this->___U3DdBd1U3D_3;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_13 = p0;
		double L_14 = L_13.___Y_8;
		double L_15 = __this->___U3DdBd5U3D_7;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_16 = p0;
		double L_17 = L_16.___Z_9;
		double L_18 = __this->___U3DdBd9U3D_11;
		double L_19 = __this->___U3DdBEbU3D_15;
		double L_20 = V_0;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_21 = p0;
		double L_22 = L_21.___X_7;
		double L_23 = __this->___U3DdBd2U3D_4;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_24 = p0;
		double L_25 = L_24.___Y_8;
		double L_26 = __this->___U3DdBd6U3D_8;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_27 = p0;
		double L_28 = L_27.___Z_9;
		double L_29 = __this->___U3DdBEAU3D_12;
		double L_30 = __this->___U3DdBECU3D_16;
		double L_31 = V_0;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_32 = p0;
		double L_33 = L_32.___X_7;
		double L_34 = __this->___U3DdBd3U3D_5;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_35 = p0;
		double L_36 = L_35.___Y_8;
		double L_37 = __this->___U3DdBd7U3D_9;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_38 = p0;
		double L_39 = L_38.___Z_9;
		double L_40 = __this->___U3DdBEaU3D_13;
		double L_41 = __this->___U3DdBEcU3D_17;
		double L_42 = V_0;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector3D__ctor_m089D30E3C254B02097D9E58F833A0DAC855CE3E6((&L_43), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_11, L_12)), ((double)il2cpp_codegen_multiply(L_14, L_15)))), ((double)il2cpp_codegen_multiply(L_17, L_18)))), L_19)), L_20)), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_22, L_23)), ((double)il2cpp_codegen_multiply(L_25, L_26)))), ((double)il2cpp_codegen_multiply(L_28, L_29)))), L_30)), L_31)), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_33, L_34)), ((double)il2cpp_codegen_multiply(L_36, L_37)))), ((double)il2cpp_codegen_multiply(L_39, L_40)))), L_41)), L_42)), /*hidden argument*/NULL);
		return L_43;
	}
}
IL2CPP_EXTERN_C  Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE U3Da75U3D_U3Dcce4U3D_mF1B50D2D01DA667BA751ACB05008FDBB41F637AA_AdjustorThunk (RuntimeObject* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, const RuntimeMethod* method)
{
	U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC*>(__this + _offset);
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE _returnValue;
	_returnValue = U3Da75U3D_U3Dcce4U3D_mF1B50D2D01DA667BA751ACB05008FDBB41F637AA(_thisAdjusted, p0, method);
	return _returnValue;
}
// Microsoft.Geospatial.VectorMath.Vector3D =a75=::=cce5=(Microsoft.Geospatial.VectorMath.Vector3D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE U3Da75U3D_U3Dcce5U3D_m83CEA356C416D57AE4E36C943A9E3D3F950488B5 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = p0;
		double L_1 = L_0.___X_7;
		double L_2 = __this->___U3DdBd4U3D_6;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_3 = p0;
		double L_4 = L_3.___Y_8;
		double L_5 = __this->___U3DdBd8U3D_10;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_6 = p0;
		double L_7 = L_6.___Z_9;
		double L_8 = __this->___U3DdBEBU3D_14;
		V_0 = ((double)((1.0)/((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_1, L_2)), ((double)il2cpp_codegen_multiply(L_4, L_5)))), ((double)il2cpp_codegen_multiply(L_7, L_8)))), (1.0)))));
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_9 = p0;
		double L_10 = L_9.___X_7;
		double L_11 = __this->___U3DdBd1U3D_3;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_12 = p0;
		double L_13 = L_12.___Y_8;
		double L_14 = __this->___U3DdBd5U3D_7;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_15 = p0;
		double L_16 = L_15.___Z_9;
		double L_17 = __this->___U3DdBd9U3D_11;
		double L_18 = V_0;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_19 = p0;
		double L_20 = L_19.___X_7;
		double L_21 = __this->___U3DdBd2U3D_4;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_22 = p0;
		double L_23 = L_22.___Y_8;
		double L_24 = __this->___U3DdBd6U3D_8;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_25 = p0;
		double L_26 = L_25.___Z_9;
		double L_27 = __this->___U3DdBEAU3D_12;
		double L_28 = V_0;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_29 = p0;
		double L_30 = L_29.___X_7;
		double L_31 = __this->___U3DdBd3U3D_5;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_32 = p0;
		double L_33 = L_32.___Y_8;
		double L_34 = __this->___U3DdBd7U3D_9;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_35 = p0;
		double L_36 = L_35.___Z_9;
		double L_37 = __this->___U3DdBEaU3D_13;
		double L_38 = V_0;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector3D__ctor_m089D30E3C254B02097D9E58F833A0DAC855CE3E6((&L_39), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_10, L_11)), ((double)il2cpp_codegen_multiply(L_13, L_14)))), ((double)il2cpp_codegen_multiply(L_16, L_17)))), L_18)), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_20, L_21)), ((double)il2cpp_codegen_multiply(L_23, L_24)))), ((double)il2cpp_codegen_multiply(L_26, L_27)))), L_28)), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_30, L_31)), ((double)il2cpp_codegen_multiply(L_33, L_34)))), ((double)il2cpp_codegen_multiply(L_36, L_37)))), L_38)), /*hidden argument*/NULL);
		return L_39;
	}
}
IL2CPP_EXTERN_C  Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE U3Da75U3D_U3Dcce5U3D_m83CEA356C416D57AE4E36C943A9E3D3F950488B5_AdjustorThunk (RuntimeObject* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, const RuntimeMethod* method)
{
	U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC*>(__this + _offset);
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE _returnValue;
	_returnValue = U3Da75U3D_U3Dcce5U3D_m83CEA356C416D57AE4E36C943A9E3D3F950488B5(_thisAdjusted, p0, method);
	return _returnValue;
}
// =a82= =a75=::=cce6=(=a82=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 U3Da75U3D_U3Dcce6U3D_m4574BA996056F64507A5F33FD8FCE60B978EE424 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 p0, const RuntimeMethod* method) 
{
	{
		U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 L_0 = p0;
		double L_1 = L_0.___U3DdBF3U3D_0;
		double L_2 = __this->___U3DdBd1U3D_3;
		U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 L_3 = p0;
		double L_4 = L_3.___U3DdBF4U3D_1;
		double L_5 = __this->___U3DdBd5U3D_7;
		U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 L_6 = p0;
		double L_7 = L_6.___U3DdBF5U3D_2;
		double L_8 = __this->___U3DdBd9U3D_11;
		U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 L_9 = p0;
		double L_10 = L_9.___U3DdBF6U3D_3;
		double L_11 = __this->___U3DdBEbU3D_15;
		U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 L_12 = p0;
		double L_13 = L_12.___U3DdBF3U3D_0;
		double L_14 = __this->___U3DdBd2U3D_4;
		U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 L_15 = p0;
		double L_16 = L_15.___U3DdBF4U3D_1;
		double L_17 = __this->___U3DdBd6U3D_8;
		U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 L_18 = p0;
		double L_19 = L_18.___U3DdBF5U3D_2;
		double L_20 = __this->___U3DdBEAU3D_12;
		U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 L_21 = p0;
		double L_22 = L_21.___U3DdBF6U3D_3;
		double L_23 = __this->___U3DdBECU3D_16;
		U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 L_24 = p0;
		double L_25 = L_24.___U3DdBF3U3D_0;
		double L_26 = __this->___U3DdBd3U3D_5;
		U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 L_27 = p0;
		double L_28 = L_27.___U3DdBF4U3D_1;
		double L_29 = __this->___U3DdBd7U3D_9;
		U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 L_30 = p0;
		double L_31 = L_30.___U3DdBF5U3D_2;
		double L_32 = __this->___U3DdBEaU3D_13;
		U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 L_33 = p0;
		double L_34 = L_33.___U3DdBF6U3D_3;
		double L_35 = __this->___U3DdBEcU3D_17;
		U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 L_36 = p0;
		double L_37 = L_36.___U3DdBF3U3D_0;
		double L_38 = __this->___U3DdBd4U3D_6;
		U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 L_39 = p0;
		double L_40 = L_39.___U3DdBF4U3D_1;
		double L_41 = __this->___U3DdBd8U3D_10;
		U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 L_42 = p0;
		double L_43 = L_42.___U3DdBF5U3D_2;
		double L_44 = __this->___U3DdBEBU3D_14;
		U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 L_45 = p0;
		double L_46 = L_45.___U3DdBF6U3D_3;
		double L_47 = __this->___U3DdBEDU3D_18;
		U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 L_48;
		memset((&L_48), 0, sizeof(L_48));
		U3Da82U3D__ctor_m1603D94D85CF688ED8E059FA5906A174910E8E49((&L_48), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_1, L_2)), ((double)il2cpp_codegen_multiply(L_4, L_5)))), ((double)il2cpp_codegen_multiply(L_7, L_8)))), ((double)il2cpp_codegen_multiply(L_10, L_11)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_13, L_14)), ((double)il2cpp_codegen_multiply(L_16, L_17)))), ((double)il2cpp_codegen_multiply(L_19, L_20)))), ((double)il2cpp_codegen_multiply(L_22, L_23)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_25, L_26)), ((double)il2cpp_codegen_multiply(L_28, L_29)))), ((double)il2cpp_codegen_multiply(L_31, L_32)))), ((double)il2cpp_codegen_multiply(L_34, L_35)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_37, L_38)), ((double)il2cpp_codegen_multiply(L_40, L_41)))), ((double)il2cpp_codegen_multiply(L_43, L_44)))), ((double)il2cpp_codegen_multiply(L_46, L_47)))), /*hidden argument*/NULL);
		return L_48;
	}
}
IL2CPP_EXTERN_C  U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 U3Da75U3D_U3Dcce6U3D_m4574BA996056F64507A5F33FD8FCE60B978EE424_AdjustorThunk (RuntimeObject* __this, U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 p0, const RuntimeMethod* method)
{
	U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC*>(__this + _offset);
	U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 _returnValue;
	_returnValue = U3Da75U3D_U3Dcce6U3D_m4574BA996056F64507A5F33FD8FCE60B978EE424(_thisAdjusted, p0, method);
	return _returnValue;
}
// System.Void =a75=::=cce7=(=a75=&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da75U3D_U3Dcce7U3D_mD841759C75527B4F94E7FF0E50A68635F8BC9F23 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* p0, const RuntimeMethod* method) 
{
	U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_0;
		memset((&L_0), 0, sizeof(L_0));
		U3Da75U3D__ctor_mA4132D477D317E4002BAF660A6D1922D71BC17EB((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_1 = V_0;
		double L_2 = L_1.___U3DdBd1U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_3 = p0;
		double L_4 = L_3->___U3DdBd1U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_5 = V_0;
		double L_6 = L_5.___U3DdBd2U3D_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_7 = p0;
		double L_8 = L_7->___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_9 = V_0;
		double L_10 = L_9.___U3DdBd3U3D_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_11 = p0;
		double L_12 = L_11->___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_13 = V_0;
		double L_14 = L_13.___U3DdBd4U3D_6;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_15 = p0;
		double L_16 = L_15->___U3DdBEbU3D_15;
		__this->___U3DdBd1U3D_3 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_2, L_4)), ((double)il2cpp_codegen_multiply(L_6, L_8)))), ((double)il2cpp_codegen_multiply(L_10, L_12)))), ((double)il2cpp_codegen_multiply(L_14, L_16))));
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_17 = V_0;
		double L_18 = L_17.___U3DdBd1U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_19 = p0;
		double L_20 = L_19->___U3DdBd2U3D_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_21 = V_0;
		double L_22 = L_21.___U3DdBd2U3D_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_23 = p0;
		double L_24 = L_23->___U3DdBd6U3D_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_25 = V_0;
		double L_26 = L_25.___U3DdBd3U3D_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_27 = p0;
		double L_28 = L_27->___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_29 = V_0;
		double L_30 = L_29.___U3DdBd4U3D_6;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_31 = p0;
		double L_32 = L_31->___U3DdBECU3D_16;
		__this->___U3DdBd2U3D_4 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_18, L_20)), ((double)il2cpp_codegen_multiply(L_22, L_24)))), ((double)il2cpp_codegen_multiply(L_26, L_28)))), ((double)il2cpp_codegen_multiply(L_30, L_32))));
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_33 = V_0;
		double L_34 = L_33.___U3DdBd1U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_35 = p0;
		double L_36 = L_35->___U3DdBd3U3D_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_37 = V_0;
		double L_38 = L_37.___U3DdBd2U3D_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_39 = p0;
		double L_40 = L_39->___U3DdBd7U3D_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_41 = V_0;
		double L_42 = L_41.___U3DdBd3U3D_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_43 = p0;
		double L_44 = L_43->___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_45 = V_0;
		double L_46 = L_45.___U3DdBd4U3D_6;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_47 = p0;
		double L_48 = L_47->___U3DdBEcU3D_17;
		__this->___U3DdBd3U3D_5 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_34, L_36)), ((double)il2cpp_codegen_multiply(L_38, L_40)))), ((double)il2cpp_codegen_multiply(L_42, L_44)))), ((double)il2cpp_codegen_multiply(L_46, L_48))));
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_49 = V_0;
		double L_50 = L_49.___U3DdBd1U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_51 = p0;
		double L_52 = L_51->___U3DdBd4U3D_6;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_53 = V_0;
		double L_54 = L_53.___U3DdBd2U3D_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_55 = p0;
		double L_56 = L_55->___U3DdBd8U3D_10;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_57 = V_0;
		double L_58 = L_57.___U3DdBd3U3D_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_59 = p0;
		double L_60 = L_59->___U3DdBEBU3D_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_61 = V_0;
		double L_62 = L_61.___U3DdBd4U3D_6;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_63 = p0;
		double L_64 = L_63->___U3DdBEDU3D_18;
		__this->___U3DdBd4U3D_6 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_50, L_52)), ((double)il2cpp_codegen_multiply(L_54, L_56)))), ((double)il2cpp_codegen_multiply(L_58, L_60)))), ((double)il2cpp_codegen_multiply(L_62, L_64))));
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_65 = V_0;
		double L_66 = L_65.___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_67 = p0;
		double L_68 = L_67->___U3DdBd1U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_69 = V_0;
		double L_70 = L_69.___U3DdBd6U3D_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_71 = p0;
		double L_72 = L_71->___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_73 = V_0;
		double L_74 = L_73.___U3DdBd7U3D_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_75 = p0;
		double L_76 = L_75->___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_77 = V_0;
		double L_78 = L_77.___U3DdBd8U3D_10;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_79 = p0;
		double L_80 = L_79->___U3DdBEbU3D_15;
		__this->___U3DdBd5U3D_7 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_66, L_68)), ((double)il2cpp_codegen_multiply(L_70, L_72)))), ((double)il2cpp_codegen_multiply(L_74, L_76)))), ((double)il2cpp_codegen_multiply(L_78, L_80))));
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_81 = V_0;
		double L_82 = L_81.___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_83 = p0;
		double L_84 = L_83->___U3DdBd2U3D_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_85 = V_0;
		double L_86 = L_85.___U3DdBd6U3D_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_87 = p0;
		double L_88 = L_87->___U3DdBd6U3D_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_89 = V_0;
		double L_90 = L_89.___U3DdBd7U3D_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_91 = p0;
		double L_92 = L_91->___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_93 = V_0;
		double L_94 = L_93.___U3DdBd8U3D_10;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_95 = p0;
		double L_96 = L_95->___U3DdBECU3D_16;
		__this->___U3DdBd6U3D_8 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_82, L_84)), ((double)il2cpp_codegen_multiply(L_86, L_88)))), ((double)il2cpp_codegen_multiply(L_90, L_92)))), ((double)il2cpp_codegen_multiply(L_94, L_96))));
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_97 = V_0;
		double L_98 = L_97.___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_99 = p0;
		double L_100 = L_99->___U3DdBd3U3D_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_101 = V_0;
		double L_102 = L_101.___U3DdBd6U3D_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_103 = p0;
		double L_104 = L_103->___U3DdBd7U3D_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_105 = V_0;
		double L_106 = L_105.___U3DdBd7U3D_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_107 = p0;
		double L_108 = L_107->___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_109 = V_0;
		double L_110 = L_109.___U3DdBd8U3D_10;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_111 = p0;
		double L_112 = L_111->___U3DdBEcU3D_17;
		__this->___U3DdBd7U3D_9 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_98, L_100)), ((double)il2cpp_codegen_multiply(L_102, L_104)))), ((double)il2cpp_codegen_multiply(L_106, L_108)))), ((double)il2cpp_codegen_multiply(L_110, L_112))));
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_113 = V_0;
		double L_114 = L_113.___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_115 = p0;
		double L_116 = L_115->___U3DdBd4U3D_6;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_117 = V_0;
		double L_118 = L_117.___U3DdBd6U3D_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_119 = p0;
		double L_120 = L_119->___U3DdBd8U3D_10;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_121 = V_0;
		double L_122 = L_121.___U3DdBd7U3D_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_123 = p0;
		double L_124 = L_123->___U3DdBEBU3D_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_125 = V_0;
		double L_126 = L_125.___U3DdBd8U3D_10;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_127 = p0;
		double L_128 = L_127->___U3DdBEDU3D_18;
		__this->___U3DdBd8U3D_10 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_114, L_116)), ((double)il2cpp_codegen_multiply(L_118, L_120)))), ((double)il2cpp_codegen_multiply(L_122, L_124)))), ((double)il2cpp_codegen_multiply(L_126, L_128))));
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_129 = V_0;
		double L_130 = L_129.___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_131 = p0;
		double L_132 = L_131->___U3DdBd1U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_133 = V_0;
		double L_134 = L_133.___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_135 = p0;
		double L_136 = L_135->___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_137 = V_0;
		double L_138 = L_137.___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_139 = p0;
		double L_140 = L_139->___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_141 = V_0;
		double L_142 = L_141.___U3DdBEBU3D_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_143 = p0;
		double L_144 = L_143->___U3DdBEbU3D_15;
		__this->___U3DdBd9U3D_11 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_130, L_132)), ((double)il2cpp_codegen_multiply(L_134, L_136)))), ((double)il2cpp_codegen_multiply(L_138, L_140)))), ((double)il2cpp_codegen_multiply(L_142, L_144))));
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_145 = V_0;
		double L_146 = L_145.___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_147 = p0;
		double L_148 = L_147->___U3DdBd2U3D_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_149 = V_0;
		double L_150 = L_149.___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_151 = p0;
		double L_152 = L_151->___U3DdBd6U3D_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_153 = V_0;
		double L_154 = L_153.___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_155 = p0;
		double L_156 = L_155->___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_157 = V_0;
		double L_158 = L_157.___U3DdBEBU3D_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_159 = p0;
		double L_160 = L_159->___U3DdBECU3D_16;
		__this->___U3DdBEAU3D_12 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_146, L_148)), ((double)il2cpp_codegen_multiply(L_150, L_152)))), ((double)il2cpp_codegen_multiply(L_154, L_156)))), ((double)il2cpp_codegen_multiply(L_158, L_160))));
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_161 = V_0;
		double L_162 = L_161.___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_163 = p0;
		double L_164 = L_163->___U3DdBd3U3D_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_165 = V_0;
		double L_166 = L_165.___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_167 = p0;
		double L_168 = L_167->___U3DdBd7U3D_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_169 = V_0;
		double L_170 = L_169.___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_171 = p0;
		double L_172 = L_171->___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_173 = V_0;
		double L_174 = L_173.___U3DdBEBU3D_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_175 = p0;
		double L_176 = L_175->___U3DdBEcU3D_17;
		__this->___U3DdBEaU3D_13 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_162, L_164)), ((double)il2cpp_codegen_multiply(L_166, L_168)))), ((double)il2cpp_codegen_multiply(L_170, L_172)))), ((double)il2cpp_codegen_multiply(L_174, L_176))));
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_177 = V_0;
		double L_178 = L_177.___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_179 = p0;
		double L_180 = L_179->___U3DdBd4U3D_6;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_181 = V_0;
		double L_182 = L_181.___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_183 = p0;
		double L_184 = L_183->___U3DdBd8U3D_10;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_185 = V_0;
		double L_186 = L_185.___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_187 = p0;
		double L_188 = L_187->___U3DdBEBU3D_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_189 = V_0;
		double L_190 = L_189.___U3DdBEBU3D_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_191 = p0;
		double L_192 = L_191->___U3DdBEDU3D_18;
		__this->___U3DdBEBU3D_14 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_178, L_180)), ((double)il2cpp_codegen_multiply(L_182, L_184)))), ((double)il2cpp_codegen_multiply(L_186, L_188)))), ((double)il2cpp_codegen_multiply(L_190, L_192))));
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_193 = V_0;
		double L_194 = L_193.___U3DdBEbU3D_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_195 = p0;
		double L_196 = L_195->___U3DdBd1U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_197 = V_0;
		double L_198 = L_197.___U3DdBECU3D_16;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_199 = p0;
		double L_200 = L_199->___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_201 = V_0;
		double L_202 = L_201.___U3DdBEcU3D_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_203 = p0;
		double L_204 = L_203->___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_205 = V_0;
		double L_206 = L_205.___U3DdBEDU3D_18;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_207 = p0;
		double L_208 = L_207->___U3DdBEbU3D_15;
		__this->___U3DdBEbU3D_15 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_194, L_196)), ((double)il2cpp_codegen_multiply(L_198, L_200)))), ((double)il2cpp_codegen_multiply(L_202, L_204)))), ((double)il2cpp_codegen_multiply(L_206, L_208))));
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_209 = V_0;
		double L_210 = L_209.___U3DdBEbU3D_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_211 = p0;
		double L_212 = L_211->___U3DdBd2U3D_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_213 = V_0;
		double L_214 = L_213.___U3DdBECU3D_16;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_215 = p0;
		double L_216 = L_215->___U3DdBd6U3D_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_217 = V_0;
		double L_218 = L_217.___U3DdBEcU3D_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_219 = p0;
		double L_220 = L_219->___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_221 = V_0;
		double L_222 = L_221.___U3DdBEDU3D_18;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_223 = p0;
		double L_224 = L_223->___U3DdBECU3D_16;
		__this->___U3DdBECU3D_16 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_210, L_212)), ((double)il2cpp_codegen_multiply(L_214, L_216)))), ((double)il2cpp_codegen_multiply(L_218, L_220)))), ((double)il2cpp_codegen_multiply(L_222, L_224))));
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_225 = V_0;
		double L_226 = L_225.___U3DdBEbU3D_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_227 = p0;
		double L_228 = L_227->___U3DdBd3U3D_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_229 = V_0;
		double L_230 = L_229.___U3DdBECU3D_16;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_231 = p0;
		double L_232 = L_231->___U3DdBd7U3D_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_233 = V_0;
		double L_234 = L_233.___U3DdBEcU3D_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_235 = p0;
		double L_236 = L_235->___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_237 = V_0;
		double L_238 = L_237.___U3DdBEDU3D_18;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_239 = p0;
		double L_240 = L_239->___U3DdBEcU3D_17;
		__this->___U3DdBEcU3D_17 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_226, L_228)), ((double)il2cpp_codegen_multiply(L_230, L_232)))), ((double)il2cpp_codegen_multiply(L_234, L_236)))), ((double)il2cpp_codegen_multiply(L_238, L_240))));
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_241 = V_0;
		double L_242 = L_241.___U3DdBEbU3D_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_243 = p0;
		double L_244 = L_243->___U3DdBd4U3D_6;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_245 = V_0;
		double L_246 = L_245.___U3DdBECU3D_16;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_247 = p0;
		double L_248 = L_247->___U3DdBd8U3D_10;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_249 = V_0;
		double L_250 = L_249.___U3DdBEcU3D_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_251 = p0;
		double L_252 = L_251->___U3DdBEBU3D_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_253 = V_0;
		double L_254 = L_253.___U3DdBEDU3D_18;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_255 = p0;
		double L_256 = L_255->___U3DdBEDU3D_18;
		__this->___U3DdBEDU3D_18 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_242, L_244)), ((double)il2cpp_codegen_multiply(L_246, L_248)))), ((double)il2cpp_codegen_multiply(L_250, L_252)))), ((double)il2cpp_codegen_multiply(L_254, L_256))));
		return;
	}
}
IL2CPP_EXTERN_C  void U3Da75U3D_U3Dcce7U3D_mD841759C75527B4F94E7FF0E50A68635F8BC9F23_AdjustorThunk (RuntimeObject* __this, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* p0, const RuntimeMethod* method)
{
	U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC*>(__this + _offset);
	U3Da75U3D_U3Dcce7U3D_mD841759C75527B4F94E7FF0E50A68635F8BC9F23(_thisAdjusted, p0, method);
}
// System.Void =a75=::=cce8=(=a75=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da75U3D_U3Dcce8U3D_mBB96ADA696F117DF4E517C5419D7CA4FBF30B9BC (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC p0, const RuntimeMethod* method) 
{
	{
		U3Da75U3D_U3Dcce7U3D_mD841759C75527B4F94E7FF0E50A68635F8BC9F23(__this, (&p0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3Da75U3D_U3Dcce8U3D_mBB96ADA696F117DF4E517C5419D7CA4FBF30B9BC_AdjustorThunk (RuntimeObject* __this, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC p0, const RuntimeMethod* method)
{
	U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC*>(__this + _offset);
	U3Da75U3D_U3Dcce8U3D_mBB96ADA696F117DF4E517C5419D7CA4FBF30B9BC(_thisAdjusted, p0, method);
}
// =a75= =a75=::=cce9=(=a75=,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC U3Da75U3D_U3Dcce9U3D_mF8945E2F6618E90117435A6FFB8A65ABBC778EB2 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC p0, double p1, const RuntimeMethod* method) 
{
	{
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_0 = p0;
		double L_1 = L_0.___U3DdBd1U3D_3;
		double L_2 = p1;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_3 = p0;
		double L_4 = L_3.___U3DdBd2U3D_4;
		double L_5 = p1;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_6 = p0;
		double L_7 = L_6.___U3DdBd3U3D_5;
		double L_8 = p1;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_9 = p0;
		double L_10 = L_9.___U3DdBd4U3D_6;
		double L_11 = p1;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_12 = p0;
		double L_13 = L_12.___U3DdBd5U3D_7;
		double L_14 = p1;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_15 = p0;
		double L_16 = L_15.___U3DdBd6U3D_8;
		double L_17 = p1;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_18 = p0;
		double L_19 = L_18.___U3DdBd7U3D_9;
		double L_20 = p1;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_21 = p0;
		double L_22 = L_21.___U3DdBd8U3D_10;
		double L_23 = p1;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_24 = p0;
		double L_25 = L_24.___U3DdBd9U3D_11;
		double L_26 = p1;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_27 = p0;
		double L_28 = L_27.___U3DdBEAU3D_12;
		double L_29 = p1;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_30 = p0;
		double L_31 = L_30.___U3DdBEaU3D_13;
		double L_32 = p1;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_33 = p0;
		double L_34 = L_33.___U3DdBEBU3D_14;
		double L_35 = p1;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_36 = p0;
		double L_37 = L_36.___U3DdBEbU3D_15;
		double L_38 = p1;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_39 = p0;
		double L_40 = L_39.___U3DdBECU3D_16;
		double L_41 = p1;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_42 = p0;
		double L_43 = L_42.___U3DdBEcU3D_17;
		double L_44 = p1;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_45 = p0;
		double L_46 = L_45.___U3DdBEDU3D_18;
		double L_47 = p1;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_48;
		memset((&L_48), 0, sizeof(L_48));
		U3Da75U3D__ctor_mE3BBD648173DE5B1AFF6305475F1B580A19D411C((&L_48), ((double)il2cpp_codegen_multiply(L_1, L_2)), ((double)il2cpp_codegen_multiply(L_4, L_5)), ((double)il2cpp_codegen_multiply(L_7, L_8)), ((double)il2cpp_codegen_multiply(L_10, L_11)), ((double)il2cpp_codegen_multiply(L_13, L_14)), ((double)il2cpp_codegen_multiply(L_16, L_17)), ((double)il2cpp_codegen_multiply(L_19, L_20)), ((double)il2cpp_codegen_multiply(L_22, L_23)), ((double)il2cpp_codegen_multiply(L_25, L_26)), ((double)il2cpp_codegen_multiply(L_28, L_29)), ((double)il2cpp_codegen_multiply(L_31, L_32)), ((double)il2cpp_codegen_multiply(L_34, L_35)), ((double)il2cpp_codegen_multiply(L_37, L_38)), ((double)il2cpp_codegen_multiply(L_40, L_41)), ((double)il2cpp_codegen_multiply(L_43, L_44)), ((double)il2cpp_codegen_multiply(L_46, L_47)), /*hidden argument*/NULL);
		return L_48;
	}
}
// =a82= =a75=::=ccFA=(=a75=,=a82=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 U3Da75U3D_U3DccFAU3D_m2D711E85C1D1783E7CD7BE7454E86A472EC15C1B (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC p0, U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 p1, const RuntimeMethod* method) 
{
	{
		U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 L_0 = p1;
		double L_1 = L_0.___U3DdBF3U3D_0;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_2 = p0;
		double L_3 = L_2.___U3DdBd1U3D_3;
		U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 L_4 = p1;
		double L_5 = L_4.___U3DdBF4U3D_1;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_6 = p0;
		double L_7 = L_6.___U3DdBd2U3D_4;
		U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 L_8 = p1;
		double L_9 = L_8.___U3DdBF5U3D_2;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_10 = p0;
		double L_11 = L_10.___U3DdBd3U3D_5;
		U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 L_12 = p1;
		double L_13 = L_12.___U3DdBF6U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_14 = p0;
		double L_15 = L_14.___U3DdBd4U3D_6;
		U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 L_16 = p1;
		double L_17 = L_16.___U3DdBF3U3D_0;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_18 = p0;
		double L_19 = L_18.___U3DdBd5U3D_7;
		U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 L_20 = p1;
		double L_21 = L_20.___U3DdBF4U3D_1;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_22 = p0;
		double L_23 = L_22.___U3DdBd6U3D_8;
		U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 L_24 = p1;
		double L_25 = L_24.___U3DdBF5U3D_2;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_26 = p0;
		double L_27 = L_26.___U3DdBd7U3D_9;
		U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 L_28 = p1;
		double L_29 = L_28.___U3DdBF6U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_30 = p0;
		double L_31 = L_30.___U3DdBd8U3D_10;
		U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 L_32 = p1;
		double L_33 = L_32.___U3DdBF3U3D_0;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_34 = p0;
		double L_35 = L_34.___U3DdBd9U3D_11;
		U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 L_36 = p1;
		double L_37 = L_36.___U3DdBF4U3D_1;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_38 = p0;
		double L_39 = L_38.___U3DdBEAU3D_12;
		U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 L_40 = p1;
		double L_41 = L_40.___U3DdBF5U3D_2;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_42 = p0;
		double L_43 = L_42.___U3DdBEaU3D_13;
		U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 L_44 = p1;
		double L_45 = L_44.___U3DdBF6U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_46 = p0;
		double L_47 = L_46.___U3DdBEBU3D_14;
		U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 L_48 = p1;
		double L_49 = L_48.___U3DdBF3U3D_0;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_50 = p0;
		double L_51 = L_50.___U3DdBEbU3D_15;
		U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 L_52 = p1;
		double L_53 = L_52.___U3DdBF4U3D_1;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_54 = p0;
		double L_55 = L_54.___U3DdBECU3D_16;
		U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 L_56 = p1;
		double L_57 = L_56.___U3DdBF5U3D_2;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_58 = p0;
		double L_59 = L_58.___U3DdBEcU3D_17;
		U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 L_60 = p1;
		double L_61 = L_60.___U3DdBF6U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_62 = p0;
		double L_63 = L_62.___U3DdBEDU3D_18;
		U3Da82U3D_t097C183EA6DF8A223E99019EF7DA1E7B20E08404 L_64;
		memset((&L_64), 0, sizeof(L_64));
		U3Da82U3D__ctor_m1603D94D85CF688ED8E059FA5906A174910E8E49((&L_64), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_1, L_3)), ((double)il2cpp_codegen_multiply(L_5, L_7)))), ((double)il2cpp_codegen_multiply(L_9, L_11)))), ((double)il2cpp_codegen_multiply(L_13, L_15)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_17, L_19)), ((double)il2cpp_codegen_multiply(L_21, L_23)))), ((double)il2cpp_codegen_multiply(L_25, L_27)))), ((double)il2cpp_codegen_multiply(L_29, L_31)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_33, L_35)), ((double)il2cpp_codegen_multiply(L_37, L_39)))), ((double)il2cpp_codegen_multiply(L_41, L_43)))), ((double)il2cpp_codegen_multiply(L_45, L_47)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_49, L_51)), ((double)il2cpp_codegen_multiply(L_53, L_55)))), ((double)il2cpp_codegen_multiply(L_57, L_59)))), ((double)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		return L_64;
	}
}
// System.Boolean =a75=::Equals(=a75=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da75U3D_Equals_m4CD10B87D3CBD2EE4A83B17734331CF3DB736F15 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC ___other0, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = U3Da75U3D_U3DccFaU3D_m41135BFAE5A9041BB18648D3272FB547CE88C693(__this, (&___other0), NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool U3Da75U3D_Equals_m4CD10B87D3CBD2EE4A83B17734331CF3DB736F15_AdjustorThunk (RuntimeObject* __this, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC ___other0, const RuntimeMethod* method)
{
	U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC*>(__this + _offset);
	bool _returnValue;
	_returnValue = U3Da75U3D_Equals_m4CD10B87D3CBD2EE4A83B17734331CF3DB736F15(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean =a75=::=ccFa=(=a75=&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da75U3D_U3DccFaU3D_m41135BFAE5A9041BB18648D3272FB547CE88C693 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* p0, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3DdBd1U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_1 = p0;
		double L_2 = L_1->___U3DdBd1U3D_3;
		if ((!(((double)L_0) == ((double)L_2))))
		{
			goto IL_00f3;
		}
	}
	{
		double L_3 = __this->___U3DdBd2U3D_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_4 = p0;
		double L_5 = L_4->___U3DdBd2U3D_4;
		if ((!(((double)L_3) == ((double)L_5))))
		{
			goto IL_00f3;
		}
	}
	{
		double L_6 = __this->___U3DdBd3U3D_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_7 = p0;
		double L_8 = L_7->___U3DdBd3U3D_5;
		if ((!(((double)L_6) == ((double)L_8))))
		{
			goto IL_00f3;
		}
	}
	{
		double L_9 = __this->___U3DdBd4U3D_6;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_10 = p0;
		double L_11 = L_10->___U3DdBd4U3D_6;
		if ((!(((double)L_9) == ((double)L_11))))
		{
			goto IL_00f3;
		}
	}
	{
		double L_12 = __this->___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_13 = p0;
		double L_14 = L_13->___U3DdBd5U3D_7;
		if ((!(((double)L_12) == ((double)L_14))))
		{
			goto IL_00f3;
		}
	}
	{
		double L_15 = __this->___U3DdBd6U3D_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_16 = p0;
		double L_17 = L_16->___U3DdBd6U3D_8;
		if ((!(((double)L_15) == ((double)L_17))))
		{
			goto IL_00f3;
		}
	}
	{
		double L_18 = __this->___U3DdBd7U3D_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_19 = p0;
		double L_20 = L_19->___U3DdBd7U3D_9;
		if ((!(((double)L_18) == ((double)L_20))))
		{
			goto IL_00f3;
		}
	}
	{
		double L_21 = __this->___U3DdBd8U3D_10;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_22 = p0;
		double L_23 = L_22->___U3DdBd8U3D_10;
		if ((!(((double)L_21) == ((double)L_23))))
		{
			goto IL_00f3;
		}
	}
	{
		double L_24 = __this->___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_25 = p0;
		double L_26 = L_25->___U3DdBd9U3D_11;
		if ((!(((double)L_24) == ((double)L_26))))
		{
			goto IL_00f3;
		}
	}
	{
		double L_27 = __this->___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_28 = p0;
		double L_29 = L_28->___U3DdBEAU3D_12;
		if ((!(((double)L_27) == ((double)L_29))))
		{
			goto IL_00f3;
		}
	}
	{
		double L_30 = __this->___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_31 = p0;
		double L_32 = L_31->___U3DdBEaU3D_13;
		if ((!(((double)L_30) == ((double)L_32))))
		{
			goto IL_00f3;
		}
	}
	{
		double L_33 = __this->___U3DdBEBU3D_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_34 = p0;
		double L_35 = L_34->___U3DdBEBU3D_14;
		if ((!(((double)L_33) == ((double)L_35))))
		{
			goto IL_00f3;
		}
	}
	{
		double L_36 = __this->___U3DdBEbU3D_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_37 = p0;
		double L_38 = L_37->___U3DdBEbU3D_15;
		if ((!(((double)L_36) == ((double)L_38))))
		{
			goto IL_00f3;
		}
	}
	{
		double L_39 = __this->___U3DdBECU3D_16;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_40 = p0;
		double L_41 = L_40->___U3DdBECU3D_16;
		if ((!(((double)L_39) == ((double)L_41))))
		{
			goto IL_00f3;
		}
	}
	{
		double L_42 = __this->___U3DdBEcU3D_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_43 = p0;
		double L_44 = L_43->___U3DdBEcU3D_17;
		if ((!(((double)L_42) == ((double)L_44))))
		{
			goto IL_00f3;
		}
	}
	{
		double L_45 = __this->___U3DdBEDU3D_18;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_46 = p0;
		double L_47 = L_46->___U3DdBEDU3D_18;
		return (bool)((((double)L_45) == ((double)L_47))? 1 : 0);
	}

IL_00f3:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool U3Da75U3D_U3DccFaU3D_m41135BFAE5A9041BB18648D3272FB547CE88C693_AdjustorThunk (RuntimeObject* __this, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* p0, const RuntimeMethod* method)
{
	U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC*>(__this + _offset);
	bool _returnValue;
	_returnValue = U3Da75U3D_U3DccFaU3D_m41135BFAE5A9041BB18648D3272FB547CE88C693(_thisAdjusted, p0, method);
	return _returnValue;
}
// System.Boolean =a75=::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da75U3D_Equals_m47FB1D8BFB40C3DAEEAAA3178276727D5EA0089B (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		V_0 = ((*(U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC*)((U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC*)(U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC*)UnBox(L_1, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC_il2cpp_TypeInfo_var))));
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_2 = V_0;
		bool L_3;
		L_3 = U3Da75U3D_Equals_m4CD10B87D3CBD2EE4A83B17734331CF3DB736F15(__this, L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool U3Da75U3D_Equals_m47FB1D8BFB40C3DAEEAAA3178276727D5EA0089B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC*>(__this + _offset);
	bool _returnValue;
	_returnValue = U3Da75U3D_Equals_m47FB1D8BFB40C3DAEEAAA3178276727D5EA0089B(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean =a75=::=ccFB=(=a75=&,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da75U3D_U3DccFBU3D_mB3EB9C16013AB372230C600413B1BC7E2DA306F7 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* p0, double p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = __this->___U3DdBd1U3D_3;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_1 = p0;
		double L_2 = L_1->___U3DdBd1U3D_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = fabs(((double)il2cpp_codegen_subtract(L_0, L_2)));
		double L_4 = p1;
		if ((!(((double)L_3) < ((double)L_4))))
		{
			goto IL_016c;
		}
	}
	{
		double L_5 = __this->___U3DdBd2U3D_4;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_6 = p0;
		double L_7 = L_6->___U3DdBd2U3D_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_8;
		L_8 = fabs(((double)il2cpp_codegen_subtract(L_5, L_7)));
		double L_9 = p1;
		if ((!(((double)L_8) < ((double)L_9))))
		{
			goto IL_016c;
		}
	}
	{
		double L_10 = __this->___U3DdBd3U3D_5;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_11 = p0;
		double L_12 = L_11->___U3DdBd3U3D_5;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_13;
		L_13 = fabs(((double)il2cpp_codegen_subtract(L_10, L_12)));
		double L_14 = p1;
		if ((!(((double)L_13) < ((double)L_14))))
		{
			goto IL_016c;
		}
	}
	{
		double L_15 = __this->___U3DdBd4U3D_6;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_16 = p0;
		double L_17 = L_16->___U3DdBd4U3D_6;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = fabs(((double)il2cpp_codegen_subtract(L_15, L_17)));
		double L_19 = p1;
		if ((!(((double)L_18) < ((double)L_19))))
		{
			goto IL_016c;
		}
	}
	{
		double L_20 = __this->___U3DdBd5U3D_7;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_21 = p0;
		double L_22 = L_21->___U3DdBd5U3D_7;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_23;
		L_23 = fabs(((double)il2cpp_codegen_subtract(L_20, L_22)));
		double L_24 = p1;
		if ((!(((double)L_23) < ((double)L_24))))
		{
			goto IL_016c;
		}
	}
	{
		double L_25 = __this->___U3DdBd6U3D_8;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_26 = p0;
		double L_27 = L_26->___U3DdBd6U3D_8;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_28;
		L_28 = fabs(((double)il2cpp_codegen_subtract(L_25, L_27)));
		double L_29 = p1;
		if ((!(((double)L_28) < ((double)L_29))))
		{
			goto IL_016c;
		}
	}
	{
		double L_30 = __this->___U3DdBd7U3D_9;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_31 = p0;
		double L_32 = L_31->___U3DdBd7U3D_9;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_33;
		L_33 = fabs(((double)il2cpp_codegen_subtract(L_30, L_32)));
		double L_34 = p1;
		if ((!(((double)L_33) < ((double)L_34))))
		{
			goto IL_016c;
		}
	}
	{
		double L_35 = __this->___U3DdBd8U3D_10;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_36 = p0;
		double L_37 = L_36->___U3DdBd8U3D_10;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_38;
		L_38 = fabs(((double)il2cpp_codegen_subtract(L_35, L_37)));
		double L_39 = p1;
		if ((!(((double)L_38) < ((double)L_39))))
		{
			goto IL_016c;
		}
	}
	{
		double L_40 = __this->___U3DdBd9U3D_11;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_41 = p0;
		double L_42 = L_41->___U3DdBd9U3D_11;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_43;
		L_43 = fabs(((double)il2cpp_codegen_subtract(L_40, L_42)));
		double L_44 = p1;
		if ((!(((double)L_43) < ((double)L_44))))
		{
			goto IL_016c;
		}
	}
	{
		double L_45 = __this->___U3DdBEAU3D_12;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_46 = p0;
		double L_47 = L_46->___U3DdBEAU3D_12;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_48;
		L_48 = fabs(((double)il2cpp_codegen_subtract(L_45, L_47)));
		double L_49 = p1;
		if ((!(((double)L_48) < ((double)L_49))))
		{
			goto IL_016c;
		}
	}
	{
		double L_50 = __this->___U3DdBEaU3D_13;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_51 = p0;
		double L_52 = L_51->___U3DdBEaU3D_13;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_53;
		L_53 = fabs(((double)il2cpp_codegen_subtract(L_50, L_52)));
		double L_54 = p1;
		if ((!(((double)L_53) < ((double)L_54))))
		{
			goto IL_016c;
		}
	}
	{
		double L_55 = __this->___U3DdBEBU3D_14;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_56 = p0;
		double L_57 = L_56->___U3DdBEBU3D_14;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_58;
		L_58 = fabs(((double)il2cpp_codegen_subtract(L_55, L_57)));
		double L_59 = p1;
		if ((!(((double)L_58) < ((double)L_59))))
		{
			goto IL_016c;
		}
	}
	{
		double L_60 = __this->___U3DdBEbU3D_15;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_61 = p0;
		double L_62 = L_61->___U3DdBEbU3D_15;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_63;
		L_63 = fabs(((double)il2cpp_codegen_subtract(L_60, L_62)));
		double L_64 = p1;
		if ((!(((double)L_63) < ((double)L_64))))
		{
			goto IL_016c;
		}
	}
	{
		double L_65 = __this->___U3DdBECU3D_16;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_66 = p0;
		double L_67 = L_66->___U3DdBECU3D_16;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_68;
		L_68 = fabs(((double)il2cpp_codegen_subtract(L_65, L_67)));
		double L_69 = p1;
		if ((!(((double)L_68) < ((double)L_69))))
		{
			goto IL_016c;
		}
	}
	{
		double L_70 = __this->___U3DdBEcU3D_17;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_71 = p0;
		double L_72 = L_71->___U3DdBEcU3D_17;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_73;
		L_73 = fabs(((double)il2cpp_codegen_subtract(L_70, L_72)));
		double L_74 = p1;
		if ((!(((double)L_73) < ((double)L_74))))
		{
			goto IL_016c;
		}
	}
	{
		double L_75 = __this->___U3DdBEDU3D_18;
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* L_76 = p0;
		double L_77 = L_76->___U3DdBEDU3D_18;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_78;
		L_78 = fabs(((double)il2cpp_codegen_subtract(L_75, L_77)));
		double L_79 = p1;
		return (bool)((((double)L_78) < ((double)L_79))? 1 : 0);
	}

IL_016c:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool U3Da75U3D_U3DccFBU3D_mB3EB9C16013AB372230C600413B1BC7E2DA306F7_AdjustorThunk (RuntimeObject* __this, U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* p0, double p1, const RuntimeMethod* method)
{
	U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC*>(__this + _offset);
	bool _returnValue;
	_returnValue = U3Da75U3D_U3DccFBU3D_mB3EB9C16013AB372230C600413B1BC7E2DA306F7(_thisAdjusted, p0, p1, method);
	return _returnValue;
}
// System.Int32 =a75=::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3Da75U3D_GetHashCode_m51A2A9B77539CD6B4E5000A10746603B2DB1B3F9 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, const RuntimeMethod* method) 
{
	{
		double* L_0 = (&__this->___U3DdBd1U3D_3);
		int32_t L_1;
		L_1 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_0, NULL);
		double* L_2 = (&__this->___U3DdBd2U3D_4);
		int32_t L_3;
		L_3 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_2, NULL);
		double* L_4 = (&__this->___U3DdBd3U3D_5);
		int32_t L_5;
		L_5 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_4, NULL);
		double* L_6 = (&__this->___U3DdBd4U3D_6);
		int32_t L_7;
		L_7 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_6, NULL);
		double* L_8 = (&__this->___U3DdBd5U3D_7);
		int32_t L_9;
		L_9 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_8, NULL);
		double* L_10 = (&__this->___U3DdBd6U3D_8);
		int32_t L_11;
		L_11 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_10, NULL);
		double* L_12 = (&__this->___U3DdBd7U3D_9);
		int32_t L_13;
		L_13 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_12, NULL);
		double* L_14 = (&__this->___U3DdBd8U3D_10);
		int32_t L_15;
		L_15 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_14, NULL);
		double* L_16 = (&__this->___U3DdBd9U3D_11);
		int32_t L_17;
		L_17 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_16, NULL);
		double* L_18 = (&__this->___U3DdBEAU3D_12);
		int32_t L_19;
		L_19 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_18, NULL);
		double* L_20 = (&__this->___U3DdBEaU3D_13);
		int32_t L_21;
		L_21 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_20, NULL);
		double* L_22 = (&__this->___U3DdBEBU3D_14);
		int32_t L_23;
		L_23 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_22, NULL);
		double* L_24 = (&__this->___U3DdBEbU3D_15);
		int32_t L_25;
		L_25 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_24, NULL);
		double* L_26 = (&__this->___U3DdBECU3D_16);
		int32_t L_27;
		L_27 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_26, NULL);
		double* L_28 = (&__this->___U3DdBEcU3D_17);
		int32_t L_29;
		L_29 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_28, NULL);
		double* L_30 = (&__this->___U3DdBEDU3D_18);
		int32_t L_31;
		L_31 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_30, NULL);
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_1^L_3))^L_5))^L_7))^L_9))^L_11))^L_13))^L_15))^L_17))^L_19))^L_21))^L_23))^L_25))^L_27))^L_29))^L_31));
	}
}
IL2CPP_EXTERN_C  int32_t U3Da75U3D_GetHashCode_m51A2A9B77539CD6B4E5000A10746603B2DB1B3F9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = U3Da75U3D_GetHashCode_m51A2A9B77539CD6B4E5000A10746603B2DB1B3F9(_thisAdjusted, method);
	return _returnValue;
}
// System.String =a75=::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3Da75U3D_ToString_m33838A28B8E582D8B2B09777425897B6BCFCC3C8 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7955881E2F68D1CD666C7B1CCE680349E2BBE475);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		double L_2 = __this->___U3DdBd1U3D_3;
		double L_3 = L_2;
		RuntimeObject* L_4 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		double L_6 = __this->___U3DdBd2U3D_4;
		double L_7 = L_6;
		RuntimeObject* L_8 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		double L_10 = __this->___U3DdBd3U3D_5;
		double L_11 = L_10;
		RuntimeObject* L_12 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		double L_14 = __this->___U3DdBd4U3D_6;
		double L_15 = L_14;
		RuntimeObject* L_16 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		double L_18 = __this->___U3DdBd5U3D_7;
		double L_19 = L_18;
		RuntimeObject* L_20 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_17;
		double L_22 = __this->___U3DdBd6U3D_8;
		double L_23 = L_22;
		RuntimeObject* L_24 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_24);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_21;
		double L_26 = __this->___U3DdBd7U3D_9;
		double L_27 = L_26;
		RuntimeObject* L_28 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_28);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = L_25;
		double L_30 = __this->___U3DdBd8U3D_10;
		double L_31 = L_30;
		RuntimeObject* L_32 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_32);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_32);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = L_29;
		double L_34 = __this->___U3DdBd9U3D_11;
		double L_35 = L_34;
		RuntimeObject* L_36 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_35);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_36);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_36);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = L_33;
		double L_38 = __this->___U3DdBEAU3D_12;
		double L_39 = L_38;
		RuntimeObject* L_40 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_39);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_40);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject*)L_40);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_41 = L_37;
		double L_42 = __this->___U3DdBEaU3D_13;
		double L_43 = L_42;
		RuntimeObject* L_44 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_43);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_44);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject*)L_44);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_45 = L_41;
		double L_46 = __this->___U3DdBEBU3D_14;
		double L_47 = L_46;
		RuntimeObject* L_48 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_47);
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_48);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (RuntimeObject*)L_48);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_49 = L_45;
		double L_50 = __this->___U3DdBEbU3D_15;
		double L_51 = L_50;
		RuntimeObject* L_52 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_51);
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_52);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (RuntimeObject*)L_52);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_53 = L_49;
		double L_54 = __this->___U3DdBECU3D_16;
		double L_55 = L_54;
		RuntimeObject* L_56 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_55);
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_56);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (RuntimeObject*)L_56);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_57 = L_53;
		double L_58 = __this->___U3DdBEcU3D_17;
		double L_59 = L_58;
		RuntimeObject* L_60 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_59);
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, L_60);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (RuntimeObject*)L_60);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_61 = L_57;
		double L_62 = __this->___U3DdBEDU3D_18;
		double L_63 = L_62;
		RuntimeObject* L_64 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_63);
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, L_64);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (RuntimeObject*)L_64);
		String_t* L_65;
		L_65 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteral7955881E2F68D1CD666C7B1CCE680349E2BBE475, L_61, NULL);
		return L_65;
	}
}
IL2CPP_EXTERN_C  String_t* U3Da75U3D_ToString_m33838A28B8E582D8B2B09777425897B6BCFCC3C8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = U3Da75U3D_ToString_m33838A28B8E582D8B2B09777425897B6BCFCC3C8(_thisAdjusted, method);
	return _returnValue;
}
// System.Void =a75=::=ccFb=(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da75U3D_U3DccFbU3D_m54D499F2E698525501B51E1F103176B38C973729 (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* p0, const RuntimeMethod* method) 
{
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = p0;
		NullCheck(L_0);
		double L_1;
		L_1 = VirtualFuncInvoker0< double >::Invoke(20 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_0);
		__this->___U3DdBd1U3D_3 = L_1;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_2 = p0;
		NullCheck(L_2);
		double L_3;
		L_3 = VirtualFuncInvoker0< double >::Invoke(20 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_2);
		__this->___U3DdBd2U3D_4 = L_3;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_4 = p0;
		NullCheck(L_4);
		double L_5;
		L_5 = VirtualFuncInvoker0< double >::Invoke(20 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_4);
		__this->___U3DdBd3U3D_5 = L_5;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_6 = p0;
		NullCheck(L_6);
		double L_7;
		L_7 = VirtualFuncInvoker0< double >::Invoke(20 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_6);
		__this->___U3DdBd4U3D_6 = L_7;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_8 = p0;
		NullCheck(L_8);
		double L_9;
		L_9 = VirtualFuncInvoker0< double >::Invoke(20 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_8);
		__this->___U3DdBd5U3D_7 = L_9;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_10 = p0;
		NullCheck(L_10);
		double L_11;
		L_11 = VirtualFuncInvoker0< double >::Invoke(20 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_10);
		__this->___U3DdBd6U3D_8 = L_11;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_12 = p0;
		NullCheck(L_12);
		double L_13;
		L_13 = VirtualFuncInvoker0< double >::Invoke(20 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_12);
		__this->___U3DdBd7U3D_9 = L_13;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_14 = p0;
		NullCheck(L_14);
		double L_15;
		L_15 = VirtualFuncInvoker0< double >::Invoke(20 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_14);
		__this->___U3DdBd8U3D_10 = L_15;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_16 = p0;
		NullCheck(L_16);
		double L_17;
		L_17 = VirtualFuncInvoker0< double >::Invoke(20 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_16);
		__this->___U3DdBd9U3D_11 = L_17;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_18 = p0;
		NullCheck(L_18);
		double L_19;
		L_19 = VirtualFuncInvoker0< double >::Invoke(20 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_18);
		__this->___U3DdBEAU3D_12 = L_19;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_20 = p0;
		NullCheck(L_20);
		double L_21;
		L_21 = VirtualFuncInvoker0< double >::Invoke(20 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_20);
		__this->___U3DdBEaU3D_13 = L_21;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_22 = p0;
		NullCheck(L_22);
		double L_23;
		L_23 = VirtualFuncInvoker0< double >::Invoke(20 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_22);
		__this->___U3DdBEBU3D_14 = L_23;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_24 = p0;
		NullCheck(L_24);
		double L_25;
		L_25 = VirtualFuncInvoker0< double >::Invoke(20 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_24);
		__this->___U3DdBEbU3D_15 = L_25;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_26 = p0;
		NullCheck(L_26);
		double L_27;
		L_27 = VirtualFuncInvoker0< double >::Invoke(20 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_26);
		__this->___U3DdBECU3D_16 = L_27;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_28 = p0;
		NullCheck(L_28);
		double L_29;
		L_29 = VirtualFuncInvoker0< double >::Invoke(20 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_28);
		__this->___U3DdBEcU3D_17 = L_29;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_30 = p0;
		NullCheck(L_30);
		double L_31;
		L_31 = VirtualFuncInvoker0< double >::Invoke(20 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_30);
		__this->___U3DdBEDU3D_18 = L_31;
		return;
	}
}
IL2CPP_EXTERN_C  void U3Da75U3D_U3DccFbU3D_m54D499F2E698525501B51E1F103176B38C973729_AdjustorThunk (RuntimeObject* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* p0, const RuntimeMethod* method)
{
	U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC*>(__this + _offset);
	U3Da75U3D_U3DccFbU3D_m54D499F2E698525501B51E1F103176B38C973729(_thisAdjusted, p0, method);
}
// System.Void =a75=::=ccFC=(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da75U3D_U3DccFCU3D_mD582D12462A3C0502889D74EF188970460EF6C8C (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* p0, const RuntimeMethod* method) 
{
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = p0;
		double L_1 = __this->___U3DdBd1U3D_3;
		NullCheck(L_0);
		VirtualActionInvoker1< double >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Double) */, L_0, L_1);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_2 = p0;
		double L_3 = __this->___U3DdBd2U3D_4;
		NullCheck(L_2);
		VirtualActionInvoker1< double >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Double) */, L_2, L_3);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_4 = p0;
		double L_5 = __this->___U3DdBd3U3D_5;
		NullCheck(L_4);
		VirtualActionInvoker1< double >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Double) */, L_4, L_5);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_6 = p0;
		double L_7 = __this->___U3DdBd4U3D_6;
		NullCheck(L_6);
		VirtualActionInvoker1< double >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Double) */, L_6, L_7);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_8 = p0;
		double L_9 = __this->___U3DdBd5U3D_7;
		NullCheck(L_8);
		VirtualActionInvoker1< double >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Double) */, L_8, L_9);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_10 = p0;
		double L_11 = __this->___U3DdBd6U3D_8;
		NullCheck(L_10);
		VirtualActionInvoker1< double >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Double) */, L_10, L_11);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_12 = p0;
		double L_13 = __this->___U3DdBd7U3D_9;
		NullCheck(L_12);
		VirtualActionInvoker1< double >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Double) */, L_12, L_13);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_14 = p0;
		double L_15 = __this->___U3DdBd8U3D_10;
		NullCheck(L_14);
		VirtualActionInvoker1< double >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Double) */, L_14, L_15);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_16 = p0;
		double L_17 = __this->___U3DdBd9U3D_11;
		NullCheck(L_16);
		VirtualActionInvoker1< double >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Double) */, L_16, L_17);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_18 = p0;
		double L_19 = __this->___U3DdBEAU3D_12;
		NullCheck(L_18);
		VirtualActionInvoker1< double >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Double) */, L_18, L_19);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_20 = p0;
		double L_21 = __this->___U3DdBEaU3D_13;
		NullCheck(L_20);
		VirtualActionInvoker1< double >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Double) */, L_20, L_21);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_22 = p0;
		double L_23 = __this->___U3DdBEBU3D_14;
		NullCheck(L_22);
		VirtualActionInvoker1< double >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Double) */, L_22, L_23);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_24 = p0;
		double L_25 = __this->___U3DdBEbU3D_15;
		NullCheck(L_24);
		VirtualActionInvoker1< double >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Double) */, L_24, L_25);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_26 = p0;
		double L_27 = __this->___U3DdBECU3D_16;
		NullCheck(L_26);
		VirtualActionInvoker1< double >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Double) */, L_26, L_27);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_28 = p0;
		double L_29 = __this->___U3DdBEcU3D_17;
		NullCheck(L_28);
		VirtualActionInvoker1< double >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Double) */, L_28, L_29);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_30 = p0;
		double L_31 = __this->___U3DdBEDU3D_18;
		NullCheck(L_30);
		VirtualActionInvoker1< double >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Double) */, L_30, L_31);
		return;
	}
}
IL2CPP_EXTERN_C  void U3Da75U3D_U3DccFCU3D_mD582D12462A3C0502889D74EF188970460EF6C8C_AdjustorThunk (RuntimeObject* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* p0, const RuntimeMethod* method)
{
	U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC*>(__this + _offset);
	U3Da75U3D_U3DccFCU3D_mD582D12462A3C0502889D74EF188970460EF6C8C(_thisAdjusted, p0, method);
}
// =a75= =a75=::=ccFc=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC U3Da75U3D_U3DccFcU3D_mFD8232FFE7F39A4943F5AC4583FCE72416D65B5E (const RuntimeMethod* method) 
{
	{
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_0;
		memset((&L_0), 0, sizeof(L_0));
		U3Da75U3D__ctor_mE3BBD648173DE5B1AFF6305475F1B580A19D411C((&L_0), (1.0), (0.0), (0.0), (0.0), (0.0), (1.0), (0.0), (0.0), (0.0), (0.0), (1.0), (0.0), (0.0), (0.0), (0.0), (1.0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void =a75=::=ccFD=(System.Double,System.Double&,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da75U3D_U3DccFDU3D_m6C92C0E7C17D68CB37F2BD393D252692BD331239 (double p0, double* p1, double* p2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double* L_0 = p1;
		double L_1 = p0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sin(L_1);
		*((double*)L_0) = (double)L_2;
		double* L_3 = p2;
		double L_4 = p0;
		double L_5;
		L_5 = cos(L_4);
		*((double*)L_3) = (double)L_5;
		return;
	}
}
// System.Void =a75=::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da75U3D__cctor_m03C3E880CB8108DA0981432863BDD93C14A9D4D6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC L_0;
		L_0 = U3Da75U3D_U3DccFcU3D_mFD8232FFE7F39A4943F5AC4583FCE72416D65B5E(NULL);
		((U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC_StaticFields*)il2cpp_codegen_static_fields_for(U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC_il2cpp_TypeInfo_var))->___U3DdBdfU3D_1 = L_0;
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
// =a72= =a76=::=ccFd=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* U3Da76U3D_U3DccFdU3D_mC6B526990B7B2660755C43DA3A6ADF98EAA50DEC (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, const RuntimeMethod* method) 
{
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_0 = __this->___U3DdE4DU3D_0;
		return L_0;
	}
}
// System.Void =a76=::=ccFE=(=a72=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da76U3D_U3DccFEU3D_m33BF480B0A9D1AB1382224ADCB12D1414EB41E68 (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* p0, const RuntimeMethod* method) 
{
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_0 = p0;
		__this->___U3DdE4DU3D_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3DdE4DU3D_0), (void*)L_0);
		return;
	}
}
// System.Double =a76=::=ccFe=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3Da76U3D_U3DccFeU3D_m7D44F9F8F9F3660D339F63195C713C03408B2F04 (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3DdE4dU3D_1;
		return L_0;
	}
}
// System.Void =a76=::=ccFF=(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da76U3D_U3DccFFU3D_m659EA25006D2368DAA7CF110BF5A3ED4B91010D7 (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, double p0, const RuntimeMethod* method) 
{
	{
		double L_0 = p0;
		__this->___U3DdE4dU3D_1 = L_0;
		return;
	}
}
// Microsoft.Geospatial.VectorMath.Vector3D =a76=::=ccFf=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE U3Da76U3D_U3DccFfU3D_m2C12A41DFFE6732A4D77900E186B2DCB6A2B49ED (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = __this->___U3DdE4EU3D_2;
		return L_0;
	}
}
// System.Void =a76=::=ccF0=(Microsoft.Geospatial.VectorMath.Vector3D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da76U3D_U3DccF0U3D_m2FF73BDAEA986314BCAD99B3C16473DC8B69203C (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = p0;
		__this->___U3DdE4EU3D_2 = L_0;
		return;
	}
}
// System.Double =a76=::=ccF1=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3Da76U3D_U3DccF1U3D_mEF56F45CD8236E714FD1508066324B91F2F16B96 (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3DdE4eU3D_3;
		return L_0;
	}
}
// System.Void =a76=::=ccF2=(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da76U3D_U3DccF2U3D_m4C783475EE4C4E62BA9A05FA1571B1BEBE587E31 (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, double p0, const RuntimeMethod* method) 
{
	{
		double L_0 = p0;
		__this->___U3DdE4eU3D_3 = L_0;
		return;
	}
}
// System.Double =a76=::=ccF3=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3Da76U3D_U3DccF3U3D_mB551958A4FE911CFA2D1C1F22730BC37F99AED76 (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3DdE4FU3D_4;
		return L_0;
	}
}
// System.Void =a76=::=ccF4=(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da76U3D_U3DccF4U3D_mE25853505CFA115851D2601D0C039AC0D56EF4E5 (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, double p0, const RuntimeMethod* method) 
{
	{
		double L_0 = p0;
		__this->___U3DdE4FU3D_4 = L_0;
		return;
	}
}
// System.Double =a76=::=ccF5=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3Da76U3D_U3DccF5U3D_m983EE5CF7962D64CBB9E35373FCB9CD9FFA79F35 (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3DdE4fU3D_5;
		return L_0;
	}
}
// System.Void =a76=::=ccF6=(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da76U3D_U3DccF6U3D_m2F9E337AF4D427B7F9AC812738949A6F1B332209 (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, double p0, const RuntimeMethod* method) 
{
	{
		double L_0 = p0;
		__this->___U3DdE4fU3D_5 = L_0;
		return;
	}
}
// Microsoft.Geospatial.VectorMath.Vector3D =a76=::=ccF7=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE U3Da76U3D_U3DccF7U3D_m4EC815601773A5E1BC9D43AE78D0D5F0C62DEFBC (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = __this->___U3DdE40U3D_6;
		return L_0;
	}
}
// System.Void =a76=::=ccF8=(Microsoft.Geospatial.VectorMath.Vector3D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da76U3D_U3DccF8U3D_m303E46F8AC4532E774762C2D86C41FBFA739188C (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = p0;
		__this->___U3DdE40U3D_6 = L_0;
		return;
	}
}
// Microsoft.Geospatial.VectorMath.Vector3D =a76=::=ccF9=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE U3Da76U3D_U3DccF9U3D_m76B016DC690C250C43F6671A878A1C3CEA455E31 (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = __this->___U3DdE41U3D_7;
		return L_0;
	}
}
// System.Void =a76=::=ccfA=(Microsoft.Geospatial.VectorMath.Vector3D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da76U3D_U3DccfAU3D_m8ECE84940939B1EA04F29793FF0663A386945680 (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = p0;
		__this->___U3DdE41U3D_7 = L_0;
		return;
	}
}
// Microsoft.Geospatial.VectorMath.Vector3D =a76=::=ccfa=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE U3Da76U3D_U3DccfaU3D_mD33CC5C58F48924C8D46B2E53217EB0B2A04D10A (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = __this->___U3DdE42U3D_8;
		return L_0;
	}
}
// System.Void =a76=::=ccfB=(Microsoft.Geospatial.VectorMath.Vector3D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da76U3D_U3DccfBU3D_m89E93A27B1B545943A3B70DA64278FA5253F52D4 (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = p0;
		__this->___U3DdE42U3D_8 = L_0;
		return;
	}
}
// System.Void =a76=::.ctor(System.Collections.Generic.IEnumerable`1<Microsoft.Geospatial.VectorMath.Vector3D>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da76U3D__ctor_m46263B1B9FBA5CCC7E9012AF8BE28618303D23C3 (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, RuntimeObject* p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_tA0EB47E8C300430159B995CCC975DB7316EAB8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Aggregate_TisVector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_mA81400B4B8DD936A72F86732D2D46BD84EBA0072_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisVector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_mB71D182BB2840314D295AD11983E38A0B8B6AF29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_t0AE5BDFA047CC54B66B19EA2CCBD69C0E9016591_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t802E040356312E6ED27386BE44B36BA636D7F8CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67A8D331FCE270365A719B8C6B73186EC05452CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m35D6F33B4568D843278648A10A211593657EEA7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_m4BDF92DE31F3874410A263563DD52B99D3847979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m160E98976937AD2CD30F583A347C2A6597552579_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4237D2A684EDF68555C45ED14688C36F4C70ADD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3420105ACC85EC0363642A2775985EECE6EC41F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item2_mBA3C6612F072776B30C52648A160FD7F27ABBBED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB6026A93D77AE492380D2CBD7F3732ECD42238BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Dba13U3D_U3Dcec5U3D_m01E280776C936DFBA48DACA6FA1F1D3EA43C91EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Dba13U3D_U3Dcec6U3D_mB50A4EFBAE59B432402DD96FC9F4A13DA63FFB5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* V_6 = NULL;
	U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* V_7 = NULL;
	List_1_t3420105ACC85EC0363642A2775985EECE6EC41F6* V_8 = NULL;
	RuntimeObject* V_9 = NULL;
	double V_10 = 0.0;
	double V_11 = 0.0;
	double V_12 = 0.0;
	double V_13 = 0.0;
	double V_14 = 0.0;
	double V_15 = 0.0;
	Func_3_t0AE5BDFA047CC54B66B19EA2CCBD69C0E9016591* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* G_B4_2 = NULL;
	Func_3_t0AE5BDFA047CC54B66B19EA2CCBD69C0E9016591* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* G_B3_2 = NULL;
	Comparison_1_tA0EB47E8C300430159B995CCC975DB7316EAB8C4* G_B14_0 = NULL;
	List_1_t3420105ACC85EC0363642A2775985EECE6EC41F6* G_B14_1 = NULL;
	Comparison_1_tA0EB47E8C300430159B995CCC975DB7316EAB8C4* G_B13_0 = NULL;
	List_1_t3420105ACC85EC0363642A2775985EECE6EC41F6* G_B13_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral17A7BA088490CA1D9307C4F7F07BDC92703EDF51)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da76U3D__ctor_m46263B1B9FBA5CCC7E9012AF8BE28618303D23C3_RuntimeMethod_var)));
	}

IL_0014:
	{
		RuntimeObject* L_2 = p0;
		int32_t L_3;
		L_3 = Enumerable_Count_TisVector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_mB71D182BB2840314D295AD11983E38A0B8B6AF29(L_2, Enumerable_Count_TisVector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_mB71D182BB2840314D295AD11983E38A0B8B6AF29_RuntimeMethod_var);
		U3Da76U3D_U3DccFFU3D_m659EA25006D2368DAA7CF110BF5A3ED4B91010D7_inline(__this, ((double)L_3), NULL);
		RuntimeObject* L_4 = p0;
		il2cpp_codegen_runtime_class_init_inline(U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C_il2cpp_TypeInfo_var);
		Func_3_t0AE5BDFA047CC54B66B19EA2CCBD69C0E9016591* L_5 = ((U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C_StaticFields*)il2cpp_codegen_static_fields_for(U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C_il2cpp_TypeInfo_var))->___U3Ddc24U3D_1;
		Func_3_t0AE5BDFA047CC54B66B19EA2CCBD69C0E9016591* L_6 = L_5;
		G_B3_0 = L_6;
		G_B3_1 = L_4;
		G_B3_2 = __this;
		if (L_6)
		{
			G_B4_0 = L_6;
			G_B4_1 = L_4;
			G_B4_2 = __this;
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C_il2cpp_TypeInfo_var);
		U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C* L_7 = ((U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C_StaticFields*)il2cpp_codegen_static_fields_for(U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C_il2cpp_TypeInfo_var))->___U3Ddc23U3D_0;
		Func_3_t0AE5BDFA047CC54B66B19EA2CCBD69C0E9016591* L_8 = (Func_3_t0AE5BDFA047CC54B66B19EA2CCBD69C0E9016591*)il2cpp_codegen_object_new(Func_3_t0AE5BDFA047CC54B66B19EA2CCBD69C0E9016591_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Func_3__ctor_mCBB4723F9053B7A22A93D6665AFE35AF5EE4F9B0(L_8, L_7, (intptr_t)((void*)U3Dba13U3D_U3Dcec5U3D_m01E280776C936DFBA48DACA6FA1F1D3EA43C91EB_RuntimeMethod_var), NULL);
		Func_3_t0AE5BDFA047CC54B66B19EA2CCBD69C0E9016591* L_9 = L_8;
		((U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C_StaticFields*)il2cpp_codegen_static_fields_for(U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C_il2cpp_TypeInfo_var))->___U3Ddc24U3D_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C_StaticFields*)il2cpp_codegen_static_fields_for(U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C_il2cpp_TypeInfo_var))->___U3Ddc24U3D_1), (void*)L_9);
		G_B4_0 = L_9;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_0042:
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_10;
		L_10 = Enumerable_Aggregate_TisVector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_mA81400B4B8DD936A72F86732D2D46BD84EBA0072(G_B4_1, G_B4_0, Enumerable_Aggregate_TisVector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_mA81400B4B8DD936A72F86732D2D46BD84EBA0072_RuntimeMethod_var);
		double L_11;
		L_11 = U3Da76U3D_U3DccFeU3D_m7D44F9F8F9F3660D339F63195C713C03408B2F04_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_il2cpp_TypeInfo_var);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_12;
		L_12 = Vector3D_op_Division_mFAC794A77B924388D2ED32B989199D0A1D072046_inline(L_10, L_11, NULL);
		NullCheck(G_B4_2);
		U3Da76U3D_U3DccF0U3D_m2FF73BDAEA986314BCAD99B3C16473DC8B69203C_inline(G_B4_2, L_12, NULL);
		V_0 = (0.0);
		V_1 = (0.0);
		V_2 = (0.0);
		V_3 = (0.0);
		V_4 = (0.0);
		V_5 = (0.0);
		RuntimeObject* L_13 = p0;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Microsoft.Geospatial.VectorMath.Vector3D>::GetEnumerator() */, IEnumerable_1_t802E040356312E6ED27386BE44B36BA636D7F8CD_il2cpp_TypeInfo_var, L_13);
		V_9 = L_14;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013b:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_15 = V_9;
					if (!L_15)
					{
						goto IL_0146;
					}
				}
				{
					RuntimeObject* L_16 = V_9;
					NullCheck(L_16);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_16);
				}

IL_0146:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_012d_1;
			}

IL_00a2_1:
			{
				RuntimeObject* L_17 = V_9;
				NullCheck(L_17);
				Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_18;
				L_18 = InterfaceFuncInvoker0< Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Microsoft.Geospatial.VectorMath.Vector3D>::get_Current() */, IEnumerator_1_t67A8D331FCE270365A719B8C6B73186EC05452CF_il2cpp_TypeInfo_var, L_17);
				Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_19 = L_18;
				double L_20 = L_19.___X_7;
				Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_21;
				L_21 = U3Da76U3D_U3DccFfU3D_m2C12A41DFFE6732A4D77900E186B2DCB6A2B49ED_inline(__this, NULL);
				double L_22 = L_21.___X_7;
				V_10 = ((double)il2cpp_codegen_subtract(L_20, L_22));
				Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_23 = L_19;
				double L_24 = L_23.___Y_8;
				Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_25;
				L_25 = U3Da76U3D_U3DccFfU3D_m2C12A41DFFE6732A4D77900E186B2DCB6A2B49ED_inline(__this, NULL);
				double L_26 = L_25.___Y_8;
				V_11 = ((double)il2cpp_codegen_subtract(L_24, L_26));
				double L_27 = L_23.___Z_9;
				Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_28;
				L_28 = U3Da76U3D_U3DccFfU3D_m2C12A41DFFE6732A4D77900E186B2DCB6A2B49ED_inline(__this, NULL);
				double L_29 = L_28.___Z_9;
				V_12 = ((double)il2cpp_codegen_subtract(L_27, L_29));
				double L_30 = V_10;
				double L_31 = V_10;
				V_13 = ((double)il2cpp_codegen_multiply(L_30, L_31));
				double L_32 = V_11;
				double L_33 = V_11;
				V_14 = ((double)il2cpp_codegen_multiply(L_32, L_33));
				double L_34 = V_12;
				double L_35 = V_12;
				V_15 = ((double)il2cpp_codegen_multiply(L_34, L_35));
				double L_36 = V_0;
				double L_37 = V_14;
				double L_38 = V_15;
				V_0 = ((double)il2cpp_codegen_add(L_36, ((double)il2cpp_codegen_add(L_37, L_38))));
				double L_39 = V_1;
				double L_40 = V_15;
				double L_41 = V_13;
				V_1 = ((double)il2cpp_codegen_add(L_39, ((double)il2cpp_codegen_add(L_40, L_41))));
				double L_42 = V_2;
				double L_43 = V_13;
				double L_44 = V_14;
				V_2 = ((double)il2cpp_codegen_add(L_42, ((double)il2cpp_codegen_add(L_43, L_44))));
				double L_45 = V_3;
				double L_46 = V_10;
				double L_47 = V_11;
				V_3 = ((double)il2cpp_codegen_add(L_45, ((double)il2cpp_codegen_multiply(L_46, L_47))));
				double L_48 = V_4;
				double L_49 = V_11;
				double L_50 = V_12;
				V_4 = ((double)il2cpp_codegen_add(L_48, ((double)il2cpp_codegen_multiply(L_49, L_50))));
				double L_51 = V_5;
				double L_52 = V_12;
				double L_53 = V_10;
				V_5 = ((double)il2cpp_codegen_add(L_51, ((double)il2cpp_codegen_multiply(L_52, L_53))));
			}

IL_012d_1:
			{
				RuntimeObject* L_54 = V_9;
				NullCheck(L_54);
				bool L_55;
				L_55 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_54);
				if (L_55)
				{
					goto IL_00a2_1;
				}
			}
			{
				goto IL_0147;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0147:
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_56 = (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D*)il2cpp_codegen_object_new(U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D_il2cpp_TypeInfo_var);
		NullCheck(L_56);
		U3Da72U3D__ctor_m4A6DFDF5FDB11319F42795A034A92F123D4BA67C(L_56, 3, 3, NULL);
		U3Da76U3D_U3DccFEU3D_m33BF480B0A9D1AB1382224ADCB12D1414EB41E68_inline(__this, L_56, NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_57;
		L_57 = U3Da76U3D_U3DccFdU3D_mC6B526990B7B2660755C43DA3A6ADF98EAA50DEC_inline(__this, NULL);
		double L_58 = V_0;
		NullCheck(L_57);
		U3Da72U3D_U3Dccc7U3D_m7A0E032BC9A5A87614BD1D760ADB984901308AFC(L_57, 0, 0, L_58, NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_59;
		L_59 = U3Da76U3D_U3DccFdU3D_mC6B526990B7B2660755C43DA3A6ADF98EAA50DEC_inline(__this, NULL);
		double L_60 = V_3;
		NullCheck(L_59);
		U3Da72U3D_U3Dccc7U3D_m7A0E032BC9A5A87614BD1D760ADB984901308AFC(L_59, 0, 1, ((-L_60)), NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_61;
		L_61 = U3Da76U3D_U3DccFdU3D_mC6B526990B7B2660755C43DA3A6ADF98EAA50DEC_inline(__this, NULL);
		double L_62 = V_5;
		NullCheck(L_61);
		U3Da72U3D_U3Dccc7U3D_m7A0E032BC9A5A87614BD1D760ADB984901308AFC(L_61, 0, 2, ((-L_62)), NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_63;
		L_63 = U3Da76U3D_U3DccFdU3D_mC6B526990B7B2660755C43DA3A6ADF98EAA50DEC_inline(__this, NULL);
		double L_64 = V_3;
		NullCheck(L_63);
		U3Da72U3D_U3Dccc7U3D_m7A0E032BC9A5A87614BD1D760ADB984901308AFC(L_63, 1, 0, ((-L_64)), NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_65;
		L_65 = U3Da76U3D_U3DccFdU3D_mC6B526990B7B2660755C43DA3A6ADF98EAA50DEC_inline(__this, NULL);
		double L_66 = V_1;
		NullCheck(L_65);
		U3Da72U3D_U3Dccc7U3D_m7A0E032BC9A5A87614BD1D760ADB984901308AFC(L_65, 1, 1, L_66, NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_67;
		L_67 = U3Da76U3D_U3DccFdU3D_mC6B526990B7B2660755C43DA3A6ADF98EAA50DEC_inline(__this, NULL);
		double L_68 = V_4;
		NullCheck(L_67);
		U3Da72U3D_U3Dccc7U3D_m7A0E032BC9A5A87614BD1D760ADB984901308AFC(L_67, 1, 2, ((-L_68)), NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_69;
		L_69 = U3Da76U3D_U3DccFdU3D_mC6B526990B7B2660755C43DA3A6ADF98EAA50DEC_inline(__this, NULL);
		double L_70 = V_5;
		NullCheck(L_69);
		U3Da72U3D_U3Dccc7U3D_m7A0E032BC9A5A87614BD1D760ADB984901308AFC(L_69, 2, 0, ((-L_70)), NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_71;
		L_71 = U3Da76U3D_U3DccFdU3D_mC6B526990B7B2660755C43DA3A6ADF98EAA50DEC_inline(__this, NULL);
		double L_72 = V_4;
		NullCheck(L_71);
		U3Da72U3D_U3Dccc7U3D_m7A0E032BC9A5A87614BD1D760ADB984901308AFC(L_71, 2, 1, ((-L_72)), NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_73;
		L_73 = U3Da76U3D_U3DccFdU3D_mC6B526990B7B2660755C43DA3A6ADF98EAA50DEC_inline(__this, NULL);
		double L_74 = V_2;
		NullCheck(L_73);
		U3Da72U3D_U3Dccc7U3D_m7A0E032BC9A5A87614BD1D760ADB984901308AFC(L_73, 2, 2, L_74, NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_75;
		L_75 = U3Da76U3D_U3DccFdU3D_mC6B526990B7B2660755C43DA3A6ADF98EAA50DEC_inline(__this, NULL);
		NullCheck(L_75);
		U3Da72U3D_U3DccD0U3D_m7D66356BCD1F826FDAD59C9699D440ABF7B0A307(L_75, (&V_6), (&V_7), NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_76 = V_7;
		NullCheck(L_76);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_77;
		L_77 = U3Da72U3D_U3DccDcU3D_mAADE777F0AD5FF7A8A0E49B14DB8B563F2D726FA(L_76, (bool)0, NULL);
		V_7 = L_77;
		List_1_t3420105ACC85EC0363642A2775985EECE6EC41F6* L_78 = (List_1_t3420105ACC85EC0363642A2775985EECE6EC41F6*)il2cpp_codegen_object_new(List_1_t3420105ACC85EC0363642A2775985EECE6EC41F6_il2cpp_TypeInfo_var);
		NullCheck(L_78);
		List_1__ctor_m160E98976937AD2CD30F583A347C2A6597552579(L_78, List_1__ctor_m160E98976937AD2CD30F583A347C2A6597552579_RuntimeMethod_var);
		List_1_t3420105ACC85EC0363642A2775985EECE6EC41F6* L_79 = L_78;
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_80 = V_6;
		NullCheck(L_80);
		double L_81;
		L_81 = U3Da8FU3D_U3Dcc6DU3D_mFC2E109CCA616464F32983ED84E77ADA0078ABF6(L_80, 0, NULL);
		Tuple_2_tECBABFFE5F6AEC7406FA67604949A78C26B1CEF3* L_82;
		L_82 = Tuple_Create_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB6026A93D77AE492380D2CBD7F3732ECD42238BF(L_81, 0, Tuple_Create_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB6026A93D77AE492380D2CBD7F3732ECD42238BF_RuntimeMethod_var);
		NullCheck(L_79);
		List_1_Add_m35D6F33B4568D843278648A10A211593657EEA7A_inline(L_79, L_82, List_1_Add_m35D6F33B4568D843278648A10A211593657EEA7A_RuntimeMethod_var);
		List_1_t3420105ACC85EC0363642A2775985EECE6EC41F6* L_83 = L_79;
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_84 = V_6;
		NullCheck(L_84);
		double L_85;
		L_85 = U3Da8FU3D_U3Dcc6DU3D_mFC2E109CCA616464F32983ED84E77ADA0078ABF6(L_84, 1, NULL);
		Tuple_2_tECBABFFE5F6AEC7406FA67604949A78C26B1CEF3* L_86;
		L_86 = Tuple_Create_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB6026A93D77AE492380D2CBD7F3732ECD42238BF(L_85, 1, Tuple_Create_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB6026A93D77AE492380D2CBD7F3732ECD42238BF_RuntimeMethod_var);
		NullCheck(L_83);
		List_1_Add_m35D6F33B4568D843278648A10A211593657EEA7A_inline(L_83, L_86, List_1_Add_m35D6F33B4568D843278648A10A211593657EEA7A_RuntimeMethod_var);
		List_1_t3420105ACC85EC0363642A2775985EECE6EC41F6* L_87 = L_83;
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_88 = V_6;
		NullCheck(L_88);
		double L_89;
		L_89 = U3Da8FU3D_U3Dcc6DU3D_mFC2E109CCA616464F32983ED84E77ADA0078ABF6(L_88, 2, NULL);
		Tuple_2_tECBABFFE5F6AEC7406FA67604949A78C26B1CEF3* L_90;
		L_90 = Tuple_Create_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB6026A93D77AE492380D2CBD7F3732ECD42238BF(L_89, 2, Tuple_Create_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB6026A93D77AE492380D2CBD7F3732ECD42238BF_RuntimeMethod_var);
		NullCheck(L_87);
		List_1_Add_m35D6F33B4568D843278648A10A211593657EEA7A_inline(L_87, L_90, List_1_Add_m35D6F33B4568D843278648A10A211593657EEA7A_RuntimeMethod_var);
		V_8 = L_87;
		List_1_t3420105ACC85EC0363642A2775985EECE6EC41F6* L_91 = V_8;
		il2cpp_codegen_runtime_class_init_inline(U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C_il2cpp_TypeInfo_var);
		Comparison_1_tA0EB47E8C300430159B995CCC975DB7316EAB8C4* L_92 = ((U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C_StaticFields*)il2cpp_codegen_static_fields_for(U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C_il2cpp_TypeInfo_var))->___U3Ddc25U3D_2;
		Comparison_1_tA0EB47E8C300430159B995CCC975DB7316EAB8C4* L_93 = L_92;
		G_B13_0 = L_93;
		G_B13_1 = L_91;
		if (L_93)
		{
			G_B14_0 = L_93;
			G_B14_1 = L_91;
			goto IL_0259;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C_il2cpp_TypeInfo_var);
		U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C* L_94 = ((U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C_StaticFields*)il2cpp_codegen_static_fields_for(U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C_il2cpp_TypeInfo_var))->___U3Ddc23U3D_0;
		Comparison_1_tA0EB47E8C300430159B995CCC975DB7316EAB8C4* L_95 = (Comparison_1_tA0EB47E8C300430159B995CCC975DB7316EAB8C4*)il2cpp_codegen_object_new(Comparison_1_tA0EB47E8C300430159B995CCC975DB7316EAB8C4_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		Comparison_1__ctor_mB43FA7DCFB3E51D8F35643EAC0A48C3DDBA1A8D1(L_95, L_94, (intptr_t)((void*)U3Dba13U3D_U3Dcec6U3D_mB50A4EFBAE59B432402DD96FC9F4A13DA63FFB5F_RuntimeMethod_var), NULL);
		Comparison_1_tA0EB47E8C300430159B995CCC975DB7316EAB8C4* L_96 = L_95;
		((U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C_StaticFields*)il2cpp_codegen_static_fields_for(U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C_il2cpp_TypeInfo_var))->___U3Ddc25U3D_2 = L_96;
		Il2CppCodeGenWriteBarrier((void**)(&((U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C_StaticFields*)il2cpp_codegen_static_fields_for(U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C_il2cpp_TypeInfo_var))->___U3Ddc25U3D_2), (void*)L_96);
		G_B14_0 = L_96;
		G_B14_1 = G_B13_1;
	}

IL_0259:
	{
		NullCheck(G_B14_1);
		List_1_Sort_m4BDF92DE31F3874410A263563DD52B99D3847979(G_B14_1, G_B14_0, List_1_Sort_m4BDF92DE31F3874410A263563DD52B99D3847979_RuntimeMethod_var);
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_97 = V_6;
		List_1_t3420105ACC85EC0363642A2775985EECE6EC41F6* L_98 = V_8;
		NullCheck(L_98);
		Tuple_2_tECBABFFE5F6AEC7406FA67604949A78C26B1CEF3* L_99;
		L_99 = List_1_get_Item_m4237D2A684EDF68555C45ED14688C36F4C70ADD7(L_98, 0, List_1_get_Item_m4237D2A684EDF68555C45ED14688C36F4C70ADD7_RuntimeMethod_var);
		NullCheck(L_99);
		int32_t L_100;
		L_100 = Tuple_2_get_Item2_mBA3C6612F072776B30C52648A160FD7F27ABBBED_inline(L_99, Tuple_2_get_Item2_mBA3C6612F072776B30C52648A160FD7F27ABBBED_RuntimeMethod_var);
		NullCheck(L_97);
		double L_101;
		L_101 = U3Da8FU3D_U3Dcc6DU3D_mFC2E109CCA616464F32983ED84E77ADA0078ABF6(L_97, L_100, NULL);
		U3Da76U3D_U3DccF2U3D_m4C783475EE4C4E62BA9A05FA1571B1BEBE587E31_inline(__this, L_101, NULL);
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_102 = V_6;
		List_1_t3420105ACC85EC0363642A2775985EECE6EC41F6* L_103 = V_8;
		NullCheck(L_103);
		Tuple_2_tECBABFFE5F6AEC7406FA67604949A78C26B1CEF3* L_104;
		L_104 = List_1_get_Item_m4237D2A684EDF68555C45ED14688C36F4C70ADD7(L_103, 1, List_1_get_Item_m4237D2A684EDF68555C45ED14688C36F4C70ADD7_RuntimeMethod_var);
		NullCheck(L_104);
		int32_t L_105;
		L_105 = Tuple_2_get_Item2_mBA3C6612F072776B30C52648A160FD7F27ABBBED_inline(L_104, Tuple_2_get_Item2_mBA3C6612F072776B30C52648A160FD7F27ABBBED_RuntimeMethod_var);
		NullCheck(L_102);
		double L_106;
		L_106 = U3Da8FU3D_U3Dcc6DU3D_mFC2E109CCA616464F32983ED84E77ADA0078ABF6(L_102, L_105, NULL);
		U3Da76U3D_U3DccF4U3D_mE25853505CFA115851D2601D0C039AC0D56EF4E5_inline(__this, L_106, NULL);
		U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* L_107 = V_6;
		List_1_t3420105ACC85EC0363642A2775985EECE6EC41F6* L_108 = V_8;
		NullCheck(L_108);
		Tuple_2_tECBABFFE5F6AEC7406FA67604949A78C26B1CEF3* L_109;
		L_109 = List_1_get_Item_m4237D2A684EDF68555C45ED14688C36F4C70ADD7(L_108, 2, List_1_get_Item_m4237D2A684EDF68555C45ED14688C36F4C70ADD7_RuntimeMethod_var);
		NullCheck(L_109);
		int32_t L_110;
		L_110 = Tuple_2_get_Item2_mBA3C6612F072776B30C52648A160FD7F27ABBBED_inline(L_109, Tuple_2_get_Item2_mBA3C6612F072776B30C52648A160FD7F27ABBBED_RuntimeMethod_var);
		NullCheck(L_107);
		double L_111;
		L_111 = U3Da8FU3D_U3Dcc6DU3D_mFC2E109CCA616464F32983ED84E77ADA0078ABF6(L_107, L_110, NULL);
		U3Da76U3D_U3DccF6U3D_m2F9E337AF4D427B7F9AC812738949A6F1B332209_inline(__this, L_111, NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_112 = V_7;
		List_1_t3420105ACC85EC0363642A2775985EECE6EC41F6* L_113 = V_8;
		NullCheck(L_113);
		Tuple_2_tECBABFFE5F6AEC7406FA67604949A78C26B1CEF3* L_114;
		L_114 = List_1_get_Item_m4237D2A684EDF68555C45ED14688C36F4C70ADD7(L_113, 0, List_1_get_Item_m4237D2A684EDF68555C45ED14688C36F4C70ADD7_RuntimeMethod_var);
		NullCheck(L_114);
		int32_t L_115;
		L_115 = Tuple_2_get_Item2_mBA3C6612F072776B30C52648A160FD7F27ABBBED_inline(L_114, Tuple_2_get_Item2_mBA3C6612F072776B30C52648A160FD7F27ABBBED_RuntimeMethod_var);
		NullCheck(L_112);
		double L_116;
		L_116 = U3Da72U3D_U3Dccc6U3D_m323850489F4D3AAD389FB35659D15F9276AD0495(L_112, L_115, 0, NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_117 = V_7;
		List_1_t3420105ACC85EC0363642A2775985EECE6EC41F6* L_118 = V_8;
		NullCheck(L_118);
		Tuple_2_tECBABFFE5F6AEC7406FA67604949A78C26B1CEF3* L_119;
		L_119 = List_1_get_Item_m4237D2A684EDF68555C45ED14688C36F4C70ADD7(L_118, 0, List_1_get_Item_m4237D2A684EDF68555C45ED14688C36F4C70ADD7_RuntimeMethod_var);
		NullCheck(L_119);
		int32_t L_120;
		L_120 = Tuple_2_get_Item2_mBA3C6612F072776B30C52648A160FD7F27ABBBED_inline(L_119, Tuple_2_get_Item2_mBA3C6612F072776B30C52648A160FD7F27ABBBED_RuntimeMethod_var);
		NullCheck(L_117);
		double L_121;
		L_121 = U3Da72U3D_U3Dccc6U3D_m323850489F4D3AAD389FB35659D15F9276AD0495(L_117, L_120, 1, NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_122 = V_7;
		List_1_t3420105ACC85EC0363642A2775985EECE6EC41F6* L_123 = V_8;
		NullCheck(L_123);
		Tuple_2_tECBABFFE5F6AEC7406FA67604949A78C26B1CEF3* L_124;
		L_124 = List_1_get_Item_m4237D2A684EDF68555C45ED14688C36F4C70ADD7(L_123, 0, List_1_get_Item_m4237D2A684EDF68555C45ED14688C36F4C70ADD7_RuntimeMethod_var);
		NullCheck(L_124);
		int32_t L_125;
		L_125 = Tuple_2_get_Item2_mBA3C6612F072776B30C52648A160FD7F27ABBBED_inline(L_124, Tuple_2_get_Item2_mBA3C6612F072776B30C52648A160FD7F27ABBBED_RuntimeMethod_var);
		NullCheck(L_122);
		double L_126;
		L_126 = U3Da72U3D_U3Dccc6U3D_m323850489F4D3AAD389FB35659D15F9276AD0495(L_122, L_125, 2, NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_127;
		memset((&L_127), 0, sizeof(L_127));
		Vector3D__ctor_m089D30E3C254B02097D9E58F833A0DAC855CE3E6((&L_127), L_116, L_121, L_126, /*hidden argument*/NULL);
		U3Da76U3D_U3DccF8U3D_m303E46F8AC4532E774762C2D86C41FBFA739188C_inline(__this, L_127, NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_128 = V_7;
		List_1_t3420105ACC85EC0363642A2775985EECE6EC41F6* L_129 = V_8;
		NullCheck(L_129);
		Tuple_2_tECBABFFE5F6AEC7406FA67604949A78C26B1CEF3* L_130;
		L_130 = List_1_get_Item_m4237D2A684EDF68555C45ED14688C36F4C70ADD7(L_129, 1, List_1_get_Item_m4237D2A684EDF68555C45ED14688C36F4C70ADD7_RuntimeMethod_var);
		NullCheck(L_130);
		int32_t L_131;
		L_131 = Tuple_2_get_Item2_mBA3C6612F072776B30C52648A160FD7F27ABBBED_inline(L_130, Tuple_2_get_Item2_mBA3C6612F072776B30C52648A160FD7F27ABBBED_RuntimeMethod_var);
		NullCheck(L_128);
		double L_132;
		L_132 = U3Da72U3D_U3Dccc6U3D_m323850489F4D3AAD389FB35659D15F9276AD0495(L_128, L_131, 0, NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_133 = V_7;
		List_1_t3420105ACC85EC0363642A2775985EECE6EC41F6* L_134 = V_8;
		NullCheck(L_134);
		Tuple_2_tECBABFFE5F6AEC7406FA67604949A78C26B1CEF3* L_135;
		L_135 = List_1_get_Item_m4237D2A684EDF68555C45ED14688C36F4C70ADD7(L_134, 1, List_1_get_Item_m4237D2A684EDF68555C45ED14688C36F4C70ADD7_RuntimeMethod_var);
		NullCheck(L_135);
		int32_t L_136;
		L_136 = Tuple_2_get_Item2_mBA3C6612F072776B30C52648A160FD7F27ABBBED_inline(L_135, Tuple_2_get_Item2_mBA3C6612F072776B30C52648A160FD7F27ABBBED_RuntimeMethod_var);
		NullCheck(L_133);
		double L_137;
		L_137 = U3Da72U3D_U3Dccc6U3D_m323850489F4D3AAD389FB35659D15F9276AD0495(L_133, L_136, 1, NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_138 = V_7;
		List_1_t3420105ACC85EC0363642A2775985EECE6EC41F6* L_139 = V_8;
		NullCheck(L_139);
		Tuple_2_tECBABFFE5F6AEC7406FA67604949A78C26B1CEF3* L_140;
		L_140 = List_1_get_Item_m4237D2A684EDF68555C45ED14688C36F4C70ADD7(L_139, 1, List_1_get_Item_m4237D2A684EDF68555C45ED14688C36F4C70ADD7_RuntimeMethod_var);
		NullCheck(L_140);
		int32_t L_141;
		L_141 = Tuple_2_get_Item2_mBA3C6612F072776B30C52648A160FD7F27ABBBED_inline(L_140, Tuple_2_get_Item2_mBA3C6612F072776B30C52648A160FD7F27ABBBED_RuntimeMethod_var);
		NullCheck(L_138);
		double L_142;
		L_142 = U3Da72U3D_U3Dccc6U3D_m323850489F4D3AAD389FB35659D15F9276AD0495(L_138, L_141, 2, NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_143;
		memset((&L_143), 0, sizeof(L_143));
		Vector3D__ctor_m089D30E3C254B02097D9E58F833A0DAC855CE3E6((&L_143), L_132, L_137, L_142, /*hidden argument*/NULL);
		U3Da76U3D_U3DccfAU3D_m8ECE84940939B1EA04F29793FF0663A386945680_inline(__this, L_143, NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_144 = V_7;
		List_1_t3420105ACC85EC0363642A2775985EECE6EC41F6* L_145 = V_8;
		NullCheck(L_145);
		Tuple_2_tECBABFFE5F6AEC7406FA67604949A78C26B1CEF3* L_146;
		L_146 = List_1_get_Item_m4237D2A684EDF68555C45ED14688C36F4C70ADD7(L_145, 2, List_1_get_Item_m4237D2A684EDF68555C45ED14688C36F4C70ADD7_RuntimeMethod_var);
		NullCheck(L_146);
		int32_t L_147;
		L_147 = Tuple_2_get_Item2_mBA3C6612F072776B30C52648A160FD7F27ABBBED_inline(L_146, Tuple_2_get_Item2_mBA3C6612F072776B30C52648A160FD7F27ABBBED_RuntimeMethod_var);
		NullCheck(L_144);
		double L_148;
		L_148 = U3Da72U3D_U3Dccc6U3D_m323850489F4D3AAD389FB35659D15F9276AD0495(L_144, L_147, 0, NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_149 = V_7;
		List_1_t3420105ACC85EC0363642A2775985EECE6EC41F6* L_150 = V_8;
		NullCheck(L_150);
		Tuple_2_tECBABFFE5F6AEC7406FA67604949A78C26B1CEF3* L_151;
		L_151 = List_1_get_Item_m4237D2A684EDF68555C45ED14688C36F4C70ADD7(L_150, 2, List_1_get_Item_m4237D2A684EDF68555C45ED14688C36F4C70ADD7_RuntimeMethod_var);
		NullCheck(L_151);
		int32_t L_152;
		L_152 = Tuple_2_get_Item2_mBA3C6612F072776B30C52648A160FD7F27ABBBED_inline(L_151, Tuple_2_get_Item2_mBA3C6612F072776B30C52648A160FD7F27ABBBED_RuntimeMethod_var);
		NullCheck(L_149);
		double L_153;
		L_153 = U3Da72U3D_U3Dccc6U3D_m323850489F4D3AAD389FB35659D15F9276AD0495(L_149, L_152, 1, NULL);
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_154 = V_7;
		List_1_t3420105ACC85EC0363642A2775985EECE6EC41F6* L_155 = V_8;
		NullCheck(L_155);
		Tuple_2_tECBABFFE5F6AEC7406FA67604949A78C26B1CEF3* L_156;
		L_156 = List_1_get_Item_m4237D2A684EDF68555C45ED14688C36F4C70ADD7(L_155, 2, List_1_get_Item_m4237D2A684EDF68555C45ED14688C36F4C70ADD7_RuntimeMethod_var);
		NullCheck(L_156);
		int32_t L_157;
		L_157 = Tuple_2_get_Item2_mBA3C6612F072776B30C52648A160FD7F27ABBBED_inline(L_156, Tuple_2_get_Item2_mBA3C6612F072776B30C52648A160FD7F27ABBBED_RuntimeMethod_var);
		NullCheck(L_154);
		double L_158;
		L_158 = U3Da72U3D_U3Dccc6U3D_m323850489F4D3AAD389FB35659D15F9276AD0495(L_154, L_157, 2, NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_159;
		memset((&L_159), 0, sizeof(L_159));
		Vector3D__ctor_m089D30E3C254B02097D9E58F833A0DAC855CE3E6((&L_159), L_148, L_153, L_158, /*hidden argument*/NULL);
		U3Da76U3D_U3DccfBU3D_m89E93A27B1B545943A3B70DA64278FA5253F52D4_inline(__this, L_159, NULL);
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
// System.Void =a76=/=ba13=::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Dba13U3D__cctor_mB54EF19A674F993F57373E56C99931352DF9CFE6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C* L_0 = (U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C*)il2cpp_codegen_object_new(U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3Dba13U3D__ctor_m18F27C63ED45673DEEB455C9AC3241EF258D5522(L_0, NULL);
		((U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C_StaticFields*)il2cpp_codegen_static_fields_for(U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C_il2cpp_TypeInfo_var))->___U3Ddc23U3D_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C_StaticFields*)il2cpp_codegen_static_fields_for(U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C_il2cpp_TypeInfo_var))->___U3Ddc23U3D_0), (void*)L_0);
		return;
	}
}
// System.Void =a76=/=ba13=::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Dba13U3D__ctor_m18F27C63ED45673DEEB455C9AC3241EF258D5522 (U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Microsoft.Geospatial.VectorMath.Vector3D =a76=/=ba13=::=cec5=(Microsoft.Geospatial.VectorMath.Vector3D,Microsoft.Geospatial.VectorMath.Vector3D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE U3Dba13U3D_U3Dcec5U3D_m01E280776C936DFBA48DACA6FA1F1D3EA43C91EB (U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = p0;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_1 = p1;
		il2cpp_codegen_runtime_class_init_inline(Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_il2cpp_TypeInfo_var);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_2;
		L_2 = Vector3D_op_Addition_m979683491399744DD382B1D632407ED65878F710_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Int32 =a76=/=ba13=::=cec6=(System.Tuple`2<System.Double,System.Int32>,System.Tuple`2<System.Double,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3Dba13U3D_U3Dcec6U3D_mB50A4EFBAE59B432402DD96FC9F4A13DA63FFB5F (U3Dba13U3D_tCAC4CEB050444C1FA7900C653D129AB369F5E30C* __this, Tuple_2_tECBABFFE5F6AEC7406FA67604949A78C26B1CEF3* p0, Tuple_2_tECBABFFE5F6AEC7406FA67604949A78C26B1CEF3* p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item1_m8147AD192D772AFECA4A9F9DA04AE72072CFCD53_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		Tuple_2_tECBABFFE5F6AEC7406FA67604949A78C26B1CEF3* L_0 = p0;
		NullCheck(L_0);
		double L_1;
		L_1 = Tuple_2_get_Item1_m8147AD192D772AFECA4A9F9DA04AE72072CFCD53_inline(L_0, Tuple_2_get_Item1_m8147AD192D772AFECA4A9F9DA04AE72072CFCD53_RuntimeMethod_var);
		V_0 = L_1;
		Tuple_2_tECBABFFE5F6AEC7406FA67604949A78C26B1CEF3* L_2 = p1;
		NullCheck(L_2);
		double L_3;
		L_3 = Tuple_2_get_Item1_m8147AD192D772AFECA4A9F9DA04AE72072CFCD53_inline(L_2, Tuple_2_get_Item1_m8147AD192D772AFECA4A9F9DA04AE72072CFCD53_RuntimeMethod_var);
		int32_t L_4;
		L_4 = Double_CompareTo_m40FD7CA33B178CCFA4B6755267DC67841092CCFC((&V_0), L_3, NULL);
		return L_4;
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
// System.Void =a77=::.ctor(=a8f=,=a8f=,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da77U3D__ctor_m38F91B372DC39895693ACF5FB577930AEC2D3294 (U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* __this, U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE p0, U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE p1, double p2, const RuntimeMethod* method) 
{
	{
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_0 = p0;
		U3Da77U3D_U3DccfcU3D_m88CCD939B448EF9C77FD2DE3AA7DF3E7B638B5D3_inline(__this, L_0, NULL);
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_1 = p1;
		U3Da77U3D_U3DccfdU3D_m6F21997A9BF09494850364BAFE11E51C597EA797_inline(__this, L_1, NULL);
		double L_2 = p2;
		U3Da77U3D_U3DccfeU3D_mFAD9F685594EE62614C05E1BA7BACFE22662AFC2_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3Da77U3D__ctor_m38F91B372DC39895693ACF5FB577930AEC2D3294_AdjustorThunk (RuntimeObject* __this, U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE p0, U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE p1, double p2, const RuntimeMethod* method)
{
	U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E*>(__this + _offset);
	U3Da77U3D__ctor_m38F91B372DC39895693ACF5FB577930AEC2D3294(_thisAdjusted, p0, p1, p2, method);
}
// System.Void =a77=::.ctor(System.Double,System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da77U3D__ctor_m9936B5CA399089320CB17DC475CC9E62E67276FC (U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* __this, double p0, double p1, double p2, double p3, double p4, const RuntimeMethod* method) 
{
	{
		double L_0 = p0;
		double L_1 = p1;
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_2;
		memset((&L_2), 0, sizeof(L_2));
		U3Da8fU3D__ctor_m9D7FCE73C72E54267B13BCDE59BB82A5DA9C0DCD((&L_2), L_0, L_1, /*hidden argument*/NULL);
		double L_3 = p2;
		double L_4 = p3;
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_5;
		memset((&L_5), 0, sizeof(L_5));
		U3Da8fU3D__ctor_m9D7FCE73C72E54267B13BCDE59BB82A5DA9C0DCD((&L_5), L_3, L_4, /*hidden argument*/NULL);
		double L_6 = p4;
		U3Da77U3D__ctor_m38F91B372DC39895693ACF5FB577930AEC2D3294(__this, L_2, L_5, L_6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3Da77U3D__ctor_m9936B5CA399089320CB17DC475CC9E62E67276FC_AdjustorThunk (RuntimeObject* __this, double p0, double p1, double p2, double p3, double p4, const RuntimeMethod* method)
{
	U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E*>(__this + _offset);
	U3Da77U3D__ctor_m9936B5CA399089320CB17DC475CC9E62E67276FC(_thisAdjusted, p0, p1, p2, p3, p4, method);
}
// System.Boolean =a77=::=ccfb=(System.Collections.Generic.IList`1<=a8f=>,System.Single,=a77=&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da77U3D_U3DccfbU3D_m3C547C3296585E1ABD58EA9B14F0B61D9D08ED7C (RuntimeObject* p0, float p1, U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* p2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m72C35810CC34AE063C37D418BAE8B097E15C17D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m209AA059F79DC3ACA5DA5B4198DD76D0F4E76910_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t09CD51E16A5F5DDB2281A6D153ACD580FAF1D657 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = p0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)1);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = L_1;
		float L_3 = p1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)1);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(1.0f));
		Nullable_1_t09CD51E16A5F5DDB2281A6D153ACD580FAF1D657 L_6;
		L_6 = U3Da7EU3D_U3DccCAU3D_m022943A170E95BB15D48CBA63D3B19EC2270FCE8(L_0, L_2, L_5, (&V_1), NULL);
		V_0 = L_6;
		bool L_7;
		L_7 = Nullable_1_get_HasValue_m72C35810CC34AE063C37D418BAE8B097E15C17D9_inline((&V_0), Nullable_1_get_HasValue_m72C35810CC34AE063C37D418BAE8B097E15C17D9_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* L_8 = p2;
		U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E L_9;
		L_9 = Nullable_1_get_Value_m209AA059F79DC3ACA5DA5B4198DD76D0F4E76910((&V_0), Nullable_1_get_Value_m209AA059F79DC3ACA5DA5B4198DD76D0F4E76910_RuntimeMethod_var);
		*(U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E*)L_8 = L_9;
		return (bool)1;
	}

IL_0039:
	{
		U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* L_10 = p2;
		il2cpp_codegen_initobj(L_10, sizeof(U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E));
		return (bool)0;
	}
}
// =a8f= =a77=::=ccfC=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE U3Da77U3D_U3DccfCU3D_m9D42C6003AA6C3B641FFEA5BB66BDB620CDA4D72 (U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* __this, const RuntimeMethod* method) 
{
	{
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_0 = __this->___U3DdE43U3D_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE U3Da77U3D_U3DccfCU3D_m9D42C6003AA6C3B641FFEA5BB66BDB620CDA4D72_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E*>(__this + _offset);
	U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE _returnValue;
	_returnValue = U3Da77U3D_U3DccfCU3D_m9D42C6003AA6C3B641FFEA5BB66BDB620CDA4D72_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void =a77=::=ccfc=(=a8f=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da77U3D_U3DccfcU3D_m88CCD939B448EF9C77FD2DE3AA7DF3E7B638B5D3 (U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* __this, U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE p0, const RuntimeMethod* method) 
{
	{
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_0 = p0;
		__this->___U3DdE43U3D_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void U3Da77U3D_U3DccfcU3D_m88CCD939B448EF9C77FD2DE3AA7DF3E7B638B5D3_AdjustorThunk (RuntimeObject* __this, U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE p0, const RuntimeMethod* method)
{
	U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E*>(__this + _offset);
	U3Da77U3D_U3DccfcU3D_m88CCD939B448EF9C77FD2DE3AA7DF3E7B638B5D3_inline(_thisAdjusted, p0, method);
}
// =a8f= =a77=::=ccfD=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE U3Da77U3D_U3DccfDU3D_mDCE67E3AEB40998AC51980A4543AC92678D8DB9E (U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* __this, const RuntimeMethod* method) 
{
	{
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_0 = __this->___U3DdE44U3D_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE U3Da77U3D_U3DccfDU3D_mDCE67E3AEB40998AC51980A4543AC92678D8DB9E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E*>(__this + _offset);
	U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE _returnValue;
	_returnValue = U3Da77U3D_U3DccfDU3D_mDCE67E3AEB40998AC51980A4543AC92678D8DB9E_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void =a77=::=ccfd=(=a8f=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da77U3D_U3DccfdU3D_m6F21997A9BF09494850364BAFE11E51C597EA797 (U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* __this, U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE p0, const RuntimeMethod* method) 
{
	{
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_0 = p0;
		__this->___U3DdE44U3D_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void U3Da77U3D_U3DccfdU3D_m6F21997A9BF09494850364BAFE11E51C597EA797_AdjustorThunk (RuntimeObject* __this, U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE p0, const RuntimeMethod* method)
{
	U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E*>(__this + _offset);
	U3Da77U3D_U3DccfdU3D_m6F21997A9BF09494850364BAFE11E51C597EA797_inline(_thisAdjusted, p0, method);
}
// System.Double =a77=::=ccfE=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3Da77U3D_U3DccfEU3D_m7B0F078B2A5C9827B525D33688D21E4CAFF228A8 (U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3DdE45U3D_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  double U3Da77U3D_U3DccfEU3D_m7B0F078B2A5C9827B525D33688D21E4CAFF228A8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E*>(__this + _offset);
	double _returnValue;
	_returnValue = U3Da77U3D_U3DccfEU3D_m7B0F078B2A5C9827B525D33688D21E4CAFF228A8_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void =a77=::=ccfe=(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da77U3D_U3DccfeU3D_mFAD9F685594EE62614C05E1BA7BACFE22662AFC2 (U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* __this, double p0, const RuntimeMethod* method) 
{
	{
		double L_0 = p0;
		__this->___U3DdE45U3D_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void U3Da77U3D_U3DccfeU3D_mFAD9F685594EE62614C05E1BA7BACFE22662AFC2_AdjustorThunk (RuntimeObject* __this, double p0, const RuntimeMethod* method)
{
	U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E*>(__this + _offset);
	U3Da77U3D_U3DccfeU3D_mFAD9F685594EE62614C05E1BA7BACFE22662AFC2_inline(_thisAdjusted, p0, method);
}
// System.Void =a77=::=ccfF=(=a8f=&,=a8f=&,=a8f=&,=a8f=&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da77U3D_U3DccfFU3D_mD3AA2D48B612F7F5834494CB569C59DA65B0A3E2 (U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* __this, U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE* p0, U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE* p1, U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE* p2, U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE* p3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	{
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_0;
		L_0 = U3Da77U3D_U3DccfDU3D_mDCE67E3AEB40998AC51980A4543AC92678D8DB9E_inline(__this, NULL);
		double L_1 = L_0.___U3DdBFAU3D_4;
		V_0 = ((double)(L_1/(2.0)));
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_2;
		L_2 = U3Da77U3D_U3DccfDU3D_mDCE67E3AEB40998AC51980A4543AC92678D8DB9E_inline(__this, NULL);
		double L_3 = L_2.___U3DdBFaU3D_5;
		V_1 = ((double)(L_3/(2.0)));
		double L_4;
		L_4 = U3Da77U3D_U3DccfEU3D_m7B0F078B2A5C9827B525D33688D21E4CAFF228A8_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_5;
		L_5 = cos(L_4);
		V_2 = L_5;
		double L_6;
		L_6 = U3Da77U3D_U3DccfEU3D_m7B0F078B2A5C9827B525D33688D21E4CAFF228A8_inline(__this, NULL);
		double L_7;
		L_7 = sin(L_6);
		V_3 = L_7;
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE* L_8 = p0;
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_9;
		L_9 = U3Da77U3D_U3DccfCU3D_m9D42C6003AA6C3B641FFEA5BB66BDB620CDA4D72_inline(__this, NULL);
		double L_10 = L_9.___U3DdBFAU3D_4;
		double L_11 = V_2;
		double L_12 = V_0;
		double L_13 = V_3;
		double L_14 = V_1;
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_15;
		L_15 = U3Da77U3D_U3DccfCU3D_m9D42C6003AA6C3B641FFEA5BB66BDB620CDA4D72_inline(__this, NULL);
		double L_16 = L_15.___U3DdBFaU3D_5;
		double L_17 = V_3;
		double L_18 = V_0;
		double L_19 = V_2;
		double L_20 = V_1;
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_21;
		memset((&L_21), 0, sizeof(L_21));
		U3Da8fU3D__ctor_m9D7FCE73C72E54267B13BCDE59BB82A5DA9C0DCD((&L_21), ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(L_10, ((double)il2cpp_codegen_multiply(L_11, ((-L_12)))))), ((double)il2cpp_codegen_multiply(L_13, L_14)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(L_16, ((double)il2cpp_codegen_multiply(L_17, ((-L_18)))))), ((double)il2cpp_codegen_multiply(L_19, L_20)))), /*hidden argument*/NULL);
		*(U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE*)L_8 = L_21;
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE* L_22 = p1;
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_23;
		L_23 = U3Da77U3D_U3DccfCU3D_m9D42C6003AA6C3B641FFEA5BB66BDB620CDA4D72_inline(__this, NULL);
		double L_24 = L_23.___U3DdBFAU3D_4;
		double L_25 = V_2;
		double L_26 = V_0;
		double L_27 = V_3;
		double L_28 = V_1;
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_29;
		L_29 = U3Da77U3D_U3DccfCU3D_m9D42C6003AA6C3B641FFEA5BB66BDB620CDA4D72_inline(__this, NULL);
		double L_30 = L_29.___U3DdBFaU3D_5;
		double L_31 = V_3;
		double L_32 = V_0;
		double L_33 = V_2;
		double L_34 = V_1;
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_35;
		memset((&L_35), 0, sizeof(L_35));
		U3Da8fU3D__ctor_m9D7FCE73C72E54267B13BCDE59BB82A5DA9C0DCD((&L_35), ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(L_24, ((double)il2cpp_codegen_multiply(L_25, L_26)))), ((double)il2cpp_codegen_multiply(L_27, L_28)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(L_30, ((double)il2cpp_codegen_multiply(L_31, L_32)))), ((double)il2cpp_codegen_multiply(L_33, L_34)))), /*hidden argument*/NULL);
		*(U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE*)L_22 = L_35;
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE* L_36 = p2;
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_37;
		L_37 = U3Da77U3D_U3DccfCU3D_m9D42C6003AA6C3B641FFEA5BB66BDB620CDA4D72_inline(__this, NULL);
		double L_38 = L_37.___U3DdBFAU3D_4;
		double L_39 = V_2;
		double L_40 = V_0;
		double L_41 = V_3;
		double L_42 = V_1;
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_43;
		L_43 = U3Da77U3D_U3DccfCU3D_m9D42C6003AA6C3B641FFEA5BB66BDB620CDA4D72_inline(__this, NULL);
		double L_44 = L_43.___U3DdBFaU3D_5;
		double L_45 = V_3;
		double L_46 = V_0;
		double L_47 = V_2;
		double L_48 = V_1;
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_49;
		memset((&L_49), 0, sizeof(L_49));
		U3Da8fU3D__ctor_m9D7FCE73C72E54267B13BCDE59BB82A5DA9C0DCD((&L_49), ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(L_38, ((double)il2cpp_codegen_multiply(L_39, L_40)))), ((double)il2cpp_codegen_multiply(L_41, ((-L_42)))))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(L_44, ((double)il2cpp_codegen_multiply(L_45, L_46)))), ((double)il2cpp_codegen_multiply(L_47, ((-L_48)))))), /*hidden argument*/NULL);
		*(U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE*)L_36 = L_49;
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE* L_50 = p3;
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_51;
		L_51 = U3Da77U3D_U3DccfCU3D_m9D42C6003AA6C3B641FFEA5BB66BDB620CDA4D72_inline(__this, NULL);
		double L_52 = L_51.___U3DdBFAU3D_4;
		double L_53 = V_2;
		double L_54 = V_0;
		double L_55 = V_3;
		double L_56 = V_1;
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_57;
		L_57 = U3Da77U3D_U3DccfCU3D_m9D42C6003AA6C3B641FFEA5BB66BDB620CDA4D72_inline(__this, NULL);
		double L_58 = L_57.___U3DdBFaU3D_5;
		double L_59 = V_3;
		double L_60 = V_0;
		double L_61 = V_2;
		double L_62 = V_1;
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_63;
		memset((&L_63), 0, sizeof(L_63));
		U3Da8fU3D__ctor_m9D7FCE73C72E54267B13BCDE59BB82A5DA9C0DCD((&L_63), ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(L_52, ((double)il2cpp_codegen_multiply(L_53, ((-L_54)))))), ((double)il2cpp_codegen_multiply(L_55, ((-L_56)))))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(L_58, ((double)il2cpp_codegen_multiply(L_59, ((-L_60)))))), ((double)il2cpp_codegen_multiply(L_61, ((-L_62)))))), /*hidden argument*/NULL);
		*(U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE*)L_50 = L_63;
		return;
	}
}
IL2CPP_EXTERN_C  void U3Da77U3D_U3DccfFU3D_mD3AA2D48B612F7F5834494CB569C59DA65B0A3E2_AdjustorThunk (RuntimeObject* __this, U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE* p0, U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE* p1, U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE* p2, U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE* p3, const RuntimeMethod* method)
{
	U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E*>(__this + _offset);
	U3Da77U3D_U3DccfFU3D_mD3AA2D48B612F7F5834494CB569C59DA65B0A3E2(_thisAdjusted, p0, p1, p2, p3, method);
}
// System.String =a77=::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3Da77U3D_ToString_mF1DF80DC2CDD0E49B29F89CA50C8EA59C0B3DA24 (U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0273EEB43196554B6B6B446A6E378CE79180EDC0);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_2;
		L_2 = U3Da77U3D_U3DccfCU3D_m9D42C6003AA6C3B641FFEA5BB66BDB620CDA4D72_inline(__this, NULL);
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_3 = L_2;
		RuntimeObject* L_4 = Box(U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_6;
		L_6 = U3Da77U3D_U3DccfDU3D_mDCE67E3AEB40998AC51980A4543AC92678D8DB9E_inline(__this, NULL);
		double L_7 = L_6.___U3DdBFAU3D_4;
		double L_8 = L_7;
		RuntimeObject* L_9 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_9);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_5;
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_11;
		L_11 = U3Da77U3D_U3DccfDU3D_mDCE67E3AEB40998AC51980A4543AC92678D8DB9E_inline(__this, NULL);
		double L_12 = L_11.___U3DdBFaU3D_5;
		double L_13 = L_12;
		RuntimeObject* L_14 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_14);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_10;
		double L_16;
		L_16 = U3Da77U3D_U3DccfEU3D_m7B0F078B2A5C9827B525D33688D21E4CAFF228A8_inline(__this, NULL);
		double L_17 = L_16;
		RuntimeObject* L_18 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_18);
		String_t* L_19;
		L_19 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteral0273EEB43196554B6B6B446A6E378CE79180EDC0, L_15, NULL);
		return L_19;
	}
}
IL2CPP_EXTERN_C  String_t* U3Da77U3D_ToString_mF1DF80DC2CDD0E49B29F89CA50C8EA59C0B3DA24_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = U3Da77U3D_ToString_mF1DF80DC2CDD0E49B29F89CA50C8EA59C0B3DA24(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean =a77=::Equals(=a77=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da77U3D_Equals_mD78CBFC02F6C0083EFEF1E803F045C5F064BDC0D (U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* __this, U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_0;
		L_0 = U3Da77U3D_U3DccfCU3D_m9D42C6003AA6C3B641FFEA5BB66BDB620CDA4D72_inline(__this, NULL);
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_1;
		L_1 = U3Da77U3D_U3DccfCU3D_m9D42C6003AA6C3B641FFEA5BB66BDB620CDA4D72_inline((&___other0), NULL);
		il2cpp_codegen_runtime_class_init_inline(U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = U3Da8fU3D_op_Equality_m122E810D581ECC0AA69BFB8B59D8A31000DCE031(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_3;
		L_3 = U3Da77U3D_U3DccfDU3D_mDCE67E3AEB40998AC51980A4543AC92678D8DB9E_inline(__this, NULL);
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_4;
		L_4 = U3Da77U3D_U3DccfDU3D_mDCE67E3AEB40998AC51980A4543AC92678D8DB9E_inline((&___other0), NULL);
		il2cpp_codegen_runtime_class_init_inline(U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = U3Da8fU3D_op_Equality_m122E810D581ECC0AA69BFB8B59D8A31000DCE031(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		double L_6;
		L_6 = U3Da77U3D_U3DccfEU3D_m7B0F078B2A5C9827B525D33688D21E4CAFF228A8_inline(__this, NULL);
		double L_7;
		L_7 = U3Da77U3D_U3DccfEU3D_m7B0F078B2A5C9827B525D33688D21E4CAFF228A8_inline((&___other0), NULL);
		return (bool)((((double)L_6) == ((double)L_7))? 1 : 0);
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool U3Da77U3D_Equals_mD78CBFC02F6C0083EFEF1E803F045C5F064BDC0D_AdjustorThunk (RuntimeObject* __this, U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E ___other0, const RuntimeMethod* method)
{
	U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E*>(__this + _offset);
	bool _returnValue;
	_returnValue = U3Da77U3D_Equals_mD78CBFC02F6C0083EFEF1E803F045C5F064BDC0D(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean =a77=::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da77U3D_Equals_m9B1A5BBB96274E083E3E576C954D101FA43E5DD5 (U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		V_0 = ((*(U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E*)((U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E*)(U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E*)UnBox(L_1, U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E_il2cpp_TypeInfo_var))));
		U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E L_2 = V_0;
		bool L_3;
		L_3 = U3Da77U3D_Equals_mD78CBFC02F6C0083EFEF1E803F045C5F064BDC0D(__this, L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool U3Da77U3D_Equals_m9B1A5BBB96274E083E3E576C954D101FA43E5DD5_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E*>(__this + _offset);
	bool _returnValue;
	_returnValue = U3Da77U3D_Equals_m9B1A5BBB96274E083E3E576C954D101FA43E5DD5(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 =a77=::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3Da77U3D_GetHashCode_m7135C39AE5D05243333E4484D06750AD0B8DD1EE (U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* __this, const RuntimeMethod* method) 
{
	U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE V_0;
	memset((&V_0), 0, sizeof(V_0));
	double V_1 = 0.0;
	{
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_0;
		L_0 = U3Da77U3D_U3DccfCU3D_m9D42C6003AA6C3B641FFEA5BB66BDB620CDA4D72_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = U3Da8fU3D_GetHashCode_m5910A5B2169A7519CF2928C645D7A6589BEF9B69((&V_0), NULL);
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_2;
		L_2 = U3Da77U3D_U3DccfDU3D_mDCE67E3AEB40998AC51980A4543AC92678D8DB9E_inline(__this, NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = U3Da8fU3D_GetHashCode_m5910A5B2169A7519CF2928C645D7A6589BEF9B69((&V_0), NULL);
		double L_4;
		L_4 = U3Da77U3D_U3DccfEU3D_m7B0F078B2A5C9827B525D33688D21E4CAFF228A8_inline(__this, NULL);
		V_1 = L_4;
		int32_t L_5;
		L_5 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline((&V_1), NULL);
		return ((int32_t)(((int32_t)(L_1^L_3))^L_5));
	}
}
IL2CPP_EXTERN_C  int32_t U3Da77U3D_GetHashCode_m7135C39AE5D05243333E4484D06750AD0B8DD1EE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = U3Da77U3D_GetHashCode_m7135C39AE5D05243333E4484D06750AD0B8DD1EE(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean =a77=::op_Equality(=a77=,=a77=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da77U3D_op_Equality_mA4A305D81FEAC1C54CC370F7E1EADB41FB90027F (U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E p0, U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E p1, const RuntimeMethod* method) 
{
	{
		U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E L_0 = p1;
		bool L_1;
		L_1 = U3Da77U3D_Equals_mD78CBFC02F6C0083EFEF1E803F045C5F064BDC0D((&p0), L_0, NULL);
		return L_1;
	}
}
// System.Boolean =a77=::op_Inequality(=a77=,=a77=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da77U3D_op_Inequality_mAA1EA053EDAB0025252EE5CA2F320F9E36B73FCE (U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E p0, U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E p1, const RuntimeMethod* method) 
{
	{
		U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E L_0 = p0;
		U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E L_1 = p1;
		bool L_2;
		L_2 = U3Da77U3D_op_Equality_mA4A305D81FEAC1C54CC370F7E1EADB41FB90027F(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
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
// System.Void =a78=::.ctor(Microsoft.Geospatial.VectorMath.Vector3D,Microsoft.Geospatial.VectorMath.Vector3D,Microsoft.Geospatial.VectorMath.Vector3D,Microsoft.Geospatial.VectorMath.Vector3D,Microsoft.Geospatial.VectorMath.Vector3D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Da78U3D__ctor_m1A07F4B30475154A92384F665C022CDD5ABF24A0 (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p1, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p2, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p3, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = p1;
		double L_1 = L_0.___X_7;
		if ((((double)L_1) <= ((double)(0.0))))
		{
			goto IL_0033;
		}
	}
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_2 = p1;
		double L_3 = L_2.___Y_8;
		if ((((double)L_3) <= ((double)(0.0))))
		{
			goto IL_0033;
		}
	}
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_4 = p1;
		double L_5 = L_4.___Z_9;
		if ((!(((double)L_5) <= ((double)(0.0)))))
		{
			goto IL_003e;
		}
	}

IL_0033:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da78U3D__ctor_m1A07F4B30475154A92384F665C022CDD5ABF24A0_RuntimeMethod_var)));
	}

IL_003e:
	{
		double L_7;
		L_7 = Vector3D_LengthSq_m216411FB00036916CB90867E008F49D4EF0E80B1((&p2), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_8;
		L_8 = fabs(((double)il2cpp_codegen_subtract(L_7, (1.0))));
		if ((((double)L_8) > ((double)(9.9999999999999998E-13))))
		{
			goto IL_00ef;
		}
	}
	{
		double L_9;
		L_9 = Vector3D_LengthSq_m216411FB00036916CB90867E008F49D4EF0E80B1((&p3), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_10;
		L_10 = fabs(((double)il2cpp_codegen_subtract(L_9, (1.0))));
		if ((((double)L_10) > ((double)(9.9999999999999998E-13))))
		{
			goto IL_00ef;
		}
	}
	{
		double L_11;
		L_11 = Vector3D_LengthSq_m216411FB00036916CB90867E008F49D4EF0E80B1((&p4), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = fabs(((double)il2cpp_codegen_subtract(L_11, (1.0))));
		if ((((double)L_12) > ((double)(9.9999999999999998E-13))))
		{
			goto IL_00ef;
		}
	}
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_13 = p3;
		double L_14;
		L_14 = Vector3D_Dot_mA28769CA15B693CBA9AEE261263896A3F256398A((&p2), L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_15;
		L_15 = fabs(L_14);
		if ((((double)L_15) >= ((double)(0.01))))
		{
			goto IL_00ef;
		}
	}
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_16 = p4;
		double L_17;
		L_17 = Vector3D_Dot_mA28769CA15B693CBA9AEE261263896A3F256398A((&p2), L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = fabs(L_17);
		if ((((double)L_18) >= ((double)(0.01))))
		{
			goto IL_00ef;
		}
	}
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_19 = p4;
		double L_20;
		L_20 = Vector3D_Dot_mA28769CA15B693CBA9AEE261263896A3F256398A((&p3), L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_21;
		L_21 = fabs(L_20);
		if ((!(((double)L_21) >= ((double)(0.01)))))
		{
			goto IL_00fa;
		}
	}

IL_00ef:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_22 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_22);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral161B9F12BD1C17D129479E1BC2EDE5D3DEC188EC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Da78U3D__ctor_m1A07F4B30475154A92384F665C022CDD5ABF24A0_RuntimeMethod_var)));
	}

IL_00fa:
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_23 = p0;
		__this->___U3DdE46U3D_0 = L_23;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_24 = p1;
		il2cpp_codegen_runtime_class_init_inline(Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_il2cpp_TypeInfo_var);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_25;
		L_25 = Vector3D_op_Division_mFAC794A77B924388D2ED32B989199D0A1D072046_inline(L_24, (2.0), NULL);
		__this->___U3DdE47U3D_1 = L_25;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_26 = p2;
		__this->___U3DdE48U3D_2 = L_26;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_27 = p3;
		__this->___U3DdE49U3D_3 = L_27;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_28 = p4;
		__this->___U3DdE5AU3D_4 = L_28;
		return;
	}
}
IL2CPP_EXTERN_C  void U3Da78U3D__ctor_m1A07F4B30475154A92384F665C022CDD5ABF24A0_AdjustorThunk (RuntimeObject* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p1, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p2, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p3, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p4, const RuntimeMethod* method)
{
	U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7*>(__this + _offset);
	U3Da78U3D__ctor_m1A07F4B30475154A92384F665C022CDD5ABF24A0(_thisAdjusted, p0, p1, p2, p3, p4, method);
}
// Microsoft.Geospatial.VectorMath.Vector3D =a78=::=ccff=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE U3Da78U3D_U3DccffU3D_mF94F355CC6844DD261BD59F3340732815C051376 (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = __this->___U3DdE46U3D_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE U3Da78U3D_U3DccffU3D_mF94F355CC6844DD261BD59F3340732815C051376_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7*>(__this + _offset);
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE _returnValue;
	_returnValue = U3Da78U3D_U3DccffU3D_mF94F355CC6844DD261BD59F3340732815C051376_inline(_thisAdjusted, method);
	return _returnValue;
}
// Microsoft.Geospatial.VectorMath.Vector3D =a78=::=ccf0=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE U3Da78U3D_U3Dccf0U3D_m72810293E80CA9D68858FC7C0257BBF8265BFDF1 (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0;
		L_0 = U3Da78U3D_U3Dccf1U3D_m3125D9F93CE3404F043C2058AD16A3E6A41A2B02_inline(__this, NULL);
		double L_1 = L_0.___X_7;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_2;
		L_2 = U3Da78U3D_U3Dccf1U3D_m3125D9F93CE3404F043C2058AD16A3E6A41A2B02_inline(__this, NULL);
		double L_3 = L_2.___Y_8;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_4;
		L_4 = U3Da78U3D_U3Dccf1U3D_m3125D9F93CE3404F043C2058AD16A3E6A41A2B02_inline(__this, NULL);
		double L_5 = L_4.___Z_9;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3D__ctor_m089D30E3C254B02097D9E58F833A0DAC855CE3E6((&L_6), ((double)il2cpp_codegen_multiply(L_1, (2.0))), ((double)il2cpp_codegen_multiply(L_3, (2.0))), ((double)il2cpp_codegen_multiply(L_5, (2.0))), /*hidden argument*/NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE U3Da78U3D_U3Dccf0U3D_m72810293E80CA9D68858FC7C0257BBF8265BFDF1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7*>(__this + _offset);
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE _returnValue;
	_returnValue = U3Da78U3D_U3Dccf0U3D_m72810293E80CA9D68858FC7C0257BBF8265BFDF1(_thisAdjusted, method);
	return _returnValue;
}
// Microsoft.Geospatial.VectorMath.Vector3D =a78=::=ccf1=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE U3Da78U3D_U3Dccf1U3D_m3125D9F93CE3404F043C2058AD16A3E6A41A2B02 (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = __this->___U3DdE47U3D_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE U3Da78U3D_U3Dccf1U3D_m3125D9F93CE3404F043C2058AD16A3E6A41A2B02_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7*>(__this + _offset);
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE _returnValue;
	_returnValue = U3Da78U3D_U3Dccf1U3D_m3125D9F93CE3404F043C2058AD16A3E6A41A2B02_inline(_thisAdjusted, method);
	return _returnValue;
}
// Microsoft.Geospatial.VectorMath.Vector3D =a78=::=ccf2=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE U3Da78U3D_U3Dccf2U3D_m3948C8FB4A28044E98CB085AB1AFEA9F4FC2E4B1 (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = __this->___U3DdE48U3D_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE U3Da78U3D_U3Dccf2U3D_m3948C8FB4A28044E98CB085AB1AFEA9F4FC2E4B1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7*>(__this + _offset);
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE _returnValue;
	_returnValue = U3Da78U3D_U3Dccf2U3D_m3948C8FB4A28044E98CB085AB1AFEA9F4FC2E4B1_inline(_thisAdjusted, method);
	return _returnValue;
}
// Microsoft.Geospatial.VectorMath.Vector3D =a78=::=ccf3=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE U3Da78U3D_U3Dccf3U3D_m5BF078FAE49C24AE65C3B4E384C437E7982D6874 (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = __this->___U3DdE49U3D_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE U3Da78U3D_U3Dccf3U3D_m5BF078FAE49C24AE65C3B4E384C437E7982D6874_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7*>(__this + _offset);
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE _returnValue;
	_returnValue = U3Da78U3D_U3Dccf3U3D_m5BF078FAE49C24AE65C3B4E384C437E7982D6874_inline(_thisAdjusted, method);
	return _returnValue;
}
// Microsoft.Geospatial.VectorMath.Vector3D =a78=::=ccf4=()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE U3Da78U3D_U3Dccf4U3D_m9B9B9AAC3F936C5800637568FA6EB64EDD347D34 (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = __this->___U3DdE5AU3D_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE U3Da78U3D_U3Dccf4U3D_m9B9B9AAC3F936C5800637568FA6EB64EDD347D34_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7*>(__this + _offset);
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE _returnValue;
	_returnValue = U3Da78U3D_U3Dccf4U3D_m9B9B9AAC3F936C5800637568FA6EB64EDD347D34_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean =a78=::=ccf5=(Microsoft.Geospatial.VectorMath.Vector3D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da78U3D_U3Dccf5U3D_mC7BF254FEB881799F53BD9DD197CC77ADE540AC2 (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = p0;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_1;
		L_1 = U3Da78U3D_U3DccffU3D_mF94F355CC6844DD261BD59F3340732815C051376_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_il2cpp_TypeInfo_var);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_2;
		L_2 = Vector3D_op_Subtraction_m31FAB3812ACF593B7AAD79A718523F0A6A867B77_inline(L_0, L_1, NULL);
		V_0 = L_2;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_3;
		L_3 = U3Da78U3D_U3Dccf2U3D_m3948C8FB4A28044E98CB085AB1AFEA9F4FC2E4B1_inline(__this, NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_4 = V_0;
		double L_5;
		L_5 = Vector3D_Dot_m519C38861792FEDA6CF1220E4D1D1488C455ECEB_inline(L_3, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = fabs(L_5);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_7;
		L_7 = U3Da78U3D_U3Dccf1U3D_m3125D9F93CE3404F043C2058AD16A3E6A41A2B02_inline(__this, NULL);
		double L_8 = L_7.___X_7;
		if ((!(((double)L_6) <= ((double)L_8))))
		{
			goto IL_006b;
		}
	}
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_9;
		L_9 = U3Da78U3D_U3Dccf3U3D_m5BF078FAE49C24AE65C3B4E384C437E7982D6874_inline(__this, NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = Vector3D_Dot_m519C38861792FEDA6CF1220E4D1D1488C455ECEB_inline(L_9, L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = fabs(L_11);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_13;
		L_13 = U3Da78U3D_U3Dccf1U3D_m3125D9F93CE3404F043C2058AD16A3E6A41A2B02_inline(__this, NULL);
		double L_14 = L_13.___Y_8;
		if ((!(((double)L_12) <= ((double)L_14))))
		{
			goto IL_006b;
		}
	}
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_15;
		L_15 = U3Da78U3D_U3Dccf4U3D_m9B9B9AAC3F936C5800637568FA6EB64EDD347D34_inline(__this, NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_16 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_il2cpp_TypeInfo_var);
		double L_17;
		L_17 = Vector3D_Dot_m519C38861792FEDA6CF1220E4D1D1488C455ECEB_inline(L_15, L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = fabs(L_17);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_19;
		L_19 = U3Da78U3D_U3Dccf1U3D_m3125D9F93CE3404F043C2058AD16A3E6A41A2B02_inline(__this, NULL);
		double L_20 = L_19.___Z_9;
		return (bool)((((int32_t)((!(((double)L_18) <= ((double)L_20)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_006b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool U3Da78U3D_U3Dccf5U3D_mC7BF254FEB881799F53BD9DD197CC77ADE540AC2_AdjustorThunk (RuntimeObject* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, const RuntimeMethod* method)
{
	U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7*>(__this + _offset);
	bool _returnValue;
	_returnValue = U3Da78U3D_U3Dccf5U3D_mC7BF254FEB881799F53BD9DD197CC77ADE540AC2(_thisAdjusted, p0, method);
	return _returnValue;
}
// System.Double =a78=::=ccf6=(Microsoft.Geospatial.VectorMath.Vector3D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3Da78U3D_U3Dccf6U3D_m0916A49E072AFE9EB3BE0EADA0CE394043D980A9 (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE V_0;
	memset((&V_0), 0, sizeof(V_0));
	double V_1 = 0.0;
	double V_2 = 0.0;
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = p0;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_1;
		L_1 = U3Da78U3D_U3DccffU3D_mF94F355CC6844DD261BD59F3340732815C051376_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_il2cpp_TypeInfo_var);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_2;
		L_2 = Vector3D_op_Subtraction_m31FAB3812ACF593B7AAD79A718523F0A6A867B77_inline(L_0, L_1, NULL);
		V_0 = L_2;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_3;
		L_3 = U3Da78U3D_U3Dccf2U3D_m3948C8FB4A28044E98CB085AB1AFEA9F4FC2E4B1_inline(__this, NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_4 = V_0;
		double L_5;
		L_5 = Vector3D_Dot_m519C38861792FEDA6CF1220E4D1D1488C455ECEB_inline(L_3, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = fabs(L_5);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_7;
		L_7 = U3Da78U3D_U3Dccf1U3D_m3125D9F93CE3404F043C2058AD16A3E6A41A2B02_inline(__this, NULL);
		double L_8 = L_7.___X_7;
		double L_9;
		L_9 = Math_Max_mD1AD971AB9981B8A59BC5B5BEB7DD6A5A5E82AD6((0.0), ((double)il2cpp_codegen_subtract(L_6, L_8)), NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_10;
		L_10 = U3Da78U3D_U3Dccf3U3D_m5BF078FAE49C24AE65C3B4E384C437E7982D6874_inline(__this, NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_11 = V_0;
		double L_12;
		L_12 = Vector3D_Dot_m519C38861792FEDA6CF1220E4D1D1488C455ECEB_inline(L_10, L_11, NULL);
		double L_13;
		L_13 = fabs(L_12);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_14;
		L_14 = U3Da78U3D_U3Dccf1U3D_m3125D9F93CE3404F043C2058AD16A3E6A41A2B02_inline(__this, NULL);
		double L_15 = L_14.___Y_8;
		double L_16;
		L_16 = Math_Max_mD1AD971AB9981B8A59BC5B5BEB7DD6A5A5E82AD6((0.0), ((double)il2cpp_codegen_subtract(L_13, L_15)), NULL);
		V_1 = L_16;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_17;
		L_17 = U3Da78U3D_U3Dccf4U3D_m9B9B9AAC3F936C5800637568FA6EB64EDD347D34_inline(__this, NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_18 = V_0;
		double L_19;
		L_19 = Vector3D_Dot_m519C38861792FEDA6CF1220E4D1D1488C455ECEB_inline(L_17, L_18, NULL);
		double L_20;
		L_20 = fabs(L_19);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_21;
		L_21 = U3Da78U3D_U3Dccf1U3D_m3125D9F93CE3404F043C2058AD16A3E6A41A2B02_inline(__this, NULL);
		double L_22 = L_21.___Z_9;
		double L_23;
		L_23 = Math_Max_mD1AD971AB9981B8A59BC5B5BEB7DD6A5A5E82AD6((0.0), ((double)il2cpp_codegen_subtract(L_20, L_22)), NULL);
		V_2 = L_23;
		double L_24 = L_9;
		double L_25 = V_1;
		double L_26 = V_1;
		double L_27 = V_2;
		double L_28 = V_2;
		return ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_24, L_24)), ((double)il2cpp_codegen_multiply(L_25, L_26)))), ((double)il2cpp_codegen_multiply(L_27, L_28))));
	}
}
IL2CPP_EXTERN_C  double U3Da78U3D_U3Dccf6U3D_m0916A49E072AFE9EB3BE0EADA0CE394043D980A9_AdjustorThunk (RuntimeObject* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, const RuntimeMethod* method)
{
	U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7*>(__this + _offset);
	double _returnValue;
	_returnValue = U3Da78U3D_U3Dccf6U3D_m0916A49E072AFE9EB3BE0EADA0CE394043D980A9(_thisAdjusted, p0, method);
	return _returnValue;
}
// System.Double =a78=::=ccf7=(Microsoft.Geospatial.VectorMath.Vector3D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3Da78U3D_U3Dccf7U3D_mC3AD800A7872F749B9DBFF5DC1395C86F9F66236 (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = p0;
		double L_1;
		L_1 = U3Da78U3D_U3Dccf6U3D_m0916A49E072AFE9EB3BE0EADA0CE394043D980A9(__this, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C  double U3Da78U3D_U3Dccf7U3D_mC3AD800A7872F749B9DBFF5DC1395C86F9F66236_AdjustorThunk (RuntimeObject* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, const RuntimeMethod* method)
{
	U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7*>(__this + _offset);
	double _returnValue;
	_returnValue = U3Da78U3D_U3Dccf7U3D_mC3AD800A7872F749B9DBFF5DC1395C86F9F66236(_thisAdjusted, p0, method);
	return _returnValue;
}
// System.Double =a78=::=ccf8=(Microsoft.Geospatial.VectorMath.Vector3D,Microsoft.Geospatial.VectorMath.Vector3D&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3Da78U3D_U3Dccf8U3D_mE44939D3B0DC9FF2FD06165680F78C4287631C25 (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE V_0;
	memset((&V_0), 0, sizeof(V_0));
	double V_1 = 0.0;
	int32_t V_2 = 0;
	double V_3 = 0.0;
	int32_t V_4 = 0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	int32_t V_7 = 0;
	double V_8 = 0.0;
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = p0;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_1;
		L_1 = U3Da78U3D_U3DccffU3D_mF94F355CC6844DD261BD59F3340732815C051376_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_il2cpp_TypeInfo_var);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_2;
		L_2 = Vector3D_op_Subtraction_m31FAB3812ACF593B7AAD79A718523F0A6A867B77_inline(L_0, L_1, NULL);
		V_0 = L_2;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_3;
		L_3 = U3Da78U3D_U3Dccf2U3D_m3948C8FB4A28044E98CB085AB1AFEA9F4FC2E4B1_inline(__this, NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_4 = V_0;
		double L_5;
		L_5 = Vector3D_Dot_m519C38861792FEDA6CF1220E4D1D1488C455ECEB_inline(L_3, L_4, NULL);
		double L_6 = L_5;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_7;
		L_7 = fabs(L_6);
		V_1 = L_7;
		int32_t L_8;
		L_8 = Math_Sign_mA4D918D42B753CFEF3AC049AEF14C7FDE07FFD7E(L_6, NULL);
		V_2 = L_8;
		double L_9 = V_1;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_10;
		L_10 = U3Da78U3D_U3Dccf1U3D_m3125D9F93CE3404F043C2058AD16A3E6A41A2B02_inline(__this, NULL);
		double L_11 = L_10.___X_7;
		double L_12;
		L_12 = Math_Max_mD1AD971AB9981B8A59BC5B5BEB7DD6A5A5E82AD6((0.0), ((double)il2cpp_codegen_subtract(L_9, L_11)), NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_13;
		L_13 = U3Da78U3D_U3Dccf3U3D_m5BF078FAE49C24AE65C3B4E384C437E7982D6874_inline(__this, NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_14 = V_0;
		double L_15;
		L_15 = Vector3D_Dot_m519C38861792FEDA6CF1220E4D1D1488C455ECEB_inline(L_13, L_14, NULL);
		double L_16 = L_15;
		double L_17;
		L_17 = fabs(L_16);
		V_3 = L_17;
		int32_t L_18;
		L_18 = Math_Sign_mA4D918D42B753CFEF3AC049AEF14C7FDE07FFD7E(L_16, NULL);
		V_4 = L_18;
		double L_19 = V_3;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_20;
		L_20 = U3Da78U3D_U3Dccf1U3D_m3125D9F93CE3404F043C2058AD16A3E6A41A2B02_inline(__this, NULL);
		double L_21 = L_20.___Y_8;
		double L_22;
		L_22 = Math_Max_mD1AD971AB9981B8A59BC5B5BEB7DD6A5A5E82AD6((0.0), ((double)il2cpp_codegen_subtract(L_19, L_21)), NULL);
		V_5 = L_22;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_23;
		L_23 = U3Da78U3D_U3Dccf4U3D_m9B9B9AAC3F936C5800637568FA6EB64EDD347D34_inline(__this, NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_24 = V_0;
		double L_25;
		L_25 = Vector3D_Dot_m519C38861792FEDA6CF1220E4D1D1488C455ECEB_inline(L_23, L_24, NULL);
		double L_26 = L_25;
		double L_27;
		L_27 = fabs(L_26);
		V_6 = L_27;
		int32_t L_28;
		L_28 = Math_Sign_mA4D918D42B753CFEF3AC049AEF14C7FDE07FFD7E(L_26, NULL);
		V_7 = L_28;
		double L_29 = V_6;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_30;
		L_30 = U3Da78U3D_U3Dccf1U3D_m3125D9F93CE3404F043C2058AD16A3E6A41A2B02_inline(__this, NULL);
		double L_31 = L_30.___Z_9;
		double L_32;
		L_32 = Math_Max_mD1AD971AB9981B8A59BC5B5BEB7DD6A5A5E82AD6((0.0), ((double)il2cpp_codegen_subtract(L_29, L_31)), NULL);
		V_8 = L_32;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* L_33 = p1;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_34;
		L_34 = U3Da78U3D_U3DccffU3D_mF94F355CC6844DD261BD59F3340732815C051376_inline(__this, NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_35;
		L_35 = U3Da78U3D_U3Dccf2U3D_m3948C8FB4A28044E98CB085AB1AFEA9F4FC2E4B1_inline(__this, NULL);
		double L_36 = V_1;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_37;
		L_37 = U3Da78U3D_U3Dccf1U3D_m3125D9F93CE3404F043C2058AD16A3E6A41A2B02_inline(__this, NULL);
		double L_38 = L_37.___X_7;
		double L_39;
		L_39 = Math_Min_m6F49B85AE4935E4AF3AB6128B3B5E55A6C4A1716(L_36, L_38, NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_40;
		L_40 = Vector3D_op_Multiply_m8F7375087CE226F2693DE34AE6F16EC20FE4EFCE_inline(L_35, L_39, NULL);
		int32_t L_41 = V_2;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_42;
		L_42 = Vector3D_op_Multiply_m8F7375087CE226F2693DE34AE6F16EC20FE4EFCE_inline(L_40, ((double)L_41), NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_43;
		L_43 = Vector3D_op_Addition_m979683491399744DD382B1D632407ED65878F710_inline(L_34, L_42, NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_44;
		L_44 = U3Da78U3D_U3Dccf3U3D_m5BF078FAE49C24AE65C3B4E384C437E7982D6874_inline(__this, NULL);
		double L_45 = V_3;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_46;
		L_46 = U3Da78U3D_U3Dccf1U3D_m3125D9F93CE3404F043C2058AD16A3E6A41A2B02_inline(__this, NULL);
		double L_47 = L_46.___Y_8;
		double L_48;
		L_48 = Math_Min_m6F49B85AE4935E4AF3AB6128B3B5E55A6C4A1716(L_45, L_47, NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_49;
		L_49 = Vector3D_op_Multiply_m8F7375087CE226F2693DE34AE6F16EC20FE4EFCE_inline(L_44, L_48, NULL);
		int32_t L_50 = V_4;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_51;
		L_51 = Vector3D_op_Multiply_m8F7375087CE226F2693DE34AE6F16EC20FE4EFCE_inline(L_49, ((double)L_50), NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_52;
		L_52 = Vector3D_op_Addition_m979683491399744DD382B1D632407ED65878F710_inline(L_43, L_51, NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_53;
		L_53 = U3Da78U3D_U3Dccf4U3D_m9B9B9AAC3F936C5800637568FA6EB64EDD347D34_inline(__this, NULL);
		double L_54 = V_6;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_55;
		L_55 = U3Da78U3D_U3Dccf1U3D_m3125D9F93CE3404F043C2058AD16A3E6A41A2B02_inline(__this, NULL);
		double L_56 = L_55.___Z_9;
		double L_57;
		L_57 = Math_Min_m6F49B85AE4935E4AF3AB6128B3B5E55A6C4A1716(L_54, L_56, NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_58;
		L_58 = Vector3D_op_Multiply_m8F7375087CE226F2693DE34AE6F16EC20FE4EFCE_inline(L_53, L_57, NULL);
		int32_t L_59 = V_7;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_60;
		L_60 = Vector3D_op_Multiply_m8F7375087CE226F2693DE34AE6F16EC20FE4EFCE_inline(L_58, ((double)L_59), NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_61;
		L_61 = Vector3D_op_Addition_m979683491399744DD382B1D632407ED65878F710_inline(L_52, L_60, NULL);
		*(Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE*)L_33 = L_61;
		double L_62 = L_12;
		double L_63 = V_5;
		double L_64 = V_5;
		double L_65 = V_8;
		double L_66 = V_8;
		return ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_62, L_62)), ((double)il2cpp_codegen_multiply(L_63, L_64)))), ((double)il2cpp_codegen_multiply(L_65, L_66))));
	}
}
IL2CPP_EXTERN_C  double U3Da78U3D_U3Dccf8U3D_mE44939D3B0DC9FF2FD06165680F78C4287631C25_AdjustorThunk (RuntimeObject* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* p1, const RuntimeMethod* method)
{
	U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7*>(__this + _offset);
	double _returnValue;
	_returnValue = U3Da78U3D_U3Dccf8U3D_mE44939D3B0DC9FF2FD06165680F78C4287631C25(_thisAdjusted, p0, p1, method);
	return _returnValue;
}
// System.Double =a78=::=ccf9=(Microsoft.Geospatial.VectorMath.Vector3D,Microsoft.Geospatial.VectorMath.Vector3D&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3Da78U3D_U3Dccf9U3D_mAE94BEFCF0E36A33817898BE416FA6DF148B6421 (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = p0;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* L_1 = p1;
		double L_2;
		L_2 = U3Da78U3D_U3Dccf8U3D_mE44939D3B0DC9FF2FD06165680F78C4287631C25(__this, L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = sqrt(L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C  double U3Da78U3D_U3Dccf9U3D_mAE94BEFCF0E36A33817898BE416FA6DF148B6421_AdjustorThunk (RuntimeObject* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* p1, const RuntimeMethod* method)
{
	U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7*>(__this + _offset);
	double _returnValue;
	_returnValue = U3Da78U3D_U3Dccf9U3D_mAE94BEFCF0E36A33817898BE416FA6DF148B6421(_thisAdjusted, p0, p1, method);
	return _returnValue;
}
// System.Boolean =a78=::=cc0A=(Microsoft.Geospatial.VectorMath.Ray3D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da78U3D_U3Dcc0AU3D_m9CAE090A04AD518BB5320820D095190B4295D37A (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, Ray3D_t0684CF26FA625F1962485FFFA4B822789BB532D0 p0, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		Ray3D_t0684CF26FA625F1962485FFFA4B822789BB532D0 L_0 = p0;
		bool L_1;
		L_1 = U3Da78U3D_U3Dcc0BU3D_m1F26AC548F9FBDC92B608A700F7B97ADD24CBD71(__this, L_0, (0.0), (&V_0), NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool U3Da78U3D_U3Dcc0AU3D_m9CAE090A04AD518BB5320820D095190B4295D37A_AdjustorThunk (RuntimeObject* __this, Ray3D_t0684CF26FA625F1962485FFFA4B822789BB532D0 p0, const RuntimeMethod* method)
{
	U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7*>(__this + _offset);
	bool _returnValue;
	_returnValue = U3Da78U3D_U3Dcc0AU3D_m9CAE090A04AD518BB5320820D095190B4295D37A(_thisAdjusted, p0, method);
	return _returnValue;
}
// System.Boolean =a78=::=cc0a=(Microsoft.Geospatial.VectorMath.Ray3D,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da78U3D_U3Dcc0aU3D_m124AD58783E32002CF87F0B5146D78E3EAC72CE8 (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, Ray3D_t0684CF26FA625F1962485FFFA4B822789BB532D0 p0, double* p1, const RuntimeMethod* method) 
{
	{
		Ray3D_t0684CF26FA625F1962485FFFA4B822789BB532D0 L_0 = p0;
		double* L_1 = p1;
		bool L_2;
		L_2 = U3Da78U3D_U3Dcc0BU3D_m1F26AC548F9FBDC92B608A700F7B97ADD24CBD71(__this, L_0, (0.0), L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool U3Da78U3D_U3Dcc0aU3D_m124AD58783E32002CF87F0B5146D78E3EAC72CE8_AdjustorThunk (RuntimeObject* __this, Ray3D_t0684CF26FA625F1962485FFFA4B822789BB532D0 p0, double* p1, const RuntimeMethod* method)
{
	U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7*>(__this + _offset);
	bool _returnValue;
	_returnValue = U3Da78U3D_U3Dcc0aU3D_m124AD58783E32002CF87F0B5146D78E3EAC72CE8(_thisAdjusted, p0, p1, method);
	return _returnValue;
}
// System.Boolean =a78=::=cc0B=(Microsoft.Geospatial.VectorMath.Ray3D,System.Double,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da78U3D_U3Dcc0BU3D_m1F26AC548F9FBDC92B608A700F7B97ADD24CBD71 (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, Ray3D_t0684CF26FA625F1962485FFFA4B822789BB532D0 p0, double p1, double* p2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3DU5BU5D_t15F77BC4F46CBA550B1E10415CFC6D83ED3662C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3DU5BU5D_t15F77BC4F46CBA550B1E10415CFC6D83ED3662C6* V_3 = NULL;
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE V_4;
	memset((&V_4), 0, sizeof(V_4));
	double V_5 = 0.0;
	double V_6 = 0.0;
	bool V_7 = false;
	int32_t V_8 = 0;
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE V_9;
	memset((&V_9), 0, sizeof(V_9));
	double V_10 = 0.0;
	double V_11 = 0.0;
	double V_12 = 0.0;
	double V_13 = 0.0;
	double V_14 = 0.0;
	double V_15 = 0.0;
	double V_16 = 0.0;
	double* G_B12_0 = NULL;
	double* G_B11_0 = NULL;
	double G_B13_0 = 0.0;
	double* G_B13_1 = NULL;
	{
		V_0 = (9.9999999999999995E-07);
		il2cpp_codegen_runtime_class_init_inline(Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_il2cpp_TypeInfo_var);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = ((Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_StaticFields*)il2cpp_codegen_static_fields_for(Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_il2cpp_TypeInfo_var))->___MaxValue_5;
		V_1 = L_0;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_1 = ((Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_StaticFields*)il2cpp_codegen_static_fields_for(Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_il2cpp_TypeInfo_var))->___MinValue_6;
		V_2 = L_1;
		Vector3DU5BU5D_t15F77BC4F46CBA550B1E10415CFC6D83ED3662C6* L_2 = (Vector3DU5BU5D_t15F77BC4F46CBA550B1E10415CFC6D83ED3662C6*)(Vector3DU5BU5D_t15F77BC4F46CBA550B1E10415CFC6D83ED3662C6*)SZArrayNew(Vector3DU5BU5D_t15F77BC4F46CBA550B1E10415CFC6D83ED3662C6_il2cpp_TypeInfo_var, (uint32_t)3);
		Vector3DU5BU5D_t15F77BC4F46CBA550B1E10415CFC6D83ED3662C6* L_3 = L_2;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_4;
		L_4 = U3Da78U3D_U3Dccf2U3D_m3948C8FB4A28044E98CB085AB1AFEA9F4FC2E4B1_inline(__this, NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE)L_4);
		Vector3DU5BU5D_t15F77BC4F46CBA550B1E10415CFC6D83ED3662C6* L_5 = L_3;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_6;
		L_6 = U3Da78U3D_U3Dccf3U3D_m5BF078FAE49C24AE65C3B4E384C437E7982D6874_inline(__this, NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE)L_6);
		Vector3DU5BU5D_t15F77BC4F46CBA550B1E10415CFC6D83ED3662C6* L_7 = L_5;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_8;
		L_8 = U3Da78U3D_U3Dccf4U3D_m9B9B9AAC3F936C5800637568FA6EB64EDD347D34_inline(__this, NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE)L_8);
		V_3 = L_7;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_9;
		L_9 = U3Da78U3D_U3Dccf1U3D_m3125D9F93CE3404F043C2058AD16A3E6A41A2B02_inline(__this, NULL);
		double L_10 = p1;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_11;
		L_11 = Vector3D_op_Addition_mC6EB2C1437A6C5487604125706FA82628EE89E07_inline(L_9, L_10, NULL);
		V_4 = L_11;
		V_8 = 0;
		goto IL_017b;
	}

IL_005a:
	{
		Vector3DU5BU5D_t15F77BC4F46CBA550B1E10415CFC6D83ED3662C6* L_12 = V_3;
		int32_t L_13 = V_8;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_9 = L_15;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_16 = V_9;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_17;
		L_17 = U3Da78U3D_U3DccffU3D_mF94F355CC6844DD261BD59F3340732815C051376_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = Vector3D_Dot_m519C38861792FEDA6CF1220E4D1D1488C455ECEB_inline(L_16, L_17, NULL);
		V_10 = L_18;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_19 = V_9;
		Ray3D_t0684CF26FA625F1962485FFFA4B822789BB532D0 L_20 = p0;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_21 = L_20.___Direction_2;
		double L_22;
		L_22 = Vector3D_Dot_m519C38861792FEDA6CF1220E4D1D1488C455ECEB_inline(L_19, L_21, NULL);
		V_11 = L_22;
		double L_23 = V_11;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_24;
		L_24 = fabs(L_23);
		double L_25 = V_0;
		if ((!(((double)L_24) < ((double)L_25))))
		{
			goto IL_00f1;
		}
	}
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_26 = V_9;
		Ray3D_t0684CF26FA625F1962485FFFA4B822789BB532D0 L_27 = p0;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_28 = L_27.___Origin_1;
		il2cpp_codegen_runtime_class_init_inline(Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_il2cpp_TypeInfo_var);
		double L_29;
		L_29 = Vector3D_Dot_m519C38861792FEDA6CF1220E4D1D1488C455ECEB_inline(L_26, L_28, NULL);
		V_12 = L_29;
		double L_30 = V_12;
		double L_31 = V_10;
		int32_t L_32 = V_8;
		double L_33;
		L_33 = Vector3D_get_Item_mEC2503D6BD5EAEDC27EDB1EDBCDBFDAFC7DDE665((&V_4), L_32, NULL);
		if ((!(((double)L_30) <= ((double)((double)il2cpp_codegen_add(L_31, L_33))))))
		{
			goto IL_00e4;
		}
	}
	{
		double L_34 = V_12;
		double L_35 = V_10;
		int32_t L_36 = V_8;
		double L_37;
		L_37 = Vector3D_get_Item_mEC2503D6BD5EAEDC27EDB1EDBCDBFDAFC7DDE665((&V_4), L_36, NULL);
		if ((!(((double)L_34) >= ((double)((double)il2cpp_codegen_subtract(L_35, L_37))))))
		{
			goto IL_00e4;
		}
	}
	{
		int32_t L_38 = V_8;
		Vector3D_set_Item_m7F1C15D41CF9E6BDF31DBDDD0068308E63F1C711((&V_1), L_38, (-1.7976931348623157E+308), NULL);
		int32_t L_39 = V_8;
		Vector3D_set_Item_m7F1C15D41CF9E6BDF31DBDDD0068308E63F1C711((&V_2), L_39, (1.7976931348623157E+308), NULL);
		goto IL_0175;
	}

IL_00e4:
	{
		double* L_40 = p2;
		*((double*)L_40) = (double)(0.0);
		return (bool)0;
	}

IL_00f1:
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_41 = V_9;
		Ray3D_t0684CF26FA625F1962485FFFA4B822789BB532D0 L_42 = p0;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_43 = L_42.___Origin_1;
		il2cpp_codegen_runtime_class_init_inline(Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_il2cpp_TypeInfo_var);
		double L_44;
		L_44 = Vector3D_Dot_m519C38861792FEDA6CF1220E4D1D1488C455ECEB_inline(L_41, L_43, NULL);
		V_13 = L_44;
		double L_45 = V_10;
		int32_t L_46 = V_8;
		double L_47;
		L_47 = Vector3D_get_Item_mEC2503D6BD5EAEDC27EDB1EDBCDBFDAFC7DDE665((&V_4), L_46, NULL);
		double L_48 = V_10;
		int32_t L_49 = V_8;
		double L_50;
		L_50 = Vector3D_get_Item_mEC2503D6BD5EAEDC27EDB1EDBCDBFDAFC7DDE665((&V_4), L_49, NULL);
		V_14 = ((double)il2cpp_codegen_add(((-L_48)), L_50));
		double L_51 = V_13;
		double L_52 = V_11;
		V_15 = ((double)(((double)il2cpp_codegen_subtract(((-((double)il2cpp_codegen_subtract(((-L_45)), L_47)))), L_51))/L_52));
		double L_53 = V_14;
		double L_54 = V_13;
		double L_55 = V_11;
		V_16 = ((double)(((double)il2cpp_codegen_subtract(((-L_53)), L_54))/L_55));
		int32_t L_56 = V_8;
		double L_57 = V_15;
		double L_58 = V_16;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_59;
		L_59 = Math_Min_m6F49B85AE4935E4AF3AB6128B3B5E55A6C4A1716(L_57, L_58, NULL);
		Vector3D_set_Item_m7F1C15D41CF9E6BDF31DBDDD0068308E63F1C711((&V_1), L_56, L_59, NULL);
		int32_t L_60 = V_8;
		double L_61 = V_15;
		double L_62 = V_16;
		double L_63;
		L_63 = Math_Max_mD1AD971AB9981B8A59BC5B5BEB7DD6A5A5E82AD6(L_61, L_62, NULL);
		Vector3D_set_Item_m7F1C15D41CF9E6BDF31DBDDD0068308E63F1C711((&V_2), L_60, L_63, NULL);
		int32_t L_64 = V_8;
		double L_65;
		L_65 = Vector3D_get_Item_mEC2503D6BD5EAEDC27EDB1EDBCDBFDAFC7DDE665((&V_2), L_64, NULL);
		if ((!(((double)L_65) < ((double)(0.0)))))
		{
			goto IL_0175;
		}
	}
	{
		double* L_66 = p2;
		*((double*)L_66) = (double)(0.0);
		return (bool)0;
	}

IL_0175:
	{
		int32_t L_67 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_67, 1));
	}

IL_017b:
	{
		int32_t L_68 = V_8;
		if ((((int32_t)L_68) < ((int32_t)3)))
		{
			goto IL_005a;
		}
	}
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_69 = V_1;
		double L_70 = L_69.___X_7;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_71 = V_1;
		double L_72 = L_71.___Y_8;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_73;
		L_73 = Math_Max_mD1AD971AB9981B8A59BC5B5BEB7DD6A5A5E82AD6(L_70, L_72, NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_74 = V_1;
		double L_75 = L_74.___Z_9;
		double L_76;
		L_76 = Math_Max_mD1AD971AB9981B8A59BC5B5BEB7DD6A5A5E82AD6(L_73, L_75, NULL);
		V_5 = L_76;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_77 = V_2;
		double L_78 = L_77.___X_7;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_79 = V_2;
		double L_80 = L_79.___Y_8;
		double L_81;
		L_81 = Math_Min_m6F49B85AE4935E4AF3AB6128B3B5E55A6C4A1716(L_78, L_80, NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_82 = V_2;
		double L_83 = L_82.___Z_9;
		double L_84;
		L_84 = Math_Min_m6F49B85AE4935E4AF3AB6128B3B5E55A6C4A1716(L_81, L_83, NULL);
		V_6 = L_84;
		double L_85 = V_5;
		double L_86 = V_6;
		V_7 = (bool)((((int32_t)((!(((double)L_85) <= ((double)L_86)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		double* L_87 = p2;
		bool L_88 = V_7;
		G_B11_0 = L_87;
		if (L_88)
		{
			G_B12_0 = L_87;
			goto IL_01da;
		}
	}
	{
		G_B13_0 = (0.0);
		G_B13_1 = G_B11_0;
		goto IL_01ea;
	}

IL_01da:
	{
		double L_89 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_90;
		L_90 = Math_Max_mD1AD971AB9981B8A59BC5B5BEB7DD6A5A5E82AD6((0.0), L_89, NULL);
		G_B13_0 = L_90;
		G_B13_1 = G_B12_0;
	}

IL_01ea:
	{
		*((double*)G_B13_1) = (double)G_B13_0;
		bool L_91 = V_7;
		return L_91;
	}
}
IL2CPP_EXTERN_C  bool U3Da78U3D_U3Dcc0BU3D_m1F26AC548F9FBDC92B608A700F7B97ADD24CBD71_AdjustorThunk (RuntimeObject* __this, Ray3D_t0684CF26FA625F1962485FFFA4B822789BB532D0 p0, double p1, double* p2, const RuntimeMethod* method)
{
	U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7*>(__this + _offset);
	bool _returnValue;
	_returnValue = U3Da78U3D_U3Dcc0BU3D_m1F26AC548F9FBDC92B608A700F7B97ADD24CBD71(_thisAdjusted, p0, p1, p2, method);
	return _returnValue;
}
// System.String =a78=::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3Da78U3D_ToString_m213AE8F62B0BCE2488DEC5A4D3E7840E4B4D5F73 (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C05221DA62C53352B72B78E3520059C19795353);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_2;
		L_2 = U3Da78U3D_U3DccffU3D_mF94F355CC6844DD261BD59F3340732815C051376_inline(__this, NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_3 = L_2;
		RuntimeObject* L_4 = Box(Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_6;
		L_6 = U3Da78U3D_U3Dccf0U3D_m72810293E80CA9D68858FC7C0257BBF8265BFDF1(__this, NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_7 = L_6;
		RuntimeObject* L_8 = Box(Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_10;
		L_10 = U3Da78U3D_U3Dccf2U3D_m3948C8FB4A28044E98CB085AB1AFEA9F4FC2E4B1_inline(__this, NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_11 = L_10;
		RuntimeObject* L_12 = Box(Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_14;
		L_14 = U3Da78U3D_U3Dccf3U3D_m5BF078FAE49C24AE65C3B4E384C437E7982D6874_inline(__this, NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_15 = L_14;
		RuntimeObject* L_16 = Box(Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_18;
		L_18 = U3Da78U3D_U3Dccf4U3D_m9B9B9AAC3F936C5800637568FA6EB64EDD347D34_inline(__this, NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_19 = L_18;
		RuntimeObject* L_20 = Box(Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_20);
		String_t* L_21;
		L_21 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteral6C05221DA62C53352B72B78E3520059C19795353, L_17, NULL);
		return L_21;
	}
}
IL2CPP_EXTERN_C  String_t* U3Da78U3D_ToString_m213AE8F62B0BCE2488DEC5A4D3E7840E4B4D5F73_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = U3Da78U3D_ToString_m213AE8F62B0BCE2488DEC5A4D3E7840E4B4D5F73(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean =a78=::Equals(=a78=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da78U3D_Equals_m9ACC20703E916DC05A493ABD0CF7DA2FE44A163D (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7 ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0;
		L_0 = U3Da78U3D_U3DccffU3D_mF94F355CC6844DD261BD59F3340732815C051376_inline(__this, NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_1;
		L_1 = U3Da78U3D_U3DccffU3D_mF94F355CC6844DD261BD59F3340732815C051376_inline((&___other0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Vector3D_op_Equality_m46109FC0F31174D38098EC0D6BEB613A7A7828E6_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0063;
		}
	}
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_3;
		L_3 = U3Da78U3D_U3Dccf0U3D_m72810293E80CA9D68858FC7C0257BBF8265BFDF1(__this, NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_4;
		L_4 = U3Da78U3D_U3Dccf0U3D_m72810293E80CA9D68858FC7C0257BBF8265BFDF1((&___other0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Vector3D_op_Equality_m46109FC0F31174D38098EC0D6BEB613A7A7828E6_inline(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_6;
		L_6 = U3Da78U3D_U3Dccf2U3D_m3948C8FB4A28044E98CB085AB1AFEA9F4FC2E4B1_inline(__this, NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_7;
		L_7 = U3Da78U3D_U3Dccf2U3D_m3948C8FB4A28044E98CB085AB1AFEA9F4FC2E4B1_inline((&___other0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Vector3D_op_Equality_m46109FC0F31174D38098EC0D6BEB613A7A7828E6_inline(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_0063;
		}
	}
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_9;
		L_9 = U3Da78U3D_U3Dccf3U3D_m5BF078FAE49C24AE65C3B4E384C437E7982D6874_inline(__this, NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_10;
		L_10 = U3Da78U3D_U3Dccf3U3D_m5BF078FAE49C24AE65C3B4E384C437E7982D6874_inline((&___other0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Vector3D_op_Equality_m46109FC0F31174D38098EC0D6BEB613A7A7828E6_inline(L_9, L_10, NULL);
		if (!L_11)
		{
			goto IL_0063;
		}
	}
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_12;
		L_12 = U3Da78U3D_U3Dccf4U3D_m9B9B9AAC3F936C5800637568FA6EB64EDD347D34_inline(__this, NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_13;
		L_13 = U3Da78U3D_U3Dccf4U3D_m9B9B9AAC3F936C5800637568FA6EB64EDD347D34_inline((&___other0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Vector3D_op_Equality_m46109FC0F31174D38098EC0D6BEB613A7A7828E6_inline(L_12, L_13, NULL);
		return L_14;
	}

IL_0063:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool U3Da78U3D_Equals_m9ACC20703E916DC05A493ABD0CF7DA2FE44A163D_AdjustorThunk (RuntimeObject* __this, U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7 ___other0, const RuntimeMethod* method)
{
	U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7*>(__this + _offset);
	bool _returnValue;
	_returnValue = U3Da78U3D_Equals_m9ACC20703E916DC05A493ABD0CF7DA2FE44A163D(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean =a78=::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da78U3D_Equals_m4BACA3409978E730634566DBAF8E68A4C4FCD4DD (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		V_0 = ((*(U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7*)((U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7*)(U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7*)UnBox(L_1, U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7_il2cpp_TypeInfo_var))));
		U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7 L_2 = V_0;
		bool L_3;
		L_3 = U3Da78U3D_Equals_m9ACC20703E916DC05A493ABD0CF7DA2FE44A163D(__this, L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool U3Da78U3D_Equals_m4BACA3409978E730634566DBAF8E68A4C4FCD4DD_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7*>(__this + _offset);
	bool _returnValue;
	_returnValue = U3Da78U3D_Equals_m4BACA3409978E730634566DBAF8E68A4C4FCD4DD(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 =a78=::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3Da78U3D_GetHashCode_m2E466008B95EA78C70FE939EB33F3FB9686E886F (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, const RuntimeMethod* method) 
{
	Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0;
		L_0 = U3Da78U3D_U3DccffU3D_mF94F355CC6844DD261BD59F3340732815C051376_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Vector3D_GetHashCode_mE893D6FADFCA4514DDD9C05E9725A5DCE7B9344C((&V_0), NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_2;
		L_2 = U3Da78U3D_U3Dccf0U3D_m72810293E80CA9D68858FC7C0257BBF8265BFDF1(__this, NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Vector3D_GetHashCode_mE893D6FADFCA4514DDD9C05E9725A5DCE7B9344C((&V_0), NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_4;
		L_4 = U3Da78U3D_U3Dccf2U3D_m3948C8FB4A28044E98CB085AB1AFEA9F4FC2E4B1_inline(__this, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = Vector3D_GetHashCode_mE893D6FADFCA4514DDD9C05E9725A5DCE7B9344C((&V_0), NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_6;
		L_6 = U3Da78U3D_U3Dccf3U3D_m5BF078FAE49C24AE65C3B4E384C437E7982D6874_inline(__this, NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = Vector3D_GetHashCode_mE893D6FADFCA4514DDD9C05E9725A5DCE7B9344C((&V_0), NULL);
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_8;
		L_8 = U3Da78U3D_U3Dccf4U3D_m9B9B9AAC3F936C5800637568FA6EB64EDD347D34_inline(__this, NULL);
		V_0 = L_8;
		int32_t L_9;
		L_9 = Vector3D_GetHashCode_mE893D6FADFCA4514DDD9C05E9725A5DCE7B9344C((&V_0), NULL);
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_1^L_3))^L_5))^L_7))^L_9));
	}
}
IL2CPP_EXTERN_C  int32_t U3Da78U3D_GetHashCode_m2E466008B95EA78C70FE939EB33F3FB9686E886F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = U3Da78U3D_GetHashCode_m2E466008B95EA78C70FE939EB33F3FB9686E886F(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean =a78=::op_Equality(=a78=,=a78=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da78U3D_op_Equality_mCA2106953CAEF26DA245331412AFB176759D54D7 (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7 p0, U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7 p1, const RuntimeMethod* method) 
{
	{
		U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7 L_0 = p1;
		bool L_1;
		L_1 = U3Da78U3D_Equals_m9ACC20703E916DC05A493ABD0CF7DA2FE44A163D((&p0), L_0, NULL);
		return L_1;
	}
}
// System.Boolean =a78=::op_Inequality(=a78=,=a78=)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Da78U3D_op_Inequality_mFEB5611FAAB154B1511C971E5C3D44D63283BB21 (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7 p0, U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7 p1, const RuntimeMethod* method) 
{
	{
		U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7 L_0 = p0;
		U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7 L_1 = p1;
		bool L_2;
		L_2 = U3Da78U3D_op_Equality_mCA2106953CAEF26DA245331412AFB176759D54D7(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t U3Da72U3D_U3DcccEU3D_m206CEA274B81097FECBCA554227FF9D18492014B_inline (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3DdE4CU3D_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t U3Da72U3D_U3DcccDU3D_m8BD6515B7F78AA702084436298F0821366DF483A_inline (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3DdE4bU3D_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* U3Da72U3D_U3DcccFU3D_mEC4BF7A871F87E7773F1772BE28B623F1DE69DB7_inline (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, const RuntimeMethod* method) 
{
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = __this->___U3DdE4cU3D_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Da72U3D_U3DcccdU3D_m07ADE7D20F3502511CEE782FB55F604720E184B3_inline (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, int32_t p0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = p0;
		__this->___U3DdE4bU3D_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Da72U3D_U3DccceU3D_mE9A72A4E77E1119BF727DFB1AAD62EC005971C6D_inline (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, int32_t p0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = p0;
		__this->___U3DdE4CU3D_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Da72U3D_U3DcccfU3D_m6C8385E491BEDDD10A6DE674A8DD11C54F12E617_inline (U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* p0, const RuntimeMethod* method) 
{
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = p0;
		__this->___U3DdE4cU3D_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3DdE4cU3D_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t U3Da8FU3D_U3Dcc6FU3D_m1684DC7C36C51B01B5C703AAFCDFFDD40D4E8B4F_inline (U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3DdE57U3D_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Dba10U3D_U3Dcec1U3D_mFE598B342E14D7DD8806A5DEA1D578B79F53E607_inline (U3Dba10U3D_tB4E39C735B5CE1F4F0BD0E3094BA8F4A0DB3765A* __this, double p0, const RuntimeMethod* method) 
{
	{
		double L_0 = p0;
		__this->___U3DdeCFU3D_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Dba10U3D_U3DcecfU3D_mBEBEF567FFF40F9C7A58409866D369236F7439CF_inline (U3Dba10U3D_tB4E39C735B5CE1F4F0BD0E3094BA8F4A0DB3765A* __this, int32_t p0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = p0;
		__this->___U3DdeCeU3D_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* U3Da8FU3D_U3Dcc6EU3D_mBB69AB7F608B84B329D1B1588B12E7703C637829_inline (U3Da8FU3D_tACC77530BF7AF15FE05ABFA13399D9E9355026B3* __this, const RuntimeMethod* method) 
{
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = __this->___U3DdE56U3D_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline (double* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		double L_0 = *((double*)__this);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline(L_0, NULL);
		V_0 = L_1;
		int64_t L_2 = V_0;
		if ((((int64_t)((int64_t)(((int64_t)il2cpp_codegen_subtract(L_2, ((int64_t)1)))&((int64_t)(std::numeric_limits<int64_t>::max)())))) < ((int64_t)((int64_t)9218868437227405312LL))))
		{
			goto IL_002d;
		}
	}
	{
		int64_t L_3 = V_0;
		V_0 = ((int64_t)(L_3&((int64_t)9218868437227405312LL)));
	}

IL_002d:
	{
		int64_t L_4 = V_0;
		int64_t L_5 = V_0;
		return ((int32_t)(((int32_t)L_4)^((int32_t)((int64_t)(L_5>>((int32_t)32))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double U3Da75U3D_U3DccEAU3D_m2A0B4C60D26E1851C2503E37B4B909E23A653B44_inline (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3DdBEbU3D_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Da75U3D_U3DccEaU3D_mADFC1F8E7CFE3F3686C325442574CA7B2A2364B9_inline (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, double p0, const RuntimeMethod* method) 
{
	{
		double L_0 = p0;
		__this->___U3DdBEbU3D_15 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double U3Da75U3D_U3DccEBU3D_mF359D3692FA7E2DD4168535819902EB710FF5B85_inline (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3DdBECU3D_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Da75U3D_U3DccEbU3D_m010FB09878E2E9D14E248A36621C1C8BCEA90882_inline (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, double p0, const RuntimeMethod* method) 
{
	{
		double L_0 = p0;
		__this->___U3DdBECU3D_16 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double U3Da75U3D_U3DccECU3D_mB98CE43F9CF5CEF5FDEFEA2579C9902C74D27D08_inline (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3DdBEcU3D_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Da75U3D_U3DccEcU3D_m874EA69FFCB99888094B324AF522A4009F9FE100_inline (U3Da75U3D_t0229CDDB10A3A86BC06EAAC0DF53E917CFCC1DFC* __this, double p0, const RuntimeMethod* method) 
{
	{
		double L_0 = p0;
		__this->___U3DdBEcU3D_17 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE Vector3D_Subtract_mE2AD6B18714D2AA7E3A82A7B82FF98709B61F2FF_inline (Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* ___left0, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* ___right1, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* L_0 = ___left0;
		double L_1 = L_0->___X_7;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* L_2 = ___right1;
		double L_3 = L_2->___X_7;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* L_4 = ___left0;
		double L_5 = L_4->___Y_8;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* L_6 = ___right1;
		double L_7 = L_6->___Y_8;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* L_8 = ___left0;
		double L_9 = L_8->___Z_9;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* L_10 = ___right1;
		double L_11 = L_10->___Z_9;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3D__ctor_m089D30E3C254B02097D9E58F833A0DAC855CE3E6((&L_12), ((double)il2cpp_codegen_subtract(L_1, L_3)), ((double)il2cpp_codegen_subtract(L_5, L_7)), ((double)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE Vector3D_Cross_m93B93E940A2EFC94556E86F7D9DC00DE8D4025DB_inline (Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* ___a0, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* ___b1, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* L_0 = ___a0;
		double L_1 = L_0->___Y_8;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* L_2 = ___b1;
		double L_3 = L_2->___Z_9;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* L_4 = ___a0;
		double L_5 = L_4->___Z_9;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* L_6 = ___b1;
		double L_7 = L_6->___Y_8;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* L_8 = ___a0;
		double L_9 = L_8->___Z_9;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* L_10 = ___b1;
		double L_11 = L_10->___X_7;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* L_12 = ___a0;
		double L_13 = L_12->___X_7;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* L_14 = ___b1;
		double L_15 = L_14->___Z_9;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* L_16 = ___a0;
		double L_17 = L_16->___X_7;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* L_18 = ___b1;
		double L_19 = L_18->___Y_8;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* L_20 = ___a0;
		double L_21 = L_20->___Y_8;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* L_22 = ___b1;
		double L_23 = L_22->___X_7;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3D__ctor_m089D30E3C254B02097D9E58F833A0DAC855CE3E6((&L_24), ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_1, L_3)), ((double)il2cpp_codegen_multiply(L_5, L_7)))), ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_9, L_11)), ((double)il2cpp_codegen_multiply(L_13, L_15)))), ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_17, L_19)), ((double)il2cpp_codegen_multiply(L_21, L_23)))), /*hidden argument*/NULL);
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Vector3D_Dot_m69F3F42511544AC5B61669DB5CD6F7BB48DF95A3_inline (Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* ___left0, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* ___right1, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* L_0 = ___left0;
		double L_1 = L_0->___X_7;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* L_2 = ___right1;
		double L_3 = L_2->___X_7;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* L_4 = ___left0;
		double L_5 = L_4->___Y_8;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* L_6 = ___right1;
		double L_7 = L_6->___Y_8;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* L_8 = ___left0;
		double L_9 = L_8->___Z_9;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE* L_10 = ___right1;
		double L_11 = L_10->___Z_9;
		return ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_1, L_3)), ((double)il2cpp_codegen_multiply(L_5, L_7)))), ((double)il2cpp_codegen_multiply(L_9, L_11))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Plane3D_get_A_m9FE3C792A2473D3CE2559FF69B38CCED7FB47F51_inline (Plane3D_t9930B95330F63B305DC3A12F4763038EDBEBD7B0* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CAU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Plane3D_get_B_mBBBDDA16D982F03642A38F8825E1EF4AAE04B259_inline (Plane3D_t9930B95330F63B305DC3A12F4763038EDBEBD7B0* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CBU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Plane3D_get_C_m80C61B3CB7D816C9798E08B34AF26BA784C0E144_inline (Plane3D_t9930B95330F63B305DC3A12F4763038EDBEBD7B0* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CCU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Da76U3D_U3DccFFU3D_m659EA25006D2368DAA7CF110BF5A3ED4B91010D7_inline (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, double p0, const RuntimeMethod* method) 
{
	{
		double L_0 = p0;
		__this->___U3DdE4dU3D_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double U3Da76U3D_U3DccFeU3D_m7D44F9F8F9F3660D339F63195C713C03408B2F04_inline (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3DdE4dU3D_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE Vector3D_op_Division_mFAC794A77B924388D2ED32B989199D0A1D072046_inline (Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___left0, double ___right1, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = ___left0;
		double L_1 = L_0.___X_7;
		double L_2 = ___right1;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_3 = ___left0;
		double L_4 = L_3.___Y_8;
		double L_5 = ___right1;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_6 = ___left0;
		double L_7 = L_6.___Z_9;
		double L_8 = ___right1;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3D__ctor_m089D30E3C254B02097D9E58F833A0DAC855CE3E6((&L_9), ((double)(L_1/L_2)), ((double)(L_4/L_5)), ((double)(L_7/L_8)), /*hidden argument*/NULL);
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Da76U3D_U3DccF0U3D_m2FF73BDAEA986314BCAD99B3C16473DC8B69203C_inline (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = p0;
		__this->___U3DdE4EU3D_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE U3Da76U3D_U3DccFfU3D_m2C12A41DFFE6732A4D77900E186B2DCB6A2B49ED_inline (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = __this->___U3DdE4EU3D_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Da76U3D_U3DccFEU3D_m33BF480B0A9D1AB1382224ADCB12D1414EB41E68_inline (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* p0, const RuntimeMethod* method) 
{
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_0 = p0;
		__this->___U3DdE4DU3D_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3DdE4DU3D_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* U3Da76U3D_U3DccFdU3D_mC6B526990B7B2660755C43DA3A6ADF98EAA50DEC_inline (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, const RuntimeMethod* method) 
{
	{
		U3Da72U3D_tBB24E3883D771DC9842509A2AD2FBCDCC07EF54D* L_0 = __this->___U3DdE4DU3D_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Da76U3D_U3DccF2U3D_m4C783475EE4C4E62BA9A05FA1571B1BEBE587E31_inline (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, double p0, const RuntimeMethod* method) 
{
	{
		double L_0 = p0;
		__this->___U3DdE4eU3D_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Da76U3D_U3DccF4U3D_mE25853505CFA115851D2601D0C039AC0D56EF4E5_inline (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, double p0, const RuntimeMethod* method) 
{
	{
		double L_0 = p0;
		__this->___U3DdE4FU3D_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Da76U3D_U3DccF6U3D_m2F9E337AF4D427B7F9AC812738949A6F1B332209_inline (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, double p0, const RuntimeMethod* method) 
{
	{
		double L_0 = p0;
		__this->___U3DdE4fU3D_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Da76U3D_U3DccF8U3D_m303E46F8AC4532E774762C2D86C41FBFA739188C_inline (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = p0;
		__this->___U3DdE40U3D_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Da76U3D_U3DccfAU3D_m8ECE84940939B1EA04F29793FF0663A386945680_inline (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = p0;
		__this->___U3DdE41U3D_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Da76U3D_U3DccfBU3D_m89E93A27B1B545943A3B70DA64278FA5253F52D4_inline (U3Da76U3D_t2FB32DC9C23544F0EAB87388E072C7B2C3A6C24A* __this, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE p0, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = p0;
		__this->___U3DdE42U3D_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE Vector3D_op_Addition_m979683491399744DD382B1D632407ED65878F710_inline (Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___left0, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___right1, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = ___left0;
		double L_1 = L_0.___X_7;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_2 = ___right1;
		double L_3 = L_2.___X_7;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_4 = ___left0;
		double L_5 = L_4.___Y_8;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_6 = ___right1;
		double L_7 = L_6.___Y_8;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_8 = ___left0;
		double L_9 = L_8.___Z_9;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_10 = ___right1;
		double L_11 = L_10.___Z_9;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3D__ctor_m089D30E3C254B02097D9E58F833A0DAC855CE3E6((&L_12), ((double)il2cpp_codegen_add(L_1, L_3)), ((double)il2cpp_codegen_add(L_5, L_7)), ((double)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Da77U3D_U3DccfcU3D_m88CCD939B448EF9C77FD2DE3AA7DF3E7B638B5D3_inline (U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* __this, U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE p0, const RuntimeMethod* method) 
{
	{
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_0 = p0;
		__this->___U3DdE43U3D_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Da77U3D_U3DccfdU3D_m6F21997A9BF09494850364BAFE11E51C597EA797_inline (U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* __this, U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE p0, const RuntimeMethod* method) 
{
	{
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_0 = p0;
		__this->___U3DdE44U3D_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void U3Da77U3D_U3DccfeU3D_mFAD9F685594EE62614C05E1BA7BACFE22662AFC2_inline (U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* __this, double p0, const RuntimeMethod* method) 
{
	{
		double L_0 = p0;
		__this->___U3DdE45U3D_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE U3Da77U3D_U3DccfCU3D_m9D42C6003AA6C3B641FFEA5BB66BDB620CDA4D72_inline (U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* __this, const RuntimeMethod* method) 
{
	{
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_0 = __this->___U3DdE43U3D_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE U3Da77U3D_U3DccfDU3D_mDCE67E3AEB40998AC51980A4543AC92678D8DB9E_inline (U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* __this, const RuntimeMethod* method) 
{
	{
		U3Da8fU3D_tD6608034EC719F46E6389318923A6E9F3C7E6BAE L_0 = __this->___U3DdE44U3D_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double U3Da77U3D_U3DccfEU3D_m7B0F078B2A5C9827B525D33688D21E4CAFF228A8_inline (U3Da77U3D_t273D42032ABE1FCCE94D3973613B6E283114E72E* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3DdE45U3D_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE U3Da78U3D_U3DccffU3D_mF94F355CC6844DD261BD59F3340732815C051376_inline (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = __this->___U3DdE46U3D_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE U3Da78U3D_U3Dccf1U3D_m3125D9F93CE3404F043C2058AD16A3E6A41A2B02_inline (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = __this->___U3DdE47U3D_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE U3Da78U3D_U3Dccf2U3D_m3948C8FB4A28044E98CB085AB1AFEA9F4FC2E4B1_inline (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = __this->___U3DdE48U3D_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE U3Da78U3D_U3Dccf3U3D_m5BF078FAE49C24AE65C3B4E384C437E7982D6874_inline (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = __this->___U3DdE49U3D_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE U3Da78U3D_U3Dccf4U3D_m9B9B9AAC3F936C5800637568FA6EB64EDD347D34_inline (U3Da78U3D_t3C27E6399DA5080D81525AA8453E82E95F3E22A7* __this, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = __this->___U3DdE5AU3D_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE Vector3D_op_Subtraction_m31FAB3812ACF593B7AAD79A718523F0A6A867B77_inline (Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___left0, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___right1, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = ___left0;
		double L_1 = L_0.___X_7;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_2 = ___right1;
		double L_3 = L_2.___X_7;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_4 = ___left0;
		double L_5 = L_4.___Y_8;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_6 = ___right1;
		double L_7 = L_6.___Y_8;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_8 = ___left0;
		double L_9 = L_8.___Z_9;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_10 = ___right1;
		double L_11 = L_10.___Z_9;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3D__ctor_m089D30E3C254B02097D9E58F833A0DAC855CE3E6((&L_12), ((double)il2cpp_codegen_subtract(L_1, L_3)), ((double)il2cpp_codegen_subtract(L_5, L_7)), ((double)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Vector3D_Dot_m519C38861792FEDA6CF1220E4D1D1488C455ECEB_inline (Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___left0, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___right1, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = ___left0;
		double L_1 = L_0.___X_7;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_2 = ___right1;
		double L_3 = L_2.___X_7;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_4 = ___left0;
		double L_5 = L_4.___Y_8;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_6 = ___right1;
		double L_7 = L_6.___Y_8;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_8 = ___left0;
		double L_9 = L_8.___Z_9;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_10 = ___right1;
		double L_11 = L_10.___Z_9;
		return ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_1, L_3)), ((double)il2cpp_codegen_multiply(L_5, L_7)))), ((double)il2cpp_codegen_multiply(L_9, L_11))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE Vector3D_op_Multiply_m8F7375087CE226F2693DE34AE6F16EC20FE4EFCE_inline (Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___left0, double ___right1, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = ___left0;
		double L_1 = L_0.___X_7;
		double L_2 = ___right1;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_3 = ___left0;
		double L_4 = L_3.___Y_8;
		double L_5 = ___right1;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_6 = ___left0;
		double L_7 = L_6.___Z_9;
		double L_8 = ___right1;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3D__ctor_m089D30E3C254B02097D9E58F833A0DAC855CE3E6((&L_9), ((double)il2cpp_codegen_multiply(L_1, L_2)), ((double)il2cpp_codegen_multiply(L_4, L_5)), ((double)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE Vector3D_op_Addition_mC6EB2C1437A6C5487604125706FA82628EE89E07_inline (Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___left0, double ___right1, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = ___left0;
		double L_1 = L_0.___X_7;
		double L_2 = ___right1;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_3 = ___left0;
		double L_4 = L_3.___Y_8;
		double L_5 = ___right1;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_6 = ___left0;
		double L_7 = L_6.___Z_9;
		double L_8 = ___right1;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3D__ctor_m089D30E3C254B02097D9E58F833A0DAC855CE3E6((&L_9), ((double)il2cpp_codegen_add(L_1, L_2)), ((double)il2cpp_codegen_add(L_4, L_5)), ((double)il2cpp_codegen_add(L_7, L_8)), /*hidden argument*/NULL);
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3D_op_Equality_m46109FC0F31174D38098EC0D6BEB613A7A7828E6_inline (Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___left0, Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE ___right1, const RuntimeMethod* method) 
{
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_0 = ___left0;
		double L_1 = L_0.___X_7;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_2 = ___right1;
		double L_3 = L_2.___X_7;
		if ((!(((double)L_1) == ((double)L_3))))
		{
			goto IL_002b;
		}
	}
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_4 = ___left0;
		double L_5 = L_4.___Y_8;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_6 = ___right1;
		double L_7 = L_6.___Y_8;
		if ((!(((double)L_5) == ((double)L_7))))
		{
			goto IL_002b;
		}
	}
	{
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_8 = ___left0;
		double L_9 = L_8.___Z_9;
		Vector3D_tD7BFAE9AFF7E9F54F421A480BD8A2DA1319CC4DE L_10 = ___right1;
		double L_11 = L_10.___Z_9;
		return (bool)((((double)L_9) == ((double)L_11))? 1 : 0);
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Tuple_2_get_Item1_mBF34A596062BBB3C1DD2A6CA36810366F445C9FA_gshared_inline (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___m_Item1_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Tuple_2_get_Item2_m4C8E8E93C0299E98E046C765CA6ABB544412C1D9_gshared_inline (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___m_Item2_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Tuple_2_get_Item2_mBA3C6612F072776B30C52648A160FD7F27ABBBED_gshared_inline (Tuple_2_tECBABFFE5F6AEC7406FA67604949A78C26B1CEF3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___m_Item2_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Tuple_2_get_Item1_m8147AD192D772AFECA4A9F9DA04AE72072CFCD53_gshared_inline (Tuple_2_tECBABFFE5F6AEC7406FA67604949A78C26B1CEF3* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = (double)__this->___m_Item1_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m72C35810CC34AE063C37D418BAE8B097E15C17D9_gshared_inline (Nullable_1_t09CD51E16A5F5DDB2281A6D153ACD580FAF1D657* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline (double ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = *((int64_t*)((uintptr_t)(&___value0)));
		return L_0;
	}
}
