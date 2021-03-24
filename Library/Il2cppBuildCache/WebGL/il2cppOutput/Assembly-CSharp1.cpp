#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>
struct LinkedList_1_t90B1134086379590BB3286E68F55880DF6F0E585;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Ozmoz.Player>
struct List_1_tE005987F00228B26D858A1CAC18B161DB5C57D8E;
// System.Collections.Generic.List`1<Ozmoz.ScreamInteraction>
struct List_1_t4C8526F1A5E8672EADCEFAF29113C4EDAEEBDB08;
// System.Collections.Generic.List`1<Ozmoz.TutorialControllerEvent>
struct List_1_t5F0091DA4B0DB6A210AD34CE7E59E6F24E6ABB86;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.StreamBuffer>
struct Queue_1_t238184E28E78549BBC5200A6D817DAE58F1D0928;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>
struct Queue_1_t525971E57FAD29C14166A79B3B28E0CB7AD9C9AE;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// Ozmoz.Player[]
struct PlayerU5BU5D_t4D674F78297F919510B6A0D41E80A8632016A4EC;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// AudioPlayer
struct AudioPlayer_tFAB0D7A01313CB252849A2270690FC00905BB48B;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.CapsuleCollider2D
struct CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39;
// Ozmoz.Character
struct Character_t451BC3F83F3BB3A8235E7FE1FB8FA75B6410EF63;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// ExitGames.Client.Photon.EventData
struct EventData_t0DA8B0128826527C92CBD7B77100F8875E732EAB;
// Ozmoz.FinalCinematicController
struct FinalCinematicController_t3FB3544CD0E1156D5D1293148AEA91F835CD7C50;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Photon.SocketServer.Security.ICryptoProvider
struct ICryptoProvider_tEFDFF4B51F81FE18E3248284A0C9804EA5D8128B;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t99D8FDF2CD930F08F8812D8FA805187D04874892;
// ExitGames.Client.Photon.IPhotonSocket
struct IPhotonSocket_t8C4CC725BD3399028AEECE28EE0009F06EBFCB96;
// ExitGames.Client.Photon.IProtocol
struct IProtocol_t8882289FA70BEECDEB7920306D4523807C0BF105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// ExitGames.Client.Photon.NCommand
struct NCommand_tF1814C9180D477B081C452EB107C8E6CBC836158;
// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t69D6A7D8DAC22E7D53C247701AA48FDB28FBD656;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t94D16843BF6E424C887E7BE7C21271CEE8827A82;
// Photon.Pun.PhotonView
struct PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43;
// UnityEngine.Playables.PlayableDirector
struct PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38;
// Ozmoz.Player
struct Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E;
// Ozmoz.PlayerExecutor
struct PlayerExecutor_t36D970CD8630459113AA156518025FB6D643246B;
// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Ozmoz.SceneLoader
struct SceneLoader_t9F40A88ECB90A9F92BEF7F70E720CCFDB81DAE92;
// SceneReference
struct SceneReference_tD4A01AEA2D6123F6B00B6DDF2B8A347C5CFE71C9;
// Ozmoz.ScreamGettingUI
struct ScreamGettingUI_t8C9DC924B752A009960918BA09BDB9E539B496C1;
// ScreamSelector
struct ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3;
// ScreenFade
struct ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A;
// ExitGames.Client.Photon.SocketWebTcp
struct SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// Ozmoz.TutorialController
struct TutorialController_t152E102F597254E864A1CF167B0151C81DDA3638;
// Ozmoz.TutorialControllerEvent
struct TutorialControllerEvent_t09DA9340E377703329DF8DA6DA7013EBD124D0C8;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.UriParser
struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// ExitGames.Client.Photon.WaitForRealSeconds
struct WaitForRealSeconds_t88BCA6D42C39FFFAE93F61F72CAFB422CC164926;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// WebSocket
struct WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749;
// Ozmoz.FinalCinematicController/<WaitAfterLoadLevel>d__5
struct U3CWaitAfterLoadLevelU3Ed__5_t00B7D952338C631A7C7D7385F7B633ADEBCF3F39;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// Ozmoz.Player/<WaitForScream>d__45
struct U3CWaitForScreamU3Ed__45_tDCE1B743FDAB81FFE30C049D1BD6FCE3321B8122;
// Ozmoz.PlayerExecutor/<DelayedStart>d__7
struct U3CDelayedStartU3Ed__7_t2B489FFBE4BC6956C151F89829A502AC11FED042;
// Ozmoz.SceneLoader/<WaitForFade>d__6
struct U3CWaitForFadeU3Ed__6_tB02B9E12CD1F807818386BFB6A5EADBE29E5920B;
// Ozmoz.ScreamGettingUI/<FadeIn>d__15
struct U3CFadeInU3Ed__15_tD1C4FA53536CA0CEEA22C0323EC749A1D32E74FE;
// ScreamSelector/<WaitToHide>d__26
struct U3CWaitToHideU3Ed__26_tA8EDB4B649DAD600424B5FE5AC0A8A0045FF5B00;
// ScreenFade/<IFadeIn>d__9
struct U3CIFadeInU3Ed__9_tDD67FB6E64E0391661873E31458A9B4BB7011579;
// ScreenFade/<IFadeOut>d__10
struct U3CIFadeOutU3Ed__10_t7660425B1965333D849951816ED71E5129488D92;
// ScreenFade/<IQuitFade>d__11
struct U3CIQuitFadeU3Ed__11_tD4227CC2D3E4352DF2652FDFA3A7ACE7D19D1F46;
// ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12
struct U3CReceiveLoopU3Ed__12_t0022C29F89E925E06BFE17A013527CCA19057971;
// ExitGames.Client.Photon.SocketWebTcp/MonoBehaviourExt
struct MonoBehaviourExt_tE9402B38CA5077FD18ACC4CDF5CC63963BA6240B;
// Ozmoz.TutorialController/<BottonImageWaiting>d__12
struct U3CBottonImageWaitingU3Ed__12_t419D47CA560643DD16C43C53FF843F6A77496376;
// Ozmoz.TutorialController/<EventWaiting>d__10
struct U3CEventWaitingU3Ed__10_t0DF1F18ED33C5B2EC45B5E2FF01D87B47D829D06;
// Ozmoz.TutorialController/<PortalWaiting>d__11
struct U3CPortalWaitingU3Ed__11_tA64F987451CD48E2706723F2DB89E83ACBD290AC;
// System.Uri/UriInfo
struct UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPhotonPeerListener_t99D8FDF2CD930F08F8812D8FA805187D04874892_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonSocketState_t912CDE549D92E942C8BC68F7855ED673AEE7DDE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SupportClass_tD6B2F0291304E4B6F83E01C5BE2B5A1C7D49CB4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForRealSeconds_t88BCA6D42C39FFFAE93F61F72CAFB422CC164926_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral062C159E09943C99E139190E5A591006A545AA4A;
IL2CPP_EXTERN_C String_t* _stringLiteral1D8DE4CB154AC0296896C7FD3192C85F2FE4730D;
IL2CPP_EXTERN_C String_t* _stringLiteral37422C200CFCABD757B9019D3ABA76E55A7A5DA5;
IL2CPP_EXTERN_C String_t* _stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C;
IL2CPP_EXTERN_C String_t* _stringLiteral57181476910FA4C16EFCC0E7443CD9C417D2514B;
IL2CPP_EXTERN_C String_t* _stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95;
IL2CPP_EXTERN_C String_t* _stringLiteral595137F8C876A16A4A12C20E052B255B02F22D8D;
IL2CPP_EXTERN_C String_t* _stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64;
IL2CPP_EXTERN_C String_t* _stringLiteral8334317A1EF5557A23201DAC301958FB87859F5B;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3;
IL2CPP_EXTERN_C String_t* _stringLiteral95F53809B4EBC36EDD99FA5DD91761569389BB23;
IL2CPP_EXTERN_C String_t* _stringLiteralAB545D4BB06AFBCF7E282105B69205BBE4B8E5DF;
IL2CPP_EXTERN_C String_t* _stringLiteralCA9193E11FC474EEF79F82B6F77150AE7F202155;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB4B5BB88C0A9F3FBB9BBBD710DD1CC5427A9EBBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE7644F74D340CCF2302DE098DF239B18D4195AB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4FB6DE33C78B315C24AA334A62D21410AB126244_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA1012A10B82C987FBE454B05613CEC5F5E28DFE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBottonImageWaitingU3Ed__12_System_Collections_IEnumerator_Reset_m31B687BA23D9C24E948B758244C17581F8815774_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDelayedStartU3Ed__7_System_Collections_IEnumerator_Reset_m31EB268DF28CC82851824C6D63A582A32D5C8DE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEventWaitingU3Ed__10_System_Collections_IEnumerator_Reset_m5511A80FCD3DB64DE2080B24FDE8A10B794E5047_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeInU3Ed__15_System_Collections_IEnumerator_Reset_m055D7361ED33DD459D5F344AD545EB633ECB40D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CIFadeInU3Ed__9_System_Collections_IEnumerator_Reset_m3CD6E3C35A849E40398EB4C29EA909D880210414_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CIFadeOutU3Ed__10_System_Collections_IEnumerator_Reset_mA6B5B8B18BCA3F7123314B106C3B96279C2A5DEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CIQuitFadeU3Ed__11_System_Collections_IEnumerator_Reset_mC903EFD262AE76DF224E714143926AAB7517D54D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPortalWaitingU3Ed__11_System_Collections_IEnumerator_Reset_mCEBAFD56DD85890A121A996EFB749F466135125A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReceiveLoopU3Ed__12_System_Collections_IEnumerator_Reset_m81A880D827588FC43EAE12B1320A15F6B7B3172E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitAfterLoadLevelU3Ed__5_System_Collections_IEnumerator_Reset_m13BD6E6EBCCC58BA535B9582309471BA9322F648_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForFadeU3Ed__6_System_Collections_IEnumerator_Reset_m30510E7083F6F459E674384A33BE4A88FAD7D093_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForScreamU3Ed__45_System_Collections_IEnumerator_Reset_mAE055B6FEBD26EA50C458ED15390C17C28711A6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitToHideU3Ed__26_System_Collections_IEnumerator_Reset_m372B3B37E03275FBF617526AB3FFCD575E5095B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocket__ctor_m72024727BB2CBAE2161797E999634554BEFCB902_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<Ozmoz.Player>
struct  List_1_tE005987F00228B26D858A1CAC18B161DB5C57D8E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PlayerU5BU5D_t4D674F78297F919510B6A0D41E80A8632016A4EC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE005987F00228B26D858A1CAC18B161DB5C57D8E, ____items_1)); }
	inline PlayerU5BU5D_t4D674F78297F919510B6A0D41E80A8632016A4EC* get__items_1() const { return ____items_1; }
	inline PlayerU5BU5D_t4D674F78297F919510B6A0D41E80A8632016A4EC** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PlayerU5BU5D_t4D674F78297F919510B6A0D41E80A8632016A4EC* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE005987F00228B26D858A1CAC18B161DB5C57D8E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE005987F00228B26D858A1CAC18B161DB5C57D8E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE005987F00228B26D858A1CAC18B161DB5C57D8E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE005987F00228B26D858A1CAC18B161DB5C57D8E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PlayerU5BU5D_t4D674F78297F919510B6A0D41E80A8632016A4EC* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE005987F00228B26D858A1CAC18B161DB5C57D8E_StaticFields, ____emptyArray_5)); }
	inline PlayerU5BU5D_t4D674F78297F919510B6A0D41E80A8632016A4EC* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PlayerU5BU5D_t4D674F78297F919510B6A0D41E80A8632016A4EC** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PlayerU5BU5D_t4D674F78297F919510B6A0D41E80A8632016A4EC* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// System.Text.Encoding
struct  Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// SceneReference
struct  SceneReference_tD4A01AEA2D6123F6B00B6DDF2B8A347C5CFE71C9  : public RuntimeObject
{
public:
	// System.String SceneReference::scenePath
	String_t* ___scenePath_0;

public:
	inline static int32_t get_offset_of_scenePath_0() { return static_cast<int32_t>(offsetof(SceneReference_tD4A01AEA2D6123F6B00B6DDF2B8A347C5CFE71C9, ___scenePath_0)); }
	inline String_t* get_scenePath_0() const { return ___scenePath_0; }
	inline String_t** get_address_of_scenePath_0() { return &___scenePath_0; }
	inline void set_scenePath_0(String_t* value)
	{
		___scenePath_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scenePath_0), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// Ozmoz.TutorialControllerEvent
struct  TutorialControllerEvent_t09DA9340E377703329DF8DA6DA7013EBD124D0C8  : public RuntimeObject
{
public:
	// UnityEngine.UI.Image Ozmoz.TutorialControllerEvent::image
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___image_0;
	// System.Single Ozmoz.TutorialControllerEvent::startDelay
	float ___startDelay_1;
	// System.Single Ozmoz.TutorialControllerEvent::fadeDuration
	float ___fadeDuration_2;
	// System.Single Ozmoz.TutorialControllerEvent::duration
	float ___duration_3;

public:
	inline static int32_t get_offset_of_image_0() { return static_cast<int32_t>(offsetof(TutorialControllerEvent_t09DA9340E377703329DF8DA6DA7013EBD124D0C8, ___image_0)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_image_0() const { return ___image_0; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_image_0() { return &___image_0; }
	inline void set_image_0(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___image_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___image_0), (void*)value);
	}

	inline static int32_t get_offset_of_startDelay_1() { return static_cast<int32_t>(offsetof(TutorialControllerEvent_t09DA9340E377703329DF8DA6DA7013EBD124D0C8, ___startDelay_1)); }
	inline float get_startDelay_1() const { return ___startDelay_1; }
	inline float* get_address_of_startDelay_1() { return &___startDelay_1; }
	inline void set_startDelay_1(float value)
	{
		___startDelay_1 = value;
	}

	inline static int32_t get_offset_of_fadeDuration_2() { return static_cast<int32_t>(offsetof(TutorialControllerEvent_t09DA9340E377703329DF8DA6DA7013EBD124D0C8, ___fadeDuration_2)); }
	inline float get_fadeDuration_2() const { return ___fadeDuration_2; }
	inline float* get_address_of_fadeDuration_2() { return &___fadeDuration_2; }
	inline void set_fadeDuration_2(float value)
	{
		___fadeDuration_2 = value;
	}

	inline static int32_t get_offset_of_duration_3() { return static_cast<int32_t>(offsetof(TutorialControllerEvent_t09DA9340E377703329DF8DA6DA7013EBD124D0C8, ___duration_3)); }
	inline float get_duration_3() const { return ___duration_3; }
	inline float* get_address_of_duration_3() { return &___duration_3; }
	inline void set_duration_3(float value)
	{
		___duration_3 = value;
	}
};


// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// WebSocket
struct  WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749  : public RuntimeObject
{
public:
	// System.Uri WebSocket::mUrl
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___mUrl_0;
	// System.String WebSocket::protocols
	String_t* ___protocols_1;
	// System.Int32 WebSocket::m_NativeRef
	int32_t ___m_NativeRef_2;

public:
	inline static int32_t get_offset_of_mUrl_0() { return static_cast<int32_t>(offsetof(WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749, ___mUrl_0)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_mUrl_0() const { return ___mUrl_0; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_mUrl_0() { return &___mUrl_0; }
	inline void set_mUrl_0(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___mUrl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mUrl_0), (void*)value);
	}

	inline static int32_t get_offset_of_protocols_1() { return static_cast<int32_t>(offsetof(WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749, ___protocols_1)); }
	inline String_t* get_protocols_1() const { return ___protocols_1; }
	inline String_t** get_address_of_protocols_1() { return &___protocols_1; }
	inline void set_protocols_1(String_t* value)
	{
		___protocols_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___protocols_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_NativeRef_2() { return static_cast<int32_t>(offsetof(WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749, ___m_NativeRef_2)); }
	inline int32_t get_m_NativeRef_2() const { return ___m_NativeRef_2; }
	inline int32_t* get_address_of_m_NativeRef_2() { return &___m_NativeRef_2; }
	inline void set_m_NativeRef_2(int32_t value)
	{
		___m_NativeRef_2 = value;
	}
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Ozmoz.FinalCinematicController/<WaitAfterLoadLevel>d__5
struct  U3CWaitAfterLoadLevelU3Ed__5_t00B7D952338C631A7C7D7385F7B633ADEBCF3F39  : public RuntimeObject
{
public:
	// System.Int32 Ozmoz.FinalCinematicController/<WaitAfterLoadLevel>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Ozmoz.FinalCinematicController/<WaitAfterLoadLevel>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single Ozmoz.FinalCinematicController/<WaitAfterLoadLevel>d__5::duration
	float ___duration_2;
	// Ozmoz.FinalCinematicController Ozmoz.FinalCinematicController/<WaitAfterLoadLevel>d__5::<>4__this
	FinalCinematicController_t3FB3544CD0E1156D5D1293148AEA91F835CD7C50 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitAfterLoadLevelU3Ed__5_t00B7D952338C631A7C7D7385F7B633ADEBCF3F39, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitAfterLoadLevelU3Ed__5_t00B7D952338C631A7C7D7385F7B633ADEBCF3F39, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_duration_2() { return static_cast<int32_t>(offsetof(U3CWaitAfterLoadLevelU3Ed__5_t00B7D952338C631A7C7D7385F7B633ADEBCF3F39, ___duration_2)); }
	inline float get_duration_2() const { return ___duration_2; }
	inline float* get_address_of_duration_2() { return &___duration_2; }
	inline void set_duration_2(float value)
	{
		___duration_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CWaitAfterLoadLevelU3Ed__5_t00B7D952338C631A7C7D7385F7B633ADEBCF3F39, ___U3CU3E4__this_3)); }
	inline FinalCinematicController_t3FB3544CD0E1156D5D1293148AEA91F835CD7C50 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline FinalCinematicController_t3FB3544CD0E1156D5D1293148AEA91F835CD7C50 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(FinalCinematicController_t3FB3544CD0E1156D5D1293148AEA91F835CD7C50 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// Ozmoz.Player/<WaitForScream>d__45
struct  U3CWaitForScreamU3Ed__45_tDCE1B743FDAB81FFE30C049D1BD6FCE3321B8122  : public RuntimeObject
{
public:
	// System.Int32 Ozmoz.Player/<WaitForScream>d__45::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Ozmoz.Player/<WaitForScream>d__45::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single Ozmoz.Player/<WaitForScream>d__45::duration
	float ___duration_2;
	// System.Action Ozmoz.Player/<WaitForScream>d__45::callback
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitForScreamU3Ed__45_tDCE1B743FDAB81FFE30C049D1BD6FCE3321B8122, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitForScreamU3Ed__45_tDCE1B743FDAB81FFE30C049D1BD6FCE3321B8122, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_duration_2() { return static_cast<int32_t>(offsetof(U3CWaitForScreamU3Ed__45_tDCE1B743FDAB81FFE30C049D1BD6FCE3321B8122, ___duration_2)); }
	inline float get_duration_2() const { return ___duration_2; }
	inline float* get_address_of_duration_2() { return &___duration_2; }
	inline void set_duration_2(float value)
	{
		___duration_2 = value;
	}

	inline static int32_t get_offset_of_callback_3() { return static_cast<int32_t>(offsetof(U3CWaitForScreamU3Ed__45_tDCE1B743FDAB81FFE30C049D1BD6FCE3321B8122, ___callback_3)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_callback_3() const { return ___callback_3; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_callback_3() { return &___callback_3; }
	inline void set_callback_3(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_3), (void*)value);
	}
};


// Ozmoz.PlayerExecutor/<DelayedStart>d__7
struct  U3CDelayedStartU3Ed__7_t2B489FFBE4BC6956C151F89829A502AC11FED042  : public RuntimeObject
{
public:
	// System.Int32 Ozmoz.PlayerExecutor/<DelayedStart>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Ozmoz.PlayerExecutor/<DelayedStart>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Ozmoz.PlayerExecutor Ozmoz.PlayerExecutor/<DelayedStart>d__7::<>4__this
	PlayerExecutor_t36D970CD8630459113AA156518025FB6D643246B * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayedStartU3Ed__7_t2B489FFBE4BC6956C151F89829A502AC11FED042, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayedStartU3Ed__7_t2B489FFBE4BC6956C151F89829A502AC11FED042, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDelayedStartU3Ed__7_t2B489FFBE4BC6956C151F89829A502AC11FED042, ___U3CU3E4__this_2)); }
	inline PlayerExecutor_t36D970CD8630459113AA156518025FB6D643246B * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayerExecutor_t36D970CD8630459113AA156518025FB6D643246B ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayerExecutor_t36D970CD8630459113AA156518025FB6D643246B * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Ozmoz.SceneLoader/<WaitForFade>d__6
struct  U3CWaitForFadeU3Ed__6_tB02B9E12CD1F807818386BFB6A5EADBE29E5920B  : public RuntimeObject
{
public:
	// System.Int32 Ozmoz.SceneLoader/<WaitForFade>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Ozmoz.SceneLoader/<WaitForFade>d__6::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Ozmoz.SceneLoader Ozmoz.SceneLoader/<WaitForFade>d__6::<>4__this
	SceneLoader_t9F40A88ECB90A9F92BEF7F70E720CCFDB81DAE92 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitForFadeU3Ed__6_tB02B9E12CD1F807818386BFB6A5EADBE29E5920B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitForFadeU3Ed__6_tB02B9E12CD1F807818386BFB6A5EADBE29E5920B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWaitForFadeU3Ed__6_tB02B9E12CD1F807818386BFB6A5EADBE29E5920B, ___U3CU3E4__this_2)); }
	inline SceneLoader_t9F40A88ECB90A9F92BEF7F70E720CCFDB81DAE92 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SceneLoader_t9F40A88ECB90A9F92BEF7F70E720CCFDB81DAE92 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SceneLoader_t9F40A88ECB90A9F92BEF7F70E720CCFDB81DAE92 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Ozmoz.ScreamGettingUI/<FadeIn>d__15
struct  U3CFadeInU3Ed__15_tD1C4FA53536CA0CEEA22C0323EC749A1D32E74FE  : public RuntimeObject
{
public:
	// System.Int32 Ozmoz.ScreamGettingUI/<FadeIn>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Ozmoz.ScreamGettingUI/<FadeIn>d__15::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Ozmoz.ScreamGettingUI Ozmoz.ScreamGettingUI/<FadeIn>d__15::<>4__this
	ScreamGettingUI_t8C9DC924B752A009960918BA09BDB9E539B496C1 * ___U3CU3E4__this_2;
	// UnityEngine.UI.Image Ozmoz.ScreamGettingUI/<FadeIn>d__15::image
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___image_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ed__15_tD1C4FA53536CA0CEEA22C0323EC749A1D32E74FE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ed__15_tD1C4FA53536CA0CEEA22C0323EC749A1D32E74FE, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ed__15_tD1C4FA53536CA0CEEA22C0323EC749A1D32E74FE, ___U3CU3E4__this_2)); }
	inline ScreamGettingUI_t8C9DC924B752A009960918BA09BDB9E539B496C1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ScreamGettingUI_t8C9DC924B752A009960918BA09BDB9E539B496C1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ScreamGettingUI_t8C9DC924B752A009960918BA09BDB9E539B496C1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_image_3() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ed__15_tD1C4FA53536CA0CEEA22C0323EC749A1D32E74FE, ___image_3)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_image_3() const { return ___image_3; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_image_3() { return &___image_3; }
	inline void set_image_3(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___image_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___image_3), (void*)value);
	}
};


// ScreamSelector/<WaitToHide>d__26
struct  U3CWaitToHideU3Ed__26_tA8EDB4B649DAD600424B5FE5AC0A8A0045FF5B00  : public RuntimeObject
{
public:
	// System.Int32 ScreamSelector/<WaitToHide>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ScreamSelector/<WaitToHide>d__26::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ScreamSelector ScreamSelector/<WaitToHide>d__26::<>4__this
	ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitToHideU3Ed__26_tA8EDB4B649DAD600424B5FE5AC0A8A0045FF5B00, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitToHideU3Ed__26_tA8EDB4B649DAD600424B5FE5AC0A8A0045FF5B00, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWaitToHideU3Ed__26_tA8EDB4B649DAD600424B5FE5AC0A8A0045FF5B00, ___U3CU3E4__this_2)); }
	inline ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// ScreenFade/<IFadeIn>d__9
struct  U3CIFadeInU3Ed__9_tDD67FB6E64E0391661873E31458A9B4BB7011579  : public RuntimeObject
{
public:
	// System.Int32 ScreenFade/<IFadeIn>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ScreenFade/<IFadeIn>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ScreenFade ScreenFade/<IFadeIn>d__9::<>4__this
	ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CIFadeInU3Ed__9_tDD67FB6E64E0391661873E31458A9B4BB7011579, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CIFadeInU3Ed__9_tDD67FB6E64E0391661873E31458A9B4BB7011579, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CIFadeInU3Ed__9_tDD67FB6E64E0391661873E31458A9B4BB7011579, ___U3CU3E4__this_2)); }
	inline ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// ScreenFade/<IFadeOut>d__10
struct  U3CIFadeOutU3Ed__10_t7660425B1965333D849951816ED71E5129488D92  : public RuntimeObject
{
public:
	// System.Int32 ScreenFade/<IFadeOut>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ScreenFade/<IFadeOut>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ScreenFade ScreenFade/<IFadeOut>d__10::<>4__this
	ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CIFadeOutU3Ed__10_t7660425B1965333D849951816ED71E5129488D92, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CIFadeOutU3Ed__10_t7660425B1965333D849951816ED71E5129488D92, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CIFadeOutU3Ed__10_t7660425B1965333D849951816ED71E5129488D92, ___U3CU3E4__this_2)); }
	inline ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// ScreenFade/<IQuitFade>d__11
struct  U3CIQuitFadeU3Ed__11_tD4227CC2D3E4352DF2652FDFA3A7ACE7D19D1F46  : public RuntimeObject
{
public:
	// System.Int32 ScreenFade/<IQuitFade>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ScreenFade/<IQuitFade>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ScreenFade ScreenFade/<IQuitFade>d__11::<>4__this
	ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CIQuitFadeU3Ed__11_tD4227CC2D3E4352DF2652FDFA3A7ACE7D19D1F46, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CIQuitFadeU3Ed__11_tD4227CC2D3E4352DF2652FDFA3A7ACE7D19D1F46, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CIQuitFadeU3Ed__11_tD4227CC2D3E4352DF2652FDFA3A7ACE7D19D1F46, ___U3CU3E4__this_2)); }
	inline ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12
struct  U3CReceiveLoopU3Ed__12_t0022C29F89E925E06BFE17A013527CCA19057971  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ExitGames.Client.Photon.SocketWebTcp ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::<>4__this
	SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CReceiveLoopU3Ed__12_t0022C29F89E925E06BFE17A013527CCA19057971, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CReceiveLoopU3Ed__12_t0022C29F89E925E06BFE17A013527CCA19057971, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CReceiveLoopU3Ed__12_t0022C29F89E925E06BFE17A013527CCA19057971, ___U3CU3E4__this_2)); }
	inline SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Ozmoz.TutorialController/<BottonImageWaiting>d__12
struct  U3CBottonImageWaitingU3Ed__12_t419D47CA560643DD16C43C53FF843F6A77496376  : public RuntimeObject
{
public:
	// System.Int32 Ozmoz.TutorialController/<BottonImageWaiting>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Ozmoz.TutorialController/<BottonImageWaiting>d__12::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Ozmoz.TutorialController Ozmoz.TutorialController/<BottonImageWaiting>d__12::<>4__this
	TutorialController_t152E102F597254E864A1CF167B0151C81DDA3638 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CBottonImageWaitingU3Ed__12_t419D47CA560643DD16C43C53FF843F6A77496376, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CBottonImageWaitingU3Ed__12_t419D47CA560643DD16C43C53FF843F6A77496376, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CBottonImageWaitingU3Ed__12_t419D47CA560643DD16C43C53FF843F6A77496376, ___U3CU3E4__this_2)); }
	inline TutorialController_t152E102F597254E864A1CF167B0151C81DDA3638 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TutorialController_t152E102F597254E864A1CF167B0151C81DDA3638 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TutorialController_t152E102F597254E864A1CF167B0151C81DDA3638 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Ozmoz.TutorialController/<EventWaiting>d__10
struct  U3CEventWaitingU3Ed__10_t0DF1F18ED33C5B2EC45B5E2FF01D87B47D829D06  : public RuntimeObject
{
public:
	// System.Int32 Ozmoz.TutorialController/<EventWaiting>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Ozmoz.TutorialController/<EventWaiting>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Ozmoz.TutorialControllerEvent Ozmoz.TutorialController/<EventWaiting>d__10::evt
	TutorialControllerEvent_t09DA9340E377703329DF8DA6DA7013EBD124D0C8 * ___evt_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEventWaitingU3Ed__10_t0DF1F18ED33C5B2EC45B5E2FF01D87B47D829D06, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CEventWaitingU3Ed__10_t0DF1F18ED33C5B2EC45B5E2FF01D87B47D829D06, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_evt_2() { return static_cast<int32_t>(offsetof(U3CEventWaitingU3Ed__10_t0DF1F18ED33C5B2EC45B5E2FF01D87B47D829D06, ___evt_2)); }
	inline TutorialControllerEvent_t09DA9340E377703329DF8DA6DA7013EBD124D0C8 * get_evt_2() const { return ___evt_2; }
	inline TutorialControllerEvent_t09DA9340E377703329DF8DA6DA7013EBD124D0C8 ** get_address_of_evt_2() { return &___evt_2; }
	inline void set_evt_2(TutorialControllerEvent_t09DA9340E377703329DF8DA6DA7013EBD124D0C8 * value)
	{
		___evt_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___evt_2), (void*)value);
	}
};


// Ozmoz.TutorialController/<PortalWaiting>d__11
struct  U3CPortalWaitingU3Ed__11_tA64F987451CD48E2706723F2DB89E83ACBD290AC  : public RuntimeObject
{
public:
	// System.Int32 Ozmoz.TutorialController/<PortalWaiting>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Ozmoz.TutorialController/<PortalWaiting>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Ozmoz.TutorialController Ozmoz.TutorialController/<PortalWaiting>d__11::<>4__this
	TutorialController_t152E102F597254E864A1CF167B0151C81DDA3638 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPortalWaitingU3Ed__11_tA64F987451CD48E2706723F2DB89E83ACBD290AC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPortalWaitingU3Ed__11_tA64F987451CD48E2706723F2DB89E83ACBD290AC, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPortalWaitingU3Ed__11_tA64F987451CD48E2706723F2DB89E83ACBD290AC, ___U3CU3E4__this_2)); }
	inline TutorialController_t152E102F597254E864A1CF167B0151C81DDA3638 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TutorialController_t152E102F597254E864A1CF167B0151C81DDA3638 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TutorialController_t152E102F597254E864A1CF167B0151C81DDA3638 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Ozmoz.Player>
struct  Enumerator_t525B82097D9D406EA26D105D1479485F2A76DE3A 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tE005987F00228B26D858A1CAC18B161DB5C57D8E * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t525B82097D9D406EA26D105D1479485F2A76DE3A, ___list_0)); }
	inline List_1_tE005987F00228B26D858A1CAC18B161DB5C57D8E * get_list_0() const { return ___list_0; }
	inline List_1_tE005987F00228B26D858A1CAC18B161DB5C57D8E ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tE005987F00228B26D858A1CAC18B161DB5C57D8E * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t525B82097D9D406EA26D105D1479485F2A76DE3A, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t525B82097D9D406EA26D105D1479485F2A76DE3A, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t525B82097D9D406EA26D105D1479485F2A76DE3A, ___current_3)); }
	inline Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E * get_current_3() const { return ___current_3; }
	inline Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.LayerMask
struct  LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Events.UnityEvent
struct  UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// ExitGames.Client.Photon.WaitForRealSeconds
struct  WaitForRealSeconds_t88BCA6D42C39FFFAE93F61F72CAFB422CC164926  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Single ExitGames.Client.Photon.WaitForRealSeconds::_endTime
	float ____endTime_0;

public:
	inline static int32_t get_offset_of__endTime_0() { return static_cast<int32_t>(offsetof(WaitForRealSeconds_t88BCA6D42C39FFFAE93F61F72CAFB422CC164926, ____endTime_0)); }
	inline float get__endTime_0() const { return ____endTime_0; }
	inline float* get_address_of__endTime_0() { return &____endTime_0; }
	inline void set__endTime_0(float value)
	{
		____endTime_0 = value;
	}
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// ExitGames.Client.Photon.ConnectionProtocol
struct  ConnectionProtocol_tB0C6C96382705184FB5427580FC70DFF5EA9BEE5 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionProtocol::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionProtocol_tB0C6C96382705184FB5427580FC70DFF5EA9BEE5, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.ConnectionStateValue
struct  ConnectionStateValue_t26B5E83525C4042191CC38CECB35933264AF81BD 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionStateValue::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionStateValue_t26B5E83525C4042191CC38CECB35933264AF81BD, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// ExitGames.Client.Photon.DebugLevel
struct  DebugLevel_tF04CCD1C9AE361410F1825F2E1C8F877C6C788AB 
{
public:
	// System.Byte ExitGames.Client.Photon.DebugLevel::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebugLevel_tF04CCD1C9AE361410F1825F2E1C8F877C6C788AB, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// ExitGames.Client.Photon.PhotonSocketState
struct  PhotonSocketState_t912CDE549D92E942C8BC68F7855ED673AEE7DDE8 
{
public:
	// System.Int32 ExitGames.Client.Photon.PhotonSocketState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PhotonSocketState_t912CDE549D92E942C8BC68F7855ED673AEE7DDE8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.StatusCode
struct  StatusCode_tC1CD6C8A8D2B5A39AF725D37B8FFADFB877B4B87 
{
public:
	// System.Int32 ExitGames.Client.Photon.StatusCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StatusCode_tC1CD6C8A8D2B5A39AF725D37B8FFADFB877B4B87, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriIdnScope
struct  UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Ozmoz.BooleanInteraction/BooleanInteractionType
struct  BooleanInteractionType_t7AC2C60A9EC490998B8BAB72EC0324C6606613D6 
{
public:
	// System.Int32 Ozmoz.BooleanInteraction/BooleanInteractionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BooleanInteractionType_t7AC2C60A9EC490998B8BAB72EC0324C6606613D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Ozmoz.DualMusicController/SynchronizationType
struct  SynchronizationType_t705366EA76E18DCC4AED16BF24CD9048454BF1B5 
{
public:
	// System.Int32 Ozmoz.DualMusicController/SynchronizationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SynchronizationType_t705366EA76E18DCC4AED16BF24CD9048454BF1B5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct  FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct  Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Ozmoz.Interaction/DuettoConditioning
struct  DuettoConditioning_t013BFD0C5EA1E51E9993021D83AE38EF19C422C4 
{
public:
	// System.Int32 Ozmoz.Interaction/DuettoConditioning::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DuettoConditioning_t013BFD0C5EA1E51E9993021D83AE38EF19C422C4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MainMenu/MenuType
struct  MenuType_t04C33CFCFEB943341C8C9CC82716327ADDB32E65 
{
public:
	// System.Int32 MainMenu/MenuType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MenuType_t04C33CFCFEB943341C8C9CC82716327ADDB32E65, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Ozmoz.PlayerExecutor/PlayerReceiverType
struct  PlayerReceiverType_t322B8081F87896C7664BDA8EABC6766073107E25 
{
public:
	// System.Int32 Ozmoz.PlayerExecutor/PlayerReceiverType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlayerReceiverType_t322B8081F87896C7664BDA8EABC6766073107E25, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Ozmoz.ScreamInteraction/ScreamType
struct  ScreamType_t17E91294A279FF448AE0D60CD46626ABBB101B1D 
{
public:
	// System.Int32 Ozmoz.ScreamInteraction/ScreamType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScreamType_t17E91294A279FF448AE0D60CD46626ABBB101B1D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Uri/Flags
struct  Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4 
{
public:
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// ExitGames.Client.Photon.IPhotonSocket
struct  IPhotonSocket_t8C4CC725BD3399028AEECE28EE0009F06EBFCB96  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.IPhotonSocket::peerBase
	PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557 * ___peerBase_0;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.IPhotonSocket::Protocol
	uint8_t ___Protocol_1;
	// System.Boolean ExitGames.Client.Photon.IPhotonSocket::PollReceive
	bool ___PollReceive_2;
	// ExitGames.Client.Photon.PhotonSocketState ExitGames.Client.Photon.IPhotonSocket::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_3;
	// System.String ExitGames.Client.Photon.IPhotonSocket::ConnectAddress
	String_t* ___ConnectAddress_4;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<ServerAddress>k__BackingField
	String_t* ___U3CServerAddressU3Ek__BackingField_5;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<ProxyServerAddress>k__BackingField
	String_t* ___U3CProxyServerAddressU3Ek__BackingField_6;
	// System.Int32 ExitGames.Client.Photon.IPhotonSocket::<ServerPort>k__BackingField
	int32_t ___U3CServerPortU3Ek__BackingField_8;
	// System.Boolean ExitGames.Client.Photon.IPhotonSocket::<AddressResolvedAsIpv6>k__BackingField
	bool ___U3CAddressResolvedAsIpv6U3Ek__BackingField_9;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<UrlProtocol>k__BackingField
	String_t* ___U3CUrlProtocolU3Ek__BackingField_10;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<UrlPath>k__BackingField
	String_t* ___U3CUrlPathU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_peerBase_0() { return static_cast<int32_t>(offsetof(IPhotonSocket_t8C4CC725BD3399028AEECE28EE0009F06EBFCB96, ___peerBase_0)); }
	inline PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557 * get_peerBase_0() const { return ___peerBase_0; }
	inline PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557 ** get_address_of_peerBase_0() { return &___peerBase_0; }
	inline void set_peerBase_0(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557 * value)
	{
		___peerBase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peerBase_0), (void*)value);
	}

	inline static int32_t get_offset_of_Protocol_1() { return static_cast<int32_t>(offsetof(IPhotonSocket_t8C4CC725BD3399028AEECE28EE0009F06EBFCB96, ___Protocol_1)); }
	inline uint8_t get_Protocol_1() const { return ___Protocol_1; }
	inline uint8_t* get_address_of_Protocol_1() { return &___Protocol_1; }
	inline void set_Protocol_1(uint8_t value)
	{
		___Protocol_1 = value;
	}

	inline static int32_t get_offset_of_PollReceive_2() { return static_cast<int32_t>(offsetof(IPhotonSocket_t8C4CC725BD3399028AEECE28EE0009F06EBFCB96, ___PollReceive_2)); }
	inline bool get_PollReceive_2() const { return ___PollReceive_2; }
	inline bool* get_address_of_PollReceive_2() { return &___PollReceive_2; }
	inline void set_PollReceive_2(bool value)
	{
		___PollReceive_2 = value;
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(IPhotonSocket_t8C4CC725BD3399028AEECE28EE0009F06EBFCB96, ___U3CStateU3Ek__BackingField_3)); }
	inline int32_t get_U3CStateU3Ek__BackingField_3() const { return ___U3CStateU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_3() { return &___U3CStateU3Ek__BackingField_3; }
	inline void set_U3CStateU3Ek__BackingField_3(int32_t value)
	{
		___U3CStateU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_ConnectAddress_4() { return static_cast<int32_t>(offsetof(IPhotonSocket_t8C4CC725BD3399028AEECE28EE0009F06EBFCB96, ___ConnectAddress_4)); }
	inline String_t* get_ConnectAddress_4() const { return ___ConnectAddress_4; }
	inline String_t** get_address_of_ConnectAddress_4() { return &___ConnectAddress_4; }
	inline void set_ConnectAddress_4(String_t* value)
	{
		___ConnectAddress_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectAddress_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServerAddressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(IPhotonSocket_t8C4CC725BD3399028AEECE28EE0009F06EBFCB96, ___U3CServerAddressU3Ek__BackingField_5)); }
	inline String_t* get_U3CServerAddressU3Ek__BackingField_5() const { return ___U3CServerAddressU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CServerAddressU3Ek__BackingField_5() { return &___U3CServerAddressU3Ek__BackingField_5; }
	inline void set_U3CServerAddressU3Ek__BackingField_5(String_t* value)
	{
		___U3CServerAddressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServerAddressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProxyServerAddressU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(IPhotonSocket_t8C4CC725BD3399028AEECE28EE0009F06EBFCB96, ___U3CProxyServerAddressU3Ek__BackingField_6)); }
	inline String_t* get_U3CProxyServerAddressU3Ek__BackingField_6() const { return ___U3CProxyServerAddressU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CProxyServerAddressU3Ek__BackingField_6() { return &___U3CProxyServerAddressU3Ek__BackingField_6; }
	inline void set_U3CProxyServerAddressU3Ek__BackingField_6(String_t* value)
	{
		___U3CProxyServerAddressU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProxyServerAddressU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServerPortU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(IPhotonSocket_t8C4CC725BD3399028AEECE28EE0009F06EBFCB96, ___U3CServerPortU3Ek__BackingField_8)); }
	inline int32_t get_U3CServerPortU3Ek__BackingField_8() const { return ___U3CServerPortU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CServerPortU3Ek__BackingField_8() { return &___U3CServerPortU3Ek__BackingField_8; }
	inline void set_U3CServerPortU3Ek__BackingField_8(int32_t value)
	{
		___U3CServerPortU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CAddressResolvedAsIpv6U3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(IPhotonSocket_t8C4CC725BD3399028AEECE28EE0009F06EBFCB96, ___U3CAddressResolvedAsIpv6U3Ek__BackingField_9)); }
	inline bool get_U3CAddressResolvedAsIpv6U3Ek__BackingField_9() const { return ___U3CAddressResolvedAsIpv6U3Ek__BackingField_9; }
	inline bool* get_address_of_U3CAddressResolvedAsIpv6U3Ek__BackingField_9() { return &___U3CAddressResolvedAsIpv6U3Ek__BackingField_9; }
	inline void set_U3CAddressResolvedAsIpv6U3Ek__BackingField_9(bool value)
	{
		___U3CAddressResolvedAsIpv6U3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CUrlProtocolU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(IPhotonSocket_t8C4CC725BD3399028AEECE28EE0009F06EBFCB96, ___U3CUrlProtocolU3Ek__BackingField_10)); }
	inline String_t* get_U3CUrlProtocolU3Ek__BackingField_10() const { return ___U3CUrlProtocolU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CUrlProtocolU3Ek__BackingField_10() { return &___U3CUrlProtocolU3Ek__BackingField_10; }
	inline void set_U3CUrlProtocolU3Ek__BackingField_10(String_t* value)
	{
		___U3CUrlProtocolU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUrlProtocolU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUrlPathU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(IPhotonSocket_t8C4CC725BD3399028AEECE28EE0009F06EBFCB96, ___U3CUrlPathU3Ek__BackingField_11)); }
	inline String_t* get_U3CUrlPathU3Ek__BackingField_11() const { return ___U3CUrlPathU3Ek__BackingField_11; }
	inline String_t** get_address_of_U3CUrlPathU3Ek__BackingField_11() { return &___U3CUrlPathU3Ek__BackingField_11; }
	inline void set_U3CUrlPathU3Ek__BackingField_11(String_t* value)
	{
		___U3CUrlPathU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUrlPathU3Ek__BackingField_11), (void*)value);
	}
};

struct IPhotonSocket_t8C4CC725BD3399028AEECE28EE0009F06EBFCB96_StaticFields
{
public:
	// System.String ExitGames.Client.Photon.IPhotonSocket::<ServerIpAddress>k__BackingField
	String_t* ___U3CServerIpAddressU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CServerIpAddressU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(IPhotonSocket_t8C4CC725BD3399028AEECE28EE0009F06EBFCB96_StaticFields, ___U3CServerIpAddressU3Ek__BackingField_7)); }
	inline String_t* get_U3CServerIpAddressU3Ek__BackingField_7() const { return ___U3CServerIpAddressU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CServerIpAddressU3Ek__BackingField_7() { return &___U3CServerIpAddressU3Ek__BackingField_7; }
	inline void set_U3CServerIpAddressU3Ek__BackingField_7(String_t* value)
	{
		___U3CServerIpAddressU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServerIpAddressU3Ek__BackingField_7), (void*)value);
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// ExitGames.Client.Photon.PeerBase
struct  PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.PhotonPeer ExitGames.Client.Photon.PeerBase::photonPeer
	PhotonPeer_t94D16843BF6E424C887E7BE7C21271CEE8827A82 * ___photonPeer_0;
	// ExitGames.Client.Photon.IProtocol ExitGames.Client.Photon.PeerBase::SerializationProtocol
	IProtocol_t8882289FA70BEECDEB7920306D4523807C0BF105 * ___SerializationProtocol_1;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PeerBase::usedTransportProtocol
	uint8_t ___usedTransportProtocol_2;
	// ExitGames.Client.Photon.IPhotonSocket ExitGames.Client.Photon.PeerBase::PhotonSocket
	IPhotonSocket_t8C4CC725BD3399028AEECE28EE0009F06EBFCB96 * ___PhotonSocket_3;
	// System.String ExitGames.Client.Photon.PeerBase::<ServerAddress>k__BackingField
	String_t* ___U3CServerAddressU3Ek__BackingField_4;
	// System.String ExitGames.Client.Photon.PeerBase::<ProxyServerAddress>k__BackingField
	String_t* ___U3CProxyServerAddressU3Ek__BackingField_5;
	// ExitGames.Client.Photon.ConnectionStateValue ExitGames.Client.Photon.PeerBase::peerConnectionState
	uint8_t ___peerConnectionState_6;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ByteCountLastOperation
	int32_t ___ByteCountLastOperation_7;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ByteCountCurrentDispatch
	int32_t ___ByteCountCurrentDispatch_8;
	// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.PeerBase::CommandInCurrentDispatch
	NCommand_tF1814C9180D477B081C452EB107C8E6CBC836158 * ___CommandInCurrentDispatch_9;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetLossByCrc
	int32_t ___packetLossByCrc_10;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetLossByChallenge
	int32_t ___packetLossByChallenge_11;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction> ExitGames.Client.Photon.PeerBase::ActionQueue
	Queue_1_t525971E57FAD29C14166A79B3B28E0CB7AD9C9AE * ___ActionQueue_12;
	// System.Int16 ExitGames.Client.Photon.PeerBase::peerID
	int16_t ___peerID_13;
	// System.Int32 ExitGames.Client.Photon.PeerBase::serverTimeOffset
	int32_t ___serverTimeOffset_14;
	// System.Boolean ExitGames.Client.Photon.PeerBase::serverTimeOffsetIsAvailable
	bool ___serverTimeOffsetIsAvailable_15;
	// System.Int32 ExitGames.Client.Photon.PeerBase::roundTripTime
	int32_t ___roundTripTime_16;
	// System.Int32 ExitGames.Client.Photon.PeerBase::roundTripTimeVariance
	int32_t ___roundTripTimeVariance_17;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lastRoundTripTime
	int32_t ___lastRoundTripTime_18;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lowestRoundTripTime
	int32_t ___lowestRoundTripTime_19;
	// System.Int32 ExitGames.Client.Photon.PeerBase::highestRoundTripTimeVariance
	int32_t ___highestRoundTripTimeVariance_20;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timestampOfLastReceive
	int32_t ___timestampOfLastReceive_21;
	// System.Int64 ExitGames.Client.Photon.PeerBase::bytesOut
	int64_t ___bytesOut_23;
	// System.Int64 ExitGames.Client.Photon.PeerBase::bytesIn
	int64_t ___bytesIn_24;
	// System.Object ExitGames.Client.Photon.PeerBase::PhotonToken
	RuntimeObject * ___PhotonToken_25;
	// System.Object ExitGames.Client.Photon.PeerBase::CustomInitData
	RuntimeObject * ___CustomInitData_26;
	// System.String ExitGames.Client.Photon.PeerBase::AppId
	String_t* ___AppId_27;
	// ExitGames.Client.Photon.EventData ExitGames.Client.Photon.PeerBase::reusableEventData
	EventData_t0DA8B0128826527C92CBD7B77100F8875E732EAB * ___reusableEventData_28;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeBase
	int32_t ___timeBase_29;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeoutInt
	int32_t ___timeoutInt_30;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastAckReceive
	int32_t ___timeLastAckReceive_31;
	// System.Int32 ExitGames.Client.Photon.PeerBase::longestSentCall
	int32_t ___longestSentCall_32;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastSendAck
	int32_t ___timeLastSendAck_33;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastSendOutgoing
	int32_t ___timeLastSendOutgoing_34;
	// System.Boolean ExitGames.Client.Photon.PeerBase::ApplicationIsInitialized
	bool ___ApplicationIsInitialized_35;
	// System.Boolean ExitGames.Client.Photon.PeerBase::isEncryptionAvailable
	bool ___isEncryptionAvailable_36;
	// System.Int32 ExitGames.Client.Photon.PeerBase::outgoingCommandsInStream
	int32_t ___outgoingCommandsInStream_37;
	// System.Byte[] ExitGames.Client.Photon.PeerBase::messageHeader
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___messageHeader_39;
	// Photon.SocketServer.Security.ICryptoProvider ExitGames.Client.Photon.PeerBase::CryptoProvider
	RuntimeObject* ___CryptoProvider_40;
	// System.Random ExitGames.Client.Photon.PeerBase::lagRandomizer
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___lagRandomizer_41;
	// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem> ExitGames.Client.Photon.PeerBase::NetSimListOutgoing
	LinkedList_1_t90B1134086379590BB3286E68F55880DF6F0E585 * ___NetSimListOutgoing_42;
	// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem> ExitGames.Client.Photon.PeerBase::NetSimListIncoming
	LinkedList_1_t90B1134086379590BB3286E68F55880DF6F0E585 * ___NetSimListIncoming_43;
	// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PeerBase::networkSimulationSettings
	NetworkSimulationSet_t69D6A7D8DAC22E7D53C247701AA48FDB28FBD656 * ___networkSimulationSettings_44;
	// System.Int32 ExitGames.Client.Photon.PeerBase::TrafficPackageHeaderSize
	int32_t ___TrafficPackageHeaderSize_45;

public:
	inline static int32_t get_offset_of_photonPeer_0() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___photonPeer_0)); }
	inline PhotonPeer_t94D16843BF6E424C887E7BE7C21271CEE8827A82 * get_photonPeer_0() const { return ___photonPeer_0; }
	inline PhotonPeer_t94D16843BF6E424C887E7BE7C21271CEE8827A82 ** get_address_of_photonPeer_0() { return &___photonPeer_0; }
	inline void set_photonPeer_0(PhotonPeer_t94D16843BF6E424C887E7BE7C21271CEE8827A82 * value)
	{
		___photonPeer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonPeer_0), (void*)value);
	}

	inline static int32_t get_offset_of_SerializationProtocol_1() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___SerializationProtocol_1)); }
	inline IProtocol_t8882289FA70BEECDEB7920306D4523807C0BF105 * get_SerializationProtocol_1() const { return ___SerializationProtocol_1; }
	inline IProtocol_t8882289FA70BEECDEB7920306D4523807C0BF105 ** get_address_of_SerializationProtocol_1() { return &___SerializationProtocol_1; }
	inline void set_SerializationProtocol_1(IProtocol_t8882289FA70BEECDEB7920306D4523807C0BF105 * value)
	{
		___SerializationProtocol_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SerializationProtocol_1), (void*)value);
	}

	inline static int32_t get_offset_of_usedTransportProtocol_2() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___usedTransportProtocol_2)); }
	inline uint8_t get_usedTransportProtocol_2() const { return ___usedTransportProtocol_2; }
	inline uint8_t* get_address_of_usedTransportProtocol_2() { return &___usedTransportProtocol_2; }
	inline void set_usedTransportProtocol_2(uint8_t value)
	{
		___usedTransportProtocol_2 = value;
	}

	inline static int32_t get_offset_of_PhotonSocket_3() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___PhotonSocket_3)); }
	inline IPhotonSocket_t8C4CC725BD3399028AEECE28EE0009F06EBFCB96 * get_PhotonSocket_3() const { return ___PhotonSocket_3; }
	inline IPhotonSocket_t8C4CC725BD3399028AEECE28EE0009F06EBFCB96 ** get_address_of_PhotonSocket_3() { return &___PhotonSocket_3; }
	inline void set_PhotonSocket_3(IPhotonSocket_t8C4CC725BD3399028AEECE28EE0009F06EBFCB96 * value)
	{
		___PhotonSocket_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PhotonSocket_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServerAddressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___U3CServerAddressU3Ek__BackingField_4)); }
	inline String_t* get_U3CServerAddressU3Ek__BackingField_4() const { return ___U3CServerAddressU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CServerAddressU3Ek__BackingField_4() { return &___U3CServerAddressU3Ek__BackingField_4; }
	inline void set_U3CServerAddressU3Ek__BackingField_4(String_t* value)
	{
		___U3CServerAddressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServerAddressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProxyServerAddressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___U3CProxyServerAddressU3Ek__BackingField_5)); }
	inline String_t* get_U3CProxyServerAddressU3Ek__BackingField_5() const { return ___U3CProxyServerAddressU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CProxyServerAddressU3Ek__BackingField_5() { return &___U3CProxyServerAddressU3Ek__BackingField_5; }
	inline void set_U3CProxyServerAddressU3Ek__BackingField_5(String_t* value)
	{
		___U3CProxyServerAddressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProxyServerAddressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_peerConnectionState_6() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___peerConnectionState_6)); }
	inline uint8_t get_peerConnectionState_6() const { return ___peerConnectionState_6; }
	inline uint8_t* get_address_of_peerConnectionState_6() { return &___peerConnectionState_6; }
	inline void set_peerConnectionState_6(uint8_t value)
	{
		___peerConnectionState_6 = value;
	}

	inline static int32_t get_offset_of_ByteCountLastOperation_7() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___ByteCountLastOperation_7)); }
	inline int32_t get_ByteCountLastOperation_7() const { return ___ByteCountLastOperation_7; }
	inline int32_t* get_address_of_ByteCountLastOperation_7() { return &___ByteCountLastOperation_7; }
	inline void set_ByteCountLastOperation_7(int32_t value)
	{
		___ByteCountLastOperation_7 = value;
	}

	inline static int32_t get_offset_of_ByteCountCurrentDispatch_8() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___ByteCountCurrentDispatch_8)); }
	inline int32_t get_ByteCountCurrentDispatch_8() const { return ___ByteCountCurrentDispatch_8; }
	inline int32_t* get_address_of_ByteCountCurrentDispatch_8() { return &___ByteCountCurrentDispatch_8; }
	inline void set_ByteCountCurrentDispatch_8(int32_t value)
	{
		___ByteCountCurrentDispatch_8 = value;
	}

	inline static int32_t get_offset_of_CommandInCurrentDispatch_9() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___CommandInCurrentDispatch_9)); }
	inline NCommand_tF1814C9180D477B081C452EB107C8E6CBC836158 * get_CommandInCurrentDispatch_9() const { return ___CommandInCurrentDispatch_9; }
	inline NCommand_tF1814C9180D477B081C452EB107C8E6CBC836158 ** get_address_of_CommandInCurrentDispatch_9() { return &___CommandInCurrentDispatch_9; }
	inline void set_CommandInCurrentDispatch_9(NCommand_tF1814C9180D477B081C452EB107C8E6CBC836158 * value)
	{
		___CommandInCurrentDispatch_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CommandInCurrentDispatch_9), (void*)value);
	}

	inline static int32_t get_offset_of_packetLossByCrc_10() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___packetLossByCrc_10)); }
	inline int32_t get_packetLossByCrc_10() const { return ___packetLossByCrc_10; }
	inline int32_t* get_address_of_packetLossByCrc_10() { return &___packetLossByCrc_10; }
	inline void set_packetLossByCrc_10(int32_t value)
	{
		___packetLossByCrc_10 = value;
	}

	inline static int32_t get_offset_of_packetLossByChallenge_11() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___packetLossByChallenge_11)); }
	inline int32_t get_packetLossByChallenge_11() const { return ___packetLossByChallenge_11; }
	inline int32_t* get_address_of_packetLossByChallenge_11() { return &___packetLossByChallenge_11; }
	inline void set_packetLossByChallenge_11(int32_t value)
	{
		___packetLossByChallenge_11 = value;
	}

	inline static int32_t get_offset_of_ActionQueue_12() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___ActionQueue_12)); }
	inline Queue_1_t525971E57FAD29C14166A79B3B28E0CB7AD9C9AE * get_ActionQueue_12() const { return ___ActionQueue_12; }
	inline Queue_1_t525971E57FAD29C14166A79B3B28E0CB7AD9C9AE ** get_address_of_ActionQueue_12() { return &___ActionQueue_12; }
	inline void set_ActionQueue_12(Queue_1_t525971E57FAD29C14166A79B3B28E0CB7AD9C9AE * value)
	{
		___ActionQueue_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActionQueue_12), (void*)value);
	}

	inline static int32_t get_offset_of_peerID_13() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___peerID_13)); }
	inline int16_t get_peerID_13() const { return ___peerID_13; }
	inline int16_t* get_address_of_peerID_13() { return &___peerID_13; }
	inline void set_peerID_13(int16_t value)
	{
		___peerID_13 = value;
	}

	inline static int32_t get_offset_of_serverTimeOffset_14() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___serverTimeOffset_14)); }
	inline int32_t get_serverTimeOffset_14() const { return ___serverTimeOffset_14; }
	inline int32_t* get_address_of_serverTimeOffset_14() { return &___serverTimeOffset_14; }
	inline void set_serverTimeOffset_14(int32_t value)
	{
		___serverTimeOffset_14 = value;
	}

	inline static int32_t get_offset_of_serverTimeOffsetIsAvailable_15() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___serverTimeOffsetIsAvailable_15)); }
	inline bool get_serverTimeOffsetIsAvailable_15() const { return ___serverTimeOffsetIsAvailable_15; }
	inline bool* get_address_of_serverTimeOffsetIsAvailable_15() { return &___serverTimeOffsetIsAvailable_15; }
	inline void set_serverTimeOffsetIsAvailable_15(bool value)
	{
		___serverTimeOffsetIsAvailable_15 = value;
	}

	inline static int32_t get_offset_of_roundTripTime_16() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___roundTripTime_16)); }
	inline int32_t get_roundTripTime_16() const { return ___roundTripTime_16; }
	inline int32_t* get_address_of_roundTripTime_16() { return &___roundTripTime_16; }
	inline void set_roundTripTime_16(int32_t value)
	{
		___roundTripTime_16 = value;
	}

	inline static int32_t get_offset_of_roundTripTimeVariance_17() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___roundTripTimeVariance_17)); }
	inline int32_t get_roundTripTimeVariance_17() const { return ___roundTripTimeVariance_17; }
	inline int32_t* get_address_of_roundTripTimeVariance_17() { return &___roundTripTimeVariance_17; }
	inline void set_roundTripTimeVariance_17(int32_t value)
	{
		___roundTripTimeVariance_17 = value;
	}

	inline static int32_t get_offset_of_lastRoundTripTime_18() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___lastRoundTripTime_18)); }
	inline int32_t get_lastRoundTripTime_18() const { return ___lastRoundTripTime_18; }
	inline int32_t* get_address_of_lastRoundTripTime_18() { return &___lastRoundTripTime_18; }
	inline void set_lastRoundTripTime_18(int32_t value)
	{
		___lastRoundTripTime_18 = value;
	}

	inline static int32_t get_offset_of_lowestRoundTripTime_19() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___lowestRoundTripTime_19)); }
	inline int32_t get_lowestRoundTripTime_19() const { return ___lowestRoundTripTime_19; }
	inline int32_t* get_address_of_lowestRoundTripTime_19() { return &___lowestRoundTripTime_19; }
	inline void set_lowestRoundTripTime_19(int32_t value)
	{
		___lowestRoundTripTime_19 = value;
	}

	inline static int32_t get_offset_of_highestRoundTripTimeVariance_20() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___highestRoundTripTimeVariance_20)); }
	inline int32_t get_highestRoundTripTimeVariance_20() const { return ___highestRoundTripTimeVariance_20; }
	inline int32_t* get_address_of_highestRoundTripTimeVariance_20() { return &___highestRoundTripTimeVariance_20; }
	inline void set_highestRoundTripTimeVariance_20(int32_t value)
	{
		___highestRoundTripTimeVariance_20 = value;
	}

	inline static int32_t get_offset_of_timestampOfLastReceive_21() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___timestampOfLastReceive_21)); }
	inline int32_t get_timestampOfLastReceive_21() const { return ___timestampOfLastReceive_21; }
	inline int32_t* get_address_of_timestampOfLastReceive_21() { return &___timestampOfLastReceive_21; }
	inline void set_timestampOfLastReceive_21(int32_t value)
	{
		___timestampOfLastReceive_21 = value;
	}

	inline static int32_t get_offset_of_bytesOut_23() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___bytesOut_23)); }
	inline int64_t get_bytesOut_23() const { return ___bytesOut_23; }
	inline int64_t* get_address_of_bytesOut_23() { return &___bytesOut_23; }
	inline void set_bytesOut_23(int64_t value)
	{
		___bytesOut_23 = value;
	}

	inline static int32_t get_offset_of_bytesIn_24() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___bytesIn_24)); }
	inline int64_t get_bytesIn_24() const { return ___bytesIn_24; }
	inline int64_t* get_address_of_bytesIn_24() { return &___bytesIn_24; }
	inline void set_bytesIn_24(int64_t value)
	{
		___bytesIn_24 = value;
	}

	inline static int32_t get_offset_of_PhotonToken_25() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___PhotonToken_25)); }
	inline RuntimeObject * get_PhotonToken_25() const { return ___PhotonToken_25; }
	inline RuntimeObject ** get_address_of_PhotonToken_25() { return &___PhotonToken_25; }
	inline void set_PhotonToken_25(RuntimeObject * value)
	{
		___PhotonToken_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PhotonToken_25), (void*)value);
	}

	inline static int32_t get_offset_of_CustomInitData_26() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___CustomInitData_26)); }
	inline RuntimeObject * get_CustomInitData_26() const { return ___CustomInitData_26; }
	inline RuntimeObject ** get_address_of_CustomInitData_26() { return &___CustomInitData_26; }
	inline void set_CustomInitData_26(RuntimeObject * value)
	{
		___CustomInitData_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomInitData_26), (void*)value);
	}

	inline static int32_t get_offset_of_AppId_27() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___AppId_27)); }
	inline String_t* get_AppId_27() const { return ___AppId_27; }
	inline String_t** get_address_of_AppId_27() { return &___AppId_27; }
	inline void set_AppId_27(String_t* value)
	{
		___AppId_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppId_27), (void*)value);
	}

	inline static int32_t get_offset_of_reusableEventData_28() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___reusableEventData_28)); }
	inline EventData_t0DA8B0128826527C92CBD7B77100F8875E732EAB * get_reusableEventData_28() const { return ___reusableEventData_28; }
	inline EventData_t0DA8B0128826527C92CBD7B77100F8875E732EAB ** get_address_of_reusableEventData_28() { return &___reusableEventData_28; }
	inline void set_reusableEventData_28(EventData_t0DA8B0128826527C92CBD7B77100F8875E732EAB * value)
	{
		___reusableEventData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reusableEventData_28), (void*)value);
	}

	inline static int32_t get_offset_of_timeBase_29() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___timeBase_29)); }
	inline int32_t get_timeBase_29() const { return ___timeBase_29; }
	inline int32_t* get_address_of_timeBase_29() { return &___timeBase_29; }
	inline void set_timeBase_29(int32_t value)
	{
		___timeBase_29 = value;
	}

	inline static int32_t get_offset_of_timeoutInt_30() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___timeoutInt_30)); }
	inline int32_t get_timeoutInt_30() const { return ___timeoutInt_30; }
	inline int32_t* get_address_of_timeoutInt_30() { return &___timeoutInt_30; }
	inline void set_timeoutInt_30(int32_t value)
	{
		___timeoutInt_30 = value;
	}

	inline static int32_t get_offset_of_timeLastAckReceive_31() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___timeLastAckReceive_31)); }
	inline int32_t get_timeLastAckReceive_31() const { return ___timeLastAckReceive_31; }
	inline int32_t* get_address_of_timeLastAckReceive_31() { return &___timeLastAckReceive_31; }
	inline void set_timeLastAckReceive_31(int32_t value)
	{
		___timeLastAckReceive_31 = value;
	}

	inline static int32_t get_offset_of_longestSentCall_32() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___longestSentCall_32)); }
	inline int32_t get_longestSentCall_32() const { return ___longestSentCall_32; }
	inline int32_t* get_address_of_longestSentCall_32() { return &___longestSentCall_32; }
	inline void set_longestSentCall_32(int32_t value)
	{
		___longestSentCall_32 = value;
	}

	inline static int32_t get_offset_of_timeLastSendAck_33() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___timeLastSendAck_33)); }
	inline int32_t get_timeLastSendAck_33() const { return ___timeLastSendAck_33; }
	inline int32_t* get_address_of_timeLastSendAck_33() { return &___timeLastSendAck_33; }
	inline void set_timeLastSendAck_33(int32_t value)
	{
		___timeLastSendAck_33 = value;
	}

	inline static int32_t get_offset_of_timeLastSendOutgoing_34() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___timeLastSendOutgoing_34)); }
	inline int32_t get_timeLastSendOutgoing_34() const { return ___timeLastSendOutgoing_34; }
	inline int32_t* get_address_of_timeLastSendOutgoing_34() { return &___timeLastSendOutgoing_34; }
	inline void set_timeLastSendOutgoing_34(int32_t value)
	{
		___timeLastSendOutgoing_34 = value;
	}

	inline static int32_t get_offset_of_ApplicationIsInitialized_35() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___ApplicationIsInitialized_35)); }
	inline bool get_ApplicationIsInitialized_35() const { return ___ApplicationIsInitialized_35; }
	inline bool* get_address_of_ApplicationIsInitialized_35() { return &___ApplicationIsInitialized_35; }
	inline void set_ApplicationIsInitialized_35(bool value)
	{
		___ApplicationIsInitialized_35 = value;
	}

	inline static int32_t get_offset_of_isEncryptionAvailable_36() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___isEncryptionAvailable_36)); }
	inline bool get_isEncryptionAvailable_36() const { return ___isEncryptionAvailable_36; }
	inline bool* get_address_of_isEncryptionAvailable_36() { return &___isEncryptionAvailable_36; }
	inline void set_isEncryptionAvailable_36(bool value)
	{
		___isEncryptionAvailable_36 = value;
	}

	inline static int32_t get_offset_of_outgoingCommandsInStream_37() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___outgoingCommandsInStream_37)); }
	inline int32_t get_outgoingCommandsInStream_37() const { return ___outgoingCommandsInStream_37; }
	inline int32_t* get_address_of_outgoingCommandsInStream_37() { return &___outgoingCommandsInStream_37; }
	inline void set_outgoingCommandsInStream_37(int32_t value)
	{
		___outgoingCommandsInStream_37 = value;
	}

	inline static int32_t get_offset_of_messageHeader_39() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___messageHeader_39)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_messageHeader_39() const { return ___messageHeader_39; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_messageHeader_39() { return &___messageHeader_39; }
	inline void set_messageHeader_39(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___messageHeader_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageHeader_39), (void*)value);
	}

	inline static int32_t get_offset_of_CryptoProvider_40() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___CryptoProvider_40)); }
	inline RuntimeObject* get_CryptoProvider_40() const { return ___CryptoProvider_40; }
	inline RuntimeObject** get_address_of_CryptoProvider_40() { return &___CryptoProvider_40; }
	inline void set_CryptoProvider_40(RuntimeObject* value)
	{
		___CryptoProvider_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CryptoProvider_40), (void*)value);
	}

	inline static int32_t get_offset_of_lagRandomizer_41() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___lagRandomizer_41)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_lagRandomizer_41() const { return ___lagRandomizer_41; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_lagRandomizer_41() { return &___lagRandomizer_41; }
	inline void set_lagRandomizer_41(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___lagRandomizer_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lagRandomizer_41), (void*)value);
	}

	inline static int32_t get_offset_of_NetSimListOutgoing_42() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___NetSimListOutgoing_42)); }
	inline LinkedList_1_t90B1134086379590BB3286E68F55880DF6F0E585 * get_NetSimListOutgoing_42() const { return ___NetSimListOutgoing_42; }
	inline LinkedList_1_t90B1134086379590BB3286E68F55880DF6F0E585 ** get_address_of_NetSimListOutgoing_42() { return &___NetSimListOutgoing_42; }
	inline void set_NetSimListOutgoing_42(LinkedList_1_t90B1134086379590BB3286E68F55880DF6F0E585 * value)
	{
		___NetSimListOutgoing_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetSimListOutgoing_42), (void*)value);
	}

	inline static int32_t get_offset_of_NetSimListIncoming_43() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___NetSimListIncoming_43)); }
	inline LinkedList_1_t90B1134086379590BB3286E68F55880DF6F0E585 * get_NetSimListIncoming_43() const { return ___NetSimListIncoming_43; }
	inline LinkedList_1_t90B1134086379590BB3286E68F55880DF6F0E585 ** get_address_of_NetSimListIncoming_43() { return &___NetSimListIncoming_43; }
	inline void set_NetSimListIncoming_43(LinkedList_1_t90B1134086379590BB3286E68F55880DF6F0E585 * value)
	{
		___NetSimListIncoming_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetSimListIncoming_43), (void*)value);
	}

	inline static int32_t get_offset_of_networkSimulationSettings_44() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___networkSimulationSettings_44)); }
	inline NetworkSimulationSet_t69D6A7D8DAC22E7D53C247701AA48FDB28FBD656 * get_networkSimulationSettings_44() const { return ___networkSimulationSettings_44; }
	inline NetworkSimulationSet_t69D6A7D8DAC22E7D53C247701AA48FDB28FBD656 ** get_address_of_networkSimulationSettings_44() { return &___networkSimulationSettings_44; }
	inline void set_networkSimulationSettings_44(NetworkSimulationSet_t69D6A7D8DAC22E7D53C247701AA48FDB28FBD656 * value)
	{
		___networkSimulationSettings_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___networkSimulationSettings_44), (void*)value);
	}

	inline static int32_t get_offset_of_TrafficPackageHeaderSize_45() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___TrafficPackageHeaderSize_45)); }
	inline int32_t get_TrafficPackageHeaderSize_45() const { return ___TrafficPackageHeaderSize_45; }
	inline int32_t* get_address_of_TrafficPackageHeaderSize_45() { return &___TrafficPackageHeaderSize_45; }
	inline void set_TrafficPackageHeaderSize_45(int32_t value)
	{
		___TrafficPackageHeaderSize_45 = value;
	}
};

struct PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557_StaticFields
{
public:
	// System.Int16 ExitGames.Client.Photon.PeerBase::peerCount
	int16_t ___peerCount_22;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.StreamBuffer> ExitGames.Client.Photon.PeerBase::MessageBufferPool
	Queue_1_t238184E28E78549BBC5200A6D817DAE58F1D0928 * ___MessageBufferPool_38;

public:
	inline static int32_t get_offset_of_peerCount_22() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557_StaticFields, ___peerCount_22)); }
	inline int16_t get_peerCount_22() const { return ___peerCount_22; }
	inline int16_t* get_address_of_peerCount_22() { return &___peerCount_22; }
	inline void set_peerCount_22(int16_t value)
	{
		___peerCount_22 = value;
	}

	inline static int32_t get_offset_of_MessageBufferPool_38() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557_StaticFields, ___MessageBufferPool_38)); }
	inline Queue_1_t238184E28E78549BBC5200A6D817DAE58F1D0928 * get_MessageBufferPool_38() const { return ___MessageBufferPool_38; }
	inline Queue_1_t238184E28E78549BBC5200A6D817DAE58F1D0928 ** get_address_of_MessageBufferPool_38() { return &___MessageBufferPool_38; }
	inline void set_MessageBufferPool_38(Queue_1_t238184E28E78549BBC5200A6D817DAE58F1D0928 * value)
	{
		___MessageBufferPool_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageBufferPool_38), (void*)value);
	}
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Uri
struct  Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;

public:
	inline static int32_t get_offset_of_m_String_13() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_String_13)); }
	inline String_t* get_m_String_13() const { return ___m_String_13; }
	inline String_t** get_address_of_m_String_13() { return &___m_String_13; }
	inline void set_m_String_13(String_t* value)
	{
		___m_String_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_14() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_originalUnicodeString_14)); }
	inline String_t* get_m_originalUnicodeString_14() const { return ___m_originalUnicodeString_14; }
	inline String_t** get_address_of_m_originalUnicodeString_14() { return &___m_originalUnicodeString_14; }
	inline void set_m_originalUnicodeString_14(String_t* value)
	{
		___m_originalUnicodeString_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_15() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Syntax_15)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_m_Syntax_15() const { return ___m_Syntax_15; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_m_Syntax_15() { return &___m_Syntax_15; }
	inline void set_m_Syntax_15(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___m_Syntax_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_16() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_DnsSafeHost_16)); }
	inline String_t* get_m_DnsSafeHost_16() const { return ___m_DnsSafeHost_16; }
	inline String_t** get_address_of_m_DnsSafeHost_16() { return &___m_DnsSafeHost_16; }
	inline void set_m_DnsSafeHost_16(String_t* value)
	{
		___m_DnsSafeHost_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_17() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Flags_17)); }
	inline uint64_t get_m_Flags_17() const { return ___m_Flags_17; }
	inline uint64_t* get_address_of_m_Flags_17() { return &___m_Flags_17; }
	inline void set_m_Flags_17(uint64_t value)
	{
		___m_Flags_17 = value;
	}

	inline static int32_t get_offset_of_m_Info_18() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Info_18)); }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * get_m_Info_18() const { return ___m_Info_18; }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 ** get_address_of_m_Info_18() { return &___m_Info_18; }
	inline void set_m_Info_18(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * value)
	{
		___m_Info_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_19() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_iriParsing_19)); }
	inline bool get_m_iriParsing_19() const { return ___m_iriParsing_19; }
	inline bool* get_address_of_m_iriParsing_19() { return &___m_iriParsing_19; }
	inline void set_m_iriParsing_19(bool value)
	{
		___m_iriParsing_19 = value;
	}
};

struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____WSchars_28;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_20() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitialized_20)); }
	inline bool get_s_ConfigInitialized_20() const { return ___s_ConfigInitialized_20; }
	inline bool* get_address_of_s_ConfigInitialized_20() { return &___s_ConfigInitialized_20; }
	inline void set_s_ConfigInitialized_20(bool value)
	{
		___s_ConfigInitialized_20 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_21() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitializing_21)); }
	inline bool get_s_ConfigInitializing_21() const { return ___s_ConfigInitializing_21; }
	inline bool* get_address_of_s_ConfigInitializing_21() { return &___s_ConfigInitializing_21; }
	inline void set_s_ConfigInitializing_21(bool value)
	{
		___s_ConfigInitializing_21 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_22() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IdnScope_22)); }
	inline int32_t get_s_IdnScope_22() const { return ___s_IdnScope_22; }
	inline int32_t* get_address_of_s_IdnScope_22() { return &___s_IdnScope_22; }
	inline void set_s_IdnScope_22(int32_t value)
	{
		___s_IdnScope_22 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_23() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IriParsing_23)); }
	inline bool get_s_IriParsing_23() const { return ___s_IriParsing_23; }
	inline bool* get_address_of_s_IriParsing_23() { return &___s_IriParsing_23; }
	inline void set_s_IriParsing_23(bool value)
	{
		___s_IriParsing_23 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_24() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___useDotNetRelativeOrAbsolute_24)); }
	inline bool get_useDotNetRelativeOrAbsolute_24() const { return ___useDotNetRelativeOrAbsolute_24; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_24() { return &___useDotNetRelativeOrAbsolute_24; }
	inline void set_useDotNetRelativeOrAbsolute_24(bool value)
	{
		___useDotNetRelativeOrAbsolute_24 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_25() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___IsWindowsFileSystem_25)); }
	inline bool get_IsWindowsFileSystem_25() const { return ___IsWindowsFileSystem_25; }
	inline bool* get_address_of_IsWindowsFileSystem_25() { return &___IsWindowsFileSystem_25; }
	inline void set_IsWindowsFileSystem_25(bool value)
	{
		___IsWindowsFileSystem_25 = value;
	}

	inline static int32_t get_offset_of_s_initLock_26() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_initLock_26)); }
	inline RuntimeObject * get_s_initLock_26() const { return ___s_initLock_26; }
	inline RuntimeObject ** get_address_of_s_initLock_26() { return &___s_initLock_26; }
	inline void set_s_initLock_26(RuntimeObject * value)
	{
		___s_initLock_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_26), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_27() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___HexLowerChars_27)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_HexLowerChars_27() const { return ___HexLowerChars_27; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_HexLowerChars_27() { return &___HexLowerChars_27; }
	inline void set_HexLowerChars_27(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___HexLowerChars_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_27), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_28() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ____WSchars_28)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__WSchars_28() const { return ____WSchars_28; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__WSchars_28() { return &____WSchars_28; }
	inline void set__WSchars_28(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____WSchars_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_28), (void*)value);
	}
};


// System.Action
struct  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// ExitGames.Client.Photon.SocketWebTcp
struct  SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1  : public IPhotonSocket_t8C4CC725BD3399028AEECE28EE0009F06EBFCB96
{
public:
	// WebSocket ExitGames.Client.Photon.SocketWebTcp::sock
	WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * ___sock_12;
	// System.Object ExitGames.Client.Photon.SocketWebTcp::syncer
	RuntimeObject * ___syncer_13;
	// UnityEngine.GameObject ExitGames.Client.Photon.SocketWebTcp::websocketConnectionObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___websocketConnectionObject_14;

public:
	inline static int32_t get_offset_of_sock_12() { return static_cast<int32_t>(offsetof(SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1, ___sock_12)); }
	inline WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * get_sock_12() const { return ___sock_12; }
	inline WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 ** get_address_of_sock_12() { return &___sock_12; }
	inline void set_sock_12(WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * value)
	{
		___sock_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sock_12), (void*)value);
	}

	inline static int32_t get_offset_of_syncer_13() { return static_cast<int32_t>(offsetof(SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1, ___syncer_13)); }
	inline RuntimeObject * get_syncer_13() const { return ___syncer_13; }
	inline RuntimeObject ** get_address_of_syncer_13() { return &___syncer_13; }
	inline void set_syncer_13(RuntimeObject * value)
	{
		___syncer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___syncer_13), (void*)value);
	}

	inline static int32_t get_offset_of_websocketConnectionObject_14() { return static_cast<int32_t>(offsetof(SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1, ___websocketConnectionObject_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_websocketConnectionObject_14() const { return ___websocketConnectionObject_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_websocketConnectionObject_14() { return &___websocketConnectionObject_14; }
	inline void set_websocketConnectionObject_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___websocketConnectionObject_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___websocketConnectionObject_14), (void*)value);
	}
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// AudioPlayer
struct  AudioPlayer_tFAB0D7A01313CB252849A2270690FC00905BB48B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioClip[] AudioPlayer::clips
	AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ___clips_4;
	// System.Boolean AudioPlayer::randomizePitch
	bool ___randomizePitch_5;
	// System.Single AudioPlayer::pitchRandomRange
	float ___pitchRandomRange_6;
	// System.Single AudioPlayer::playDelay
	float ___playDelay_7;
	// System.Boolean AudioPlayer::playOnStart
	bool ___playOnStart_8;
	// System.Boolean AudioPlayer::loop
	bool ___loop_9;
	// System.Boolean AudioPlayer::playing
	bool ___playing_10;
	// System.Boolean AudioPlayer::canPlay
	bool ___canPlay_11;
	// UnityEngine.AudioSource AudioPlayer::m_Audiosource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___m_Audiosource_12;
	// UnityEngine.AudioClip AudioPlayer::<clip>k__BackingField
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___U3CclipU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_clips_4() { return static_cast<int32_t>(offsetof(AudioPlayer_tFAB0D7A01313CB252849A2270690FC00905BB48B, ___clips_4)); }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* get_clips_4() const { return ___clips_4; }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE** get_address_of_clips_4() { return &___clips_4; }
	inline void set_clips_4(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* value)
	{
		___clips_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clips_4), (void*)value);
	}

	inline static int32_t get_offset_of_randomizePitch_5() { return static_cast<int32_t>(offsetof(AudioPlayer_tFAB0D7A01313CB252849A2270690FC00905BB48B, ___randomizePitch_5)); }
	inline bool get_randomizePitch_5() const { return ___randomizePitch_5; }
	inline bool* get_address_of_randomizePitch_5() { return &___randomizePitch_5; }
	inline void set_randomizePitch_5(bool value)
	{
		___randomizePitch_5 = value;
	}

	inline static int32_t get_offset_of_pitchRandomRange_6() { return static_cast<int32_t>(offsetof(AudioPlayer_tFAB0D7A01313CB252849A2270690FC00905BB48B, ___pitchRandomRange_6)); }
	inline float get_pitchRandomRange_6() const { return ___pitchRandomRange_6; }
	inline float* get_address_of_pitchRandomRange_6() { return &___pitchRandomRange_6; }
	inline void set_pitchRandomRange_6(float value)
	{
		___pitchRandomRange_6 = value;
	}

	inline static int32_t get_offset_of_playDelay_7() { return static_cast<int32_t>(offsetof(AudioPlayer_tFAB0D7A01313CB252849A2270690FC00905BB48B, ___playDelay_7)); }
	inline float get_playDelay_7() const { return ___playDelay_7; }
	inline float* get_address_of_playDelay_7() { return &___playDelay_7; }
	inline void set_playDelay_7(float value)
	{
		___playDelay_7 = value;
	}

	inline static int32_t get_offset_of_playOnStart_8() { return static_cast<int32_t>(offsetof(AudioPlayer_tFAB0D7A01313CB252849A2270690FC00905BB48B, ___playOnStart_8)); }
	inline bool get_playOnStart_8() const { return ___playOnStart_8; }
	inline bool* get_address_of_playOnStart_8() { return &___playOnStart_8; }
	inline void set_playOnStart_8(bool value)
	{
		___playOnStart_8 = value;
	}

	inline static int32_t get_offset_of_loop_9() { return static_cast<int32_t>(offsetof(AudioPlayer_tFAB0D7A01313CB252849A2270690FC00905BB48B, ___loop_9)); }
	inline bool get_loop_9() const { return ___loop_9; }
	inline bool* get_address_of_loop_9() { return &___loop_9; }
	inline void set_loop_9(bool value)
	{
		___loop_9 = value;
	}

	inline static int32_t get_offset_of_playing_10() { return static_cast<int32_t>(offsetof(AudioPlayer_tFAB0D7A01313CB252849A2270690FC00905BB48B, ___playing_10)); }
	inline bool get_playing_10() const { return ___playing_10; }
	inline bool* get_address_of_playing_10() { return &___playing_10; }
	inline void set_playing_10(bool value)
	{
		___playing_10 = value;
	}

	inline static int32_t get_offset_of_canPlay_11() { return static_cast<int32_t>(offsetof(AudioPlayer_tFAB0D7A01313CB252849A2270690FC00905BB48B, ___canPlay_11)); }
	inline bool get_canPlay_11() const { return ___canPlay_11; }
	inline bool* get_address_of_canPlay_11() { return &___canPlay_11; }
	inline void set_canPlay_11(bool value)
	{
		___canPlay_11 = value;
	}

	inline static int32_t get_offset_of_m_Audiosource_12() { return static_cast<int32_t>(offsetof(AudioPlayer_tFAB0D7A01313CB252849A2270690FC00905BB48B, ___m_Audiosource_12)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_m_Audiosource_12() const { return ___m_Audiosource_12; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_m_Audiosource_12() { return &___m_Audiosource_12; }
	inline void set_m_Audiosource_12(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___m_Audiosource_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Audiosource_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CclipU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(AudioPlayer_tFAB0D7A01313CB252849A2270690FC00905BB48B, ___U3CclipU3Ek__BackingField_13)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_U3CclipU3Ek__BackingField_13() const { return ___U3CclipU3Ek__BackingField_13; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_U3CclipU3Ek__BackingField_13() { return &___U3CclipU3Ek__BackingField_13; }
	inline void set_U3CclipU3Ek__BackingField_13(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___U3CclipU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CclipU3Ek__BackingField_13), (void*)value);
	}
};


// Photon.Pun.MonoBehaviourPun
struct  MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Photon.Pun.PhotonView Photon.Pun.MonoBehaviourPun::pvCache
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * ___pvCache_4;

public:
	inline static int32_t get_offset_of_pvCache_4() { return static_cast<int32_t>(offsetof(MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223, ___pvCache_4)); }
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * get_pvCache_4() const { return ___pvCache_4; }
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 ** get_address_of_pvCache_4() { return &___pvCache_4; }
	inline void set_pvCache_4(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * value)
	{
		___pvCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pvCache_4), (void*)value);
	}
};


// Ozmoz.ScreamGettingUI
struct  ScreamGettingUI_t8C9DC924B752A009960918BA09BDB9E539B496C1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Image Ozmoz.ScreamGettingUI::prideScreamPanel
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___prideScreamPanel_4;
	// UnityEngine.UI.Image Ozmoz.ScreamGettingUI::joyScreamPanel
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___joyScreamPanel_5;
	// UnityEngine.UI.Image Ozmoz.ScreamGettingUI::curiosityScreamPanel
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___curiosityScreamPanel_6;
	// UnityEngine.UI.Image Ozmoz.ScreamGettingUI::corneredScreamPanel
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___corneredScreamPanel_7;
	// UnityEngine.UI.Image Ozmoz.ScreamGettingUI::solitudeScreamPanel
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___solitudeScreamPanel_8;
	// UnityEngine.UI.Image Ozmoz.ScreamGettingUI::sadnessScreamPanel
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___sadnessScreamPanel_9;
	// AudioPlayer Ozmoz.ScreamGettingUI::unlockAudioPlayer
	AudioPlayer_tFAB0D7A01313CB252849A2270690FC00905BB48B * ___unlockAudioPlayer_10;
	// System.Boolean Ozmoz.ScreamGettingUI::waiting
	bool ___waiting_11;

public:
	inline static int32_t get_offset_of_prideScreamPanel_4() { return static_cast<int32_t>(offsetof(ScreamGettingUI_t8C9DC924B752A009960918BA09BDB9E539B496C1, ___prideScreamPanel_4)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_prideScreamPanel_4() const { return ___prideScreamPanel_4; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_prideScreamPanel_4() { return &___prideScreamPanel_4; }
	inline void set_prideScreamPanel_4(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___prideScreamPanel_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prideScreamPanel_4), (void*)value);
	}

	inline static int32_t get_offset_of_joyScreamPanel_5() { return static_cast<int32_t>(offsetof(ScreamGettingUI_t8C9DC924B752A009960918BA09BDB9E539B496C1, ___joyScreamPanel_5)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_joyScreamPanel_5() const { return ___joyScreamPanel_5; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_joyScreamPanel_5() { return &___joyScreamPanel_5; }
	inline void set_joyScreamPanel_5(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___joyScreamPanel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___joyScreamPanel_5), (void*)value);
	}

	inline static int32_t get_offset_of_curiosityScreamPanel_6() { return static_cast<int32_t>(offsetof(ScreamGettingUI_t8C9DC924B752A009960918BA09BDB9E539B496C1, ___curiosityScreamPanel_6)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_curiosityScreamPanel_6() const { return ___curiosityScreamPanel_6; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_curiosityScreamPanel_6() { return &___curiosityScreamPanel_6; }
	inline void set_curiosityScreamPanel_6(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___curiosityScreamPanel_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___curiosityScreamPanel_6), (void*)value);
	}

	inline static int32_t get_offset_of_corneredScreamPanel_7() { return static_cast<int32_t>(offsetof(ScreamGettingUI_t8C9DC924B752A009960918BA09BDB9E539B496C1, ___corneredScreamPanel_7)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_corneredScreamPanel_7() const { return ___corneredScreamPanel_7; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_corneredScreamPanel_7() { return &___corneredScreamPanel_7; }
	inline void set_corneredScreamPanel_7(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___corneredScreamPanel_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___corneredScreamPanel_7), (void*)value);
	}

	inline static int32_t get_offset_of_solitudeScreamPanel_8() { return static_cast<int32_t>(offsetof(ScreamGettingUI_t8C9DC924B752A009960918BA09BDB9E539B496C1, ___solitudeScreamPanel_8)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_solitudeScreamPanel_8() const { return ___solitudeScreamPanel_8; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_solitudeScreamPanel_8() { return &___solitudeScreamPanel_8; }
	inline void set_solitudeScreamPanel_8(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___solitudeScreamPanel_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___solitudeScreamPanel_8), (void*)value);
	}

	inline static int32_t get_offset_of_sadnessScreamPanel_9() { return static_cast<int32_t>(offsetof(ScreamGettingUI_t8C9DC924B752A009960918BA09BDB9E539B496C1, ___sadnessScreamPanel_9)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_sadnessScreamPanel_9() const { return ___sadnessScreamPanel_9; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_sadnessScreamPanel_9() { return &___sadnessScreamPanel_9; }
	inline void set_sadnessScreamPanel_9(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___sadnessScreamPanel_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sadnessScreamPanel_9), (void*)value);
	}

	inline static int32_t get_offset_of_unlockAudioPlayer_10() { return static_cast<int32_t>(offsetof(ScreamGettingUI_t8C9DC924B752A009960918BA09BDB9E539B496C1, ___unlockAudioPlayer_10)); }
	inline AudioPlayer_tFAB0D7A01313CB252849A2270690FC00905BB48B * get_unlockAudioPlayer_10() const { return ___unlockAudioPlayer_10; }
	inline AudioPlayer_tFAB0D7A01313CB252849A2270690FC00905BB48B ** get_address_of_unlockAudioPlayer_10() { return &___unlockAudioPlayer_10; }
	inline void set_unlockAudioPlayer_10(AudioPlayer_tFAB0D7A01313CB252849A2270690FC00905BB48B * value)
	{
		___unlockAudioPlayer_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unlockAudioPlayer_10), (void*)value);
	}

	inline static int32_t get_offset_of_waiting_11() { return static_cast<int32_t>(offsetof(ScreamGettingUI_t8C9DC924B752A009960918BA09BDB9E539B496C1, ___waiting_11)); }
	inline bool get_waiting_11() const { return ___waiting_11; }
	inline bool* get_address_of_waiting_11() { return &___waiting_11; }
	inline void set_waiting_11(bool value)
	{
		___waiting_11 = value;
	}
};


// ScreamSelector
struct  ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ScreamSelector::billboards
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___billboards_4;
	// UnityEngine.GameObject ScreamSelector::ozVersion
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ozVersion_5;
	// UnityEngine.GameObject ScreamSelector::mozVersion
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___mozVersion_6;
	// UnityEngine.Transform ScreamSelector::pivot
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___pivot_7;
	// UnityEngine.SpriteRenderer ScreamSelector::prideSprite
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___prideSprite_8;
	// UnityEngine.SpriteRenderer ScreamSelector::prideSpriteActivated
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___prideSpriteActivated_9;
	// UnityEngine.SpriteRenderer ScreamSelector::curiositySprite
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___curiositySprite_10;
	// UnityEngine.SpriteRenderer ScreamSelector::curiositySpriteActivated
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___curiositySpriteActivated_11;
	// UnityEngine.SpriteRenderer ScreamSelector::joySprite
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___joySprite_12;
	// UnityEngine.SpriteRenderer ScreamSelector::joySpriteActivated
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___joySpriteActivated_13;
	// UnityEngine.SpriteRenderer ScreamSelector::corneredSprite
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___corneredSprite_14;
	// UnityEngine.SpriteRenderer ScreamSelector::corneredSpriteActivated
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___corneredSpriteActivated_15;
	// UnityEngine.SpriteRenderer ScreamSelector::solitudeSprite
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___solitudeSprite_16;
	// UnityEngine.SpriteRenderer ScreamSelector::solitudeSpriteActivated
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___solitudeSpriteActivated_17;
	// UnityEngine.SpriteRenderer ScreamSelector::sadnessSprite
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___sadnessSprite_18;
	// UnityEngine.SpriteRenderer ScreamSelector::sadnessSpriteActivated
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___sadnessSpriteActivated_19;
	// UnityEngine.SpriteRenderer ScreamSelector::ozBbackgroundSprite
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___ozBbackgroundSprite_20;
	// UnityEngine.SpriteRenderer ScreamSelector::mozBackgroundSprite
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___mozBackgroundSprite_21;
	// System.Single ScreamSelector::topHeight
	float ___topHeight_22;
	// System.Single ScreamSelector::backHeight
	float ___backHeight_23;
	// UnityEngine.Quaternion ScreamSelector::currentRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___currentRotation_24;
	// System.Int32 ScreamSelector::selectedScream
	int32_t ___selectedScream_25;
	// System.Boolean ScreamSelector::visible
	bool ___visible_26;
	// System.Int32 ScreamSelector::visibleCoroutines
	int32_t ___visibleCoroutines_27;

public:
	inline static int32_t get_offset_of_billboards_4() { return static_cast<int32_t>(offsetof(ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3, ___billboards_4)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_billboards_4() const { return ___billboards_4; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_billboards_4() { return &___billboards_4; }
	inline void set_billboards_4(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___billboards_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___billboards_4), (void*)value);
	}

	inline static int32_t get_offset_of_ozVersion_5() { return static_cast<int32_t>(offsetof(ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3, ___ozVersion_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ozVersion_5() const { return ___ozVersion_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ozVersion_5() { return &___ozVersion_5; }
	inline void set_ozVersion_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ozVersion_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ozVersion_5), (void*)value);
	}

	inline static int32_t get_offset_of_mozVersion_6() { return static_cast<int32_t>(offsetof(ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3, ___mozVersion_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_mozVersion_6() const { return ___mozVersion_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_mozVersion_6() { return &___mozVersion_6; }
	inline void set_mozVersion_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___mozVersion_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mozVersion_6), (void*)value);
	}

	inline static int32_t get_offset_of_pivot_7() { return static_cast<int32_t>(offsetof(ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3, ___pivot_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_pivot_7() const { return ___pivot_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_pivot_7() { return &___pivot_7; }
	inline void set_pivot_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___pivot_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pivot_7), (void*)value);
	}

	inline static int32_t get_offset_of_prideSprite_8() { return static_cast<int32_t>(offsetof(ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3, ___prideSprite_8)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_prideSprite_8() const { return ___prideSprite_8; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_prideSprite_8() { return &___prideSprite_8; }
	inline void set_prideSprite_8(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___prideSprite_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prideSprite_8), (void*)value);
	}

	inline static int32_t get_offset_of_prideSpriteActivated_9() { return static_cast<int32_t>(offsetof(ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3, ___prideSpriteActivated_9)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_prideSpriteActivated_9() const { return ___prideSpriteActivated_9; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_prideSpriteActivated_9() { return &___prideSpriteActivated_9; }
	inline void set_prideSpriteActivated_9(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___prideSpriteActivated_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prideSpriteActivated_9), (void*)value);
	}

	inline static int32_t get_offset_of_curiositySprite_10() { return static_cast<int32_t>(offsetof(ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3, ___curiositySprite_10)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_curiositySprite_10() const { return ___curiositySprite_10; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_curiositySprite_10() { return &___curiositySprite_10; }
	inline void set_curiositySprite_10(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___curiositySprite_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___curiositySprite_10), (void*)value);
	}

	inline static int32_t get_offset_of_curiositySpriteActivated_11() { return static_cast<int32_t>(offsetof(ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3, ___curiositySpriteActivated_11)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_curiositySpriteActivated_11() const { return ___curiositySpriteActivated_11; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_curiositySpriteActivated_11() { return &___curiositySpriteActivated_11; }
	inline void set_curiositySpriteActivated_11(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___curiositySpriteActivated_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___curiositySpriteActivated_11), (void*)value);
	}

	inline static int32_t get_offset_of_joySprite_12() { return static_cast<int32_t>(offsetof(ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3, ___joySprite_12)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_joySprite_12() const { return ___joySprite_12; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_joySprite_12() { return &___joySprite_12; }
	inline void set_joySprite_12(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___joySprite_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___joySprite_12), (void*)value);
	}

	inline static int32_t get_offset_of_joySpriteActivated_13() { return static_cast<int32_t>(offsetof(ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3, ___joySpriteActivated_13)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_joySpriteActivated_13() const { return ___joySpriteActivated_13; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_joySpriteActivated_13() { return &___joySpriteActivated_13; }
	inline void set_joySpriteActivated_13(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___joySpriteActivated_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___joySpriteActivated_13), (void*)value);
	}

	inline static int32_t get_offset_of_corneredSprite_14() { return static_cast<int32_t>(offsetof(ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3, ___corneredSprite_14)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_corneredSprite_14() const { return ___corneredSprite_14; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_corneredSprite_14() { return &___corneredSprite_14; }
	inline void set_corneredSprite_14(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___corneredSprite_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___corneredSprite_14), (void*)value);
	}

	inline static int32_t get_offset_of_corneredSpriteActivated_15() { return static_cast<int32_t>(offsetof(ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3, ___corneredSpriteActivated_15)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_corneredSpriteActivated_15() const { return ___corneredSpriteActivated_15; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_corneredSpriteActivated_15() { return &___corneredSpriteActivated_15; }
	inline void set_corneredSpriteActivated_15(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___corneredSpriteActivated_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___corneredSpriteActivated_15), (void*)value);
	}

	inline static int32_t get_offset_of_solitudeSprite_16() { return static_cast<int32_t>(offsetof(ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3, ___solitudeSprite_16)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_solitudeSprite_16() const { return ___solitudeSprite_16; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_solitudeSprite_16() { return &___solitudeSprite_16; }
	inline void set_solitudeSprite_16(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___solitudeSprite_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___solitudeSprite_16), (void*)value);
	}

	inline static int32_t get_offset_of_solitudeSpriteActivated_17() { return static_cast<int32_t>(offsetof(ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3, ___solitudeSpriteActivated_17)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_solitudeSpriteActivated_17() const { return ___solitudeSpriteActivated_17; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_solitudeSpriteActivated_17() { return &___solitudeSpriteActivated_17; }
	inline void set_solitudeSpriteActivated_17(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___solitudeSpriteActivated_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___solitudeSpriteActivated_17), (void*)value);
	}

	inline static int32_t get_offset_of_sadnessSprite_18() { return static_cast<int32_t>(offsetof(ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3, ___sadnessSprite_18)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_sadnessSprite_18() const { return ___sadnessSprite_18; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_sadnessSprite_18() { return &___sadnessSprite_18; }
	inline void set_sadnessSprite_18(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___sadnessSprite_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sadnessSprite_18), (void*)value);
	}

	inline static int32_t get_offset_of_sadnessSpriteActivated_19() { return static_cast<int32_t>(offsetof(ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3, ___sadnessSpriteActivated_19)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_sadnessSpriteActivated_19() const { return ___sadnessSpriteActivated_19; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_sadnessSpriteActivated_19() { return &___sadnessSpriteActivated_19; }
	inline void set_sadnessSpriteActivated_19(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___sadnessSpriteActivated_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sadnessSpriteActivated_19), (void*)value);
	}

	inline static int32_t get_offset_of_ozBbackgroundSprite_20() { return static_cast<int32_t>(offsetof(ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3, ___ozBbackgroundSprite_20)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_ozBbackgroundSprite_20() const { return ___ozBbackgroundSprite_20; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_ozBbackgroundSprite_20() { return &___ozBbackgroundSprite_20; }
	inline void set_ozBbackgroundSprite_20(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___ozBbackgroundSprite_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ozBbackgroundSprite_20), (void*)value);
	}

	inline static int32_t get_offset_of_mozBackgroundSprite_21() { return static_cast<int32_t>(offsetof(ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3, ___mozBackgroundSprite_21)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_mozBackgroundSprite_21() const { return ___mozBackgroundSprite_21; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_mozBackgroundSprite_21() { return &___mozBackgroundSprite_21; }
	inline void set_mozBackgroundSprite_21(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___mozBackgroundSprite_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mozBackgroundSprite_21), (void*)value);
	}

	inline static int32_t get_offset_of_topHeight_22() { return static_cast<int32_t>(offsetof(ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3, ___topHeight_22)); }
	inline float get_topHeight_22() const { return ___topHeight_22; }
	inline float* get_address_of_topHeight_22() { return &___topHeight_22; }
	inline void set_topHeight_22(float value)
	{
		___topHeight_22 = value;
	}

	inline static int32_t get_offset_of_backHeight_23() { return static_cast<int32_t>(offsetof(ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3, ___backHeight_23)); }
	inline float get_backHeight_23() const { return ___backHeight_23; }
	inline float* get_address_of_backHeight_23() { return &___backHeight_23; }
	inline void set_backHeight_23(float value)
	{
		___backHeight_23 = value;
	}

	inline static int32_t get_offset_of_currentRotation_24() { return static_cast<int32_t>(offsetof(ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3, ___currentRotation_24)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_currentRotation_24() const { return ___currentRotation_24; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_currentRotation_24() { return &___currentRotation_24; }
	inline void set_currentRotation_24(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___currentRotation_24 = value;
	}

	inline static int32_t get_offset_of_selectedScream_25() { return static_cast<int32_t>(offsetof(ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3, ___selectedScream_25)); }
	inline int32_t get_selectedScream_25() const { return ___selectedScream_25; }
	inline int32_t* get_address_of_selectedScream_25() { return &___selectedScream_25; }
	inline void set_selectedScream_25(int32_t value)
	{
		___selectedScream_25 = value;
	}

	inline static int32_t get_offset_of_visible_26() { return static_cast<int32_t>(offsetof(ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3, ___visible_26)); }
	inline bool get_visible_26() const { return ___visible_26; }
	inline bool* get_address_of_visible_26() { return &___visible_26; }
	inline void set_visible_26(bool value)
	{
		___visible_26 = value;
	}

	inline static int32_t get_offset_of_visibleCoroutines_27() { return static_cast<int32_t>(offsetof(ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3, ___visibleCoroutines_27)); }
	inline int32_t get_visibleCoroutines_27() const { return ___visibleCoroutines_27; }
	inline int32_t* get_address_of_visibleCoroutines_27() { return &___visibleCoroutines_27; }
	inline void set_visibleCoroutines_27(int32_t value)
	{
		___visibleCoroutines_27 = value;
	}
};


// Ozmoz.TutorialController
struct  TutorialController_t152E102F597254E864A1CF167B0151C81DDA3638  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<Ozmoz.TutorialControllerEvent> Ozmoz.TutorialController::events
	List_1_t5F0091DA4B0DB6A210AD34CE7E59E6F24E6ABB86 * ___events_4;
	// UnityEngine.GameObject Ozmoz.TutorialController::ozPortal
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ozPortal_5;
	// UnityEngine.GameObject Ozmoz.TutorialController::mozPortal
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___mozPortal_6;
	// System.Single Ozmoz.TutorialController::portalDelay
	float ___portalDelay_7;
	// System.Single Ozmoz.TutorialController::bottonImageDelay
	float ___bottonImageDelay_8;
	// UnityEngine.UI.Image Ozmoz.TutorialController::ozBottonImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___ozBottonImage_9;
	// UnityEngine.UI.Image Ozmoz.TutorialController::mozBottonImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___mozBottonImage_10;
	// System.Boolean Ozmoz.TutorialController::imageFixed
	bool ___imageFixed_11;

public:
	inline static int32_t get_offset_of_events_4() { return static_cast<int32_t>(offsetof(TutorialController_t152E102F597254E864A1CF167B0151C81DDA3638, ___events_4)); }
	inline List_1_t5F0091DA4B0DB6A210AD34CE7E59E6F24E6ABB86 * get_events_4() const { return ___events_4; }
	inline List_1_t5F0091DA4B0DB6A210AD34CE7E59E6F24E6ABB86 ** get_address_of_events_4() { return &___events_4; }
	inline void set_events_4(List_1_t5F0091DA4B0DB6A210AD34CE7E59E6F24E6ABB86 * value)
	{
		___events_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___events_4), (void*)value);
	}

	inline static int32_t get_offset_of_ozPortal_5() { return static_cast<int32_t>(offsetof(TutorialController_t152E102F597254E864A1CF167B0151C81DDA3638, ___ozPortal_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ozPortal_5() const { return ___ozPortal_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ozPortal_5() { return &___ozPortal_5; }
	inline void set_ozPortal_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ozPortal_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ozPortal_5), (void*)value);
	}

	inline static int32_t get_offset_of_mozPortal_6() { return static_cast<int32_t>(offsetof(TutorialController_t152E102F597254E864A1CF167B0151C81DDA3638, ___mozPortal_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_mozPortal_6() const { return ___mozPortal_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_mozPortal_6() { return &___mozPortal_6; }
	inline void set_mozPortal_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___mozPortal_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mozPortal_6), (void*)value);
	}

	inline static int32_t get_offset_of_portalDelay_7() { return static_cast<int32_t>(offsetof(TutorialController_t152E102F597254E864A1CF167B0151C81DDA3638, ___portalDelay_7)); }
	inline float get_portalDelay_7() const { return ___portalDelay_7; }
	inline float* get_address_of_portalDelay_7() { return &___portalDelay_7; }
	inline void set_portalDelay_7(float value)
	{
		___portalDelay_7 = value;
	}

	inline static int32_t get_offset_of_bottonImageDelay_8() { return static_cast<int32_t>(offsetof(TutorialController_t152E102F597254E864A1CF167B0151C81DDA3638, ___bottonImageDelay_8)); }
	inline float get_bottonImageDelay_8() const { return ___bottonImageDelay_8; }
	inline float* get_address_of_bottonImageDelay_8() { return &___bottonImageDelay_8; }
	inline void set_bottonImageDelay_8(float value)
	{
		___bottonImageDelay_8 = value;
	}

	inline static int32_t get_offset_of_ozBottonImage_9() { return static_cast<int32_t>(offsetof(TutorialController_t152E102F597254E864A1CF167B0151C81DDA3638, ___ozBottonImage_9)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_ozBottonImage_9() const { return ___ozBottonImage_9; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_ozBottonImage_9() { return &___ozBottonImage_9; }
	inline void set_ozBottonImage_9(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___ozBottonImage_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ozBottonImage_9), (void*)value);
	}

	inline static int32_t get_offset_of_mozBottonImage_10() { return static_cast<int32_t>(offsetof(TutorialController_t152E102F597254E864A1CF167B0151C81DDA3638, ___mozBottonImage_10)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_mozBottonImage_10() const { return ___mozBottonImage_10; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_mozBottonImage_10() { return &___mozBottonImage_10; }
	inline void set_mozBottonImage_10(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___mozBottonImage_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mozBottonImage_10), (void*)value);
	}

	inline static int32_t get_offset_of_imageFixed_11() { return static_cast<int32_t>(offsetof(TutorialController_t152E102F597254E864A1CF167B0151C81DDA3638, ___imageFixed_11)); }
	inline bool get_imageFixed_11() const { return ___imageFixed_11; }
	inline bool* get_address_of_imageFixed_11() { return &___imageFixed_11; }
	inline void set_imageFixed_11(bool value)
	{
		___imageFixed_11 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// ExitGames.Client.Photon.SocketWebTcp/MonoBehaviourExt
struct  MonoBehaviourExt_tE9402B38CA5077FD18ACC4CDF5CC63963BA6240B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Ozmoz.FinalCinematicController
struct  FinalCinematicController_t3FB3544CD0E1156D5D1293148AEA91F835CD7C50  : public MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223
{
public:
	// UnityEngine.Playables.PlayableDirector Ozmoz.FinalCinematicController::ozCinematic
	PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * ___ozCinematic_5;
	// UnityEngine.Playables.PlayableDirector Ozmoz.FinalCinematicController::mozCinematic
	PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * ___mozCinematic_6;
	// Ozmoz.SceneLoader Ozmoz.FinalCinematicController::sceneLoader
	SceneLoader_t9F40A88ECB90A9F92BEF7F70E720CCFDB81DAE92 * ___sceneLoader_7;
	// System.Boolean Ozmoz.FinalCinematicController::initialized
	bool ___initialized_8;

public:
	inline static int32_t get_offset_of_ozCinematic_5() { return static_cast<int32_t>(offsetof(FinalCinematicController_t3FB3544CD0E1156D5D1293148AEA91F835CD7C50, ___ozCinematic_5)); }
	inline PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * get_ozCinematic_5() const { return ___ozCinematic_5; }
	inline PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 ** get_address_of_ozCinematic_5() { return &___ozCinematic_5; }
	inline void set_ozCinematic_5(PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * value)
	{
		___ozCinematic_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ozCinematic_5), (void*)value);
	}

	inline static int32_t get_offset_of_mozCinematic_6() { return static_cast<int32_t>(offsetof(FinalCinematicController_t3FB3544CD0E1156D5D1293148AEA91F835CD7C50, ___mozCinematic_6)); }
	inline PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * get_mozCinematic_6() const { return ___mozCinematic_6; }
	inline PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 ** get_address_of_mozCinematic_6() { return &___mozCinematic_6; }
	inline void set_mozCinematic_6(PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * value)
	{
		___mozCinematic_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mozCinematic_6), (void*)value);
	}

	inline static int32_t get_offset_of_sceneLoader_7() { return static_cast<int32_t>(offsetof(FinalCinematicController_t3FB3544CD0E1156D5D1293148AEA91F835CD7C50, ___sceneLoader_7)); }
	inline SceneLoader_t9F40A88ECB90A9F92BEF7F70E720CCFDB81DAE92 * get_sceneLoader_7() const { return ___sceneLoader_7; }
	inline SceneLoader_t9F40A88ECB90A9F92BEF7F70E720CCFDB81DAE92 ** get_address_of_sceneLoader_7() { return &___sceneLoader_7; }
	inline void set_sceneLoader_7(SceneLoader_t9F40A88ECB90A9F92BEF7F70E720CCFDB81DAE92 * value)
	{
		___sceneLoader_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneLoader_7), (void*)value);
	}

	inline static int32_t get_offset_of_initialized_8() { return static_cast<int32_t>(offsetof(FinalCinematicController_t3FB3544CD0E1156D5D1293148AEA91F835CD7C50, ___initialized_8)); }
	inline bool get_initialized_8() const { return ___initialized_8; }
	inline bool* get_address_of_initialized_8() { return &___initialized_8; }
	inline void set_initialized_8(bool value)
	{
		___initialized_8 = value;
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// Ozmoz.Player
struct  Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E  : public MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223
{
public:
	// System.Single Ozmoz.Player::moveSpeed
	float ___moveSpeed_5;
	// System.Single Ozmoz.Player::moveAcceleration
	float ___moveAcceleration_6;
	// System.Single Ozmoz.Player::jumpForce
	float ___jumpForce_7;
	// System.Single Ozmoz.Player::doubleJumpForce
	float ___doubleJumpForce_8;
	// System.Single Ozmoz.Player::gravityMultiplier
	float ___gravityMultiplier_9;
	// System.Single Ozmoz.Player::groundDistance
	float ___groundDistance_10;
	// UnityEngine.LayerMask Ozmoz.Player::groundLayer
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___groundLayer_11;
	// Ozmoz.Character Ozmoz.Player::ozCharacter
	Character_t451BC3F83F3BB3A8235E7FE1FB8FA75B6410EF63 * ___ozCharacter_12;
	// Ozmoz.Character Ozmoz.Player::mozCharacter
	Character_t451BC3F83F3BB3A8235E7FE1FB8FA75B6410EF63 * ___mozCharacter_13;
	// ScreamSelector Ozmoz.Player::screamSelector
	ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3 * ___screamSelector_14;
	// Ozmoz.ScreamGettingUI Ozmoz.Player::screamGettingUI
	ScreamGettingUI_t8C9DC924B752A009960918BA09BDB9E539B496C1 * ___screamGettingUI_15;
	// UnityEngine.Events.UnityEvent Ozmoz.Player::onPrideScream
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onPrideScream_16;
	// UnityEngine.Events.UnityEvent Ozmoz.Player::onCorneredScream
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onCorneredScream_17;
	// UnityEngine.Events.UnityEvent Ozmoz.Player::onCuriosityScream
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onCuriosityScream_18;
	// UnityEngine.Events.UnityEvent Ozmoz.Player::onSolitudeScream
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onSolitudeScream_19;
	// UnityEngine.Events.UnityEvent Ozmoz.Player::onJoyScream
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onJoyScream_20;
	// UnityEngine.Events.UnityEvent Ozmoz.Player::onSadnessScream
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onSadnessScream_21;
	// UnityEngine.Events.UnityEvent Ozmoz.Player::onTutorialOzScream
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onTutorialOzScream_22;
	// UnityEngine.Events.UnityEvent Ozmoz.Player::onTutorialMozScream
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onTutorialMozScream_23;
	// UnityEngine.GameObject Ozmoz.Player::curiosityCirclePrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___curiosityCirclePrefab_24;
	// UnityEngine.GameObject Ozmoz.Player::sadnessCirclePrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___sadnessCirclePrefab_25;
	// System.Single Ozmoz.Player::circlesSpawnHeight
	float ___circlesSpawnHeight_26;
	// UnityEngine.Vector4 Ozmoz.Player::normalCapsule
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___normalCapsule_27;
	// UnityEngine.Vector4 Ozmoz.Player::littleCapsule
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___littleCapsule_28;
	// UnityEngine.Vector4 Ozmoz.Player::bigCapsule
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___bigCapsule_29;
	// System.Boolean Ozmoz.Player::prideAndCorneredEnabled
	bool ___prideAndCorneredEnabled_30;
	// System.Boolean Ozmoz.Player::curiosityAndSolitudeEnabled
	bool ___curiosityAndSolitudeEnabled_31;
	// System.Boolean Ozmoz.Player::joyAndSadnessEnabled
	bool ___joyAndSadnessEnabled_32;
	// UnityEngine.CapsuleCollider2D Ozmoz.Player::m_capsuleCollider
	CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39 * ___m_capsuleCollider_33;
	// UnityEngine.Rigidbody2D Ozmoz.Player::m_rigidbody
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___m_rigidbody_34;
	// System.Boolean Ozmoz.Player::grounded
	bool ___grounded_35;
	// System.Boolean Ozmoz.Player::doubleJumpEnabled
	bool ___doubleJumpEnabled_36;
	// System.Boolean Ozmoz.Player::prideActivated
	bool ___prideActivated_37;
	// System.Boolean Ozmoz.Player::corneredActivated
	bool ___corneredActivated_38;
	// System.Boolean Ozmoz.Player::curiosityAndSolitudeActivated
	bool ___curiosityAndSolitudeActivated_39;
	// System.Boolean Ozmoz.Player::joyAndSadnessActivated
	bool ___joyAndSadnessActivated_40;
	// System.Single Ozmoz.Player::currentGroundDistance
	float ___currentGroundDistance_41;
	// System.Boolean Ozmoz.Player::tutorialMode
	bool ___tutorialMode_42;
	// System.Collections.Generic.List`1<Ozmoz.ScreamInteraction> Ozmoz.Player::screamInteractables
	List_1_t4C8526F1A5E8672EADCEFAF29113C4EDAEEBDB08 * ___screamInteractables_43;

public:
	inline static int32_t get_offset_of_moveSpeed_5() { return static_cast<int32_t>(offsetof(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E, ___moveSpeed_5)); }
	inline float get_moveSpeed_5() const { return ___moveSpeed_5; }
	inline float* get_address_of_moveSpeed_5() { return &___moveSpeed_5; }
	inline void set_moveSpeed_5(float value)
	{
		___moveSpeed_5 = value;
	}

	inline static int32_t get_offset_of_moveAcceleration_6() { return static_cast<int32_t>(offsetof(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E, ___moveAcceleration_6)); }
	inline float get_moveAcceleration_6() const { return ___moveAcceleration_6; }
	inline float* get_address_of_moveAcceleration_6() { return &___moveAcceleration_6; }
	inline void set_moveAcceleration_6(float value)
	{
		___moveAcceleration_6 = value;
	}

	inline static int32_t get_offset_of_jumpForce_7() { return static_cast<int32_t>(offsetof(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E, ___jumpForce_7)); }
	inline float get_jumpForce_7() const { return ___jumpForce_7; }
	inline float* get_address_of_jumpForce_7() { return &___jumpForce_7; }
	inline void set_jumpForce_7(float value)
	{
		___jumpForce_7 = value;
	}

	inline static int32_t get_offset_of_doubleJumpForce_8() { return static_cast<int32_t>(offsetof(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E, ___doubleJumpForce_8)); }
	inline float get_doubleJumpForce_8() const { return ___doubleJumpForce_8; }
	inline float* get_address_of_doubleJumpForce_8() { return &___doubleJumpForce_8; }
	inline void set_doubleJumpForce_8(float value)
	{
		___doubleJumpForce_8 = value;
	}

	inline static int32_t get_offset_of_gravityMultiplier_9() { return static_cast<int32_t>(offsetof(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E, ___gravityMultiplier_9)); }
	inline float get_gravityMultiplier_9() const { return ___gravityMultiplier_9; }
	inline float* get_address_of_gravityMultiplier_9() { return &___gravityMultiplier_9; }
	inline void set_gravityMultiplier_9(float value)
	{
		___gravityMultiplier_9 = value;
	}

	inline static int32_t get_offset_of_groundDistance_10() { return static_cast<int32_t>(offsetof(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E, ___groundDistance_10)); }
	inline float get_groundDistance_10() const { return ___groundDistance_10; }
	inline float* get_address_of_groundDistance_10() { return &___groundDistance_10; }
	inline void set_groundDistance_10(float value)
	{
		___groundDistance_10 = value;
	}

	inline static int32_t get_offset_of_groundLayer_11() { return static_cast<int32_t>(offsetof(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E, ___groundLayer_11)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_groundLayer_11() const { return ___groundLayer_11; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_groundLayer_11() { return &___groundLayer_11; }
	inline void set_groundLayer_11(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___groundLayer_11 = value;
	}

	inline static int32_t get_offset_of_ozCharacter_12() { return static_cast<int32_t>(offsetof(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E, ___ozCharacter_12)); }
	inline Character_t451BC3F83F3BB3A8235E7FE1FB8FA75B6410EF63 * get_ozCharacter_12() const { return ___ozCharacter_12; }
	inline Character_t451BC3F83F3BB3A8235E7FE1FB8FA75B6410EF63 ** get_address_of_ozCharacter_12() { return &___ozCharacter_12; }
	inline void set_ozCharacter_12(Character_t451BC3F83F3BB3A8235E7FE1FB8FA75B6410EF63 * value)
	{
		___ozCharacter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ozCharacter_12), (void*)value);
	}

	inline static int32_t get_offset_of_mozCharacter_13() { return static_cast<int32_t>(offsetof(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E, ___mozCharacter_13)); }
	inline Character_t451BC3F83F3BB3A8235E7FE1FB8FA75B6410EF63 * get_mozCharacter_13() const { return ___mozCharacter_13; }
	inline Character_t451BC3F83F3BB3A8235E7FE1FB8FA75B6410EF63 ** get_address_of_mozCharacter_13() { return &___mozCharacter_13; }
	inline void set_mozCharacter_13(Character_t451BC3F83F3BB3A8235E7FE1FB8FA75B6410EF63 * value)
	{
		___mozCharacter_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mozCharacter_13), (void*)value);
	}

	inline static int32_t get_offset_of_screamSelector_14() { return static_cast<int32_t>(offsetof(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E, ___screamSelector_14)); }
	inline ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3 * get_screamSelector_14() const { return ___screamSelector_14; }
	inline ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3 ** get_address_of_screamSelector_14() { return &___screamSelector_14; }
	inline void set_screamSelector_14(ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3 * value)
	{
		___screamSelector_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___screamSelector_14), (void*)value);
	}

	inline static int32_t get_offset_of_screamGettingUI_15() { return static_cast<int32_t>(offsetof(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E, ___screamGettingUI_15)); }
	inline ScreamGettingUI_t8C9DC924B752A009960918BA09BDB9E539B496C1 * get_screamGettingUI_15() const { return ___screamGettingUI_15; }
	inline ScreamGettingUI_t8C9DC924B752A009960918BA09BDB9E539B496C1 ** get_address_of_screamGettingUI_15() { return &___screamGettingUI_15; }
	inline void set_screamGettingUI_15(ScreamGettingUI_t8C9DC924B752A009960918BA09BDB9E539B496C1 * value)
	{
		___screamGettingUI_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___screamGettingUI_15), (void*)value);
	}

	inline static int32_t get_offset_of_onPrideScream_16() { return static_cast<int32_t>(offsetof(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E, ___onPrideScream_16)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onPrideScream_16() const { return ___onPrideScream_16; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onPrideScream_16() { return &___onPrideScream_16; }
	inline void set_onPrideScream_16(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onPrideScream_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPrideScream_16), (void*)value);
	}

	inline static int32_t get_offset_of_onCorneredScream_17() { return static_cast<int32_t>(offsetof(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E, ___onCorneredScream_17)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onCorneredScream_17() const { return ___onCorneredScream_17; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onCorneredScream_17() { return &___onCorneredScream_17; }
	inline void set_onCorneredScream_17(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onCorneredScream_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onCorneredScream_17), (void*)value);
	}

	inline static int32_t get_offset_of_onCuriosityScream_18() { return static_cast<int32_t>(offsetof(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E, ___onCuriosityScream_18)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onCuriosityScream_18() const { return ___onCuriosityScream_18; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onCuriosityScream_18() { return &___onCuriosityScream_18; }
	inline void set_onCuriosityScream_18(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onCuriosityScream_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onCuriosityScream_18), (void*)value);
	}

	inline static int32_t get_offset_of_onSolitudeScream_19() { return static_cast<int32_t>(offsetof(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E, ___onSolitudeScream_19)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onSolitudeScream_19() const { return ___onSolitudeScream_19; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onSolitudeScream_19() { return &___onSolitudeScream_19; }
	inline void set_onSolitudeScream_19(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onSolitudeScream_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onSolitudeScream_19), (void*)value);
	}

	inline static int32_t get_offset_of_onJoyScream_20() { return static_cast<int32_t>(offsetof(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E, ___onJoyScream_20)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onJoyScream_20() const { return ___onJoyScream_20; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onJoyScream_20() { return &___onJoyScream_20; }
	inline void set_onJoyScream_20(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onJoyScream_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onJoyScream_20), (void*)value);
	}

	inline static int32_t get_offset_of_onSadnessScream_21() { return static_cast<int32_t>(offsetof(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E, ___onSadnessScream_21)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onSadnessScream_21() const { return ___onSadnessScream_21; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onSadnessScream_21() { return &___onSadnessScream_21; }
	inline void set_onSadnessScream_21(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onSadnessScream_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onSadnessScream_21), (void*)value);
	}

	inline static int32_t get_offset_of_onTutorialOzScream_22() { return static_cast<int32_t>(offsetof(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E, ___onTutorialOzScream_22)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onTutorialOzScream_22() const { return ___onTutorialOzScream_22; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onTutorialOzScream_22() { return &___onTutorialOzScream_22; }
	inline void set_onTutorialOzScream_22(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onTutorialOzScream_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onTutorialOzScream_22), (void*)value);
	}

	inline static int32_t get_offset_of_onTutorialMozScream_23() { return static_cast<int32_t>(offsetof(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E, ___onTutorialMozScream_23)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onTutorialMozScream_23() const { return ___onTutorialMozScream_23; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onTutorialMozScream_23() { return &___onTutorialMozScream_23; }
	inline void set_onTutorialMozScream_23(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onTutorialMozScream_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onTutorialMozScream_23), (void*)value);
	}

	inline static int32_t get_offset_of_curiosityCirclePrefab_24() { return static_cast<int32_t>(offsetof(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E, ___curiosityCirclePrefab_24)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_curiosityCirclePrefab_24() const { return ___curiosityCirclePrefab_24; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_curiosityCirclePrefab_24() { return &___curiosityCirclePrefab_24; }
	inline void set_curiosityCirclePrefab_24(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___curiosityCirclePrefab_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___curiosityCirclePrefab_24), (void*)value);
	}

	inline static int32_t get_offset_of_sadnessCirclePrefab_25() { return static_cast<int32_t>(offsetof(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E, ___sadnessCirclePrefab_25)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_sadnessCirclePrefab_25() const { return ___sadnessCirclePrefab_25; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_sadnessCirclePrefab_25() { return &___sadnessCirclePrefab_25; }
	inline void set_sadnessCirclePrefab_25(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___sadnessCirclePrefab_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sadnessCirclePrefab_25), (void*)value);
	}

	inline static int32_t get_offset_of_circlesSpawnHeight_26() { return static_cast<int32_t>(offsetof(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E, ___circlesSpawnHeight_26)); }
	inline float get_circlesSpawnHeight_26() const { return ___circlesSpawnHeight_26; }
	inline float* get_address_of_circlesSpawnHeight_26() { return &___circlesSpawnHeight_26; }
	inline void set_circlesSpawnHeight_26(float value)
	{
		___circlesSpawnHeight_26 = value;
	}

	inline static int32_t get_offset_of_normalCapsule_27() { return static_cast<int32_t>(offsetof(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E, ___normalCapsule_27)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_normalCapsule_27() const { return ___normalCapsule_27; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_normalCapsule_27() { return &___normalCapsule_27; }
	inline void set_normalCapsule_27(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___normalCapsule_27 = value;
	}

	inline static int32_t get_offset_of_littleCapsule_28() { return static_cast<int32_t>(offsetof(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E, ___littleCapsule_28)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_littleCapsule_28() const { return ___littleCapsule_28; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_littleCapsule_28() { return &___littleCapsule_28; }
	inline void set_littleCapsule_28(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___littleCapsule_28 = value;
	}

	inline static int32_t get_offset_of_bigCapsule_29() { return static_cast<int32_t>(offsetof(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E, ___bigCapsule_29)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_bigCapsule_29() const { return ___bigCapsule_29; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_bigCapsule_29() { return &___bigCapsule_29; }
	inline void set_bigCapsule_29(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___bigCapsule_29 = value;
	}

	inline static int32_t get_offset_of_prideAndCorneredEnabled_30() { return static_cast<int32_t>(offsetof(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E, ___prideAndCorneredEnabled_30)); }
	inline bool get_prideAndCorneredEnabled_30() const { return ___prideAndCorneredEnabled_30; }
	inline bool* get_address_of_prideAndCorneredEnabled_30() { return &___prideAndCorneredEnabled_30; }
	inline void set_prideAndCorneredEnabled_30(bool value)
	{
		___prideAndCorneredEnabled_30 = value;
	}

	inline static int32_t get_offset_of_curiosityAndSolitudeEnabled_31() { return static_cast<int32_t>(offsetof(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E, ___curiosityAndSolitudeEnabled_31)); }
	inline bool get_curiosityAndSolitudeEnabled_31() const { return ___curiosityAndSolitudeEnabled_31; }
	inline bool* get_address_of_curiosityAndSolitudeEnabled_31() { return &___curiosityAndSolitudeEnabled_31; }
	inline void set_curiosityAndSolitudeEnabled_31(bool value)
	{
		___curiosityAndSolitudeEnabled_31 = value;
	}

	inline static int32_t get_offset_of_joyAndSadnessEnabled_32() { return static_cast<int32_t>(offsetof(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E, ___joyAndSadnessEnabled_32)); }
	inline bool get_joyAndSadnessEnabled_32() const { return ___joyAndSadnessEnabled_32; }
	inline bool* get_address_of_joyAndSadnessEnabled_32() { return &___joyAndSadnessEnabled_32; }
	inline void set_joyAndSadnessEnabled_32(bool value)
	{
		___joyAndSadnessEnabled_32 = value;
	}

	inline static int32_t get_offset_of_m_capsuleCollider_33() { return static_cast<int32_t>(offsetof(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E, ___m_capsuleCollider_33)); }
	inline CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39 * get_m_capsuleCollider_33() const { return ___m_capsuleCollider_33; }
	inline CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39 ** get_address_of_m_capsuleCollider_33() { return &___m_capsuleCollider_33; }
	inline void set_m_capsuleCollider_33(CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39 * value)
	{
		___m_capsuleCollider_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_capsuleCollider_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_rigidbody_34() { return static_cast<int32_t>(offsetof(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E, ___m_rigidbody_34)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_m_rigidbody_34() const { return ___m_rigidbody_34; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_m_rigidbody_34() { return &___m_rigidbody_34; }
	inline void set_m_rigidbody_34(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___m_rigidbody_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_rigidbody_34), (void*)value);
	}

	inline static int32_t get_offset_of_grounded_35() { return static_cast<int32_t>(offsetof(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E, ___grounded_35)); }
	inline bool get_grounded_35() const { return ___grounded_35; }
	inline bool* get_address_of_grounded_35() { return &___grounded_35; }
	inline void set_grounded_35(bool value)
	{
		___grounded_35 = value;
	}

	inline static int32_t get_offset_of_doubleJumpEnabled_36() { return static_cast<int32_t>(offsetof(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E, ___doubleJumpEnabled_36)); }
	inline bool get_doubleJumpEnabled_36() const { return ___doubleJumpEnabled_36; }
	inline bool* get_address_of_doubleJumpEnabled_36() { return &___doubleJumpEnabled_36; }
	inline void set_doubleJumpEnabled_36(bool value)
	{
		___doubleJumpEnabled_36 = value;
	}

	inline static int32_t get_offset_of_prideActivated_37() { return static_cast<int32_t>(offsetof(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E, ___prideActivated_37)); }
	inline bool get_prideActivated_37() const { return ___prideActivated_37; }
	inline bool* get_address_of_prideActivated_37() { return &___prideActivated_37; }
	inline void set_prideActivated_37(bool value)
	{
		___prideActivated_37 = value;
	}

	inline static int32_t get_offset_of_corneredActivated_38() { return static_cast<int32_t>(offsetof(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E, ___corneredActivated_38)); }
	inline bool get_corneredActivated_38() const { return ___corneredActivated_38; }
	inline bool* get_address_of_corneredActivated_38() { return &___corneredActivated_38; }
	inline void set_corneredActivated_38(bool value)
	{
		___corneredActivated_38 = value;
	}

	inline static int32_t get_offset_of_curiosityAndSolitudeActivated_39() { return static_cast<int32_t>(offsetof(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E, ___curiosityAndSolitudeActivated_39)); }
	inline bool get_curiosityAndSolitudeActivated_39() const { return ___curiosityAndSolitudeActivated_39; }
	inline bool* get_address_of_curiosityAndSolitudeActivated_39() { return &___curiosityAndSolitudeActivated_39; }
	inline void set_curiosityAndSolitudeActivated_39(bool value)
	{
		___curiosityAndSolitudeActivated_39 = value;
	}

	inline static int32_t get_offset_of_joyAndSadnessActivated_40() { return static_cast<int32_t>(offsetof(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E, ___joyAndSadnessActivated_40)); }
	inline bool get_joyAndSadnessActivated_40() const { return ___joyAndSadnessActivated_40; }
	inline bool* get_address_of_joyAndSadnessActivated_40() { return &___joyAndSadnessActivated_40; }
	inline void set_joyAndSadnessActivated_40(bool value)
	{
		___joyAndSadnessActivated_40 = value;
	}

	inline static int32_t get_offset_of_currentGroundDistance_41() { return static_cast<int32_t>(offsetof(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E, ___currentGroundDistance_41)); }
	inline float get_currentGroundDistance_41() const { return ___currentGroundDistance_41; }
	inline float* get_address_of_currentGroundDistance_41() { return &___currentGroundDistance_41; }
	inline void set_currentGroundDistance_41(float value)
	{
		___currentGroundDistance_41 = value;
	}

	inline static int32_t get_offset_of_tutorialMode_42() { return static_cast<int32_t>(offsetof(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E, ___tutorialMode_42)); }
	inline bool get_tutorialMode_42() const { return ___tutorialMode_42; }
	inline bool* get_address_of_tutorialMode_42() { return &___tutorialMode_42; }
	inline void set_tutorialMode_42(bool value)
	{
		___tutorialMode_42 = value;
	}

	inline static int32_t get_offset_of_screamInteractables_43() { return static_cast<int32_t>(offsetof(Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E, ___screamInteractables_43)); }
	inline List_1_t4C8526F1A5E8672EADCEFAF29113C4EDAEEBDB08 * get_screamInteractables_43() const { return ___screamInteractables_43; }
	inline List_1_t4C8526F1A5E8672EADCEFAF29113C4EDAEEBDB08 ** get_address_of_screamInteractables_43() { return &___screamInteractables_43; }
	inline void set_screamInteractables_43(List_1_t4C8526F1A5E8672EADCEFAF29113C4EDAEEBDB08 * value)
	{
		___screamInteractables_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___screamInteractables_43), (void*)value);
	}
};


// Ozmoz.PlayerExecutor
struct  PlayerExecutor_t36D970CD8630459113AA156518025FB6D643246B  : public MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223
{
public:
	// UnityEngine.Events.UnityEvent Ozmoz.PlayerExecutor::onStartEvent
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onStartEvent_5;
	// System.Single Ozmoz.PlayerExecutor::startDelay
	float ___startDelay_6;
	// Ozmoz.PlayerExecutor/PlayerReceiverType Ozmoz.PlayerExecutor::playerReceiver
	int32_t ___playerReceiver_7;
	// System.Boolean Ozmoz.PlayerExecutor::started
	bool ___started_8;

public:
	inline static int32_t get_offset_of_onStartEvent_5() { return static_cast<int32_t>(offsetof(PlayerExecutor_t36D970CD8630459113AA156518025FB6D643246B, ___onStartEvent_5)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onStartEvent_5() const { return ___onStartEvent_5; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onStartEvent_5() { return &___onStartEvent_5; }
	inline void set_onStartEvent_5(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onStartEvent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onStartEvent_5), (void*)value);
	}

	inline static int32_t get_offset_of_startDelay_6() { return static_cast<int32_t>(offsetof(PlayerExecutor_t36D970CD8630459113AA156518025FB6D643246B, ___startDelay_6)); }
	inline float get_startDelay_6() const { return ___startDelay_6; }
	inline float* get_address_of_startDelay_6() { return &___startDelay_6; }
	inline void set_startDelay_6(float value)
	{
		___startDelay_6 = value;
	}

	inline static int32_t get_offset_of_playerReceiver_7() { return static_cast<int32_t>(offsetof(PlayerExecutor_t36D970CD8630459113AA156518025FB6D643246B, ___playerReceiver_7)); }
	inline int32_t get_playerReceiver_7() const { return ___playerReceiver_7; }
	inline int32_t* get_address_of_playerReceiver_7() { return &___playerReceiver_7; }
	inline void set_playerReceiver_7(int32_t value)
	{
		___playerReceiver_7 = value;
	}

	inline static int32_t get_offset_of_started_8() { return static_cast<int32_t>(offsetof(PlayerExecutor_t36D970CD8630459113AA156518025FB6D643246B, ___started_8)); }
	inline bool get_started_8() const { return ___started_8; }
	inline bool* get_address_of_started_8() { return &___started_8; }
	inline void set_started_8(bool value)
	{
		___started_8 = value;
	}
};


// Ozmoz.SceneLoader
struct  SceneLoader_t9F40A88ECB90A9F92BEF7F70E720CCFDB81DAE92  : public MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223
{
public:
	// ScreenFade Ozmoz.SceneLoader::screenFade
	ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * ___screenFade_5;
	// SceneReference Ozmoz.SceneLoader::scene
	SceneReference_tD4A01AEA2D6123F6B00B6DDF2B8A347C5CFE71C9 * ___scene_6;

public:
	inline static int32_t get_offset_of_screenFade_5() { return static_cast<int32_t>(offsetof(SceneLoader_t9F40A88ECB90A9F92BEF7F70E720CCFDB81DAE92, ___screenFade_5)); }
	inline ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * get_screenFade_5() const { return ___screenFade_5; }
	inline ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A ** get_address_of_screenFade_5() { return &___screenFade_5; }
	inline void set_screenFade_5(ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * value)
	{
		___screenFade_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___screenFade_5), (void*)value);
	}

	inline static int32_t get_offset_of_scene_6() { return static_cast<int32_t>(offsetof(SceneLoader_t9F40A88ECB90A9F92BEF7F70E720CCFDB81DAE92, ___scene_6)); }
	inline SceneReference_tD4A01AEA2D6123F6B00B6DDF2B8A347C5CFE71C9 * get_scene_6() const { return ___scene_6; }
	inline SceneReference_tD4A01AEA2D6123F6B00B6DDF2B8A347C5CFE71C9 ** get_address_of_scene_6() { return &___scene_6; }
	inline void set_scene_6(SceneReference_tD4A01AEA2D6123F6B00B6DDF2B8A347C5CFE71C9 * value)
	{
		___scene_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scene_6), (void*)value);
	}
};

struct SceneLoader_t9F40A88ECB90A9F92BEF7F70E720CCFDB81DAE92_StaticFields
{
public:
	// System.Boolean Ozmoz.SceneLoader::isLoading
	bool ___isLoading_7;

public:
	inline static int32_t get_offset_of_isLoading_7() { return static_cast<int32_t>(offsetof(SceneLoader_t9F40A88ECB90A9F92BEF7F70E720CCFDB81DAE92_StaticFields, ___isLoading_7)); }
	inline bool get_isLoading_7() const { return ___isLoading_7; }
	inline bool* get_address_of_isLoading_7() { return &___isLoading_7; }
	inline void set_isLoading_7(bool value)
	{
		___isLoading_7 = value;
	}
};


// ScreenFade
struct  ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A  : public MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223
{
public:
	// UnityEngine.UI.Image ScreenFade::fadeInImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___fadeInImage_5;
	// System.Single ScreenFade::fadeInDuration
	float ___fadeInDuration_6;
	// System.Boolean ScreenFade::fadeInOnStart
	bool ___fadeInOnStart_7;
	// UnityEngine.UI.Image ScreenFade::fadeOutImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___fadeOutImage_8;
	// System.Single ScreenFade::fadeOutDuration
	float ___fadeOutDuration_9;

public:
	inline static int32_t get_offset_of_fadeInImage_5() { return static_cast<int32_t>(offsetof(ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A, ___fadeInImage_5)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_fadeInImage_5() const { return ___fadeInImage_5; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_fadeInImage_5() { return &___fadeInImage_5; }
	inline void set_fadeInImage_5(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___fadeInImage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fadeInImage_5), (void*)value);
	}

	inline static int32_t get_offset_of_fadeInDuration_6() { return static_cast<int32_t>(offsetof(ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A, ___fadeInDuration_6)); }
	inline float get_fadeInDuration_6() const { return ___fadeInDuration_6; }
	inline float* get_address_of_fadeInDuration_6() { return &___fadeInDuration_6; }
	inline void set_fadeInDuration_6(float value)
	{
		___fadeInDuration_6 = value;
	}

	inline static int32_t get_offset_of_fadeInOnStart_7() { return static_cast<int32_t>(offsetof(ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A, ___fadeInOnStart_7)); }
	inline bool get_fadeInOnStart_7() const { return ___fadeInOnStart_7; }
	inline bool* get_address_of_fadeInOnStart_7() { return &___fadeInOnStart_7; }
	inline void set_fadeInOnStart_7(bool value)
	{
		___fadeInOnStart_7 = value;
	}

	inline static int32_t get_offset_of_fadeOutImage_8() { return static_cast<int32_t>(offsetof(ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A, ___fadeOutImage_8)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_fadeOutImage_8() const { return ___fadeOutImage_8; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_fadeOutImage_8() { return &___fadeOutImage_8; }
	inline void set_fadeOutImage_8(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___fadeOutImage_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fadeOutImage_8), (void*)value);
	}

	inline static int32_t get_offset_of_fadeOutDuration_9() { return static_cast<int32_t>(offsetof(ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A, ___fadeOutDuration_9)); }
	inline float get_fadeOutDuration_9() const { return ___fadeOutDuration_9; }
	inline float* get_address_of_fadeOutDuration_9() { return &___fadeOutDuration_9; }
	inline void set_fadeOutDuration_9(float value)
	{
		___fadeOutDuration_9 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.Uri::get_Scheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_Scheme_mEC4980E1C82DE3963007E33C759742A02A26FF29 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.Void WebSocket::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Send_mA0CBE6076DE404E7EBB2FED418EB3E1B14E3E24F (WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, const RuntimeMethod* method);
// System.Byte[] WebSocket::Recv()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WebSocket_Recv_mB0AA2953A88628422FF0E0B18372EABBDB4E72D2 (WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * __this, const RuntimeMethod* method);
// System.Void WebSocket::SocketSend(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketSend_m43A20AF96DC3A373C404A94ECEB92F20C3D5956B (int32_t ___socketInstance0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___ptr1, int32_t ___length2, const RuntimeMethod* method);
// System.Int32 WebSocket::SocketRecvLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketRecvLength_mFD76AD5CE500367EB1402C43DEAF896064950A27 (int32_t ___socketInstance0, const RuntimeMethod* method);
// System.Void WebSocket::SocketRecv(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketRecv_m64803B169A6D8697E87AAE3F1DDC7D290E9408A3 (int32_t ___socketInstance0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___ptr1, int32_t ___length2, const RuntimeMethod* method);
// System.Int32 WebSocket::SocketCreate(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketCreate_m380984FAB430F512016664F700CFA304EBF1F363 (String_t* ___url0, String_t* ___protocols1, const RuntimeMethod* method);
// System.Void WebSocket::SocketClose(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketClose_m6D350474CA1A621D94D8D3464C54BAAA8CB8C5EE (int32_t ___socketInstance0, const RuntimeMethod* method);
// System.Int32 WebSocket::SocketState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketState_mA3D0FE4111F1AB5AA56E265808A332C512F705FD (int32_t ___socketInstance0, const RuntimeMethod* method);
// System.Int32 WebSocket::SocketError(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketError_m76233984EF10014AB5EA9BCA174E0DE21DF3652C (int32_t ___socketInstance0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___ptr1, int32_t ___length2, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void Ozmoz.SceneLoader::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_Load_m808EE705C2E7FF6889147C5F0B5DBAFC9A622AA2 (SceneLoader_t9F40A88ECB90A9F92BEF7F70E720CCFDB81DAE92 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator ScreenFade::IFadeOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScreenFade_IFadeOut_mEAA43F4DD33A7EF99EF566974F57437D5BF14A3D (ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.String SceneReference::get_ScenePath()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SceneReference_get_ScenePath_m0F58D729908F84173D506E77BEBF4026878A4D0E_inline (SceneReference_tD4A01AEA2D6123F6B00B6DDF2B8A347C5CFE71C9 * __this, const RuntimeMethod* method);
// System.Void Ozmoz.SceneLoader::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_LoadScene_mD2A3DC70F5827C65CD29CA709019FC21C8AF2DFF (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void AudioPlayer::PlayRandomClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayer_PlayRandomClip_mEC006966946EF8E7FE53B0241E75C5772429EE4F (AudioPlayer_tFAB0D7A01313CB252849A2270690FC00905BB48B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.WaitForRealSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForRealSeconds__ctor_mCD44B820C0EAD126888F40FC5550D0575883EB1D (WaitForRealSeconds_t88BCA6D42C39FFFAE93F61F72CAFB422CC164926 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Boolean WebSocket::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocket_get_Connected_m175AEA9D6447234508ED29C0F39E9B722C37CB9B (WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * __this, const RuntimeMethod* method);
// System.String WebSocket::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocket_get_Error_mB50059CF4E3511AF4541979573445962DFF14C29 (WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * __this, const RuntimeMethod* method);
// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.IPhotonSocket::get_Listener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IPhotonSocket_get_Listener_m222959C8BDA046F7B68F32B2C26B1FF192D4407C (IPhotonSocket_t8C4CC725BD3399028AEECE28EE0009F06EBFCB96 * __this, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.IPhotonSocket::get_ServerAddress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* IPhotonSocket_get_ServerAddress_m2BB56B05D3293AF7A5D6DF752A6C2993D00A5018_inline (IPhotonSocket_t8C4CC725BD3399028AEECE28EE0009F06EBFCB96 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.IPhotonSocket::get_ServerPort()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPhotonSocket_get_ServerPort_mFC52FEBA528E0CA4A57E30048A0942A428725189_inline (IPhotonSocket_t8C4CC725BD3399028AEECE28EE0009F06EBFCB96 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::HandleException(ExitGames.Client.Photon.StatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPhotonSocket_HandleException_mCC3D032F1FCFADE34B6B63F1D01BB4648E88D79D (IPhotonSocket_t8C4CC725BD3399028AEECE28EE0009F06EBFCB96 * __this, int32_t ___statusCode0, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::ReportDebugOfLevel(ExitGames.Client.Photon.DebugLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPhotonSocket_ReportDebugOfLevel_m6D036129BC37474F0AD88848D51ECEA69CE48ED4 (IPhotonSocket_t8C4CC725BD3399028AEECE28EE0009F06EBFCB96 * __this, uint8_t ___levelOfMessage0, const RuntimeMethod* method);
// ExitGames.Client.Photon.PhotonSocketState ExitGames.Client.Photon.IPhotonSocket::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPhotonSocket_get_State_m1CC9A27AC97BBF509FC7BA25292EE9117DEC4A05_inline (IPhotonSocket_t8C4CC725BD3399028AEECE28EE0009F06EBFCB96 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_State(ExitGames.Client.Photon.PhotonSocketState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IPhotonSocket_set_State_mD730B3A6935A967A2DC87968A9E53BEA9759075A_inline (IPhotonSocket_t8C4CC725BD3399028AEECE28EE0009F06EBFCB96 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.SupportClass::ByteArrayToString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportClass_ByteArrayToString_mAC8EC8676D083637A9134502ACC60E09CD115AA6 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___list0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::HandleReceivedDatagram(System.Byte[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPhotonSocket_HandleReceivedDatagram_m5B65B9551EAF1ED5023CF75232A2193936FBFC6B (IPhotonSocket_t8C4CC725BD3399028AEECE28EE0009F06EBFCB96 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___inBuffer0, int32_t ___length1, bool ___willBeReused2, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::EnqueueDebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPhotonSocket_EnqueueDebugReturn_m7AD9FF889510EA6A117FDBC002D7746DC7F586EF (IPhotonSocket_t8C4CC725BD3399028AEECE28EE0009F06EBFCB96 * __this, uint8_t ___debugLevel0, String_t* ___message1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<Ozmoz.Player> Ozmoz.PlayerExecutor::GetPlayers(Ozmoz.PlayerExecutor/PlayerReceiverType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE005987F00228B26D858A1CAC18B161DB5C57D8E * PlayerExecutor_GetPlayers_m3DC5B7433761EE7EA0110EAF4B5F5F89E2AA24E2 (int32_t ___playerReceiver0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Ozmoz.Player>::GetEnumerator()
inline Enumerator_t525B82097D9D406EA26D105D1479485F2A76DE3A  List_1_GetEnumerator_mA1012A10B82C987FBE454B05613CEC5F5E28DFE5 (List_1_tE005987F00228B26D858A1CAC18B161DB5C57D8E * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t525B82097D9D406EA26D105D1479485F2A76DE3A  (*) (List_1_tE005987F00228B26D858A1CAC18B161DB5C57D8E *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Ozmoz.Player>::get_Current()
inline Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E * Enumerator_get_Current_m4FB6DE33C78B315C24AA334A62D21410AB126244_inline (Enumerator_t525B82097D9D406EA26D105D1479485F2A76DE3A * __this, const RuntimeMethod* method)
{
	return ((  Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E * (*) (Enumerator_t525B82097D9D406EA26D105D1479485F2A76DE3A *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Ozmoz.Player>::MoveNext()
inline bool Enumerator_MoveNext_mE7644F74D340CCF2302DE098DF239B18D4195AB2 (Enumerator_t525B82097D9D406EA26D105D1479485F2A76DE3A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t525B82097D9D406EA26D105D1479485F2A76DE3A *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Ozmoz.Player>::Dispose()
inline void Enumerator_Dispose_mB4B5BB88C0A9F3FBB9BBBD710DD1CC5427A9EBBF (Enumerator_t525B82097D9D406EA26D105D1479485F2A76DE3A * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t525B82097D9D406EA26D105D1479485F2A76DE3A *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SocketCreate(char*, char*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SocketState(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL SocketSend(int32_t, uint8_t*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL SocketRecv(int32_t, uint8_t*, int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SocketRecvLength(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL SocketClose(int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SocketError(int32_t, uint8_t*, int32_t);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebSocket::.ctor(System.Uri,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_m72024727BB2CBAE2161797E999634554BEFCB902 (WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___url0, String_t* ___serialization1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral595137F8C876A16A4A12C20E052B255B02F22D8D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// private string protocols = "GpBinaryV16";
		__this->set_protocols_1(_stringLiteral595137F8C876A16A4A12C20E052B255B02F22D8D);
		// public WebSocket(Uri url, string serialization = null)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.mUrl = url;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0 = ___url0;
		__this->set_mUrl_0(L_0);
		// if (serialization != null)
		String_t* L_1 = ___serialization1;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// this.protocols = serialization;
		String_t* L_2 = ___serialization1;
		__this->set_protocols_1(L_2);
	}

IL_0022:
	{
		// string protocol = mUrl.Scheme;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_3 = __this->get_mUrl_0();
		String_t* L_4;
		L_4 = Uri_get_Scheme_mEC4980E1C82DE3963007E33C759742A02A26FF29(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// if (!protocol.Equals("ws") && !protocol.Equals("wss"))
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_5, _stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0059;
		}
	}
	{
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_7, _stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0059;
		}
	}
	{
		// throw new ArgumentException("Unsupported protocol: " + protocol);
		String_t* L_9 = V_0;
		String_t* L_10;
		L_10 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral37422C200CFCABD757B9019D3ABA76E55A7A5DA5)), L_9, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_11 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocket__ctor_m72024727BB2CBAE2161797E999634554BEFCB902_RuntimeMethod_var)));
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void WebSocket::SendString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SendString_mEEED038CB567FA2A1E382DD688F9B0E904A0C1F5 (WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	{
		// Send(Encoding.UTF8.GetBytes (str));
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_0;
		L_0 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		String_t* L_1 = ___str0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		WebSocket_Send_mA0CBE6076DE404E7EBB2FED418EB3E1B14E3E24F(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String WebSocket::RecvString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocket_RecvString_m4BB30F03E3C7E687A4346BDBE578B0136B782C45 (WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		// byte[] retval = Recv();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = WebSocket_Recv_mB0AA2953A88628422FF0E0B18372EABBDB4E72D2(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (retval == null)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_000c:
	{
		// return Encoding.UTF8.GetString (retval);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_2;
		L_2 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		String_t* L_4;
		L_4 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(32 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_2, L_3);
		return L_4;
	}
}
// System.Int32 WebSocket::SocketCreate(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketCreate_m380984FAB430F512016664F700CFA304EBF1F363 (String_t* ___url0, String_t* ___protocols1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___url0' to native representation
	char* ____url0_marshaled = NULL;
	____url0_marshaled = il2cpp_codegen_marshal_string(___url0);

	// Marshaling of parameter '___protocols1' to native representation
	char* ____protocols1_marshaled = NULL;
	____protocols1_marshaled = il2cpp_codegen_marshal_string(___protocols1);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SocketCreate)(____url0_marshaled, ____protocols1_marshaled);

	// Marshaling cleanup of parameter '___url0' native representation
	il2cpp_codegen_marshal_free(____url0_marshaled);
	____url0_marshaled = NULL;

	// Marshaling cleanup of parameter '___protocols1' native representation
	il2cpp_codegen_marshal_free(____protocols1_marshaled);
	____protocols1_marshaled = NULL;

	return returnValue;
}
// System.Int32 WebSocket::SocketState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketState_mA3D0FE4111F1AB5AA56E265808A332C512F705FD (int32_t ___socketInstance0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SocketState)(___socketInstance0);

	return returnValue;
}
// System.Void WebSocket::SocketSend(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketSend_m43A20AF96DC3A373C404A94ECEB92F20C3D5956B (int32_t ___socketInstance0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___ptr1, int32_t ___length2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, uint8_t*, int32_t);

	// Marshaling of parameter '___ptr1' to native representation
	uint8_t* ____ptr1_marshaled = NULL;
	if (___ptr1 != NULL)
	{
		____ptr1_marshaled = reinterpret_cast<uint8_t*>((___ptr1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SocketSend)(___socketInstance0, ____ptr1_marshaled, ___length2);

}
// System.Void WebSocket::SocketRecv(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketRecv_m64803B169A6D8697E87AAE3F1DDC7D290E9408A3 (int32_t ___socketInstance0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___ptr1, int32_t ___length2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, uint8_t*, int32_t);

	// Marshaling of parameter '___ptr1' to native representation
	uint8_t* ____ptr1_marshaled = NULL;
	if (___ptr1 != NULL)
	{
		____ptr1_marshaled = reinterpret_cast<uint8_t*>((___ptr1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SocketRecv)(___socketInstance0, ____ptr1_marshaled, ___length2);

}
// System.Int32 WebSocket::SocketRecvLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketRecvLength_mFD76AD5CE500367EB1402C43DEAF896064950A27 (int32_t ___socketInstance0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SocketRecvLength)(___socketInstance0);

	return returnValue;
}
// System.Void WebSocket::SocketClose(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketClose_m6D350474CA1A621D94D8D3464C54BAAA8CB8C5EE (int32_t ___socketInstance0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SocketClose)(___socketInstance0);

}
// System.Int32 WebSocket::SocketError(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketError_m76233984EF10014AB5EA9BCA174E0DE21DF3652C (int32_t ___socketInstance0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___ptr1, int32_t ___length2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, uint8_t*, int32_t);

	// Marshaling of parameter '___ptr1' to native representation
	uint8_t* ____ptr1_marshaled = NULL;
	if (___ptr1 != NULL)
	{
		____ptr1_marshaled = reinterpret_cast<uint8_t*>((___ptr1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SocketError)(___socketInstance0, ____ptr1_marshaled, ___length2);

	return returnValue;
}
// System.Void WebSocket::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Send_mA0CBE6076DE404E7EBB2FED418EB3E1B14E3E24F (WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, const RuntimeMethod* method)
{
	{
		// SocketSend (m_NativeRef, buffer, buffer.Length);
		int32_t L_0 = __this->get_m_NativeRef_2();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___buffer0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___buffer0;
		WebSocket_SocketSend_m43A20AF96DC3A373C404A94ECEB92F20C3D5956B(L_0, L_1, ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Byte[] WebSocket::Recv()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WebSocket_Recv_mB0AA2953A88628422FF0E0B18372EABBDB4E72D2 (WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	{
		// int length = SocketRecvLength (m_NativeRef);
		int32_t L_0 = __this->get_m_NativeRef_2();
		int32_t L_1;
		L_1 = WebSocket_SocketRecvLength_mFD76AD5CE500367EB1402C43DEAF896064950A27(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (length == 0)
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return null;
		return (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
	}

IL_0011:
	{
		// byte[] buffer = new byte[length];
		int32_t L_3 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		// SocketRecv (m_NativeRef, buffer, length);
		int32_t L_5 = __this->get_m_NativeRef_2();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = V_1;
		int32_t L_7 = V_0;
		WebSocket_SocketRecv_m64803B169A6D8697E87AAE3F1DDC7D290E9408A3(L_5, L_6, L_7, /*hidden argument*/NULL);
		// return buffer;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = V_1;
		return L_8;
	}
}
// System.Void WebSocket::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Connect_m9C0189CA2EE5B84E20DBD913175F663AE055CE02 (WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * __this, const RuntimeMethod* method)
{
	{
		// m_NativeRef = SocketCreate (mUrl.ToString(), this.protocols);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0 = __this->get_mUrl_0();
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		String_t* L_2 = __this->get_protocols_1();
		int32_t L_3;
		L_3 = WebSocket_SocketCreate_m380984FAB430F512016664F700CFA304EBF1F363(L_1, L_2, /*hidden argument*/NULL);
		__this->set_m_NativeRef_2(L_3);
		// }
		return;
	}
}
// System.Void WebSocket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Close_m78D6328B5769E65A24CFB896400ED86B3535F6A3 (WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * __this, const RuntimeMethod* method)
{
	{
		// SocketClose(m_NativeRef);
		int32_t L_0 = __this->get_m_NativeRef_2();
		WebSocket_SocketClose_m6D350474CA1A621D94D8D3464C54BAAA8CB8C5EE(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean WebSocket::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocket_get_Connected_m175AEA9D6447234508ED29C0F39E9B722C37CB9B (WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * __this, const RuntimeMethod* method)
{
	{
		// get { return SocketState(m_NativeRef) != 0; }
		int32_t L_0 = __this->get_m_NativeRef_2();
		int32_t L_1;
		L_1 = WebSocket_SocketState_mA3D0FE4111F1AB5AA56E265808A332C512F705FD(L_0, /*hidden argument*/NULL);
		return (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.String WebSocket::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocket_get_Error_mB50059CF4E3511AF4541979573445962DFF14C29 (WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		// byte[] buffer = new byte[bufsize];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		V_0 = L_0;
		// int result = SocketError (m_NativeRef, buffer, bufsize);
		int32_t L_1 = __this->get_m_NativeRef_2();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = V_0;
		int32_t L_3;
		L_3 = WebSocket_SocketError_m76233984EF10014AB5EA9BCA174E0DE21DF3652C(L_1, L_2, ((int32_t)1024), /*hidden argument*/NULL);
		// if (result == 0)
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_0020:
	{
		// return Encoding.UTF8.GetString (buffer);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_4;
		L_4 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_0;
		String_t* L_6;
		L_6 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(32 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_4, L_5);
		return L_6;
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Ozmoz.FinalCinematicController/<WaitAfterLoadLevel>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAfterLoadLevelU3Ed__5__ctor_mBE29E20F1B1B27D746542B9720B46F1990381369 (U3CWaitAfterLoadLevelU3Ed__5_t00B7D952338C631A7C7D7385F7B633ADEBCF3F39 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Ozmoz.FinalCinematicController/<WaitAfterLoadLevel>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAfterLoadLevelU3Ed__5_System_IDisposable_Dispose_m70D34A6B3832A7E358C709534097724BCD7759A0 (U3CWaitAfterLoadLevelU3Ed__5_t00B7D952338C631A7C7D7385F7B633ADEBCF3F39 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Ozmoz.FinalCinematicController/<WaitAfterLoadLevel>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitAfterLoadLevelU3Ed__5_MoveNext_m5C350D539AD118FB7EB50153E05BF446253BEFD3 (U3CWaitAfterLoadLevelU3Ed__5_t00B7D952338C631A7C7D7385F7B633ADEBCF3F39 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FinalCinematicController_t3FB3544CD0E1156D5D1293148AEA91F835CD7C50 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		FinalCinematicController_t3FB3544CD0E1156D5D1293148AEA91F835CD7C50 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(duration);
		float L_4 = __this->get_duration_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_5 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_5, L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (sceneLoader)
		FinalCinematicController_t3FB3544CD0E1156D5D1293148AEA91F835CD7C50 * L_6 = V_1;
		SceneLoader_t9F40A88ECB90A9F92BEF7F70E720CCFDB81DAE92 * L_7 = L_6->get_sceneLoader_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0057;
		}
	}
	{
		// sceneLoader.Load();
		FinalCinematicController_t3FB3544CD0E1156D5D1293148AEA91F835CD7C50 * L_9 = V_1;
		SceneLoader_t9F40A88ECB90A9F92BEF7F70E720CCFDB81DAE92 * L_10 = L_9->get_sceneLoader_7();
		SceneLoader_Load_m808EE705C2E7FF6889147C5F0B5DBAFC9A622AA2(L_10, /*hidden argument*/NULL);
	}

IL_0057:
	{
		// }
		return (bool)0;
	}
}
// System.Object Ozmoz.FinalCinematicController/<WaitAfterLoadLevel>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitAfterLoadLevelU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB69CAE3E0AA2583BCACB89E9E57768FD9BEEEBFC (U3CWaitAfterLoadLevelU3Ed__5_t00B7D952338C631A7C7D7385F7B633ADEBCF3F39 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Ozmoz.FinalCinematicController/<WaitAfterLoadLevel>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAfterLoadLevelU3Ed__5_System_Collections_IEnumerator_Reset_m13BD6E6EBCCC58BA535B9582309471BA9322F648 (U3CWaitAfterLoadLevelU3Ed__5_t00B7D952338C631A7C7D7385F7B633ADEBCF3F39 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitAfterLoadLevelU3Ed__5_System_Collections_IEnumerator_Reset_m13BD6E6EBCCC58BA535B9582309471BA9322F648_RuntimeMethod_var)));
	}
}
// System.Object Ozmoz.FinalCinematicController/<WaitAfterLoadLevel>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitAfterLoadLevelU3Ed__5_System_Collections_IEnumerator_get_Current_mEC9E9B28EB3777E24B08F4AAF4602775DAD71B74 (U3CWaitAfterLoadLevelU3Ed__5_t00B7D952338C631A7C7D7385F7B633ADEBCF3F39 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Ozmoz.Player/<WaitForScream>d__45::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForScreamU3Ed__45__ctor_m8185EE299E69EEAEFEA75440E99EC3F40552D6F2 (U3CWaitForScreamU3Ed__45_tDCE1B743FDAB81FFE30C049D1BD6FCE3321B8122 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Ozmoz.Player/<WaitForScream>d__45::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForScreamU3Ed__45_System_IDisposable_Dispose_m480E44011C8FE3ADCCE30F424D7E62F3F449FD69 (U3CWaitForScreamU3Ed__45_tDCE1B743FDAB81FFE30C049D1BD6FCE3321B8122 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Ozmoz.Player/<WaitForScream>d__45::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForScreamU3Ed__45_MoveNext_m4249B6019F0AC8FD3AC37E612AEC3FE02ED29CEC (U3CWaitForScreamU3Ed__45_tDCE1B743FDAB81FFE30C049D1BD6FCE3321B8122 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(duration);
		float L_3 = __this->get_duration_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0031:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (callback != null)
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = __this->get_callback_3();
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		// callback.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = __this->get_callback_3();
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_6, /*hidden argument*/NULL);
	}

IL_004b:
	{
		// }
		return (bool)0;
	}
}
// System.Object Ozmoz.Player/<WaitForScream>d__45::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitForScreamU3Ed__45_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFABFAD77A8EAEAF27E097B97D0E997D118B6D31A (U3CWaitForScreamU3Ed__45_tDCE1B743FDAB81FFE30C049D1BD6FCE3321B8122 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Ozmoz.Player/<WaitForScream>d__45::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForScreamU3Ed__45_System_Collections_IEnumerator_Reset_mAE055B6FEBD26EA50C458ED15390C17C28711A6C (U3CWaitForScreamU3Ed__45_tDCE1B743FDAB81FFE30C049D1BD6FCE3321B8122 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForScreamU3Ed__45_System_Collections_IEnumerator_Reset_mAE055B6FEBD26EA50C458ED15390C17C28711A6C_RuntimeMethod_var)));
	}
}
// System.Object Ozmoz.Player/<WaitForScream>d__45::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitForScreamU3Ed__45_System_Collections_IEnumerator_get_Current_m11A531AAD5306FF8466F257F6ED53B4A9983EDFC (U3CWaitForScreamU3Ed__45_tDCE1B743FDAB81FFE30C049D1BD6FCE3321B8122 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Ozmoz.PlayerExecutor/<DelayedStart>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedStartU3Ed__7__ctor_mC64A68E4BF53FDB4B2295F8DEE3C36B007D4E323 (U3CDelayedStartU3Ed__7_t2B489FFBE4BC6956C151F89829A502AC11FED042 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Ozmoz.PlayerExecutor/<DelayedStart>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedStartU3Ed__7_System_IDisposable_Dispose_m07A39265F8998B8870A9C0157A2D917A888E5BC4 (U3CDelayedStartU3Ed__7_t2B489FFBE4BC6956C151F89829A502AC11FED042 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Ozmoz.PlayerExecutor/<DelayedStart>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDelayedStartU3Ed__7_MoveNext_m73D0F1D3B5316B0AE0FFB35D0E9D1B57EAD54E29 (U3CDelayedStartU3Ed__7_t2B489FFBE4BC6956C151F89829A502AC11FED042 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerExecutor_t36D970CD8630459113AA156518025FB6D643246B * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PlayerExecutor_t36D970CD8630459113AA156518025FB6D643246B * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(startDelay);
		PlayerExecutor_t36D970CD8630459113AA156518025FB6D643246B * L_4 = V_1;
		float L_5 = L_4->get_startDelay_6();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		// onStartEvent.Invoke();
		PlayerExecutor_t36D970CD8630459113AA156518025FB6D643246B * L_7 = V_1;
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_8 = L_7->get_onStartEvent_5();
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(L_8, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Ozmoz.PlayerExecutor/<DelayedStart>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayedStartU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC50B050EA50F9D07C85DFB65203124ACD4FD3457 (U3CDelayedStartU3Ed__7_t2B489FFBE4BC6956C151F89829A502AC11FED042 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Ozmoz.PlayerExecutor/<DelayedStart>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedStartU3Ed__7_System_Collections_IEnumerator_Reset_m31EB268DF28CC82851824C6D63A582A32D5C8DE8 (U3CDelayedStartU3Ed__7_t2B489FFBE4BC6956C151F89829A502AC11FED042 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDelayedStartU3Ed__7_System_Collections_IEnumerator_Reset_m31EB268DF28CC82851824C6D63A582A32D5C8DE8_RuntimeMethod_var)));
	}
}
// System.Object Ozmoz.PlayerExecutor/<DelayedStart>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayedStartU3Ed__7_System_Collections_IEnumerator_get_Current_m682AFDDD31FCED4BB16D4F8E9E33AD6B36F4880A (U3CDelayedStartU3Ed__7_t2B489FFBE4BC6956C151F89829A502AC11FED042 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Ozmoz.SceneLoader/<WaitForFade>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForFadeU3Ed__6__ctor_m9C6107C52FE61CAD896021FA47524625E18192C5 (U3CWaitForFadeU3Ed__6_tB02B9E12CD1F807818386BFB6A5EADBE29E5920B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Ozmoz.SceneLoader/<WaitForFade>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForFadeU3Ed__6_System_IDisposable_Dispose_mB3A0E531D78B6AC6CC1D75F8EC3E83F866366BA8 (U3CWaitForFadeU3Ed__6_tB02B9E12CD1F807818386BFB6A5EADBE29E5920B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Ozmoz.SceneLoader/<WaitForFade>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForFadeU3Ed__6_MoveNext_mF44DF1CD33110D6750BECE1BE8E19A6DDF55EFB8 (U3CWaitForFadeU3Ed__6_tB02B9E12CD1F807818386BFB6A5EADBE29E5920B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	SceneLoader_t9F40A88ECB90A9F92BEF7F70E720CCFDB81DAE92 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SceneLoader_t9F40A88ECB90A9F92BEF7F70E720CCFDB81DAE92 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return StartCoroutine(screenFade.IFadeOut());
		SceneLoader_t9F40A88ECB90A9F92BEF7F70E720CCFDB81DAE92 * L_4 = V_1;
		SceneLoader_t9F40A88ECB90A9F92BEF7F70E720CCFDB81DAE92 * L_5 = V_1;
		ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * L_6 = L_5->get_screenFade_5();
		RuntimeObject* L_7;
		L_7 = ScreenFade_IFadeOut_mEAA43F4DD33A7EF99EF566974F57437D5BF14A3D(L_6, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_8;
		L_8 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_4, L_7, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_8);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// LoadScene(scene.ScenePath);
		SceneLoader_t9F40A88ECB90A9F92BEF7F70E720CCFDB81DAE92 * L_9 = V_1;
		SceneReference_tD4A01AEA2D6123F6B00B6DDF2B8A347C5CFE71C9 * L_10 = L_9->get_scene_6();
		String_t* L_11;
		L_11 = SceneReference_get_ScenePath_m0F58D729908F84173D506E77BEBF4026878A4D0E_inline(L_10, /*hidden argument*/NULL);
		SceneLoader_LoadScene_mD2A3DC70F5827C65CD29CA709019FC21C8AF2DFF(L_11, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Ozmoz.SceneLoader/<WaitForFade>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitForFadeU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m40066ACC0B18BDB352D0B20E4DD9FB384D97BE97 (U3CWaitForFadeU3Ed__6_tB02B9E12CD1F807818386BFB6A5EADBE29E5920B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Ozmoz.SceneLoader/<WaitForFade>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForFadeU3Ed__6_System_Collections_IEnumerator_Reset_m30510E7083F6F459E674384A33BE4A88FAD7D093 (U3CWaitForFadeU3Ed__6_tB02B9E12CD1F807818386BFB6A5EADBE29E5920B * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForFadeU3Ed__6_System_Collections_IEnumerator_Reset_m30510E7083F6F459E674384A33BE4A88FAD7D093_RuntimeMethod_var)));
	}
}
// System.Object Ozmoz.SceneLoader/<WaitForFade>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitForFadeU3Ed__6_System_Collections_IEnumerator_get_Current_mCB1D526EC5912526B02B6C70D901D6B882CA2945 (U3CWaitForFadeU3Ed__6_tB02B9E12CD1F807818386BFB6A5EADBE29E5920B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Ozmoz.ScreamGettingUI/<FadeIn>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__15__ctor_m0870A5BBA6654AB7404EBB0F155E892BBA14B694 (U3CFadeInU3Ed__15_tD1C4FA53536CA0CEEA22C0323EC749A1D32E74FE * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Ozmoz.ScreamGettingUI/<FadeIn>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__15_System_IDisposable_Dispose_m24294575DCC72FD289A91A0604192D043426A4C9 (U3CFadeInU3Ed__15_tD1C4FA53536CA0CEEA22C0323EC749A1D32E74FE * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Ozmoz.ScreamGettingUI/<FadeIn>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeInU3Ed__15_MoveNext_mAF1F617B7060F4462CC150A16B9F4E0E82CA3994 (U3CFadeInU3Ed__15_tD1C4FA53536CA0CEEA22C0323EC749A1D32E74FE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ScreamGettingUI_t8C9DC924B752A009960918BA09BDB9E539B496C1 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ScreamGettingUI_t8C9DC924B752A009960918BA09BDB9E539B496C1 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_0043;
			}
			case 2:
			{
				goto IL_0072;
			}
			case 3:
			{
				goto IL_00d6;
			}
			case 4:
			{
				goto IL_010c;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002a:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_004a;
	}

IL_0033:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0043:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_004a:
	{
		// while(waiting)
		ScreamGettingUI_t8C9DC924B752A009960918BA09BDB9E539B496C1 * L_3 = V_1;
		bool L_4 = L_3->get_waiting_11();
		if (L_4)
		{
			goto IL_0033;
		}
	}
	{
		// waiting = true;
		ScreamGettingUI_t8C9DC924B752A009960918BA09BDB9E539B496C1 * L_5 = V_1;
		L_5->set_waiting_11((bool)1);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0072:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (unlockAudioPlayer)
		ScreamGettingUI_t8C9DC924B752A009960918BA09BDB9E539B496C1 * L_7 = V_1;
		AudioPlayer_tFAB0D7A01313CB252849A2270690FC00905BB48B * L_8 = L_7->get_unlockAudioPlayer_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0091;
		}
	}
	{
		// unlockAudioPlayer.PlayRandomClip();
		ScreamGettingUI_t8C9DC924B752A009960918BA09BDB9E539B496C1 * L_10 = V_1;
		AudioPlayer_tFAB0D7A01313CB252849A2270690FC00905BB48B * L_11 = L_10->get_unlockAudioPlayer_10();
		AudioPlayer_PlayRandomClip_mEC006966946EF8E7FE53B0241E75C5772429EE4F(L_11, /*hidden argument*/NULL);
	}

IL_0091:
	{
		// image.CrossFadeAlpha(0f, 0f, true);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_12 = __this->get_image_3();
		VirtActionInvoker3< float, float, bool >::Invoke(49 /* System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean) */, L_12, (0.0f), (0.0f), (bool)1);
		// image.CrossFadeAlpha(0.75f, 2f, true);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_13 = __this->get_image_3();
		VirtActionInvoker3< float, float, bool >::Invoke(49 /* System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean) */, L_13, (0.75f), (2.0f), (bool)1);
		// yield return new WaitForSeconds(3);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_14 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_14, (3.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_14);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_00d6:
	{
		__this->set_U3CU3E1__state_0((-1));
		// image.CrossFadeAlpha(0f, 2f, true);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_15 = __this->get_image_3();
		VirtActionInvoker3< float, float, bool >::Invoke(49 /* System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean) */, L_15, (0.0f), (2.0f), (bool)1);
		// yield return new WaitForSeconds(3);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_16 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_16, (3.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_16);
		__this->set_U3CU3E1__state_0(4);
		return (bool)1;
	}

IL_010c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// waiting = false;
		ScreamGettingUI_t8C9DC924B752A009960918BA09BDB9E539B496C1 * L_17 = V_1;
		L_17->set_waiting_11((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object Ozmoz.ScreamGettingUI/<FadeIn>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeInU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m045DF3F21FE2F439FBB7C242D09C9C21CFFFDB8C (U3CFadeInU3Ed__15_tD1C4FA53536CA0CEEA22C0323EC749A1D32E74FE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Ozmoz.ScreamGettingUI/<FadeIn>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__15_System_Collections_IEnumerator_Reset_m055D7361ED33DD459D5F344AD545EB633ECB40D7 (U3CFadeInU3Ed__15_tD1C4FA53536CA0CEEA22C0323EC749A1D32E74FE * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeInU3Ed__15_System_Collections_IEnumerator_Reset_m055D7361ED33DD459D5F344AD545EB633ECB40D7_RuntimeMethod_var)));
	}
}
// System.Object Ozmoz.ScreamGettingUI/<FadeIn>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeInU3Ed__15_System_Collections_IEnumerator_get_Current_mB3F708E9EC4DAC17DC6F809A6B024AD9DD0AB371 (U3CFadeInU3Ed__15_tD1C4FA53536CA0CEEA22C0323EC749A1D32E74FE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void ScreamSelector/<WaitToHide>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitToHideU3Ed__26__ctor_mBFDDF4B540D37B3FB8018C32C477DD61813C6FC1 (U3CWaitToHideU3Ed__26_tA8EDB4B649DAD600424B5FE5AC0A8A0045FF5B00 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ScreamSelector/<WaitToHide>d__26::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitToHideU3Ed__26_System_IDisposable_Dispose_m2F0CA24CABB368EFA8317427F00A4B107C5E16A7 (U3CWaitToHideU3Ed__26_tA8EDB4B649DAD600424B5FE5AC0A8A0045FF5B00 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ScreamSelector/<WaitToHide>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitToHideU3Ed__26_MoveNext_m82D62EF71B774E8A900A826EF4FF810159356173 (U3CWaitToHideU3Ed__26_tA8EDB4B649DAD600424B5FE5AC0A8A0045FF5B00 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0045;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// visibleCoroutines++;
		ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3 * L_4 = V_1;
		ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3 * L_5 = V_1;
		int32_t L_6 = L_5->get_visibleCoroutines_27();
		L_4->set_visibleCoroutines_27(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
		// yield return new WaitForSeconds(4);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_7 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_7, (4.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0045:
	{
		__this->set_U3CU3E1__state_0((-1));
		// visibleCoroutines--;
		ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3 * L_8 = V_1;
		ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3 * L_9 = V_1;
		int32_t L_10 = L_9->get_visibleCoroutines_27();
		L_8->set_visibleCoroutines_27(((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)));
		// if (visibleCoroutines == 0)
		ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3 * L_11 = V_1;
		int32_t L_12 = L_11->get_visibleCoroutines_27();
		if (L_12)
		{
			goto IL_0069;
		}
	}
	{
		// this.visible = false;
		ScreamSelector_t88270C165F842E21C88B374C24165B2EBBD355D3 * L_13 = V_1;
		L_13->set_visible_26((bool)0);
	}

IL_0069:
	{
		// }
		return (bool)0;
	}
}
// System.Object ScreamSelector/<WaitToHide>d__26::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitToHideU3Ed__26_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD3EB52181FFC3351112C86B473E30E321A875D61 (U3CWaitToHideU3Ed__26_tA8EDB4B649DAD600424B5FE5AC0A8A0045FF5B00 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ScreamSelector/<WaitToHide>d__26::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitToHideU3Ed__26_System_Collections_IEnumerator_Reset_m372B3B37E03275FBF617526AB3FFCD575E5095B6 (U3CWaitToHideU3Ed__26_tA8EDB4B649DAD600424B5FE5AC0A8A0045FF5B00 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitToHideU3Ed__26_System_Collections_IEnumerator_Reset_m372B3B37E03275FBF617526AB3FFCD575E5095B6_RuntimeMethod_var)));
	}
}
// System.Object ScreamSelector/<WaitToHide>d__26::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitToHideU3Ed__26_System_Collections_IEnumerator_get_Current_m316481438FB0CF6BD1264B7369395DF73F42C456 (U3CWaitToHideU3Ed__26_tA8EDB4B649DAD600424B5FE5AC0A8A0045FF5B00 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void ScreenFade/<IFadeIn>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIFadeInU3Ed__9__ctor_m657E74BA96CD7637C7251CE460DCB113FB93E19E (U3CIFadeInU3Ed__9_tDD67FB6E64E0391661873E31458A9B4BB7011579 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ScreenFade/<IFadeIn>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIFadeInU3Ed__9_System_IDisposable_Dispose_mB6495A46CF582A3C207B78C8A64B26E4834F3FC2 (U3CIFadeInU3Ed__9_tDD67FB6E64E0391661873E31458A9B4BB7011579 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ScreenFade/<IFadeIn>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CIFadeInU3Ed__9_MoveNext_mE44EEF624D57940888A6B1C96244A5FD7F6B56B1 (U3CIFadeInU3Ed__9_tDD67FB6E64E0391661873E31458A9B4BB7011579 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0098;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (fadeOutImage)
		ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * L_4 = V_1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5 = L_4->get_fadeOutImage_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		// fadeOutImage.CrossFadeAlpha(0f, 0f, true);
		ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * L_7 = V_1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8 = L_7->get_fadeOutImage_8();
		VirtActionInvoker3< float, float, bool >::Invoke(49 /* System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean) */, L_8, (0.0f), (0.0f), (bool)1);
	}

IL_0044:
	{
		// if (fadeInImage)
		ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * L_9 = V_1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_10 = L_9->get_fadeInImage_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_009f;
		}
	}
	{
		// fadeInImage.CrossFadeAlpha(1f, 0f, true);
		ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * L_12 = V_1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_13 = L_12->get_fadeInImage_5();
		VirtActionInvoker3< float, float, bool >::Invoke(49 /* System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean) */, L_13, (1.0f), (0.0f), (bool)1);
		// fadeInImage.CrossFadeAlpha(0f, fadeInDuration, true);
		ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * L_14 = V_1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_15 = L_14->get_fadeInImage_5();
		ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * L_16 = V_1;
		float L_17 = L_16->get_fadeInDuration_6();
		VirtActionInvoker3< float, float, bool >::Invoke(49 /* System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean) */, L_15, (0.0f), L_17, (bool)1);
		// yield return new WaitForSeconds(fadeInDuration);
		ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * L_18 = V_1;
		float L_19 = L_18->get_fadeInDuration_6();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_20 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_20, L_19, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_20);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0098:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_009f:
	{
		// }
		return (bool)0;
	}
}
// System.Object ScreenFade/<IFadeIn>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CIFadeInU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m24EB0440A273B9194B411C0B9249CABD6052D6B3 (U3CIFadeInU3Ed__9_tDD67FB6E64E0391661873E31458A9B4BB7011579 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ScreenFade/<IFadeIn>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIFadeInU3Ed__9_System_Collections_IEnumerator_Reset_m3CD6E3C35A849E40398EB4C29EA909D880210414 (U3CIFadeInU3Ed__9_tDD67FB6E64E0391661873E31458A9B4BB7011579 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CIFadeInU3Ed__9_System_Collections_IEnumerator_Reset_m3CD6E3C35A849E40398EB4C29EA909D880210414_RuntimeMethod_var)));
	}
}
// System.Object ScreenFade/<IFadeIn>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CIFadeInU3Ed__9_System_Collections_IEnumerator_get_Current_m862FF85057E92BEE948A3A03A8A054694E253F4F (U3CIFadeInU3Ed__9_tDD67FB6E64E0391661873E31458A9B4BB7011579 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void ScreenFade/<IFadeOut>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIFadeOutU3Ed__10__ctor_mC909BE03C0A93565AB4C68A8935811BC0979E380 (U3CIFadeOutU3Ed__10_t7660425B1965333D849951816ED71E5129488D92 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ScreenFade/<IFadeOut>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIFadeOutU3Ed__10_System_IDisposable_Dispose_m0ADF5858CEDBF8B23DE13F35F0A6270AFF741E65 (U3CIFadeOutU3Ed__10_t7660425B1965333D849951816ED71E5129488D92 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ScreenFade/<IFadeOut>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CIFadeOutU3Ed__10_MoveNext_mE3D3CB24BFF3ECC488E08997E1B0545C8161A8EB (U3CIFadeOutU3Ed__10_t7660425B1965333D849951816ED71E5129488D92 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0098;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (fadeInImage)
		ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * L_4 = V_1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5 = L_4->get_fadeInImage_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		// fadeInImage.CrossFadeAlpha(0f, 0f, true);
		ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * L_7 = V_1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8 = L_7->get_fadeInImage_5();
		VirtActionInvoker3< float, float, bool >::Invoke(49 /* System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean) */, L_8, (0.0f), (0.0f), (bool)1);
	}

IL_0044:
	{
		// if (fadeOutImage)
		ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * L_9 = V_1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_10 = L_9->get_fadeOutImage_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_009f;
		}
	}
	{
		// fadeOutImage.CrossFadeAlpha(0f, 0f, true);
		ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * L_12 = V_1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_13 = L_12->get_fadeOutImage_8();
		VirtActionInvoker3< float, float, bool >::Invoke(49 /* System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean) */, L_13, (0.0f), (0.0f), (bool)1);
		// fadeOutImage.CrossFadeAlpha(1f, fadeOutDuration, true);
		ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * L_14 = V_1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_15 = L_14->get_fadeOutImage_8();
		ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * L_16 = V_1;
		float L_17 = L_16->get_fadeOutDuration_9();
		VirtActionInvoker3< float, float, bool >::Invoke(49 /* System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean) */, L_15, (1.0f), L_17, (bool)1);
		// yield return new WaitForSeconds(fadeOutDuration);
		ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * L_18 = V_1;
		float L_19 = L_18->get_fadeOutDuration_9();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_20 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_20, L_19, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_20);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0098:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_009f:
	{
		// }
		return (bool)0;
	}
}
// System.Object ScreenFade/<IFadeOut>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CIFadeOutU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m36CD98DE73E5A8D2D87D2736B02B3386B417213E (U3CIFadeOutU3Ed__10_t7660425B1965333D849951816ED71E5129488D92 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ScreenFade/<IFadeOut>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIFadeOutU3Ed__10_System_Collections_IEnumerator_Reset_mA6B5B8B18BCA3F7123314B106C3B96279C2A5DEF (U3CIFadeOutU3Ed__10_t7660425B1965333D849951816ED71E5129488D92 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CIFadeOutU3Ed__10_System_Collections_IEnumerator_Reset_mA6B5B8B18BCA3F7123314B106C3B96279C2A5DEF_RuntimeMethod_var)));
	}
}
// System.Object ScreenFade/<IFadeOut>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CIFadeOutU3Ed__10_System_Collections_IEnumerator_get_Current_mDEA36DA3FD3B2C11A66B7B62AD4475AF6EAFD75D (U3CIFadeOutU3Ed__10_t7660425B1965333D849951816ED71E5129488D92 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void ScreenFade/<IQuitFade>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIQuitFadeU3Ed__11__ctor_m98E151E3C970856B3FFFF4A208655B1FEBC66833 (U3CIQuitFadeU3Ed__11_tD4227CC2D3E4352DF2652FDFA3A7ACE7D19D1F46 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ScreenFade/<IQuitFade>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIQuitFadeU3Ed__11_System_IDisposable_Dispose_m0F03EA11AECE378F47E3C97BBD3D65346AC6C6B0 (U3CIQuitFadeU3Ed__11_tD4227CC2D3E4352DF2652FDFA3A7ACE7D19D1F46 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ScreenFade/<IQuitFade>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CIQuitFadeU3Ed__11_MoveNext_m02A5C119EC7F96799117BAA69601ADD16E3D1CAC (U3CIQuitFadeU3Ed__11_tD4227CC2D3E4352DF2652FDFA3A7ACE7D19D1F46 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0098;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (fadeInImage)
		ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * L_4 = V_1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5 = L_4->get_fadeInImage_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		// fadeInImage.CrossFadeAlpha(0f, 0f, true);
		ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * L_7 = V_1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8 = L_7->get_fadeInImage_5();
		VirtActionInvoker3< float, float, bool >::Invoke(49 /* System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean) */, L_8, (0.0f), (0.0f), (bool)1);
	}

IL_0044:
	{
		// if (fadeOutImage)
		ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * L_9 = V_1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_10 = L_9->get_fadeOutImage_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00a4;
		}
	}
	{
		// fadeOutImage.CrossFadeAlpha(0f, 0f, true);
		ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * L_12 = V_1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_13 = L_12->get_fadeOutImage_8();
		VirtActionInvoker3< float, float, bool >::Invoke(49 /* System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean) */, L_13, (0.0f), (0.0f), (bool)1);
		// fadeOutImage.CrossFadeAlpha(1f, fadeOutDuration, true);
		ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * L_14 = V_1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_15 = L_14->get_fadeOutImage_8();
		ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * L_16 = V_1;
		float L_17 = L_16->get_fadeOutDuration_9();
		VirtActionInvoker3< float, float, bool >::Invoke(49 /* System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean) */, L_15, (1.0f), L_17, (bool)1);
		// yield return new WaitForSeconds(fadeOutDuration);
		ScreenFade_tB918783AA0694C8F1AF3356C3EBB2B9BAE4A337A * L_18 = V_1;
		float L_19 = L_18->get_fadeOutDuration_9();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_20 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_20, L_19, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_20);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0098:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
	}

IL_00a4:
	{
		// }
		return (bool)0;
	}
}
// System.Object ScreenFade/<IQuitFade>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CIQuitFadeU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8B806E150DD410318D61A765B8C052D0CBFEBDEE (U3CIQuitFadeU3Ed__11_tD4227CC2D3E4352DF2652FDFA3A7ACE7D19D1F46 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ScreenFade/<IQuitFade>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIQuitFadeU3Ed__11_System_Collections_IEnumerator_Reset_mC903EFD262AE76DF224E714143926AAB7517D54D (U3CIQuitFadeU3Ed__11_tD4227CC2D3E4352DF2652FDFA3A7ACE7D19D1F46 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CIQuitFadeU3Ed__11_System_Collections_IEnumerator_Reset_mC903EFD262AE76DF224E714143926AAB7517D54D_RuntimeMethod_var)));
	}
}
// System.Object ScreenFade/<IQuitFade>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CIQuitFadeU3Ed__11_System_Collections_IEnumerator_get_Current_m4E0659F43855FCBACF4521349B5454858DE81F72 (U3CIQuitFadeU3Ed__11_tD4227CC2D3E4352DF2652FDFA3A7ACE7D19D1F46 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReceiveLoopU3Ed__12__ctor_m24E77CA82CA838B779F709263461B1C455D50FDE (U3CReceiveLoopU3Ed__12_t0022C29F89E925E06BFE17A013527CCA19057971 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReceiveLoopU3Ed__12_System_IDisposable_Dispose_m53C61006F5E5F3D044ED300FFB7324B7D4D76C5D (U3CReceiveLoopU3Ed__12_t0022C29F89E925E06BFE17A013527CCA19057971 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CReceiveLoopU3Ed__12_MoveNext_mE194BBB0A794B79D881385F3AFAC7D8493A88356 (U3CReceiveLoopU3Ed__12_t0022C29F89E925E06BFE17A013527CCA19057971 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_t99D8FDF2CD930F08F8812D8FA805187D04874892_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonSocketState_t912CDE549D92E942C8BC68F7855ED673AEE7DDE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_tD6B2F0291304E4B6F83E01C5BE2B5A1C7D49CB4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForRealSeconds_t88BCA6D42C39FFFAE93F61F72CAFB422CC164926_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062C159E09943C99E139190E5A591006A545AA4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8DE4CB154AC0296896C7FD3192C85F2FE4730D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8334317A1EF5557A23201DAC301958FB87859F5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95F53809B4EBC36EDD99FA5DD91761569389BB23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA9193E11FC474EEF79F82B6F77150AE7F202155);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_4 = NULL;
	Exception_t * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	Exception_t * G_B31_0 = NULL;
	int32_t G_B31_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B31_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B31_3 = NULL;
	int32_t G_B31_4 = 0;
	SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * G_B31_5 = NULL;
	Exception_t * G_B30_0 = NULL;
	int32_t G_B30_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B30_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B30_3 = NULL;
	int32_t G_B30_4 = 0;
	SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * G_B30_5 = NULL;
	String_t* G_B32_0 = NULL;
	int32_t G_B32_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B32_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B32_3 = NULL;
	int32_t G_B32_4 = 0;
	SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * G_B32_5 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_004f;
			}
			case 2:
			{
				goto IL_01ef;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (this.sock != null)
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_3 = V_1;
		WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * L_4 = L_3->get_sock_12();
		if (!L_4)
		{
			goto IL_02dc;
		}
	}
	{
		goto IL_0056;
	}

IL_0036:
	{
		// yield return new WaitForRealSeconds(0.1f);
		WaitForRealSeconds_t88BCA6D42C39FFFAE93F61F72CAFB422CC164926 * L_5 = (WaitForRealSeconds_t88BCA6D42C39FFFAE93F61F72CAFB422CC164926 *)il2cpp_codegen_object_new(WaitForRealSeconds_t88BCA6D42C39FFFAE93F61F72CAFB422CC164926_il2cpp_TypeInfo_var);
		WaitForRealSeconds__ctor_mCD44B820C0EAD126888F40FC5550D0575883EB1D(L_5, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004f:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0056:
	{
		// while (this.sock != null && !this.sock.Connected && this.sock.Error == null)
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_6 = V_1;
		WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * L_7 = L_6->get_sock_12();
		if (!L_7)
		{
			goto IL_0078;
		}
	}
	{
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_8 = V_1;
		WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * L_9 = L_8->get_sock_12();
		bool L_10;
		L_10 = WebSocket_get_Connected_m175AEA9D6447234508ED29C0F39E9B722C37CB9B(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0078;
		}
	}
	{
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_11 = V_1;
		WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * L_12 = L_11->get_sock_12();
		String_t* L_13;
		L_13 = WebSocket_get_Error_mB50059CF4E3511AF4541979573445962DFF14C29(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0036;
		}
	}

IL_0078:
	{
		// if (this.sock != null)
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_14 = V_1;
		WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * L_15 = L_14->get_sock_12();
		if (!L_15)
		{
			goto IL_02dc;
		}
	}
	{
		// if (this.sock.Error != null)
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_16 = V_1;
		WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * L_17 = L_16->get_sock_12();
		String_t* L_18;
		L_18 = WebSocket_get_Error_mB50059CF4E3511AF4541979573445962DFF14C29(L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00f7;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.ERROR, "Exiting receive thread. Server: " + this.ServerAddress + ":" + this.ServerPort + " Error: " + this.sock.Error);
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_19 = V_1;
		RuntimeObject* L_20;
		L_20 = IPhotonSocket_get_Listener_m222959C8BDA046F7B68F32B2C26B1FF192D4407C(L_19, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = L_21;
		ArrayElementTypeCheck (L_22, _stringLiteral95F53809B4EBC36EDD99FA5DD91761569389BB23);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral95F53809B4EBC36EDD99FA5DD91761569389BB23);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = L_22;
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_24 = V_1;
		String_t* L_25;
		L_25 = IPhotonSocket_get_ServerAddress_m2BB56B05D3293AF7A5D6DF752A6C2993D00A5018_inline(L_24, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_25);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = L_23;
		ArrayElementTypeCheck (L_26, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27 = L_26;
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_28 = V_1;
		int32_t L_29;
		L_29 = IPhotonSocket_get_ServerPort_mFC52FEBA528E0CA4A57E30048A0942A428725189_inline(L_28, /*hidden argument*/NULL);
		V_2 = L_29;
		String_t* L_30;
		L_30 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_2), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_27, L_30);
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_30);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_31 = L_27;
		ArrayElementTypeCheck (L_31, _stringLiteral062C159E09943C99E139190E5A591006A545AA4A);
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral062C159E09943C99E139190E5A591006A545AA4A);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = L_31;
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_33 = V_1;
		WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * L_34 = L_33->get_sock_12();
		String_t* L_35;
		L_35 = WebSocket_get_Error_mB50059CF4E3511AF4541979573445962DFF14C29(L_34, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_32, L_35);
		(L_32)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_35);
		String_t* L_36;
		L_36 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_32, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t99D8FDF2CD930F08F8812D8FA805187D04874892_il2cpp_TypeInfo_var, L_20, 1, L_36);
		// this.HandleException(StatusCode.ExceptionOnConnect);
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_37 = V_1;
		IPhotonSocket_HandleException_mCC3D032F1FCFADE34B6B63F1D01BB4648E88D79D(L_37, ((int32_t)1023), /*hidden argument*/NULL);
		// }
		goto IL_02dc;
	}

IL_00f7:
	{
		// if (this.ReportDebugOfLevel(DebugLevel.ALL))
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_38 = V_1;
		bool L_39;
		L_39 = IPhotonSocket_ReportDebugOfLevel_m6D036129BC37474F0AD88848D51ECEA69CE48ED4(L_38, 5, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_012a;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.ALL, "Receiving by websocket. this.State: " + this.State);
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_40 = V_1;
		RuntimeObject* L_41;
		L_41 = IPhotonSocket_get_Listener_m222959C8BDA046F7B68F32B2C26B1FF192D4407C(L_40, /*hidden argument*/NULL);
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_42 = V_1;
		int32_t L_43;
		L_43 = IPhotonSocket_get_State_m1CC9A27AC97BBF509FC7BA25292EE9117DEC4A05_inline(L_42, /*hidden argument*/NULL);
		V_3 = L_43;
		RuntimeObject * L_44 = Box(PhotonSocketState_t912CDE549D92E942C8BC68F7855ED673AEE7DDE8_il2cpp_TypeInfo_var, (&V_3));
		String_t* L_45;
		L_45 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_44);
		V_3 = *(int32_t*)UnBox(L_44);
		String_t* L_46;
		L_46 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8334317A1EF5557A23201DAC301958FB87859F5B, L_45, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t99D8FDF2CD930F08F8812D8FA805187D04874892_il2cpp_TypeInfo_var, L_41, 5, L_46);
	}

IL_012a:
	{
		// this.State = PhotonSocketState.Connected;
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_47 = V_1;
		IPhotonSocket_set_State_mD730B3A6935A967A2DC87968A9E53BEA9759075A_inline(L_47, 2, /*hidden argument*/NULL);
		// this.peerBase.OnConnect();
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_48 = V_1;
		PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557 * L_49 = ((IPhotonSocket_t8C4CC725BD3399028AEECE28EE0009F06EBFCB96 *)L_48)->get_peerBase_0();
		VirtActionInvoker0::Invoke(10 /* System.Void ExitGames.Client.Photon.PeerBase::OnConnect() */, L_49);
		goto IL_02d0;
	}

IL_0141:
	{
		// if (this.sock != null)
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_50 = V_1;
		WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * L_51 = L_50->get_sock_12();
		if (!L_51)
		{
			goto IL_02d0;
		}
	}
	{
		// if (this.sock.Error != null)
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_52 = V_1;
		WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * L_53 = L_52->get_sock_12();
		String_t* L_54;
		L_54 = WebSocket_get_Error_mB50059CF4E3511AF4541979573445962DFF14C29(L_53, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_01c0;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.ERROR, "Exiting receive thread (inside loop). Server: " + this.ServerAddress + ":" + this.ServerPort + " Error: " + this.sock.Error);
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_55 = V_1;
		RuntimeObject* L_56;
		L_56 = IPhotonSocket_get_Listener_m222959C8BDA046F7B68F32B2C26B1FF192D4407C(L_55, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_57 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_58 = L_57;
		ArrayElementTypeCheck (L_58, _stringLiteralCA9193E11FC474EEF79F82B6F77150AE7F202155);
		(L_58)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralCA9193E11FC474EEF79F82B6F77150AE7F202155);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_59 = L_58;
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_60 = V_1;
		String_t* L_61;
		L_61 = IPhotonSocket_get_ServerAddress_m2BB56B05D3293AF7A5D6DF752A6C2993D00A5018_inline(L_60, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_59, L_61);
		(L_59)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_61);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_62 = L_59;
		ArrayElementTypeCheck (L_62, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_62)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_63 = L_62;
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_64 = V_1;
		int32_t L_65;
		L_65 = IPhotonSocket_get_ServerPort_mFC52FEBA528E0CA4A57E30048A0942A428725189_inline(L_64, /*hidden argument*/NULL);
		V_2 = L_65;
		String_t* L_66;
		L_66 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_2), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_63, L_66);
		(L_63)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_66);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = L_63;
		ArrayElementTypeCheck (L_67, _stringLiteral062C159E09943C99E139190E5A591006A545AA4A);
		(L_67)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral062C159E09943C99E139190E5A591006A545AA4A);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_68 = L_67;
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_69 = V_1;
		WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * L_70 = L_69->get_sock_12();
		String_t* L_71;
		L_71 = WebSocket_get_Error_mB50059CF4E3511AF4541979573445962DFF14C29(L_70, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_68, L_71);
		(L_68)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_71);
		String_t* L_72;
		L_72 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_68, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t99D8FDF2CD930F08F8812D8FA805187D04874892_il2cpp_TypeInfo_var, L_56, 1, L_72);
		// this.HandleException(StatusCode.ExceptionOnReceive);
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_73 = V_1;
		IPhotonSocket_HandleException_mCC3D032F1FCFADE34B6B63F1D01BB4648E88D79D(L_73, ((int32_t)1039), /*hidden argument*/NULL);
		// break;
		goto IL_02dc;
	}

IL_01c0:
	{
		// byte[] inBuff = this.sock.Recv();
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_74 = V_1;
		WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * L_75 = L_74->get_sock_12();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_76;
		L_76 = WebSocket_Recv_mB0AA2953A88628422FF0E0B18372EABBDB4E72D2(L_75, /*hidden argument*/NULL);
		V_4 = L_76;
		// if (inBuff == null || inBuff.Length == 0)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_77 = V_4;
		if (!L_77)
		{
			goto IL_01d6;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_78 = V_4;
		if ((((RuntimeArray*)L_78)->max_length))
		{
			goto IL_01fb;
		}
	}

IL_01d6:
	{
		// yield return new WaitForRealSeconds(0.02f);
		WaitForRealSeconds_t88BCA6D42C39FFFAE93F61F72CAFB422CC164926 * L_79 = (WaitForRealSeconds_t88BCA6D42C39FFFAE93F61F72CAFB422CC164926 *)il2cpp_codegen_object_new(WaitForRealSeconds_t88BCA6D42C39FFFAE93F61F72CAFB422CC164926_il2cpp_TypeInfo_var);
		WaitForRealSeconds__ctor_mCD44B820C0EAD126888F40FC5550D0575883EB1D(L_79, (0.0199999996f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_79);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_01ef:
	{
		__this->set_U3CU3E1__state_0((-1));
		// continue;
		goto IL_02d0;
	}

IL_01fb:
	{
		// if (this.ReportDebugOfLevel(DebugLevel.ALL))
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_80 = V_1;
		bool L_81;
		L_81 = IPhotonSocket_ReportDebugOfLevel_m6D036129BC37474F0AD88848D51ECEA69CE48ED4(L_80, 5, /*hidden argument*/NULL);
		if (!L_81)
		{
			goto IL_0232;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.ALL, "TCP << " + inBuff.Length + " = " + SupportClassPun.ByteArrayToString(inBuff));
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_82 = V_1;
		RuntimeObject* L_83;
		L_83 = IPhotonSocket_get_Listener_m222959C8BDA046F7B68F32B2C26B1FF192D4407C(L_82, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_84 = V_4;
		V_2 = ((int32_t)((int32_t)(((RuntimeArray*)L_84)->max_length)));
		String_t* L_85;
		L_85 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_2), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_86 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tD6B2F0291304E4B6F83E01C5BE2B5A1C7D49CB4B_il2cpp_TypeInfo_var);
		String_t* L_87;
		L_87 = SupportClass_ByteArrayToString_mAC8EC8676D083637A9134502ACC60E09CD115AA6(L_86, /*hidden argument*/NULL);
		String_t* L_88;
		L_88 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral1D8DE4CB154AC0296896C7FD3192C85F2FE4730D, L_85, _stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64, L_87, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t99D8FDF2CD930F08F8812D8FA805187D04874892_il2cpp_TypeInfo_var, L_83, 5, L_88);
	}

IL_0232:
	{
		// if (inBuff.Length > 0)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_89 = V_4;
		if (!(((RuntimeArray*)L_89)->max_length))
		{
			goto IL_02d0;
		}
	}

IL_023a:
	try
	{ // begin try (depth: 1)
		// this.HandleReceivedDatagram(inBuff, inBuff.Length, false);
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_90 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_91 = V_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_92 = V_4;
		IPhotonSocket_HandleReceivedDatagram_m5B65B9551EAF1ED5023CF75232A2193936FBFC6B(L_90, L_91, ((int32_t)((int32_t)(((RuntimeArray*)L_92)->max_length))), (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_02d0;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_024c;
		throw e;
	}

CATCH_024c:
	{ // begin catch(System.Exception)
		{
			// catch (Exception e)
			V_5 = ((Exception_t *)__exception_local);
			// if (this.State != PhotonSocketState.Disconnecting && this.State != PhotonSocketState.Disconnected)
			SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_93 = V_1;
			int32_t L_94;
			L_94 = IPhotonSocket_get_State_m1CC9A27AC97BBF509FC7BA25292EE9117DEC4A05_inline(L_93, /*hidden argument*/NULL);
			if ((((int32_t)L_94) == ((int32_t)3)))
			{
				goto IL_02ce;
			}
		}

IL_0257:
		{
			SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_95 = V_1;
			int32_t L_96;
			L_96 = IPhotonSocket_get_State_m1CC9A27AC97BBF509FC7BA25292EE9117DEC4A05_inline(L_95, /*hidden argument*/NULL);
			if (!L_96)
			{
				goto IL_02ce;
			}
		}

IL_025f:
		{
			// if (this.ReportDebugOfLevel(DebugLevel.ERROR))
			SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_97 = V_1;
			bool L_98;
			L_98 = IPhotonSocket_ReportDebugOfLevel_m6D036129BC37474F0AD88848D51ECEA69CE48ED4(L_97, 1, /*hidden argument*/NULL);
			if (!L_98)
			{
				goto IL_02c3;
			}
		}

IL_0268:
		{
			// this.EnqueueDebugReturn(DebugLevel.ERROR, "Receive issue. State: " + this.State + ". Server: '" + this.ServerAddress + "' Exception: " + e);
			SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_99 = V_1;
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_100 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var)), (uint32_t)6);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_101 = L_100;
			ArrayElementTypeCheck (L_101, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAB545D4BB06AFBCF7E282105B69205BBE4B8E5DF)));
			(L_101)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAB545D4BB06AFBCF7E282105B69205BBE4B8E5DF)));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_102 = L_101;
			SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_103 = V_1;
			int32_t L_104;
			L_104 = IPhotonSocket_get_State_m1CC9A27AC97BBF509FC7BA25292EE9117DEC4A05_inline(L_103, /*hidden argument*/NULL);
			V_3 = L_104;
			RuntimeObject * L_105 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PhotonSocketState_t912CDE549D92E942C8BC68F7855ED673AEE7DDE8_il2cpp_TypeInfo_var)), (&V_3));
			String_t* L_106;
			L_106 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_105);
			V_3 = *(int32_t*)UnBox(L_105);
			ArrayElementTypeCheck (L_102, L_106);
			(L_102)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_106);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_107 = L_102;
			ArrayElementTypeCheck (L_107, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3)));
			(L_107)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3)));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_108 = L_107;
			SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_109 = V_1;
			String_t* L_110;
			L_110 = IPhotonSocket_get_ServerAddress_m2BB56B05D3293AF7A5D6DF752A6C2993D00A5018_inline(L_109, /*hidden argument*/NULL);
			ArrayElementTypeCheck (L_108, L_110);
			(L_108)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_110);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_111 = L_108;
			ArrayElementTypeCheck (L_111, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral57181476910FA4C16EFCC0E7443CD9C417D2514B)));
			(L_111)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral57181476910FA4C16EFCC0E7443CD9C417D2514B)));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_112 = L_111;
			Exception_t * L_113 = V_5;
			Exception_t * L_114 = L_113;
			G_B30_0 = L_114;
			G_B30_1 = 5;
			G_B30_2 = L_112;
			G_B30_3 = L_112;
			G_B30_4 = 1;
			G_B30_5 = L_99;
			if (L_114)
			{
				G_B31_0 = L_114;
				G_B31_1 = 5;
				G_B31_2 = L_112;
				G_B31_3 = L_112;
				G_B31_4 = 1;
				G_B31_5 = L_99;
				goto IL_02b3;
			}
		}

IL_02af:
		{
			G_B32_0 = ((String_t*)(NULL));
			G_B32_1 = G_B30_1;
			G_B32_2 = G_B30_2;
			G_B32_3 = G_B30_3;
			G_B32_4 = G_B30_4;
			G_B32_5 = G_B30_5;
			goto IL_02b8;
		}

IL_02b3:
		{
			String_t* L_115;
			L_115 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B31_0);
			G_B32_0 = L_115;
			G_B32_1 = G_B31_1;
			G_B32_2 = G_B31_2;
			G_B32_3 = G_B31_3;
			G_B32_4 = G_B31_4;
			G_B32_5 = G_B31_5;
		}

IL_02b8:
		{
			ArrayElementTypeCheck (G_B32_2, G_B32_0);
			(G_B32_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B32_1), (String_t*)G_B32_0);
			String_t* L_116;
			L_116 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(G_B32_3, /*hidden argument*/NULL);
			IPhotonSocket_EnqueueDebugReturn_m7AD9FF889510EA6A117FDBC002D7746DC7F586EF(G_B32_5, G_B32_4, L_116, /*hidden argument*/NULL);
		}

IL_02c3:
		{
			// this.HandleException(StatusCode.ExceptionOnReceive);
			SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_117 = V_1;
			IPhotonSocket_HandleException_mCC3D032F1FCFADE34B6B63F1D01BB4648E88D79D(L_117, ((int32_t)1039), /*hidden argument*/NULL);
		}

IL_02ce:
		{
			// }
			goto IL_02d0;
		}
	} // end catch (depth: 1)

IL_02d0:
	{
		// while (this.State == PhotonSocketState.Connected)
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_118 = V_1;
		int32_t L_119;
		L_119 = IPhotonSocket_get_State_m1CC9A27AC97BBF509FC7BA25292EE9117DEC4A05_inline(L_118, /*hidden argument*/NULL);
		if ((((int32_t)L_119) == ((int32_t)2)))
		{
			goto IL_0141;
		}
	}

IL_02dc:
	{
		// this.Disconnect();
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_120 = V_1;
		bool L_121;
		L_121 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean ExitGames.Client.Photon.IPhotonSocket::Disconnect() */, L_120);
		// }
		return (bool)0;
	}
}
// System.Object ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CReceiveLoopU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0D3422003F04C77A1DA7A261C6028A2F5E43EE7E (U3CReceiveLoopU3Ed__12_t0022C29F89E925E06BFE17A013527CCA19057971 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReceiveLoopU3Ed__12_System_Collections_IEnumerator_Reset_m81A880D827588FC43EAE12B1320A15F6B7B3172E (U3CReceiveLoopU3Ed__12_t0022C29F89E925E06BFE17A013527CCA19057971 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReceiveLoopU3Ed__12_System_Collections_IEnumerator_Reset_m81A880D827588FC43EAE12B1320A15F6B7B3172E_RuntimeMethod_var)));
	}
}
// System.Object ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CReceiveLoopU3Ed__12_System_Collections_IEnumerator_get_Current_m35B3B48641D47BC16386B7482AA19B6E2B95BE8F (U3CReceiveLoopU3Ed__12_t0022C29F89E925E06BFE17A013527CCA19057971 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void ExitGames.Client.Photon.SocketWebTcp/MonoBehaviourExt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourExt__ctor_mCBC834820BA80499919028FDFFB3DB2F8A71223A (MonoBehaviourExt_tE9402B38CA5077FD18ACC4CDF5CC63963BA6240B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Ozmoz.TutorialController/<BottonImageWaiting>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBottonImageWaitingU3Ed__12__ctor_m692C037B0683E82AD7ABB632FDA0FF72C753C915 (U3CBottonImageWaitingU3Ed__12_t419D47CA560643DD16C43C53FF843F6A77496376 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Ozmoz.TutorialController/<BottonImageWaiting>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBottonImageWaitingU3Ed__12_System_IDisposable_Dispose_m4FDE171DCC1206D8628C68EED3DAD56D9DB869F7 (U3CBottonImageWaitingU3Ed__12_t419D47CA560643DD16C43C53FF843F6A77496376 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Ozmoz.TutorialController/<BottonImageWaiting>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CBottonImageWaitingU3Ed__12_MoveNext_m73E88366C9084DE4EAEFB97E5E0F48730EA1A011 (U3CBottonImageWaitingU3Ed__12_t419D47CA560643DD16C43C53FF843F6A77496376 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB4B5BB88C0A9F3FBB9BBBD710DD1CC5427A9EBBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE7644F74D340CCF2302DE098DF239B18D4195AB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4FB6DE33C78B315C24AA334A62D21410AB126244_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA1012A10B82C987FBE454B05613CEC5F5E28DFE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TutorialController_t152E102F597254E864A1CF167B0151C81DDA3638 * V_1 = NULL;
	Enumerator_t525B82097D9D406EA26D105D1479485F2A76DE3A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TutorialController_t152E102F597254E864A1CF167B0151C81DDA3638 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(bottonImageDelay);
		TutorialController_t152E102F597254E864A1CF167B0151C81DDA3638 * L_4 = V_1;
		float L_5 = L_4->get_bottonImageDelay_8();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		// foreach (var player in PlayerExecutor.GetPlayers(PlayerExecutor.PlayerReceiverType.MINE))
		List_1_tE005987F00228B26D858A1CAC18B161DB5C57D8E * L_7;
		L_7 = PlayerExecutor_GetPlayers_m3DC5B7433761EE7EA0110EAF4B5F5F89E2AA24E2(3, /*hidden argument*/NULL);
		Enumerator_t525B82097D9D406EA26D105D1479485F2A76DE3A  L_8;
		L_8 = List_1_GetEnumerator_mA1012A10B82C987FBE454B05613CEC5F5E28DFE5(L_7, /*hidden argument*/List_1_GetEnumerator_mA1012A10B82C987FBE454B05613CEC5F5E28DFE5_RuntimeMethod_var);
		V_2 = L_8;
	}

IL_004b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_009a;
		}

IL_004d:
		{
			// foreach (var player in PlayerExecutor.GetPlayers(PlayerExecutor.PlayerReceiverType.MINE))
			Player_t8DF90D051B39D7B81EE08CDD8DECE36E1B19AA6E * L_9;
			L_9 = Enumerator_get_Current_m4FB6DE33C78B315C24AA334A62D21410AB126244_inline((Enumerator_t525B82097D9D406EA26D105D1479485F2A76DE3A *)(&V_2), /*hidden argument*/Enumerator_get_Current_m4FB6DE33C78B315C24AA334A62D21410AB126244_RuntimeMethod_var);
			// if (player.transform.position.y > 0)
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
			L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_9, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
			L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
			float L_12 = L_11.get_y_3();
			if ((!(((float)L_12) > ((float)(0.0f)))))
			{
				goto IL_0082;
			}
		}

IL_006a:
		{
			// ozBottonImage.CrossFadeAlpha(0, 4f, true);
			TutorialController_t152E102F597254E864A1CF167B0151C81DDA3638 * L_13 = V_1;
			Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_14 = L_13->get_ozBottonImage_9();
			VirtActionInvoker3< float, float, bool >::Invoke(49 /* System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean) */, L_14, (0.0f), (4.0f), (bool)1);
			// }
			IL2CPP_LEAVE(0xB3, FINALLY_00a5);
		}

IL_0082:
		{
			// mozBottonImage.CrossFadeAlpha(0, 4f, true);
			TutorialController_t152E102F597254E864A1CF167B0151C81DDA3638 * L_15 = V_1;
			Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_16 = L_15->get_mozBottonImage_10();
			VirtActionInvoker3< float, float, bool >::Invoke(49 /* System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean) */, L_16, (0.0f), (4.0f), (bool)1);
			// break;
			IL2CPP_LEAVE(0xB3, FINALLY_00a5);
		}

IL_009a:
		{
			// foreach (var player in PlayerExecutor.GetPlayers(PlayerExecutor.PlayerReceiverType.MINE))
			bool L_17;
			L_17 = Enumerator_MoveNext_mE7644F74D340CCF2302DE098DF239B18D4195AB2((Enumerator_t525B82097D9D406EA26D105D1479485F2A76DE3A *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mE7644F74D340CCF2302DE098DF239B18D4195AB2_RuntimeMethod_var);
			if (L_17)
			{
				goto IL_004d;
			}
		}

IL_00a3:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_00a5);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a5;
	}

FINALLY_00a5:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mB4B5BB88C0A9F3FBB9BBBD710DD1CC5427A9EBBF((Enumerator_t525B82097D9D406EA26D105D1479485F2A76DE3A *)(&V_2), /*hidden argument*/Enumerator_Dispose_mB4B5BB88C0A9F3FBB9BBBD710DD1CC5427A9EBBF_RuntimeMethod_var);
		IL2CPP_END_FINALLY(165)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(165)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
	}

IL_00b3:
	{
		// }
		return (bool)0;
	}
}
// System.Object Ozmoz.TutorialController/<BottonImageWaiting>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBottonImageWaitingU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8DF83F92D56EFF06A7D48D177034871126B8B740 (U3CBottonImageWaitingU3Ed__12_t419D47CA560643DD16C43C53FF843F6A77496376 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Ozmoz.TutorialController/<BottonImageWaiting>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBottonImageWaitingU3Ed__12_System_Collections_IEnumerator_Reset_m31B687BA23D9C24E948B758244C17581F8815774 (U3CBottonImageWaitingU3Ed__12_t419D47CA560643DD16C43C53FF843F6A77496376 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CBottonImageWaitingU3Ed__12_System_Collections_IEnumerator_Reset_m31B687BA23D9C24E948B758244C17581F8815774_RuntimeMethod_var)));
	}
}
// System.Object Ozmoz.TutorialController/<BottonImageWaiting>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBottonImageWaitingU3Ed__12_System_Collections_IEnumerator_get_Current_mC0E67E01C2FB753F4061F16700647A8D0F3D35A0 (U3CBottonImageWaitingU3Ed__12_t419D47CA560643DD16C43C53FF843F6A77496376 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Ozmoz.TutorialController/<EventWaiting>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEventWaitingU3Ed__10__ctor_mBE4C634F22EE5E825BB6D18997BB3AAF9D6B6F82 (U3CEventWaitingU3Ed__10_t0DF1F18ED33C5B2EC45B5E2FF01D87B47D829D06 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Ozmoz.TutorialController/<EventWaiting>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEventWaitingU3Ed__10_System_IDisposable_Dispose_mB9C4C0C3B178E34861EE5B6EF5597AB1066CCEE7 (U3CEventWaitingU3Ed__10_t0DF1F18ED33C5B2EC45B5E2FF01D87B47D829D06 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Ozmoz.TutorialController/<EventWaiting>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEventWaitingU3Ed__10_MoveNext_m8B62F1B6F1E531B63FAE7C0076D2A02AC6E6D794 (U3CEventWaitingU3Ed__10_t0DF1F18ED33C5B2EC45B5E2FF01D87B47D829D06 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_005c;
			}
			case 2:
			{
				goto IL_00a3;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// evt.image.CrossFadeAlpha(0, 0, true);
		TutorialControllerEvent_t09DA9340E377703329DF8DA6DA7013EBD124D0C8 * L_2 = __this->get_evt_2();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = L_2->get_image_0();
		VirtActionInvoker3< float, float, bool >::Invoke(49 /* System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean) */, L_3, (0.0f), (0.0f), (bool)1);
		// yield return new WaitForSeconds(evt.startDelay);
		TutorialControllerEvent_t09DA9340E377703329DF8DA6DA7013EBD124D0C8 * L_4 = __this->get_evt_2();
		float L_5 = L_4->get_startDelay_1();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// evt.image.CrossFadeAlpha(1, evt.fadeDuration, true);
		TutorialControllerEvent_t09DA9340E377703329DF8DA6DA7013EBD124D0C8 * L_7 = __this->get_evt_2();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8 = L_7->get_image_0();
		TutorialControllerEvent_t09DA9340E377703329DF8DA6DA7013EBD124D0C8 * L_9 = __this->get_evt_2();
		float L_10 = L_9->get_fadeDuration_2();
		VirtActionInvoker3< float, float, bool >::Invoke(49 /* System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean) */, L_8, (1.0f), L_10, (bool)1);
		// yield return new WaitForSeconds(evt.duration);
		TutorialControllerEvent_t09DA9340E377703329DF8DA6DA7013EBD124D0C8 * L_11 = __this->get_evt_2();
		float L_12 = L_11->get_duration_3();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_13 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_13, L_12, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_13);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00a3:
	{
		__this->set_U3CU3E1__state_0((-1));
		// evt.image.CrossFadeAlpha(0, evt.fadeDuration, true);
		TutorialControllerEvent_t09DA9340E377703329DF8DA6DA7013EBD124D0C8 * L_14 = __this->get_evt_2();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_15 = L_14->get_image_0();
		TutorialControllerEvent_t09DA9340E377703329DF8DA6DA7013EBD124D0C8 * L_16 = __this->get_evt_2();
		float L_17 = L_16->get_fadeDuration_2();
		VirtActionInvoker3< float, float, bool >::Invoke(49 /* System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean) */, L_15, (0.0f), L_17, (bool)1);
		// }
		return (bool)0;
	}
}
// System.Object Ozmoz.TutorialController/<EventWaiting>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CEventWaitingU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m05A5AEAD94E085A6B1F6E10492591356B7351431 (U3CEventWaitingU3Ed__10_t0DF1F18ED33C5B2EC45B5E2FF01D87B47D829D06 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Ozmoz.TutorialController/<EventWaiting>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEventWaitingU3Ed__10_System_Collections_IEnumerator_Reset_m5511A80FCD3DB64DE2080B24FDE8A10B794E5047 (U3CEventWaitingU3Ed__10_t0DF1F18ED33C5B2EC45B5E2FF01D87B47D829D06 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEventWaitingU3Ed__10_System_Collections_IEnumerator_Reset_m5511A80FCD3DB64DE2080B24FDE8A10B794E5047_RuntimeMethod_var)));
	}
}
// System.Object Ozmoz.TutorialController/<EventWaiting>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CEventWaitingU3Ed__10_System_Collections_IEnumerator_get_Current_mFDB793993C62E8BC2DC00F93350F2EDEA7B95DC5 (U3CEventWaitingU3Ed__10_t0DF1F18ED33C5B2EC45B5E2FF01D87B47D829D06 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Ozmoz.TutorialController/<PortalWaiting>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPortalWaitingU3Ed__11__ctor_mBC4E16F97D0C46A9057184434ECAD73C5AA06352 (U3CPortalWaitingU3Ed__11_tA64F987451CD48E2706723F2DB89E83ACBD290AC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Ozmoz.TutorialController/<PortalWaiting>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPortalWaitingU3Ed__11_System_IDisposable_Dispose_m9072DBB4698B837600BE0D3B05E71719C6689243 (U3CPortalWaitingU3Ed__11_tA64F987451CD48E2706723F2DB89E83ACBD290AC * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Ozmoz.TutorialController/<PortalWaiting>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPortalWaitingU3Ed__11_MoveNext_m9D223DA380F81FED29EE96DB403F45B09FBE759F (U3CPortalWaitingU3Ed__11_tA64F987451CD48E2706723F2DB89E83ACBD290AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TutorialController_t152E102F597254E864A1CF167B0151C81DDA3638 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TutorialController_t152E102F597254E864A1CF167B0151C81DDA3638 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(portalDelay);
		TutorialController_t152E102F597254E864A1CF167B0151C81DDA3638 * L_4 = V_1;
		float L_5 = L_4->get_portalDelay_7();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		// ozPortal.SetActive(true);
		TutorialController_t152E102F597254E864A1CF167B0151C81DDA3638 * L_7 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = L_7->get_ozPortal_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)1, /*hidden argument*/NULL);
		// mozPortal.SetActive(true);
		TutorialController_t152E102F597254E864A1CF167B0151C81DDA3638 * L_9 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = L_9->get_mozPortal_6();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)1, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Ozmoz.TutorialController/<PortalWaiting>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPortalWaitingU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5EAF8F67BA77E2F31D4AEFAB7B5DF8FFEE6707B2 (U3CPortalWaitingU3Ed__11_tA64F987451CD48E2706723F2DB89E83ACBD290AC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Ozmoz.TutorialController/<PortalWaiting>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPortalWaitingU3Ed__11_System_Collections_IEnumerator_Reset_mCEBAFD56DD85890A121A996EFB749F466135125A (U3CPortalWaitingU3Ed__11_tA64F987451CD48E2706723F2DB89E83ACBD290AC * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPortalWaitingU3Ed__11_System_Collections_IEnumerator_Reset_mCEBAFD56DD85890A121A996EFB749F466135125A_RuntimeMethod_var)));
	}
}
// System.Object Ozmoz.TutorialController/<PortalWaiting>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPortalWaitingU3Ed__11_System_Collections_IEnumerator_get_Current_m430561C29128BAF9A1276321B0DEFF791ADB97BE (U3CPortalWaitingU3Ed__11_tA64F987451CD48E2706723F2DB89E83ACBD290AC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SceneReference_get_ScenePath_m0F58D729908F84173D506E77BEBF4026878A4D0E_inline (SceneReference_tD4A01AEA2D6123F6B00B6DDF2B8A347C5CFE71C9 * __this, const RuntimeMethod* method)
{
	{
		// return scenePath;
		String_t* L_0 = __this->get_scenePath_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* IPhotonSocket_get_ServerAddress_m2BB56B05D3293AF7A5D6DF752A6C2993D00A5018_inline (IPhotonSocket_t8C4CC725BD3399028AEECE28EE0009F06EBFCB96 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CServerAddressU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPhotonSocket_get_ServerPort_mFC52FEBA528E0CA4A57E30048A0942A428725189_inline (IPhotonSocket_t8C4CC725BD3399028AEECE28EE0009F06EBFCB96 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CServerPortU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPhotonSocket_get_State_m1CC9A27AC97BBF509FC7BA25292EE9117DEC4A05_inline (IPhotonSocket_t8C4CC725BD3399028AEECE28EE0009F06EBFCB96 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CStateU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IPhotonSocket_set_State_mD730B3A6935A967A2DC87968A9E53BEA9759075A_inline (IPhotonSocket_t8C4CC725BD3399028AEECE28EE0009F06EBFCB96 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
