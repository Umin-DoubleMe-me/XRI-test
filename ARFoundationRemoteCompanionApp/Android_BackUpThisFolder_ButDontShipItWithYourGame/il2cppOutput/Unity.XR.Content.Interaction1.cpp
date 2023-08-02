#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs>
struct Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs>
struct Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs>
struct Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs>
struct Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0;
// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<System.Single>
struct BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>
struct Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,System.Single>
struct Dictionary_2_tEABA4693399BB94F9F9031F041277F4D01CA9BB2;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,UnityEngine.GameObject>
struct Dictionary_2_t0582B78260B6945022313E08E6945DDC2F648137;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,System.Single>
struct Dictionary_2_tD6336C1E43D33973F64744AF3B0B1E66CB234D61;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose>
struct Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose>
struct Dictionary_2_tB8AE3DDA8EA7929AFBFE51780B779705E45D363D;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter>
struct ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRInteractionStrengthFilter>
struct ExposedRegistrationList_1_t7932F633A860258335FD94BBFDE46AC92B1CF84B;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter>
struct ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8;
// System.Func`3<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,UnityEngine.Vector3,UnityEngine.XR.Interaction.Toolkit.DistanceInfo>
struct Func_3_tBF1DE89A7437A805938AD0879CFDD9527043E1EF;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable>
struct HashSetList_1_tC521CA1513DA32AFAD8144C7529793E24EA52945;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor>
struct HashSetList_1_tB0E5508E89C533C11CEB3536E5482FFDC036DABE;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup>
struct HashSetList_1_tC1DD99D75EB047082BD9E0C1091C02E0C288AA9D;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractionStrengthInteractable>
struct HashSetList_1_tC1867B681AE7023306C341F97E7483BB3C8532B2;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct HashSetList_1_t4D485A2E14AF33326E4D8B5E60BEDD0E47CEE3F0;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor>
struct HashSetList_1_tE0EFB7DD0405CCE9F3D8363787AA148691CAA84B;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor>
struct HashSetList_1_tF4597D6E0634CA8A9A545B12E6AEF4E7F4E95EB5;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor>
struct IEqualityComparer_1_tE07E55CA1B6313FD9AAEFCF707E6F2EC0C7B0791;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>
struct KeyCollection_t564282972C01B8565FB9A5F85D864C59560D1808;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>
struct LinkedPool_1_t99CFF33CB8085652A0F2FC6579D0388FB3CBAA01;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs>
struct LinkedPool_1_t0F5C109EA19EF35798DEF24B63645919D0B7B53B;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRActivateInteractable>
struct List_1_tAB2FD3FF9900A585A26C6DC2D8EE94D30F2AECCA;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B;
// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable>
struct List_1_t02510C493B34D49F210C22C40442D863A08509CB;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor>
struct List_1_tC6684CD164AA8009B3DC3C06499A47813321B877;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/SamplePoint>
struct List_1_tC0F6311D5ACC55EC4184D225E50673DBDAC555BD;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>
struct UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>
struct UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>
struct UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>
struct UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>
struct ValueCollection_t273ED87DC7817D2739CBA14EE77F17F33F78B511;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>[]
struct EntryU5BU5D_tC99B1D6C4116074FF4FF32881026E7AEC3E25093;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Unity.Mathematics.float3[]
struct float3U5BU5D_t94C1DF28FA7E0FA017D0C77B720D9FF3519E0D45;
// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44;
// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0;
// UnityEngine.XR.Interaction.Toolkit.ActionBasedController
struct ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68;
// UnityEngine.XR.Interaction.Toolkit.ActivateEvent
struct ActivateEvent_tA1D392B588AC99958CB847AE6911DC5131BCFB43;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.XR.Interaction.Toolkit.DeactivateEvent
struct DeactivateEvent_tFE44262C3D8377F947FD46D4561BB9DAC7E0785D;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.XR.Interaction.Toolkit.FocusEnterEvent
struct FocusEnterEvent_tF5369B418FFFBE1C6FDE6EBDDD8B9E412A32CD90;
// UnityEngine.XR.Interaction.Toolkit.FocusExitEvent
struct FocusExitEvent_tFAE8003B7B5A47FB4D9C5BB14D7A3273AF8931AE;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent
struct HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs
struct HoverEnterEventArgs_t4BCFA6BFD8D007CEE2D72D9D61DAED6C72F8CE2E;
// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent
struct HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832;
// UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs
struct HoverExitEventArgs_tFFBECDDAF90BF90AA3B7282FAEF1D8E5D19A5AD6;
// UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor
struct IXRHoverInteractor_tE2EF7002213610DA0D67421CFA21B1A95113BA61;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractable
struct IXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup
struct IXRInteractionGroup_tAD9069A6C37036CE5C97D68CF2F97B1F25044D5D;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractor
struct IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable
struct IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor
struct IXRSelectInteractor_tF9278B9892CA9B8C1F0E0C70E2E2362DC860E3F1;
// UnityEngine.XR.Interaction.Toolkit.Filtering.IXRTargetFilter
struct IXRTargetFilter_t51750E0C671ECA90F38CC75BCD395285E61D2778;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.XR.Interaction.Toolkit.UI.RegisteredUIInteractorCache
struct RegisteredUIInteractorCache_t81419313AA113B206AF3FF94CD9D3B64A09CE413;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs
struct SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent
struct SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs
struct SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEnterEvent
struct UIHoverEnterEvent_t4C957A3405A5D9CB867C5EC446620BB4BA7E7298;
// UnityEngine.XR.Interaction.Toolkit.UI.UIHoverExitEvent
struct UIHoverExitEvent_t63E5E9C921AFB8E2CB9CA4D32882DD4F62CD509B;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.Interaction.Toolkit.XRBaseController
struct XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6;
// UnityEngine.XR.Interaction.Toolkit.Filtering.XRBaseTargetFilter
struct XRBaseTargetFilter_t24D9DBCEA900DFEA08D543C91DFC070C1C91594F;
// UnityEngine.XR.Interaction.Toolkit.XRController
struct XRController_t928E104C899E51FDE12C0A8AC68874587C46C28F;
// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent
struct XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
struct XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD;
// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent
struct XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2;
// UnityEngine.XR.Content.Interaction.XRKnob
struct XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126;
// UnityEngine.XR.Content.Interaction.XRLever
struct XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510;
// UnityEngine.XR.Content.Interaction.XRPushButton
struct XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3;
// UnityEngine.XR.Interaction.Toolkit.XRScreenSpaceController
struct XRScreenSpaceController_t046F18C2FE01EB347832DB82D42C84131771FF17;
// UnityEngine.XR.Content.Interaction.XRSlider
struct XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51;
// UnityEngine.XR.Content.Interaction.XRJoystick/ValueChangeEvent
struct ValueChangeEvent_t392051F7A8D00C8652081F922180C02CA3043150;
// UnityEngine.XR.Content.Interaction.XRKnob/ValueChangeEvent
struct ValueChangeEvent_t0481CAE6722F3B57C58A7EFCB81AAFE9F6F30E17;
// UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo
struct PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C;
// UnityEngine.XR.Content.Interaction.XRPushButton/ValueChangeEvent
struct ValueChangeEvent_t6ABB63D6EC8E3745851A79F2AA32B8550933F214;
// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/RaycastHitComparer
struct RaycastHitComparer_tC59C36D577B7426F5EE8E3AE65B988F953757E9D;
// UnityEngine.XR.Content.Interaction.XRSlider/ValueChangeEvent
struct ValueChangeEvent_t97011904F6BAB13C48427F4EB2F7F1EB924E2ACD;

IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueChangeEvent_t0481CAE6722F3B57C58A7EFCB81AAFE9F6F30E17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueChangeEvent_t97011904F6BAB13C48427F4EB2F7F1EB924E2ACD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mDE60E023087C042228D40A07287BE805F5445B6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m86CB67BAD8B42AC3CA321DC66D8AF594F8693EDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m6C9DD4CD4BED93B2CFF97A7DD954AA34D2E227A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_mC8FB79F3EC3C89FCD55E73EEE51EB093F058E0BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_mA89399B1E83FA8A54C9AC701F8E2D6C11ACAF68B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3022840D5F4E09DFA22C94D020DF1B1FFDCB95EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7A1722FD044A8E6BD27ACCBFF53B0B4A7E632885_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mAC466C0241DC56E461D88076BF64403B2EA15DE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_mB6EBFD4C49393524358EBA8D1776A6ADFFB814C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRKnob_EndGrab_m5895C8F96BCD0988A398D02433A2A71759A7D604_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRKnob_StartGrab_m2C4B91DD007ABB767E6E9302875B7EFEEAC49463_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLever_EndGrab_m1B9DA5DD2083DBC832CF4BB25FC1739B52872021_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLever_StartGrab_m3546A1894506795A821042FABC3328880357FB4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRPushButton_EndHover_mDE942B9C5F9E34BFA025F383C0DFFDF108868BAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRPushButton_StartHover_m9483BD357F3CB7CA4380BFAA8CB7D42D0AEA2D44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSlider_EndGrab_mA9D239E474FB31C0D6909D28B51FAA0A6F2147D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSlider_StartGrab_m48F19B86B4802EE3275548105AE49B7F3C5CEF0E_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>
struct Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tC99B1D6C4116074FF4FF32881026E7AEC3E25093* ____entries_1;
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
	KeyCollection_t564282972C01B8565FB9A5F85D864C59560D1808* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t273ED87DC7817D2739CBA14EE77F17F33F78B511* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>
struct ValueCollection_t273ED87DC7817D2739CBA14EE77F17F33F78B511  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* ____dictionary_0;
};
struct Il2CppArrayBounds;

// UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs
struct BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E  : public RuntimeObject
{
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractor UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs::<interactorObject>k__BackingField
	RuntimeObject* ___U3CinteractorObjectU3Ek__BackingField_0;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractable UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs::<interactableObject>k__BackingField
	RuntimeObject* ___U3CinteractableObjectU3Ek__BackingField_1;
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

// UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo
struct PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C  : public RuntimeObject
{
	// UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo::m_Interactor
	RuntimeObject* ___m_Interactor_0;
	// System.Boolean UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo::m_InPressRegion
	bool ___m_InPressRegion_1;
	// System.Boolean UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo::m_WrongSide
	bool ___m_WrongSide_2;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>
struct Enumerator_t2B6E17F326D700E0F1BA537F5A36AAE4EB1CE8BB 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* ____currentValue_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	RuntimeObject* ____currentValue_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>
struct UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>
struct UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs
struct HoverEnterEventArgs_t4BCFA6BFD8D007CEE2D72D9D61DAED6C72F8CE2E  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
};

// UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs
struct HoverExitEventArgs_tFFBECDDAF90BF90AA3B7282FAEF1D8E5D19A5AD6  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs::<isCanceled>k__BackingField
	bool ___U3CisCanceledU3Ek__BackingField_3;
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

// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask
struct InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 
{
	// System.UInt32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Bits
	uint32_t ___m_Bits_0;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Mask
	int32_t ___m_Mask_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.PhysicsScene
struct PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE 
{
	// System.Int32 UnityEngine.PhysicsScene::m_Handle
	int32_t ___m_Handle_0;
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

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs
struct SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
};

// UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs
struct SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs::<isCanceled>k__BackingField
	bool ___U3CisCanceledU3Ek__BackingField_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;
};

struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields
{
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___s_InvalidId_1;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation
struct TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3 
{
	// System.Single UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation::m_BaseAngle
	float ___m_BaseAngle_0;
	// System.Single UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation::m_CurrentOffset
	float ___m_CurrentOffset_1;
	// System.Single UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation::m_AccumulatedAngle
	float ___m_AccumulatedAngle_2;
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

// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent
struct HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB  : public UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008
{
};

// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent
struct HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832  : public UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26
{
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0  : public UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8
{
};

// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent
struct SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6  : public UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B
{
};

// UnityEngine.XR.Content.Interaction.XRJoystick/ValueChangeEvent
struct ValueChangeEvent_t392051F7A8D00C8652081F922180C02CA3043150  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// UnityEngine.XR.Content.Interaction.XRKnob/ValueChangeEvent
struct ValueChangeEvent_t0481CAE6722F3B57C58A7EFCB81AAFE9F6F30E17  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// UnityEngine.XR.Content.Interaction.XRPushButton/ValueChangeEvent
struct ValueChangeEvent_t6ABB63D6EC8E3745851A79F2AA32B8550933F214  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// UnityEngine.XR.Content.Interaction.XRSlider/ValueChangeEvent
struct ValueChangeEvent_t97011904F6BAB13C48427F4EB2F7F1EB924E2ACD  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;
};

struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::s_Default
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___s_Default_0;
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>
struct UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>
struct UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E  : public MulticastDelegate_t
{
};

// UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 
{
	// System.Single UnityEngine.XR.ARFoundation.ARRaycastHit::<distance>k__BackingField
	float ___U3CdistanceU3Ek__BackingField_0;
	// UnityEngine.XR.ARFoundation.ARTrackable UnityEngine.XR.ARFoundation.ARRaycastHit::<trackable>k__BackingField
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARFoundation.ARRaycastHit::m_Hit
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARRaycastHit::m_Transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_pinvoke
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_com
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::registered
	Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8* ___registered_6;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::unregistered
	Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0* ___unregistered_7;
	// System.Func`3<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,UnityEngine.Vector3,UnityEngine.XR.Interaction.Toolkit.DistanceInfo> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<getDistanceOverride>k__BackingField
	Func_3_tBF1DE89A7437A805938AD0879CFDD9527043E1EF* ___U3CgetDistanceOverrideU3Ek__BackingField_8;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_InteractionManager_9;
	// System.Collections.Generic.List`1<UnityEngine.Collider> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Colliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___m_Colliders_10;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_InteractionLayerMask_11;
	// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionLayers
	InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 ___m_InteractionLayers_12;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable/DistanceCalculationMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_DistanceCalculationMode
	int32_t ___m_DistanceCalculationMode_13;
	// UnityEngine.XR.Interaction.Toolkit.InteractableSelectMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectMode
	int32_t ___m_SelectMode_14;
	// UnityEngine.XR.Interaction.Toolkit.InteractableFocusMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_FocusMode
	int32_t ___m_FocusMode_15;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_CustomReticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CustomReticle_16;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_AllowGazeInteraction
	bool ___m_AllowGazeInteraction_17;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_AllowGazeSelect
	bool ___m_AllowGazeSelect_18;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OverrideGazeTimeToSelect
	bool ___m_OverrideGazeTimeToSelect_19;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_GazeTimeToSelect
	float ___m_GazeTimeToSelect_20;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OverrideTimeToAutoDeselectGaze
	bool ___m_OverrideTimeToAutoDeselectGaze_21;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_TimeToAutoDeselectGaze
	float ___m_TimeToAutoDeselectGaze_22;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_AllowGazeAssistance
	bool ___m_AllowGazeAssistance_23;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_FirstHoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_FirstHoverEntered_24;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LastHoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_LastHoverExited_25;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_HoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_HoverEntered_26;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_HoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_HoverExited_27;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_FirstSelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_FirstSelectEntered_28;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LastSelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_LastSelectExited_29;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_SelectEntered_30;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_SelectExited_31;
	// UnityEngine.XR.Interaction.Toolkit.FocusEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_FirstFocusEntered
	FocusEnterEvent_tF5369B418FFFBE1C6FDE6EBDDD8B9E412A32CD90* ___m_FirstFocusEntered_32;
	// UnityEngine.XR.Interaction.Toolkit.FocusExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LastFocusExited
	FocusExitEvent_tFAE8003B7B5A47FB4D9C5BB14D7A3273AF8931AE* ___m_LastFocusExited_33;
	// UnityEngine.XR.Interaction.Toolkit.FocusEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_FocusEntered
	FocusEnterEvent_tF5369B418FFFBE1C6FDE6EBDDD8B9E412A32CD90* ___m_FocusEntered_34;
	// UnityEngine.XR.Interaction.Toolkit.FocusExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_FocusExited
	FocusExitEvent_tFAE8003B7B5A47FB4D9C5BB14D7A3273AF8931AE* ___m_FocusExited_35;
	// UnityEngine.XR.Interaction.Toolkit.ActivateEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Activated
	ActivateEvent_tA1D392B588AC99958CB847AE6911DC5131BCFB43* ___m_Activated_36;
	// UnityEngine.XR.Interaction.Toolkit.DeactivateEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Deactivated
	DeactivateEvent_tFE44262C3D8377F947FD46D4561BB9DAC7E0785D* ___m_Deactivated_37;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractorsHovering
	HashSetList_1_tB0E5508E89C533C11CEB3536E5482FFDC036DABE* ___m_InteractorsHovering_38;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractorsSelecting
	HashSetList_1_tE0EFB7DD0405CCE9F3D8363787AA148691CAA84B* ___m_InteractorsSelecting_39;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<firstInteractorSelecting>k__BackingField
	RuntimeObject* ___U3CfirstInteractorSelectingU3Ek__BackingField_40;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionGroupsFocusing
	HashSetList_1_tC1DD99D75EB047082BD9E0C1091C02E0C288AA9D* ___m_InteractionGroupsFocusing_41;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<firstInteractionGroupFocusing>k__BackingField
	RuntimeObject* ___U3CfirstInteractionGroupFocusingU3Ek__BackingField_42;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_StartingHoverFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingHoverFilters_43;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_HoverFilters
	ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5* ___m_HoverFilters_44;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_StartingSelectFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingSelectFilters_45;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectFilters
	ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8* ___m_SelectFilters_46;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_StartingInteractionStrengthFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingInteractionStrengthFilters_47;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRInteractionStrengthFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionStrengthFilters
	ExposedRegistrationList_1_t7932F633A860258335FD94BBFDE46AC92B1CF84B* ___m_InteractionStrengthFilters_48;
	// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<System.Single> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LargestInteractionStrength
	BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C* ___m_LargestInteractionStrength_49;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_AttachPoseOnSelect
	Dictionary_2_tB8AE3DDA8EA7929AFBFE51780B779705E45D363D* ___m_AttachPoseOnSelect_50;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LocalAttachPoseOnSelect
	Dictionary_2_tB8AE3DDA8EA7929AFBFE51780B779705E45D363D* ___m_LocalAttachPoseOnSelect_51;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,UnityEngine.GameObject> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_ReticleCache
	Dictionary_2_t0582B78260B6945022313E08E6945DDC2F648137* ___m_ReticleCache_52;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_VariableSelectInteractors
	HashSetList_1_tF4597D6E0634CA8A9A545B12E6AEF4E7F4E95EB5* ___m_VariableSelectInteractors_53;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,System.Single> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionStrengths
	Dictionary_2_tD6336C1E43D33973F64744AF3B0B1E66CB234D61* ___m_InteractionStrengths_54;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_RegisteredInteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_RegisteredInteractionManager_55;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnFirstHoverEntered
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnFirstHoverEntered_57;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnLastHoverExited
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnLastHoverExited_58;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnHoverEntered
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnHoverEntered_59;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnHoverExited
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnHoverExited_60;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectEntered
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnSelectEntered_61;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectExited
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnSelectExited_62;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectCanceled
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnSelectCanceled_63;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnActivate
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnActivate_64;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnDeactivate
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnDeactivate_65;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<hoveringInteractors>k__BackingField
	List_1_tC6684CD164AA8009B3DC3C06499A47813321B877* ___U3ChoveringInteractorsU3Ek__BackingField_66;
};

struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_StaticFields
{
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::s_ProcessInteractionStrengthMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_ProcessInteractionStrengthMarker_56;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor
struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::registered
	Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5* ___registered_6;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::unregistered
	Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0* ___unregistered_7;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_InteractionManager_8;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<containingGroup>k__BackingField
	RuntimeObject* ___U3CcontainingGroupU3Ek__BackingField_9;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_InteractionLayerMask_10;
	// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionLayers
	InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 ___m_InteractionLayers_11;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AttachTransform_12;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_KeepSelectedTargetValid
	bool ___m_KeepSelectedTargetValid_13;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_DisableVisualsWhenBlockedInGroup
	bool ___m_DisableVisualsWhenBlockedInGroup_14;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingSelectedInteractable
	XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* ___m_StartingSelectedInteractable_15;
	// UnityEngine.XR.Interaction.Toolkit.Filtering.XRBaseTargetFilter UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingTargetFilter
	XRBaseTargetFilter_t24D9DBCEA900DFEA08D543C91DFC070C1C91594F* ___m_StartingTargetFilter_16;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_HoverEntered_17;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_HoverExited_18;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_SelectEntered_19;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_SelectExited_20;
	// UnityEngine.XR.Interaction.Toolkit.Filtering.IXRTargetFilter UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_TargetFilter
	RuntimeObject* ___m_TargetFilter_21;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AllowHover
	bool ___m_AllowHover_22;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AllowSelect
	bool ___m_AllowSelect_23;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_IsPerformingManualInteraction
	bool ___m_IsPerformingManualInteraction_24;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractablesHovered
	HashSetList_1_tC521CA1513DA32AFAD8144C7529793E24EA52945* ___m_InteractablesHovered_25;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractablesSelected
	HashSetList_1_t4D485A2E14AF33326E4D8B5E60BEDD0E47CEE3F0* ___m_InteractablesSelected_26;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<firstInteractableSelected>k__BackingField
	RuntimeObject* ___U3CfirstInteractableSelectedU3Ek__BackingField_27;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<isInteractingWithUI>k__BackingField
	bool ___U3CisInteractingWithUIU3Ek__BackingField_28;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingHoverFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingHoverFilters_29;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverFilters
	ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5* ___m_HoverFilters_30;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingSelectFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingSelectFilters_31;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectFilters
	ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8* ___m_SelectFilters_32;
	// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<System.Single> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_LargestInteractionStrength
	BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C* ___m_LargestInteractionStrength_33;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachPoseOnSelect
	Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C* ___m_AttachPoseOnSelect_34;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_LocalAttachPoseOnSelect
	Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C* ___m_LocalAttachPoseOnSelect_35;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractionStrengthInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionStrengthInteractables
	HashSetList_1_tC1867B681AE7023306C341F97E7483BB3C8532B2* ___m_InteractionStrengthInteractables_36;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,System.Single> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionStrengths
	Dictionary_2_tEABA4693399BB94F9F9031F041277F4D01CA9BB2* ___m_InteractionStrengths_37;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_ManualInteractionInteractable
	RuntimeObject* ___m_ManualInteractionInteractable_38;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_RegisteredInteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_RegisteredInteractionManager_39;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<useAttachPointVelocity>k__BackingField
	bool ___U3CuseAttachPointVelocityU3Ek__BackingField_41;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachPointVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AttachPointVelocity_42;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachPointAngularVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AttachPointAngularVelocity_43;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_XROrigin
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_XROrigin_44;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HasXROrigin
	bool ___m_HasXROrigin_45;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_FailedToFindXROrigin
	bool ___m_FailedToFindXROrigin_46;
	// UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<targetPriorityMode>k__BackingField
	int32_t ___U3CtargetPriorityModeU3Ek__BackingField_47;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<targetsForSelection>k__BackingField
	List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B* ___U3CtargetsForSelectionU3Ek__BackingField_48;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_DeltaTimeStart
	float ___m_DeltaTimeStart_49;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_FrameOn
	int32_t ___m_FrameOn_51;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_VelocityPositionsCache
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_VelocityPositionsCache_52;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_VelocityNormalsCache
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_VelocityNormalsCache_53;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_VelocityPositionsSum
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_VelocityPositionsSum_54;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_VelocityNormalsSum
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_VelocityNormalsSum_55;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnHoverEntered
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnHoverEntered_56;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnHoverExited
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnHoverExited_57;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnSelectEntered
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnSelectEntered_58;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnSelectExited
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnSelectExited_59;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<hoverTargets>k__BackingField
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___U3ChoverTargetsU3Ek__BackingField_60;
};

struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158_StaticFields
{
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::s_ProcessInteractionStrengthMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_ProcessInteractionStrengthMarker_40;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor
struct XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E  : public XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor/InputTriggerType UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_SelectActionTrigger
	int32_t ___m_SelectActionTrigger_61;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HideControllerOnSelect
	bool ___m_HideControllerOnSelect_62;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoveredActivate
	bool ___m_AllowHoveredActivate_63;
	// UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_TargetPriorityMode
	int32_t ___m_TargetPriorityMode_64;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectEntered
	bool ___m_PlayAudioClipOnSelectEntered_65;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectEntered
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectEntered_66;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectExited
	bool ___m_PlayAudioClipOnSelectExited_67;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectExited
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectExited_68;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectCanceled
	bool ___m_PlayAudioClipOnSelectCanceled_69;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectCanceled
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectCanceled_70;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverEntered
	bool ___m_PlayAudioClipOnHoverEntered_71;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverEntered
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverEntered_72;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverExited
	bool ___m_PlayAudioClipOnHoverExited_73;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverExited
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverExited_74;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverCanceled
	bool ___m_PlayAudioClipOnHoverCanceled_75;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverCanceled
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverCanceled_76;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoverAudioWhileSelecting
	bool ___m_AllowHoverAudioWhileSelecting_77;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectEntered
	bool ___m_PlayHapticsOnSelectEntered_78;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectEnterIntensity
	float ___m_HapticSelectEnterIntensity_79;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectEnterDuration
	float ___m_HapticSelectEnterDuration_80;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectExited
	bool ___m_PlayHapticsOnSelectExited_81;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectExitIntensity
	float ___m_HapticSelectExitIntensity_82;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectExitDuration
	float ___m_HapticSelectExitDuration_83;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectCanceled
	bool ___m_PlayHapticsOnSelectCanceled_84;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectCancelIntensity
	float ___m_HapticSelectCancelIntensity_85;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectCancelDuration
	float ___m_HapticSelectCancelDuration_86;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverEntered
	bool ___m_PlayHapticsOnHoverEntered_87;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverEnterIntensity
	float ___m_HapticHoverEnterIntensity_88;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverEnterDuration
	float ___m_HapticHoverEnterDuration_89;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverExited
	bool ___m_PlayHapticsOnHoverExited_90;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverExitIntensity
	float ___m_HapticHoverExitIntensity_91;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverExitDuration
	float ___m_HapticHoverExitDuration_92;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverCanceled
	bool ___m_PlayHapticsOnHoverCanceled_93;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverCancelIntensity
	float ___m_HapticHoverCancelIntensity_94;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverCancelDuration
	float ___m_HapticHoverCancelDuration_95;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoverHapticsWhileSelecting
	bool ___m_AllowHoverHapticsWhileSelecting_96;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowActivate
	bool ___m_AllowActivate_97;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_Controller
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___m_Controller_98;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ActivateEventArgs
	LinkedPool_1_t99CFF33CB8085652A0F2FC6579D0388FB3CBAA01* ___m_ActivateEventArgs_99;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_DeactivateEventArgs
	LinkedPool_1_t0F5C109EA19EF35798DEF24B63645919D0B7B53B* ___m_DeactivateEventArgs_100;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ToggleSelectActive
	bool ___m_ToggleSelectActive_102;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ToggleSelectDeactivatedThisFrame
	bool ___m_ToggleSelectDeactivatedThisFrame_103;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_WaitingForSelectDeactivate
	bool ___m_WaitingForSelectDeactivate_104;
	// UnityEngine.AudioSource UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_EffectsAudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___m_EffectsAudioSource_105;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::<validTargets>k__BackingField
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___U3CvalidTargetsU3Ek__BackingField_106;
};

struct XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRActivateInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::s_ActivateTargets
	List_1_tAB2FD3FF9900A585A26C6DC2D8EE94D30F2AECCA* ___s_ActivateTargets_101;
};

// UnityEngine.XR.Content.Interaction.XRKnob
struct XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126  : public XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6
{
	// UnityEngine.Transform UnityEngine.XR.Content.Interaction.XRKnob::m_Handle
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Handle_68;
	// System.Single UnityEngine.XR.Content.Interaction.XRKnob::m_Value
	float ___m_Value_69;
	// System.Boolean UnityEngine.XR.Content.Interaction.XRKnob::m_ClampedMotion
	bool ___m_ClampedMotion_70;
	// System.Single UnityEngine.XR.Content.Interaction.XRKnob::m_MaxAngle
	float ___m_MaxAngle_71;
	// System.Single UnityEngine.XR.Content.Interaction.XRKnob::m_MinAngle
	float ___m_MinAngle_72;
	// System.Single UnityEngine.XR.Content.Interaction.XRKnob::m_AngleIncrement
	float ___m_AngleIncrement_73;
	// System.Single UnityEngine.XR.Content.Interaction.XRKnob::m_PositionTrackedRadius
	float ___m_PositionTrackedRadius_74;
	// System.Single UnityEngine.XR.Content.Interaction.XRKnob::m_TwistSensitivity
	float ___m_TwistSensitivity_75;
	// UnityEngine.XR.Content.Interaction.XRKnob/ValueChangeEvent UnityEngine.XR.Content.Interaction.XRKnob::m_OnValueChange
	ValueChangeEvent_t0481CAE6722F3B57C58A7EFCB81AAFE9F6F30E17* ___m_OnValueChange_76;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor UnityEngine.XR.Content.Interaction.XRKnob::m_Interactor
	RuntimeObject* ___m_Interactor_77;
	// System.Boolean UnityEngine.XR.Content.Interaction.XRKnob::m_PositionDriven
	bool ___m_PositionDriven_78;
	// System.Boolean UnityEngine.XR.Content.Interaction.XRKnob::m_UpVectorDriven
	bool ___m_UpVectorDriven_79;
	// UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation UnityEngine.XR.Content.Interaction.XRKnob::m_PositionAngles
	TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3 ___m_PositionAngles_80;
	// UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation UnityEngine.XR.Content.Interaction.XRKnob::m_UpVectorAngles
	TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3 ___m_UpVectorAngles_81;
	// UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation UnityEngine.XR.Content.Interaction.XRKnob::m_ForwardVectorAngles
	TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3 ___m_ForwardVectorAngles_82;
	// System.Single UnityEngine.XR.Content.Interaction.XRKnob::m_BaseKnobRotation
	float ___m_BaseKnobRotation_83;
};

// UnityEngine.XR.Content.Interaction.XRLever
struct XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510  : public XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6
{
	// UnityEngine.Transform UnityEngine.XR.Content.Interaction.XRLever::m_Handle
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Handle_68;
	// System.Boolean UnityEngine.XR.Content.Interaction.XRLever::m_Value
	bool ___m_Value_69;
	// System.Boolean UnityEngine.XR.Content.Interaction.XRLever::m_LockToValue
	bool ___m_LockToValue_70;
	// System.Single UnityEngine.XR.Content.Interaction.XRLever::m_MaxAngle
	float ___m_MaxAngle_71;
	// System.Single UnityEngine.XR.Content.Interaction.XRLever::m_MinAngle
	float ___m_MinAngle_72;
	// UnityEngine.Events.UnityEvent UnityEngine.XR.Content.Interaction.XRLever::m_OnLeverActivate
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___m_OnLeverActivate_73;
	// UnityEngine.Events.UnityEvent UnityEngine.XR.Content.Interaction.XRLever::m_OnLeverDeactivate
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___m_OnLeverDeactivate_74;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor UnityEngine.XR.Content.Interaction.XRLever::m_Interactor
	RuntimeObject* ___m_Interactor_75;
	// System.Boolean UnityEngine.XR.Content.Interaction.XRLever::<lockToValue>k__BackingField
	bool ___U3ClockToValueU3Ek__BackingField_76;
};

// UnityEngine.XR.Content.Interaction.XRPushButton
struct XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3  : public XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6
{
	// UnityEngine.Transform UnityEngine.XR.Content.Interaction.XRPushButton::m_Button
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Button_67;
	// System.Single UnityEngine.XR.Content.Interaction.XRPushButton::m_PressDistance
	float ___m_PressDistance_68;
	// System.Single UnityEngine.XR.Content.Interaction.XRPushButton::m_PressBuffer
	float ___m_PressBuffer_69;
	// System.Single UnityEngine.XR.Content.Interaction.XRPushButton::m_ButtonOffset
	float ___m_ButtonOffset_70;
	// System.Single UnityEngine.XR.Content.Interaction.XRPushButton::m_ButtonSize
	float ___m_ButtonSize_71;
	// System.Boolean UnityEngine.XR.Content.Interaction.XRPushButton::m_ToggleButton
	bool ___m_ToggleButton_72;
	// UnityEngine.Events.UnityEvent UnityEngine.XR.Content.Interaction.XRPushButton::m_OnPress
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___m_OnPress_73;
	// UnityEngine.Events.UnityEvent UnityEngine.XR.Content.Interaction.XRPushButton::m_OnRelease
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___m_OnRelease_74;
	// UnityEngine.XR.Content.Interaction.XRPushButton/ValueChangeEvent UnityEngine.XR.Content.Interaction.XRPushButton::m_OnValueChange
	ValueChangeEvent_t6ABB63D6EC8E3745851A79F2AA32B8550933F214* ___m_OnValueChange_75;
	// System.Boolean UnityEngine.XR.Content.Interaction.XRPushButton::m_Pressed
	bool ___m_Pressed_76;
	// System.Boolean UnityEngine.XR.Content.Interaction.XRPushButton::m_Toggled
	bool ___m_Toggled_77;
	// System.Single UnityEngine.XR.Content.Interaction.XRPushButton::m_Value
	float ___m_Value_78;
	// UnityEngine.Vector3 UnityEngine.XR.Content.Interaction.XRPushButton::m_BaseButtonPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_BaseButtonPosition_79;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo> UnityEngine.XR.Content.Interaction.XRPushButton::m_HoveringInteractors
	Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* ___m_HoveringInteractors_80;
};

// UnityEngine.XR.Content.Interaction.XRSlider
struct XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51  : public XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6
{
	// UnityEngine.Transform UnityEngine.XR.Content.Interaction.XRSlider::m_Handle
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Handle_67;
	// System.Single UnityEngine.XR.Content.Interaction.XRSlider::m_Value
	float ___m_Value_68;
	// System.Single UnityEngine.XR.Content.Interaction.XRSlider::m_MaxPosition
	float ___m_MaxPosition_69;
	// System.Single UnityEngine.XR.Content.Interaction.XRSlider::m_MinPosition
	float ___m_MinPosition_70;
	// UnityEngine.XR.Content.Interaction.XRSlider/ValueChangeEvent UnityEngine.XR.Content.Interaction.XRSlider::m_OnValueChange
	ValueChangeEvent_t97011904F6BAB13C48427F4EB2F7F1EB924E2ACD* ___m_OnValueChange_71;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor UnityEngine.XR.Content.Interaction.XRSlider::m_Interactor
	RuntimeObject* ___m_Interactor_72;
};

// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor
struct XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76  : public XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E
{
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/LineType UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LineType
	int32_t ___m_LineType_111;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_BlendVisualLinePoints
	bool ___m_BlendVisualLinePoints_112;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_MaxRaycastDistance
	float ___m_MaxRaycastDistance_113;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RayOriginTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RayOriginTransform_114;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ReferenceFrame
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ReferenceFrame_115;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_Velocity
	float ___m_Velocity_116;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_Acceleration
	float ___m_Acceleration_117;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AdditionalGroundHeight
	float ___m_AdditionalGroundHeight_118;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AdditionalFlightTime
	float ___m_AdditionalFlightTime_119;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_EndPointDistance
	float ___m_EndPointDistance_120;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_EndPointHeight
	float ___m_EndPointHeight_121;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ControlPointDistance
	float ___m_ControlPointDistance_122;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ControlPointHeight
	float ___m_ControlPointHeight_123;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SampleFrequency
	int32_t ___m_SampleFrequency_124;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/HitDetectionType UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HitDetectionType
	int32_t ___m_HitDetectionType_125;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SphereCastRadius
	float ___m_SphereCastRadius_126;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_RaycastMask_127;
	// UnityEngine.QueryTriggerInteraction UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastTriggerInteraction
	int32_t ___m_RaycastTriggerInteraction_128;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/QuerySnapVolumeInteraction UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastSnapVolumeInteraction
	int32_t ___m_RaycastSnapVolumeInteraction_129;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HitClosestOnly
	bool ___m_HitClosestOnly_130;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HoverToSelect
	bool ___m_HoverToSelect_131;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HoverTimeToSelect
	float ___m_HoverTimeToSelect_132;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AutoDeselect
	bool ___m_AutoDeselect_133;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_TimeToAutoDeselect
	float ___m_TimeToAutoDeselect_134;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_EnableUIInteraction
	bool ___m_EnableUIInteraction_135;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AllowAnchorControl
	bool ___m_AllowAnchorControl_136;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_UseForceGrab
	bool ___m_UseForceGrab_137;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RotateSpeed
	float ___m_RotateSpeed_138;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_TranslateSpeed
	float ___m_TranslateSpeed_139;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AnchorRotateReferenceFrame
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AnchorRotateReferenceFrame_140;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/AnchorRotationMode UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AnchorRotationMode
	int32_t ___m_AnchorRotationMode_141;
	// UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_UIHoverEntered
	UIHoverEnterEvent_t4C957A3405A5D9CB867C5EC446620BB4BA7E7298* ___m_UIHoverEntered_142;
	// UnityEngine.XR.Interaction.Toolkit.UI.UIHoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_UIHoverExited
	UIHoverExitEvent_t63E5E9C921AFB8E2CB9CA4D32882DD4F62CD509B* ___m_UIHoverExited_143;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_EnableARRaycasting
	bool ___m_EnableARRaycasting_144;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_OccludeARHitsWith3DObjects
	bool ___m_OccludeARHitsWith3DObjects_145;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_OccludeARHitsWith2DObjects
	bool ___m_OccludeARHitsWith2DObjects_146;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_TrackableType
	int32_t ___m_TrackableType_147;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractable UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::<currentNearestValidTarget>k__BackingField
	RuntimeObject* ___U3CcurrentNearestValidTargetU3Ek__BackingField_148;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::<rayEndPoint>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CrayEndPointU3Ek__BackingField_149;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::<rayEndTransform>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CrayEndTransformU3Ek__BackingField_150;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HasRayOriginTransform
	bool ___m_HasRayOriginTransform_151;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HasReferenceFrame
	bool ___m_HasReferenceFrame_152;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ValidTargets
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___m_ValidTargets_153;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LastTimeHoveredObjectChanged
	float ___m_LastTimeHoveredObjectChanged_154;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_PassedHoverTimeToSelect
	bool ___m_PassedHoverTimeToSelect_155;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LastTimeAutoSelected
	float ___m_LastTimeAutoSelected_156;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_PassedTimeToAutoDeselect
	bool ___m_PassedTimeToAutoDeselect_157;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LastUIObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_LastUIObject_158;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LastTimeHoveredUIChanged
	float ___m_LastTimeHoveredUIChanged_159;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HoverUISelectActive
	bool ___m_HoverUISelectActive_160;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_BlockUIAutoDeselect
	bool ___m_BlockUIAutoDeselect_161;
	// UnityEngine.RaycastHit[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHits
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___m_RaycastHits_162;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHitsCount
	int32_t ___m_RaycastHitsCount_163;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/RaycastHitComparer UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHitComparer
	RaycastHitComparer_tC59C36D577B7426F5EE8E3AE65B988F953757E9D* ___m_RaycastHitComparer_164;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ARRaycastHitEndpointIndex
	int32_t ___m_ARRaycastHitEndpointIndex_165;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ARRaycastHits
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___m_ARRaycastHits_166;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ARRaycastHitsCount
	int32_t ___m_ARRaycastHitsCount_167;
	// UnityEngine.XR.ARFoundation.ARRaycastManager UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ARRaycastManager
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ___m_ARRaycastManager_168;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/SamplePoint> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SamplePoints
	List_1_tC0F6311D5ACC55EC4184D225E50673DBDAC555BD* ___m_SamplePoints_169;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SamplePointsFrameUpdated
	int32_t ___m_SamplePointsFrameUpdated_170;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHitEndpointIndex
	int32_t ___m_RaycastHitEndpointIndex_171;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_UIRaycastHitEndpointIndex
	int32_t ___m_UIRaycastHitEndpointIndex_172;
	// Unity.Mathematics.float3[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ControlPoints
	float3U5BU5D_t94C1DF28FA7E0FA017D0C77B720D9FF3519E0D45* ___m_ControlPoints_173;
	// Unity.Mathematics.float3[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HitChordControlPoints
	float3U5BU5D_t94C1DF28FA7E0FA017D0C77B720D9FF3519E0D45* ___m_HitChordControlPoints_174;
	// UnityEngine.PhysicsScene UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LocalPhysicsScene
	PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE ___m_LocalPhysicsScene_177;
	// UnityEngine.XR.Interaction.Toolkit.UI.RegisteredUIInteractorCache UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RegisteredUIInteractorCache
	RegisteredUIInteractorCache_t81419313AA113B206AF3FF94CD9D3B64A09CE413* ___m_RegisteredUIInteractorCache_178;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHitOccurred
	bool ___m_RaycastHitOccurred_179;
	// UnityEngine.RaycastHit UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHit
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___m_RaycastHit_180;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_UIRaycastHit
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___m_UIRaycastHit_181;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_IsUIHitClosest
	bool ___m_IsUIHitClosest_182;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractable UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastInteractable
	RuntimeObject* ___m_RaycastInteractable_183;
	// UnityEngine.XR.ARFoundation.ARRaycastHit UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ARRaycastHit
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 ___m_ARRaycastHit_184;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_IsARHitClosest
	bool ___m_IsARHitClosest_185;
	// UnityEngine.XR.Interaction.Toolkit.ActionBasedController UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ActionBasedController
	ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* ___m_ActionBasedController_186;
	// UnityEngine.XR.Interaction.Toolkit.XRController UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_DeviceBasedController
	XRController_t928E104C899E51FDE12C0A8AC68874587C46C28F* ___m_DeviceBasedController_187;
	// UnityEngine.XR.Interaction.Toolkit.XRScreenSpaceController UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ScreenSpaceController
	XRScreenSpaceController_t046F18C2FE01EB347832DB82D42C84131771FF17* ___m_ScreenSpaceController_188;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_IsActionBasedController
	bool ___m_IsActionBasedController_189;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_IsDeviceBasedController
	bool ___m_IsDeviceBasedController_190;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_IsScreenSpaceController
	bool ___m_IsScreenSpaceController_191;
};

struct XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::s_Results
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___s_Results_107;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/SamplePoint> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::s_ScratchSamplePoints
	List_1_tC0F6311D5ACC55EC4184D225E50673DBDAC555BD* ___s_ScratchSamplePoints_175;
	// Unity.Mathematics.float3[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::s_ScratchControlPoints
	float3U5BU5D_t94C1DF28FA7E0FA017D0C77B720D9FF3519E0D45* ___s_ScratchControlPoints_176;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, float ___arg00, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared (ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_gshared (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_gshared (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
inline void UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422 (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, const RuntimeMethod*))UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::SetValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_SetValue_mFB522CDCE5120523A96EA6D7036B78EEEE29BB51 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.Content.Interaction.XRKnob::ValueToRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRKnob_ValueToRotation_m08003B34EF3CE2A8ADAF502323B956318EB66127 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::SetKnobRotation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_SetKnobRotation_m57EDEE417136FA2B730323B632BE0498FBAD38E0 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, float ___angle0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRBaseInteractable_OnEnable_m7BE7345371D6ED1B91C5EC90CDF8F34CE11E3366 (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::get_selectEntered()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24 (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2 (UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8* __this, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8*, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::get_selectExited()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40 (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602 (UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B* __this, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B*, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB (UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8* __this, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8*, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B (UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B* __this, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B*, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRBaseInteractable_OnDisable_mB02958BFFAFF6C61A9FABE1D80056C3ABDCAB243 (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs::get_interactorObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SelectEnterEventArgs_get_interactorObject_m97F5CFDD451F9E85F5B92FD2B3E668A43B1C146C (SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedRotation_Reset_mF730ABE399B03C83625A408F8D5F99414728E77E (TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::UpdateBaseKnobRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_UpdateBaseKnobRotation_m59532D40C91665CAB7CBBE2C463DF6D4364BF670 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::UpdateRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_UpdateRotation_m0E4BD48C3FFF352C9228A01ACA40EAA0F523B397 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, bool ___freshCheck0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::ProcessInteractable(UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder/UpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRBaseInteractable_ProcessInteractable_mD5D51C6B4F6673EE9380C4EA707DA67F7CF8B0F2 (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, int32_t ___updatePhase0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::get_isSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRBaseInteractable_get_isSelected_m48487E7F2E3E1EDB6D9B6985FF146020F628B3CE (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformVector_mBBA687CE32C0394FC9AB4F273D4E4A11F53FB044 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformVector_mFA6FB7570442728CB15D03C696353148711CDD98 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation::SetBaseFromVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedRotation_SetBaseFromVector_m495E86D66761EAC401B17C46FF596AD744A5F56B (TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation::SetTargetFromVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedRotation_SetTargetFromVector_mBDE9D3F3DFB8AEAFB6AAD748F726D6107384F0C3 (TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation::get_totalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TrackedRotation_get_totalOffset_m8335EC621910854624A3139B652A87FA934B264D (TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline (float ___a0, float ___b1, float ___value2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
inline void UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805 (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, float ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, float, const RuntimeMethod*))UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_gshared)(__this, ___arg00, method);
}
// System.Single UnityEngine.Mathf::LerpUnclamped(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_LerpUnclamped_mF35042F9D25A221BDD4B3FD6251224610AFC1F35_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___f0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRKnob/ValueChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangeEvent__ctor_mBC41FCEA0AA4690860AE97314638CE07A22C2372 (ValueChangeEvent_t0481CAE6722F3B57C58A7EFCB81AAFE9F6F30E17* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRBaseInteractable__ctor_m0B36974579D0C9F2799C4C5DE77B136C291247F4 (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.Content.Interaction.XRKnob::ShortestAngleDistance(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRKnob_ShortestAngleDistance_mD9CB60A4DA2B17654A28956C9FFD6AC828611979 (float ___start0, float ___end1, float ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRLever::SetValue(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_SetValue_mDC69CA731001115DB1D6B073EFD0ED859652DFB9 (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, bool ___isOn0, bool ___forceRotation1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRLever::UpdateValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_UpdateValue_m9E36BF1D16C71BEADDAB1BC298C8580663F989FA (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.XR.Content.Interaction.XRLever::GetLookDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XRLever_GetLookDirection_m60D20489074AC4ADA156F2E6C6D58EA798D3A10B (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRLever::SetHandleAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_SetHandleAngle_m3717163640DE65E1A3456084C0F3A79C67E85D5E (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, float ___angle0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::SetButtonHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_SetButtonHeight_mB6E99F952CB40DDF4A21BF999CBB74A6E7A9B0D6 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, float ___height0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::IsHoverableBy(UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRBaseInteractable_IsHoverableBy_mA746CF4F19A39315495C004ED35EF6AF75AA8429 (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, RuntimeObject* ___interactor0, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::get_hoverEntered()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* XRBaseInteractable_get_hoverEntered_m49384274F14DF80AC8FEFC1D214B7ACD41C67FB5_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m3C8E30AEA90302CA8E564E339058E839E40196F4 (UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F (UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008* __this, UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008*, UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::get_hoverExited()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* XRBaseInteractable_get_hoverExited_m6A0E55603A368A85D086A00AEFD032A434CF6162_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m917A650EF730B0F8CDB9227A03A45B24FB54BCF8 (UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722 (UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26* __this, UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26*, UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33 (UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008* __this, UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008*, UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78 (UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26* __this, UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26*, UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___call0, method);
}
// UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs::get_interactorObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HoverEnterEventArgs_get_interactorObject_m9735CAB1FCE64F6DD65498458C582463A0FB5D19 (HoverEnterEventArgs_t4BCFA6BFD8D007CEE2D72D9D61DAED6C72F8CE2E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PressInfo__ctor_m772C95227A64BD660EBF391384EED3B0BEFCFC15 (PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>::Add(TKey,TValue)
inline void Dictionary_2_Add_mDE60E023087C042228D40A07287BE805F5445B6C (Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* __this, RuntimeObject* ___key0, PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6*, RuntimeObject*, PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs::get_interactorObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HoverExitEventArgs_get_interactorObject_m0018175DBF0540C147451C1E11B5EE5DA64CB150 (HoverExitEventArgs_tFFBECDDAF90BF90AA3B7282FAEF1D8E5D19A5AD6* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>::Remove(TKey)
inline bool Dictionary_2_Remove_m86CB67BAD8B42AC3CA321DC66D8AF594F8693EDE (Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* __this, RuntimeObject* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>::get_Count()
inline int32_t Dictionary_2_get_Count_mC8FB79F3EC3C89FCD55E73EEE51EB093F058E0BD (Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6*, const RuntimeMethod*))Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::UpdatePress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_UpdatePress_m3ED769AB20F6E97BFAFAD1D5E05114F3A7589906 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>::get_Values()
inline ValueCollection_t273ED87DC7817D2739CBA14EE77F17F33F78B511* Dictionary_2_get_Values_mA89399B1E83FA8A54C9AC701F8E2D6C11ACAF68B (Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t273ED87DC7817D2739CBA14EE77F17F33F78B511* (*) (Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6*, const RuntimeMethod*))Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>::GetEnumerator()
inline Enumerator_t2B6E17F326D700E0F1BA537F5A36AAE4EB1CE8BB ValueCollection_GetEnumerator_mB6EBFD4C49393524358EBA8D1776A6ADFFB814C6 (ValueCollection_t273ED87DC7817D2739CBA14EE77F17F33F78B511* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2B6E17F326D700E0F1BA537F5A36AAE4EB1CE8BB (*) (ValueCollection_t273ED87DC7817D2739CBA14EE77F17F33F78B511*, const RuntimeMethod*))ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>::Dispose()
inline void Enumerator_Dispose_m3022840D5F4E09DFA22C94D020DF1B1FFDCB95EC (Enumerator_t2B6E17F326D700E0F1BA537F5A36AAE4EB1CE8BB* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2B6E17F326D700E0F1BA537F5A36AAE4EB1CE8BB*, const RuntimeMethod*))Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>::get_Current()
inline PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* Enumerator_get_Current_mAC466C0241DC56E461D88076BF64403B2EA15DE7_inline (Enumerator_t2B6E17F326D700E0F1BA537F5A36AAE4EB1CE8BB* __this, const RuntimeMethod* method)
{
	return ((  PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* (*) (Enumerator_t2B6E17F326D700E0F1BA537F5A36AAE4EB1CE8BB*, const RuntimeMethod*))Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline)(__this, method);
}
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>::MoveNext()
inline bool Enumerator_MoveNext_m7A1722FD044A8E6BD27ACCBFF53B0B4A7E632885 (Enumerator_t2B6E17F326D700E0F1BA537F5A36AAE4EB1CE8BB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2B6E17F326D700E0F1BA537F5A36AAE4EB1CE8BB*, const RuntimeMethod*))Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_gshared)(__this, method);
}
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_matrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_matrix_m100B4ACA7FBDFF65CE1BD0000E9E0D7566147A15 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawWireCube(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireCube_m343533B3955A2D04A8638280D0EF537274A1FD8B (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___size1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>::.ctor()
inline void Dictionary_2__ctor_m6C9DD4CD4BED93B2CFF97A7DD954AA34D2E227A9 (Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::SetValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_SetValue_mDCA5611C423F4ACC175FF9622C1BC5B07310C465 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::SetSliderPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_SetSliderPosition_m868C3A5C8660AB80D6080F1C4B8CD26148070B02 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::UpdateSliderPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_UpdateSliderPosition_m816CAAC7F9DAECFD0C0822B62B195B71680F4D87 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRSlider/ValueChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangeEvent__ctor_m36E0FB628F57A83BB57A575FD914FAA4C5CCABB4 (ValueChangeEvent_t97011904F6BAB13C48427F4EB2F7F1EB924E2ACD* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.Content.Interaction.XRJoystick/ValueChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangeEvent__ctor_mB08B11080CE454CBC4CB39B37FD66F817EA51D49 (ValueChangeEvent_t392051F7A8D00C8652081F922180C02CA3043150* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422(__this, UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
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
// UnityEngine.Transform UnityEngine.XR.Content.Interaction.XRKnob::get_handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* XRKnob_get_handle_m7F6B8F24D831A17AB8CD99A79B626BBF83AC4D39 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Handle;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_Handle_68;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::set_handle(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_set_handle_m1CFBFCA56E72D9A549283A38765E40E3E8F5CA6B (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Handle = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___m_Handle_68 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Handle_68), (void*)L_0);
		return;
	}
}
// System.Single UnityEngine.XR.Content.Interaction.XRKnob::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRKnob_get_value_m036F021BC339E0693B7124D00AD9875CB861EF4A (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Value;
		float L_0 = __this->___m_Value_69;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::set_value(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_set_value_m8AD52C0F9D6013794943E32005C0FF0F62E64C0C (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// SetValue(value);
		float L_0 = ___value0;
		XRKnob_SetValue_mFB522CDCE5120523A96EA6D7036B78EEEE29BB51(__this, L_0, NULL);
		// SetKnobRotation(ValueToRotation());
		float L_1;
		L_1 = XRKnob_ValueToRotation_m08003B34EF3CE2A8ADAF502323B956318EB66127(__this, NULL);
		XRKnob_SetKnobRotation_m57EDEE417136FA2B730323B632BE0498FBAD38E0(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.Content.Interaction.XRKnob::get_clampedMotion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRKnob_get_clampedMotion_m4EF4962B0C2434D133706267F161CC9124D09AFA (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ClampedMotion;
		bool L_0 = __this->___m_ClampedMotion_70;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::set_clampedMotion(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_set_clampedMotion_mFEB66402DC0BF4BF5E15A9BF90B6F3CD473E9934 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ClampedMotion = value;
		bool L_0 = ___value0;
		__this->___m_ClampedMotion_70 = L_0;
		return;
	}
}
// System.Single UnityEngine.XR.Content.Interaction.XRKnob::get_maxAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRKnob_get_maxAngle_m39B05E0691B03E142AE17FCF074B29A292FA3FBA (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	{
		// get => m_MaxAngle;
		float L_0 = __this->___m_MaxAngle_71;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::set_maxAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_set_maxAngle_mADDF8207D8313AC4D6AF2115FB24A849F282015C (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_MaxAngle = value;
		float L_0 = ___value0;
		__this->___m_MaxAngle_71 = L_0;
		return;
	}
}
// System.Single UnityEngine.XR.Content.Interaction.XRKnob::get_minAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRKnob_get_minAngle_mF2F223E11482E07D52EC7190FA57EAB4E128DAE8 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	{
		// get => m_MinAngle;
		float L_0 = __this->___m_MinAngle_72;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::set_minAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_set_minAngle_m98EA7CA2B323D43AB5A132506B03D92E170A5AAD (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_MinAngle = value;
		float L_0 = ___value0;
		__this->___m_MinAngle_72 = L_0;
		return;
	}
}
// System.Single UnityEngine.XR.Content.Interaction.XRKnob::get_positionTrackedRadius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRKnob_get_positionTrackedRadius_m06D2C86AD84AED23FF77EE96153C467E36B493F5 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	{
		// get => m_PositionTrackedRadius;
		float L_0 = __this->___m_PositionTrackedRadius_74;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::set_positionTrackedRadius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_set_positionTrackedRadius_mA486838E52AFC38306FAE8BBF931B6054B38B1A2 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_PositionTrackedRadius = value;
		float L_0 = ___value0;
		__this->___m_PositionTrackedRadius_74 = L_0;
		return;
	}
}
// UnityEngine.XR.Content.Interaction.XRKnob/ValueChangeEvent UnityEngine.XR.Content.Interaction.XRKnob::get_onValueChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueChangeEvent_t0481CAE6722F3B57C58A7EFCB81AAFE9F6F30E17* XRKnob_get_onValueChange_m920F1FD70F30013B5F7D4581458D1905E262FFF6 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	{
		// public ValueChangeEvent onValueChange => m_OnValueChange;
		ValueChangeEvent_t0481CAE6722F3B57C58A7EFCB81AAFE9F6F30E17* L_0 = __this->___m_OnValueChange_76;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_Start_m54A81813A1E7AA065B75DBC4F2655532956F9963 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	{
		// SetValue(m_Value);
		float L_0 = __this->___m_Value_69;
		XRKnob_SetValue_mFB522CDCE5120523A96EA6D7036B78EEEE29BB51(__this, L_0, NULL);
		// SetKnobRotation(ValueToRotation());
		float L_1;
		L_1 = XRKnob_ValueToRotation_m08003B34EF3CE2A8ADAF502323B956318EB66127(__this, NULL);
		XRKnob_SetKnobRotation_m57EDEE417136FA2B730323B632BE0498FBAD38E0(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_OnEnable_m4579BC2D391B93DB43B31FE5E6D7073406695460 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRKnob_EndGrab_m5895C8F96BCD0988A398D02433A2A71759A7D604_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRKnob_StartGrab_m2C4B91DD007ABB767E6E9302875B7EFEEAC49463_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		XRBaseInteractable_OnEnable_m7BE7345371D6ED1B91C5EC90CDF8F34CE11E3366(__this, NULL);
		// selectEntered.AddListener(StartGrab);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_0;
		L_0 = XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline(__this, NULL);
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_1 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_1, __this, (intptr_t)((void*)XRKnob_StartGrab_m2C4B91DD007ABB767E6E9302875B7EFEEAC49463_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2(L_0, L_1, UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		// selectExited.AddListener(EndGrab);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_2;
		L_2 = XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline(__this, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_3 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_3, __this, (intptr_t)((void*)XRKnob_EndGrab_m5895C8F96BCD0988A398D02433A2A71759A7D604_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602(L_2, L_3, UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_OnDisable_mDA8DD83B30DF53874BEAED4465593BA1A2EFA095 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRKnob_EndGrab_m5895C8F96BCD0988A398D02433A2A71759A7D604_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRKnob_StartGrab_m2C4B91DD007ABB767E6E9302875B7EFEEAC49463_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// selectEntered.RemoveListener(StartGrab);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_0;
		L_0 = XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline(__this, NULL);
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_1 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_1, __this, (intptr_t)((void*)XRKnob_StartGrab_m2C4B91DD007ABB767E6E9302875B7EFEEAC49463_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB(L_0, L_1, UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		// selectExited.RemoveListener(EndGrab);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_2;
		L_2 = XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline(__this, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_3 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_3, __this, (intptr_t)((void*)XRKnob_EndGrab_m5895C8F96BCD0988A398D02433A2A71759A7D604_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B(L_2, L_3, UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		// base.OnDisable();
		XRBaseInteractable_OnDisable_mB02958BFFAFF6C61A9FABE1D80056C3ABDCAB243(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::StartGrab(UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_StartGrab_m2C4B91DD007ABB767E6E9302875B7EFEEAC49463 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* ___args0, const RuntimeMethod* method) 
{
	{
		// m_Interactor = args.interactorObject;
		SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = SelectEnterEventArgs_get_interactorObject_m97F5CFDD451F9E85F5B92FD2B3E668A43B1C146C(L_0, NULL);
		__this->___m_Interactor_77 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Interactor_77), (void*)L_1);
		// m_PositionAngles.Reset();
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_2 = (&__this->___m_PositionAngles_80);
		TrackedRotation_Reset_mF730ABE399B03C83625A408F8D5F99414728E77E(L_2, NULL);
		// m_UpVectorAngles.Reset();
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_3 = (&__this->___m_UpVectorAngles_81);
		TrackedRotation_Reset_mF730ABE399B03C83625A408F8D5F99414728E77E(L_3, NULL);
		// m_ForwardVectorAngles.Reset();
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_4 = (&__this->___m_ForwardVectorAngles_82);
		TrackedRotation_Reset_mF730ABE399B03C83625A408F8D5F99414728E77E(L_4, NULL);
		// UpdateBaseKnobRotation();
		XRKnob_UpdateBaseKnobRotation_m59532D40C91665CAB7CBBE2C463DF6D4364BF670(__this, NULL);
		// UpdateRotation(true);
		XRKnob_UpdateRotation_m0E4BD48C3FFF352C9228A01ACA40EAA0F523B397(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::EndGrab(UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_EndGrab_m5895C8F96BCD0988A398D02433A2A71759A7D604 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* ___args0, const RuntimeMethod* method) 
{
	{
		// m_Interactor = null;
		__this->___m_Interactor_77 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Interactor_77), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::ProcessInteractable(UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder/UpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_ProcessInteractable_m85660AF86FF7C80552D7B88BA601FDE0E930C6D3 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, int32_t ___updatePhase0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// base.ProcessInteractable(updatePhase);
		int32_t L_0 = ___updatePhase0;
		XRBaseInteractable_ProcessInteractable_mD5D51C6B4F6673EE9380C4EA707DA67F7CF8B0F2(__this, L_0, NULL);
		// if (updatePhase == XRInteractionUpdateOrder.UpdatePhase.Dynamic)
		int32_t L_1 = ___updatePhase0;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// if (isSelected)
		bool L_3;
		L_3 = XRBaseInteractable_get_isSelected_m48487E7F2E3E1EDB6D9B6985FF146020F628B3CE(__this, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		// UpdateRotation();
		XRKnob_UpdateRotation_m0E4BD48C3FFF352C9228A01ACA40EAA0F523B397(__this, (bool)0, NULL);
	}

IL_0026:
	{
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::UpdateRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_UpdateRotation_m0E4BD48C3FFF352C9228A01ACA40EAA0F523B397 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, bool ___freshCheck0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	int32_t G_B3_0 = 0;
	{
		// var interactorTransform = m_Interactor.GetAttachTransform(this);
		RuntimeObject* L_0 = __this->___m_Interactor_77;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = InterfaceFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, RuntimeObject* >::Invoke(6 /* UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.IXRInteractor::GetAttachTransform(UnityEngine.XR.Interaction.Toolkit.IXRInteractable) */, IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var, L_0, __this);
		V_0 = L_1;
		// var localOffset = transform.InverseTransformVector(interactorTransform.position - m_Handle.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = V_0;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___m_Handle_68;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_4, L_6, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_InverseTransformVector_mBBA687CE32C0394FC9AB4F273D4E4A11F53FB044(L_2, L_7, NULL);
		V_1 = L_8;
		// localOffset.y = 0.0f;
		(&V_1)->___y_3 = (0.0f);
		// var radiusOffset = transform.TransformVector(localOffset).magnitude;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_1;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_TransformVector_mFA6FB7570442728CB15D03C696353148711CDD98(L_9, L_10, NULL);
		V_8 = L_11;
		float L_12;
		L_12 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_8), NULL);
		V_2 = L_12;
		// localOffset.Normalize();
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&V_1), NULL);
		// var localForward = transform.InverseTransformDirection(interactorTransform.forward);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = V_0;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_14, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575(L_13, L_15, NULL);
		V_3 = L_16;
		// var localY = Math.Abs(localForward.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_3;
		float L_18 = L_17.___y_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_19;
		L_19 = fabsf(L_18);
		V_4 = L_19;
		// localForward.y = 0.0f;
		(&V_3)->___y_3 = (0.0f);
		// localForward.Normalize();
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&V_3), NULL);
		// var localUp = transform.InverseTransformDirection(interactorTransform.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = V_0;
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_21, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575(L_20, L_22, NULL);
		V_5 = L_23;
		// localUp.y = 0.0f;
		(&V_5)->___y_3 = (0.0f);
		// localUp.Normalize();
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&V_5), NULL);
		// if (m_PositionDriven && !freshCheck)
		bool L_24 = __this->___m_PositionDriven_78;
		if (!L_24)
		{
			goto IL_00c2;
		}
	}
	{
		bool L_25 = ___freshCheck0;
		G_B3_0 = ((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		goto IL_00c3;
	}

IL_00c2:
	{
		G_B3_0 = 0;
	}

IL_00c3:
	{
		V_9 = (bool)G_B3_0;
		bool L_26 = V_9;
		if (!L_26)
		{
			goto IL_00d1;
		}
	}
	{
		// radiusOffset *= (1.0f + k_ModeSwitchDeadZone);
		float L_27 = V_2;
		V_2 = ((float)il2cpp_codegen_multiply(L_27, (1.10000002f)));
	}

IL_00d1:
	{
		// if (radiusOffset >= m_PositionTrackedRadius)
		float L_28 = V_2;
		float L_29 = __this->___m_PositionTrackedRadius_74;
		V_10 = (bool)((((int32_t)((!(((float)L_28) >= ((float)L_29)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_10;
		if (!L_30)
		{
			goto IL_010e;
		}
	}
	{
		// if (!m_PositionDriven || freshCheck)
		bool L_31 = __this->___m_PositionDriven_78;
		bool L_32 = ___freshCheck0;
		V_11 = (bool)((int32_t)(((((int32_t)L_31) == ((int32_t)0))? 1 : 0)|(int32_t)L_32));
		bool L_33 = V_11;
		if (!L_33)
		{
			goto IL_010b;
		}
	}
	{
		// m_PositionAngles.SetBaseFromVector(localOffset);
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_34 = (&__this->___m_PositionAngles_80);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_1;
		TrackedRotation_SetBaseFromVector_m495E86D66761EAC401B17C46FF596AD744A5F56B(L_34, L_35, NULL);
		// m_PositionDriven = true;
		__this->___m_PositionDriven_78 = (bool)1;
	}

IL_010b:
	{
		goto IL_0115;
	}

IL_010e:
	{
		// m_PositionDriven = false;
		__this->___m_PositionDriven_78 = (bool)0;
	}

IL_0115:
	{
		// if (!freshCheck)
		bool L_36 = ___freshCheck0;
		V_12 = (bool)((((int32_t)L_36) == ((int32_t)0))? 1 : 0);
		bool L_37 = V_12;
		if (!L_37)
		{
			goto IL_0146;
		}
	}
	{
		// if (!m_UpVectorDriven)
		bool L_38 = __this->___m_UpVectorDriven_79;
		V_13 = (bool)((((int32_t)L_38) == ((int32_t)0))? 1 : 0);
		bool L_39 = V_13;
		if (!L_39)
		{
			goto IL_013b;
		}
	}
	{
		// localY *= (1.0f - (k_ModeSwitchDeadZone * 0.5f));
		float L_40 = V_4;
		V_4 = ((float)il2cpp_codegen_multiply(L_40, (0.949999988f)));
		goto IL_0145;
	}

IL_013b:
	{
		// localY *= (1.0f + (k_ModeSwitchDeadZone * 0.5f));
		float L_41 = V_4;
		V_4 = ((float)il2cpp_codegen_multiply(L_41, (1.04999995f)));
	}

IL_0145:
	{
	}

IL_0146:
	{
		// if (localY > 0.707f)
		float L_42 = V_4;
		V_14 = (bool)((((float)L_42) > ((float)(0.707000017f)))? 1 : 0);
		bool L_43 = V_14;
		if (!L_43)
		{
			goto IL_0181;
		}
	}
	{
		// if (!m_UpVectorDriven || freshCheck)
		bool L_44 = __this->___m_UpVectorDriven_79;
		bool L_45 = ___freshCheck0;
		V_15 = (bool)((int32_t)(((((int32_t)L_44) == ((int32_t)0))? 1 : 0)|(int32_t)L_45));
		bool L_46 = V_15;
		if (!L_46)
		{
			goto IL_017e;
		}
	}
	{
		// m_UpVectorAngles.SetBaseFromVector(localUp);
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_47 = (&__this->___m_UpVectorAngles_81);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = V_5;
		TrackedRotation_SetBaseFromVector_m495E86D66761EAC401B17C46FF596AD744A5F56B(L_47, L_48, NULL);
		// m_UpVectorDriven = true;
		__this->___m_UpVectorDriven_79 = (bool)1;
	}

IL_017e:
	{
		goto IL_01a7;
	}

IL_0181:
	{
		// if (m_UpVectorDriven || freshCheck)
		bool L_49 = __this->___m_UpVectorDriven_79;
		bool L_50 = ___freshCheck0;
		V_16 = (bool)((int32_t)((int32_t)L_49|(int32_t)L_50));
		bool L_51 = V_16;
		if (!L_51)
		{
			goto IL_01a6;
		}
	}
	{
		// m_ForwardVectorAngles.SetBaseFromVector(localForward);
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_52 = (&__this->___m_ForwardVectorAngles_82);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_3;
		TrackedRotation_SetBaseFromVector_m495E86D66761EAC401B17C46FF596AD744A5F56B(L_52, L_53, NULL);
		// m_UpVectorDriven = false;
		__this->___m_UpVectorDriven_79 = (bool)0;
	}

IL_01a6:
	{
	}

IL_01a7:
	{
		// if (m_PositionDriven)
		bool L_54 = __this->___m_PositionDriven_78;
		V_17 = L_54;
		bool L_55 = V_17;
		if (!L_55)
		{
			goto IL_01c0;
		}
	}
	{
		// m_PositionAngles.SetTargetFromVector(localOffset);
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_56 = (&__this->___m_PositionAngles_80);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = V_1;
		TrackedRotation_SetTargetFromVector_mBDE9D3F3DFB8AEAFB6AAD748F726D6107384F0C3(L_56, L_57, NULL);
	}

IL_01c0:
	{
		// if (m_UpVectorDriven)
		bool L_58 = __this->___m_UpVectorDriven_79;
		V_18 = L_58;
		bool L_59 = V_18;
		if (!L_59)
		{
			goto IL_01dc;
		}
	}
	{
		// m_UpVectorAngles.SetTargetFromVector(localUp);
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_60 = (&__this->___m_UpVectorAngles_81);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61 = V_5;
		TrackedRotation_SetTargetFromVector_mBDE9D3F3DFB8AEAFB6AAD748F726D6107384F0C3(L_60, L_61, NULL);
		goto IL_01e9;
	}

IL_01dc:
	{
		// m_ForwardVectorAngles.SetTargetFromVector(localForward);
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_62 = (&__this->___m_ForwardVectorAngles_82);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = V_3;
		TrackedRotation_SetTargetFromVector_mBDE9D3F3DFB8AEAFB6AAD748F726D6107384F0C3(L_62, L_63, NULL);
	}

IL_01e9:
	{
		// var knobRotation = m_BaseKnobRotation - ((m_UpVectorAngles.totalOffset + m_ForwardVectorAngles.totalOffset) * m_TwistSensitivity) - m_PositionAngles.totalOffset;
		float L_64 = __this->___m_BaseKnobRotation_83;
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_65 = (&__this->___m_UpVectorAngles_81);
		float L_66;
		L_66 = TrackedRotation_get_totalOffset_m8335EC621910854624A3139B652A87FA934B264D(L_65, NULL);
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_67 = (&__this->___m_ForwardVectorAngles_82);
		float L_68;
		L_68 = TrackedRotation_get_totalOffset_m8335EC621910854624A3139B652A87FA934B264D(L_67, NULL);
		float L_69 = __this->___m_TwistSensitivity_75;
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_70 = (&__this->___m_PositionAngles_80);
		float L_71;
		L_71 = TrackedRotation_get_totalOffset_m8335EC621910854624A3139B652A87FA934B264D(L_70, NULL);
		V_6 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_64, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_66, L_68)), L_69)))), L_71));
		// if (m_ClampedMotion)
		bool L_72 = __this->___m_ClampedMotion_70;
		V_19 = L_72;
		bool L_73 = V_19;
		if (!L_73)
		{
			goto IL_023d;
		}
	}
	{
		// knobRotation = Mathf.Clamp(knobRotation, m_MinAngle, m_MaxAngle);
		float L_74 = V_6;
		float L_75 = __this->___m_MinAngle_72;
		float L_76 = __this->___m_MaxAngle_71;
		float L_77;
		L_77 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_74, L_75, L_76, NULL);
		V_6 = L_77;
	}

IL_023d:
	{
		// SetKnobRotation(knobRotation);
		float L_78 = V_6;
		XRKnob_SetKnobRotation_m57EDEE417136FA2B730323B632BE0498FBAD38E0(__this, L_78, NULL);
		// var knobValue = (knobRotation - m_MinAngle) / (m_MaxAngle - m_MinAngle);
		float L_79 = V_6;
		float L_80 = __this->___m_MinAngle_72;
		float L_81 = __this->___m_MaxAngle_71;
		float L_82 = __this->___m_MinAngle_72;
		V_7 = ((float)(((float)il2cpp_codegen_subtract(L_79, L_80))/((float)il2cpp_codegen_subtract(L_81, L_82))));
		// SetValue(knobValue);
		float L_83 = V_7;
		XRKnob_SetValue_mFB522CDCE5120523A96EA6D7036B78EEEE29BB51(__this, L_83, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::SetKnobRotation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_SetKnobRotation_m57EDEE417136FA2B730323B632BE0498FBAD38E0 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, float ___angle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		// if (m_AngleIncrement > 0)
		float L_0 = __this->___m_AngleIncrement_73;
		V_0 = (bool)((((float)L_0) > ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		// var normalizeAngle = angle - m_MinAngle;
		float L_2 = ___angle0;
		float L_3 = __this->___m_MinAngle_72;
		V_1 = ((float)il2cpp_codegen_subtract(L_2, L_3));
		// angle = (Mathf.Round(normalizeAngle / m_AngleIncrement) * m_AngleIncrement) + m_MinAngle;
		float L_4 = V_1;
		float L_5 = __this->___m_AngleIncrement_73;
		float L_6;
		L_6 = bankers_roundf(((float)(L_4/L_5)));
		float L_7 = __this->___m_AngleIncrement_73;
		float L_8 = __this->___m_MinAngle_72;
		___angle0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_6, L_7)), L_8));
	}

IL_003a:
	{
		// if (m_Handle != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___m_Handle_68;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_10;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0066;
		}
	}
	{
		// m_Handle.localEulerAngles = new Vector3(0.0f, angle, 0.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___m_Handle_68;
		float L_13 = ___angle0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), (0.0f), L_13, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_12, L_14, NULL);
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::SetValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_SetValue_mFB522CDCE5120523A96EA6D7036B78EEEE29BB51 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// if (m_ClampedMotion)
		bool L_0 = __this->___m_ClampedMotion_70;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// value = Mathf.Clamp01(value);
		float L_2 = ___value0;
		float L_3;
		L_3 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_2, NULL);
		___value0 = L_3;
	}

IL_0013:
	{
		// if (m_AngleIncrement > 0)
		float L_4 = __this->___m_AngleIncrement_73;
		V_1 = (bool)((((float)L_4) > ((float)(0.0f)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0064;
		}
	}
	{
		// var angleRange = m_MaxAngle - m_MinAngle;
		float L_6 = __this->___m_MaxAngle_71;
		float L_7 = __this->___m_MinAngle_72;
		V_2 = ((float)il2cpp_codegen_subtract(L_6, L_7));
		// var angle = Mathf.Lerp(0.0f, angleRange, value);
		float L_8 = V_2;
		float L_9 = ___value0;
		float L_10;
		L_10 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline((0.0f), L_8, L_9, NULL);
		V_3 = L_10;
		// angle = Mathf.Round(angle / m_AngleIncrement) * m_AngleIncrement;
		float L_11 = V_3;
		float L_12 = __this->___m_AngleIncrement_73;
		float L_13;
		L_13 = bankers_roundf(((float)(L_11/L_12)));
		float L_14 = __this->___m_AngleIncrement_73;
		V_3 = ((float)il2cpp_codegen_multiply(L_13, L_14));
		// value = Mathf.InverseLerp(0.0f, angleRange, angle);
		float L_15 = V_2;
		float L_16 = V_3;
		float L_17;
		L_17 = Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline((0.0f), L_15, L_16, NULL);
		___value0 = L_17;
	}

IL_0064:
	{
		// m_Value = value;
		float L_18 = ___value0;
		__this->___m_Value_69 = L_18;
		// m_OnValueChange.Invoke(m_Value);
		ValueChangeEvent_t0481CAE6722F3B57C58A7EFCB81AAFE9F6F30E17* L_19 = __this->___m_OnValueChange_76;
		float L_20 = __this->___m_Value_69;
		NullCheck(L_19);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_19, L_20, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Single UnityEngine.XR.Content.Interaction.XRKnob::ValueToRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRKnob_ValueToRotation_m08003B34EF3CE2A8ADAF502323B956318EB66127 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		// return m_ClampedMotion ? Mathf.Lerp(m_MinAngle, m_MaxAngle, m_Value) : Mathf.LerpUnclamped(m_MinAngle, m_MaxAngle, m_Value);
		bool L_0 = __this->___m_ClampedMotion_70;
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		float L_1 = __this->___m_MinAngle_72;
		float L_2 = __this->___m_MaxAngle_71;
		float L_3 = __this->___m_Value_69;
		float L_4;
		L_4 = Mathf_LerpUnclamped_mF35042F9D25A221BDD4B3FD6251224610AFC1F35_inline(L_1, L_2, L_3, NULL);
		G_B3_0 = L_4;
		goto IL_0039;
	}

IL_0022:
	{
		float L_5 = __this->___m_MinAngle_72;
		float L_6 = __this->___m_MaxAngle_71;
		float L_7 = __this->___m_Value_69;
		float L_8;
		L_8 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_5, L_6, L_7, NULL);
		G_B3_0 = L_8;
	}

IL_0039:
	{
		V_0 = G_B3_0;
		goto IL_003c;
	}

IL_003c:
	{
		// }
		float L_9 = V_0;
		return L_9;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::UpdateBaseKnobRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_UpdateBaseKnobRotation_m59532D40C91665CAB7CBBE2C463DF6D4364BF670 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	{
		// m_BaseKnobRotation = Mathf.LerpUnclamped(m_MinAngle, m_MaxAngle, m_Value);
		float L_0 = __this->___m_MinAngle_72;
		float L_1 = __this->___m_MaxAngle_71;
		float L_2 = __this->___m_Value_69;
		float L_3;
		L_3 = Mathf_LerpUnclamped_mF35042F9D25A221BDD4B3FD6251224610AFC1F35_inline(L_0, L_1, L_2, NULL);
		__this->___m_BaseKnobRotation_83 = L_3;
		// }
		return;
	}
}
// System.Single UnityEngine.XR.Content.Interaction.XRKnob::ShortestAngleDistance(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRKnob_ShortestAngleDistance_mD9CB60A4DA2B17654A28956C9FFD6AC828611979 (float ___start0, float ___end1, float ___max2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		// var angleDelta = end - start;
		float L_0 = ___end1;
		float L_1 = ___start0;
		V_0 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// var angleSign = Mathf.Sign(angleDelta);
		float L_2 = V_0;
		float L_3;
		L_3 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(L_2, NULL);
		V_1 = L_3;
		// angleDelta = Math.Abs(angleDelta) % max;
		float L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_5;
		L_5 = fabsf(L_4);
		float L_6 = ___max2;
		V_0 = (fmodf(L_5, L_6));
		// if (angleDelta > (max * 0.5f))
		float L_7 = V_0;
		float L_8 = ___max2;
		V_2 = (bool)((((float)L_7) > ((float)((float)il2cpp_codegen_multiply(L_8, (0.5f)))))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0028;
		}
	}
	{
		// angleDelta = -(max - angleDelta);
		float L_10 = ___max2;
		float L_11 = V_0;
		V_0 = ((-((float)il2cpp_codegen_subtract(L_10, L_11))));
	}

IL_0028:
	{
		// return angleDelta * angleSign;
		float L_12 = V_0;
		float L_13 = V_1;
		V_3 = ((float)il2cpp_codegen_multiply(L_12, L_13));
		goto IL_002e;
	}

IL_002e:
	{
		// }
		float L_14 = V_3;
		return L_14;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_OnDrawGizmosSelected_mA7FC5CE9A43661870BBB78F34B316E97D61F5264 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	bool V_8 = false;
	{
		// if (m_PositionTrackedRadius <= Mathf.Epsilon)
		float L_0 = __this->___m_PositionTrackedRadius_74;
		float L_1 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		V_4 = (bool)((((int32_t)((!(((float)L_0) <= ((float)L_1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// return;
		goto IL_0116;
	}

IL_001c:
	{
		// var circleCenter = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		V_0 = L_4;
		// if (m_Handle != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___m_Handle_68;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_5 = L_6;
		bool L_7 = V_5;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		// circleCenter = m_Handle.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___m_Handle_68;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		V_0 = L_9;
	}

IL_0046:
	{
		// var circleX = transform.right;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_10, NULL);
		V_1 = L_11;
		// var circleY = transform.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_12, NULL);
		V_2 = L_13;
		// Gizmos.color = Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		L_14 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_14, NULL);
		// var segmentCounter = 0;
		V_3 = 0;
		goto IL_0108;
	}

IL_0070:
	{
		// var startAngle = (float)segmentCounter * k_SegmentRatio * 2.0f * Mathf.PI;
		int32_t L_15 = V_3;
		V_6 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)L_15), (0.0625f))), (2.0f))), (3.14159274f)));
		// segmentCounter++;
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		// var endAngle = (float)segmentCounter * k_SegmentRatio * 2.0f * Mathf.PI;
		int32_t L_17 = V_3;
		V_7 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)L_17), (0.0625f))), (2.0f))), (3.14159274f)));
		// Gizmos.DrawLine(circleCenter + (Mathf.Cos(startAngle) * circleX + Mathf.Sin(startAngle) * circleY) * m_PositionTrackedRadius,
		//     circleCenter + (Mathf.Cos(endAngle) * circleX + Mathf.Sin(endAngle) * circleY) * m_PositionTrackedRadius);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_0;
		float L_19 = V_6;
		float L_20;
		L_20 = cosf(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_20, L_21, NULL);
		float L_23 = V_6;
		float L_24;
		L_24 = sinf(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_24, L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_22, L_26, NULL);
		float L_28 = __this->___m_PositionTrackedRadius_74;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_27, L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_18, L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_0;
		float L_32 = V_7;
		float L_33;
		L_33 = cosf(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_33, L_34, NULL);
		float L_36 = V_7;
		float L_37;
		L_37 = sinf(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_37, L_38, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_35, L_39, NULL);
		float L_41 = __this->___m_PositionTrackedRadius_74;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_40, L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_31, L_42, NULL);
		Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_30, L_43, NULL);
	}

IL_0108:
	{
		// while (segmentCounter < k_CircleSegments)
		int32_t L_44 = V_3;
		V_8 = (bool)((((int32_t)L_44) < ((int32_t)((int32_t)16)))? 1 : 0);
		bool L_45 = V_8;
		if (L_45)
		{
			goto IL_0070;
		}
	}

IL_0116:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_OnValidate_mB08147D8DC4B8E860E6B7D09696CC81082CC9F22 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (m_ClampedMotion)
		bool L_0 = __this->___m_ClampedMotion_70;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// m_Value = Mathf.Clamp01(m_Value);
		float L_2 = __this->___m_Value_69;
		float L_3;
		L_3 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_2, NULL);
		__this->___m_Value_69 = L_3;
	}

IL_001c:
	{
		// if (m_MinAngle > m_MaxAngle)
		float L_4 = __this->___m_MinAngle_72;
		float L_5 = __this->___m_MaxAngle_71;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		// m_MinAngle = m_MaxAngle;
		float L_7 = __this->___m_MaxAngle_71;
		__this->___m_MinAngle_72 = L_7;
	}

IL_003a:
	{
		// SetKnobRotation(ValueToRotation());
		float L_8;
		L_8 = XRKnob_ValueToRotation_m08003B34EF3CE2A8ADAF502323B956318EB66127(__this, NULL);
		XRKnob_SetKnobRotation_m57EDEE417136FA2B730323B632BE0498FBAD38E0(__this, L_8, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob__ctor_mE285342CE8BB3795515A292269CFA539A4882F20 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueChangeEvent_t0481CAE6722F3B57C58A7EFCB81AAFE9F6F30E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Transform m_Handle = null;
		__this->___m_Handle_68 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Handle_68), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// float m_Value = 0.5f;
		__this->___m_Value_69 = (0.5f);
		// bool m_ClampedMotion = true;
		__this->___m_ClampedMotion_70 = (bool)1;
		// float m_MaxAngle = 90.0f;
		__this->___m_MaxAngle_71 = (90.0f);
		// float m_MinAngle = -90.0f;
		__this->___m_MinAngle_72 = (-90.0f);
		// float m_AngleIncrement = 0.0f;
		__this->___m_AngleIncrement_73 = (0.0f);
		// float m_PositionTrackedRadius = 0.1f;
		__this->___m_PositionTrackedRadius_74 = (0.100000001f);
		// float m_TwistSensitivity = 1.5f;
		__this->___m_TwistSensitivity_75 = (1.5f);
		// ValueChangeEvent m_OnValueChange = new ValueChangeEvent();
		ValueChangeEvent_t0481CAE6722F3B57C58A7EFCB81AAFE9F6F30E17* L_0 = (ValueChangeEvent_t0481CAE6722F3B57C58A7EFCB81AAFE9F6F30E17*)il2cpp_codegen_object_new(ValueChangeEvent_t0481CAE6722F3B57C58A7EFCB81AAFE9F6F30E17_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ValueChangeEvent__ctor_mBC41FCEA0AA4690860AE97314638CE07A22C2372(L_0, NULL);
		__this->___m_OnValueChange_76 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OnValueChange_76), (void*)L_0);
		// bool m_PositionDriven = false;
		__this->___m_PositionDriven_78 = (bool)0;
		// bool m_UpVectorDriven = false;
		__this->___m_UpVectorDriven_79 = (bool)0;
		// TrackedRotation m_PositionAngles = new TrackedRotation();
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_1 = (&__this->___m_PositionAngles_80);
		il2cpp_codegen_initobj(L_1, sizeof(TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3));
		// TrackedRotation m_UpVectorAngles = new TrackedRotation();
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_2 = (&__this->___m_UpVectorAngles_81);
		il2cpp_codegen_initobj(L_2, sizeof(TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3));
		// TrackedRotation m_ForwardVectorAngles = new TrackedRotation();
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_3 = (&__this->___m_ForwardVectorAngles_82);
		il2cpp_codegen_initobj(L_3, sizeof(TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3));
		// float m_BaseKnobRotation = 0.0f;
		__this->___m_BaseKnobRotation_83 = (0.0f);
		il2cpp_codegen_runtime_class_init_inline(XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_il2cpp_TypeInfo_var);
		XRBaseInteractable__ctor_m0B36974579D0C9F2799C4C5DE77B136C291247F4(__this, NULL);
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
// System.Single UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation::get_totalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TrackedRotation_get_totalOffset_m8335EC621910854624A3139B652A87FA934B264D (TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* __this, const RuntimeMethod* method) 
{
	{
		// public float totalOffset => m_AccumulatedAngle + m_CurrentOffset;
		float L_0 = __this->___m_AccumulatedAngle_2;
		float L_1 = __this->___m_CurrentOffset_1;
		return ((float)il2cpp_codegen_add(L_0, L_1));
	}
}
IL2CPP_EXTERN_C  float TrackedRotation_get_totalOffset_m8335EC621910854624A3139B652A87FA934B264D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3*>(__this + _offset);
	float _returnValue;
	_returnValue = TrackedRotation_get_totalOffset_m8335EC621910854624A3139B652A87FA934B264D(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedRotation_Reset_mF730ABE399B03C83625A408F8D5F99414728E77E (TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* __this, const RuntimeMethod* method) 
{
	{
		// m_BaseAngle = 0.0f;
		__this->___m_BaseAngle_0 = (0.0f);
		// m_CurrentOffset = 0.0f;
		__this->___m_CurrentOffset_1 = (0.0f);
		// m_AccumulatedAngle = 0.0f;
		__this->___m_AccumulatedAngle_2 = (0.0f);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackedRotation_Reset_mF730ABE399B03C83625A408F8D5F99414728E77E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3*>(__this + _offset);
	TrackedRotation_Reset_mF730ABE399B03C83625A408F8D5F99414728E77E(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation::SetBaseFromVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedRotation_SetBaseFromVector_m495E86D66761EAC401B17C46FF596AD744A5F56B (TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) 
{
	{
		// m_AccumulatedAngle += m_CurrentOffset;
		float L_0 = __this->___m_AccumulatedAngle_2;
		float L_1 = __this->___m_CurrentOffset_1;
		__this->___m_AccumulatedAngle_2 = ((float)il2cpp_codegen_add(L_0, L_1));
		// m_BaseAngle = Mathf.Atan2(direction.z, direction.x) * Mathf.Rad2Deg;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___direction0;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___direction0;
		float L_5 = L_4.___x_2;
		float L_6;
		L_6 = atan2f(L_3, L_5);
		__this->___m_BaseAngle_0 = ((float)il2cpp_codegen_multiply(L_6, (57.2957802f)));
		// m_CurrentOffset = 0.0f;
		__this->___m_CurrentOffset_1 = (0.0f);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackedRotation_SetBaseFromVector_m495E86D66761EAC401B17C46FF596AD744A5F56B_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method)
{
	TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3*>(__this + _offset);
	TrackedRotation_SetBaseFromVector_m495E86D66761EAC401B17C46FF596AD744A5F56B(_thisAdjusted, ___direction0, method);
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation::SetTargetFromVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedRotation_SetTargetFromVector_mBDE9D3F3DFB8AEAFB6AAD748F726D6107384F0C3 (TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		// var targetAngle = Mathf.Atan2(direction.z, direction.x) * Mathf.Rad2Deg;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___direction0;
		float L_1 = L_0.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___direction0;
		float L_3 = L_2.___x_2;
		float L_4;
		L_4 = atan2f(L_1, L_3);
		V_0 = ((float)il2cpp_codegen_multiply(L_4, (57.2957802f)));
		// m_CurrentOffset = ShortestAngleDistance(m_BaseAngle, targetAngle, 360.0f);
		float L_5 = __this->___m_BaseAngle_0;
		float L_6 = V_0;
		float L_7;
		L_7 = XRKnob_ShortestAngleDistance_mD9CB60A4DA2B17654A28956C9FFD6AC828611979(L_5, L_6, (360.0f), NULL);
		__this->___m_CurrentOffset_1 = L_7;
		// if (Mathf.Abs(m_CurrentOffset) > 90.0f)
		float L_8 = __this->___m_CurrentOffset_1;
		float L_9;
		L_9 = fabsf(L_8);
		V_1 = (bool)((((float)L_9) > ((float)(90.0f)))? 1 : 0);
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		// m_BaseAngle = targetAngle;
		float L_11 = V_0;
		__this->___m_BaseAngle_0 = L_11;
		// m_AccumulatedAngle += m_CurrentOffset;
		float L_12 = __this->___m_AccumulatedAngle_2;
		float L_13 = __this->___m_CurrentOffset_1;
		__this->___m_AccumulatedAngle_2 = ((float)il2cpp_codegen_add(L_12, L_13));
		// m_CurrentOffset = 0.0f;
		__this->___m_CurrentOffset_1 = (0.0f);
	}

IL_006d:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackedRotation_SetTargetFromVector_mBDE9D3F3DFB8AEAFB6AAD748F726D6107384F0C3_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method)
{
	TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3*>(__this + _offset);
	TrackedRotation_SetTargetFromVector_mBDE9D3F3DFB8AEAFB6AAD748F726D6107384F0C3(_thisAdjusted, ___direction0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.Content.Interaction.XRKnob/ValueChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangeEvent__ctor_mBC41FCEA0AA4690860AE97314638CE07A22C2372 (ValueChangeEvent_t0481CAE6722F3B57C58A7EFCB81AAFE9F6F30E17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422(__this, UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
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
// UnityEngine.Transform UnityEngine.XR.Content.Interaction.XRLever::get_handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* XRLever_get_handle_mCF7B3AE06DB26AF7F8E4D681D8225E18694E779C (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Handle;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_Handle_68;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::set_handle(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_set_handle_mE5BAD09602B4EFD3AF101E6A3D82CF7E403E9B3B (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Handle = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___m_Handle_68 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Handle_68), (void*)L_0);
		return;
	}
}
// System.Boolean UnityEngine.XR.Content.Interaction.XRLever::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRLever_get_value_mC5E857376181178F64CCDE9D5C0DBA8B65372903 (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Value;
		bool L_0 = __this->___m_Value_69;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::set_value(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_set_value_m2082393D4D4491A7C05E680F3DC38E8C11A75B5B (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => SetValue(value, true);
		bool L_0 = ___value0;
		XRLever_SetValue_mDC69CA731001115DB1D6B073EFD0ED859652DFB9(__this, L_0, (bool)1, NULL);
		return;
	}
}
// System.Boolean UnityEngine.XR.Content.Interaction.XRLever::get_lockToValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRLever_get_lockToValue_m1DC8895C6D1F39B8AA3D7BE7471C72A7030D9BC7 (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	{
		// public bool lockToValue { get; set; }
		bool L_0 = __this->___U3ClockToValueU3Ek__BackingField_76;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::set_lockToValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_set_lockToValue_mE299BCBA0E8205E7874B946A39E6C1C9EF46311E (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool lockToValue { get; set; }
		bool L_0 = ___value0;
		__this->___U3ClockToValueU3Ek__BackingField_76 = L_0;
		return;
	}
}
// System.Single UnityEngine.XR.Content.Interaction.XRLever::get_maxAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRLever_get_maxAngle_m08FC1610AE5A2DB59C982BAFCF5723932D2B013A (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	{
		// get => m_MaxAngle;
		float L_0 = __this->___m_MaxAngle_71;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::set_maxAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_set_maxAngle_m0D574192F2F3B9D4C716A20D5A1E3DAC29715B17 (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_MaxAngle = value;
		float L_0 = ___value0;
		__this->___m_MaxAngle_71 = L_0;
		return;
	}
}
// System.Single UnityEngine.XR.Content.Interaction.XRLever::get_minAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRLever_get_minAngle_m4BE047FF9E577DE3A778E303E8281EEC61A9893E (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	{
		// get => m_MinAngle;
		float L_0 = __this->___m_MinAngle_72;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::set_minAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_set_minAngle_m91F2D95580C056E33366B47AC937786BE8EFA11A (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_MinAngle = value;
		float L_0 = ___value0;
		__this->___m_MinAngle_72 = L_0;
		return;
	}
}
// UnityEngine.Events.UnityEvent UnityEngine.XR.Content.Interaction.XRLever::get_onLeverActivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* XRLever_get_onLeverActivate_m4F52F081278D0A80B0905BEB7ECBF85914066138 (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent onLeverActivate => m_OnLeverActivate;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___m_OnLeverActivate_73;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent UnityEngine.XR.Content.Interaction.XRLever::get_onLeverDeactivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* XRLever_get_onLeverDeactivate_mFD732BB5033E3078BF393DD8A106B8915C0C2D1B (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent onLeverDeactivate => m_OnLeverDeactivate;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___m_OnLeverDeactivate_74;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_Start_m932E14A276B231886FDA59F07EF089121B26040A (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	{
		// SetValue(m_Value, true);
		bool L_0 = __this->___m_Value_69;
		XRLever_SetValue_mDC69CA731001115DB1D6B073EFD0ED859652DFB9(__this, L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_OnEnable_m73A3D7AAFB7D2378B60BFC267815F6CEDEE05A79 (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLever_EndGrab_m1B9DA5DD2083DBC832CF4BB25FC1739B52872021_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLever_StartGrab_m3546A1894506795A821042FABC3328880357FB4A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		XRBaseInteractable_OnEnable_m7BE7345371D6ED1B91C5EC90CDF8F34CE11E3366(__this, NULL);
		// selectEntered.AddListener(StartGrab);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_0;
		L_0 = XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline(__this, NULL);
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_1 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_1, __this, (intptr_t)((void*)XRLever_StartGrab_m3546A1894506795A821042FABC3328880357FB4A_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2(L_0, L_1, UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		// selectExited.AddListener(EndGrab);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_2;
		L_2 = XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline(__this, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_3 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_3, __this, (intptr_t)((void*)XRLever_EndGrab_m1B9DA5DD2083DBC832CF4BB25FC1739B52872021_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602(L_2, L_3, UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_OnDisable_mAA4D78C35CE78760B960A97743B983B7E24351C1 (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLever_EndGrab_m1B9DA5DD2083DBC832CF4BB25FC1739B52872021_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLever_StartGrab_m3546A1894506795A821042FABC3328880357FB4A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// selectEntered.RemoveListener(StartGrab);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_0;
		L_0 = XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline(__this, NULL);
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_1 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_1, __this, (intptr_t)((void*)XRLever_StartGrab_m3546A1894506795A821042FABC3328880357FB4A_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB(L_0, L_1, UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		// selectExited.RemoveListener(EndGrab);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_2;
		L_2 = XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline(__this, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_3 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_3, __this, (intptr_t)((void*)XRLever_EndGrab_m1B9DA5DD2083DBC832CF4BB25FC1739B52872021_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B(L_2, L_3, UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		// base.OnDisable();
		XRBaseInteractable_OnDisable_mB02958BFFAFF6C61A9FABE1D80056C3ABDCAB243(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::StartGrab(UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_StartGrab_m3546A1894506795A821042FABC3328880357FB4A (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* ___args0, const RuntimeMethod* method) 
{
	{
		// m_Interactor = args.interactorObject;
		SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = SelectEnterEventArgs_get_interactorObject_m97F5CFDD451F9E85F5B92FD2B3E668A43B1C146C(L_0, NULL);
		__this->___m_Interactor_75 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Interactor_75), (void*)L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::EndGrab(UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_EndGrab_m1B9DA5DD2083DBC832CF4BB25FC1739B52872021 (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* ___args0, const RuntimeMethod* method) 
{
	{
		// SetValue(m_Value, true);
		bool L_0 = __this->___m_Value_69;
		XRLever_SetValue_mDC69CA731001115DB1D6B073EFD0ED859652DFB9(__this, L_0, (bool)1, NULL);
		// m_Interactor = null;
		__this->___m_Interactor_75 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Interactor_75), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::ProcessInteractable(UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder/UpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_ProcessInteractable_m8CCE4D0C01A198A3A54E3BBE40CB2DDF7B8D1D3C (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, int32_t ___updatePhase0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// base.ProcessInteractable(updatePhase);
		int32_t L_0 = ___updatePhase0;
		XRBaseInteractable_ProcessInteractable_mD5D51C6B4F6673EE9380C4EA707DA67F7CF8B0F2(__this, L_0, NULL);
		// if (updatePhase == XRInteractionUpdateOrder.UpdatePhase.Dynamic)
		int32_t L_1 = ___updatePhase0;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// if (isSelected)
		bool L_3;
		L_3 = XRBaseInteractable_get_isSelected_m48487E7F2E3E1EDB6D9B6985FF146020F628B3CE(__this, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		// UpdateValue();
		XRLever_UpdateValue_m9E36BF1D16C71BEADDAB1BC298C8580663F989FA(__this, NULL);
	}

IL_0025:
	{
	}

IL_0026:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.XR.Content.Interaction.XRLever::GetLookDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XRLever_GetLookDirection_m60D20489074AC4ADA156F2E6C6D58EA798D3A10B (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 direction = m_Interactor.GetAttachTransform(this).position - m_Handle.position;
		RuntimeObject* L_0 = __this->___m_Interactor_75;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = InterfaceFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, RuntimeObject* >::Invoke(6 /* UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.IXRInteractor::GetAttachTransform(UnityEngine.XR.Interaction.Toolkit.IXRInteractable) */, IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var, L_0, __this);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___m_Handle_68;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_2, L_4, NULL);
		V_0 = L_5;
		// direction = transform.InverseTransformDirection(direction);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575(L_6, L_7, NULL);
		V_0 = L_8;
		// direction.x = 0;
		(&V_0)->___x_2 = (0.0f);
		// return direction.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		V_1 = L_9;
		goto IL_0046;
	}

IL_0046:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_1;
		return L_10;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::UpdateValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_UpdateValue_m9E36BF1D16C71BEADDAB1BC298C8580663F989FA (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		// var lookDirection = GetLookDirection();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = XRLever_GetLookDirection_m60D20489074AC4ADA156F2E6C6D58EA798D3A10B(__this, NULL);
		V_0 = L_0;
		// var lookAngle = Mathf.Atan2(lookDirection.z, lookDirection.y) * Mathf.Rad2Deg;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		float L_2 = L_1.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		float L_4 = L_3.___y_3;
		float L_5;
		L_5 = atan2f(L_2, L_4);
		V_1 = ((float)il2cpp_codegen_multiply(L_5, (57.2957802f)));
		// if (m_MinAngle < m_MaxAngle)
		float L_6 = __this->___m_MinAngle_72;
		float L_7 = __this->___m_MaxAngle_71;
		V_5 = (bool)((((float)L_6) < ((float)L_7))? 1 : 0);
		bool L_8 = V_5;
		if (!L_8)
		{
			goto IL_0049;
		}
	}
	{
		// lookAngle = Mathf.Clamp(lookAngle, m_MinAngle, m_MaxAngle);
		float L_9 = V_1;
		float L_10 = __this->___m_MinAngle_72;
		float L_11 = __this->___m_MaxAngle_71;
		float L_12;
		L_12 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_9, L_10, L_11, NULL);
		V_1 = L_12;
		goto IL_005c;
	}

IL_0049:
	{
		// lookAngle = Mathf.Clamp(lookAngle, m_MaxAngle, m_MinAngle);
		float L_13 = V_1;
		float L_14 = __this->___m_MaxAngle_71;
		float L_15 = __this->___m_MinAngle_72;
		float L_16;
		L_16 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_13, L_14, L_15, NULL);
		V_1 = L_16;
	}

IL_005c:
	{
		// var maxAngleDistance = Mathf.Abs(m_MaxAngle - lookAngle);
		float L_17 = __this->___m_MaxAngle_71;
		float L_18 = V_1;
		float L_19;
		L_19 = fabsf(((float)il2cpp_codegen_subtract(L_17, L_18)));
		V_2 = L_19;
		// var minAngleDistance = Mathf.Abs(m_MinAngle - lookAngle);
		float L_20 = __this->___m_MinAngle_72;
		float L_21 = V_1;
		float L_22;
		L_22 = fabsf(((float)il2cpp_codegen_subtract(L_20, L_21)));
		V_3 = L_22;
		// if (m_Value)
		bool L_23 = __this->___m_Value_69;
		V_6 = L_23;
		bool L_24 = V_6;
		if (!L_24)
		{
			goto IL_008e;
		}
	}
	{
		// maxAngleDistance *= (1.0f - k_LeverDeadZone);
		float L_25 = V_2;
		V_2 = ((float)il2cpp_codegen_multiply(L_25, (0.899999976f)));
		goto IL_0096;
	}

IL_008e:
	{
		// minAngleDistance *= (1.0f - k_LeverDeadZone);
		float L_26 = V_3;
		V_3 = ((float)il2cpp_codegen_multiply(L_26, (0.899999976f)));
	}

IL_0096:
	{
		// var newValue = (maxAngleDistance < minAngleDistance);
		float L_27 = V_2;
		float L_28 = V_3;
		V_4 = (bool)((((float)L_27) < ((float)L_28))? 1 : 0);
		// SetHandleAngle(lookAngle);
		float L_29 = V_1;
		XRLever_SetHandleAngle_m3717163640DE65E1A3456084C0F3A79C67E85D5E(__this, L_29, NULL);
		// SetValue(newValue);
		bool L_30 = V_4;
		XRLever_SetValue_mDC69CA731001115DB1D6B073EFD0ED859652DFB9(__this, L_30, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::SetValue(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_SetValue_mDC69CA731001115DB1D6B073EFD0ED859652DFB9 (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, bool ___isOn0, bool ___forceRotation1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* G_B4_0 = NULL;
	XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* G_B3_0 = NULL;
	float G_B5_0 = 0.0f;
	XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* G_B5_1 = NULL;
	int32_t G_B13_0 = 0;
	XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* G_B16_0 = NULL;
	XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* G_B15_0 = NULL;
	float G_B17_0 = 0.0f;
	XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* G_B17_1 = NULL;
	{
		// if (m_Value == isOn)
		bool L_0 = __this->___m_Value_69;
		bool L_1 = ___isOn0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		// if (forceRotation)
		bool L_3 = ___forceRotation1;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		// SetHandleAngle(m_Value ? m_MaxAngle : m_MinAngle);
		bool L_5 = __this->___m_Value_69;
		G_B3_0 = __this;
		if (L_5)
		{
			G_B4_0 = __this;
			goto IL_0025;
		}
	}
	{
		float L_6 = __this->___m_MinAngle_72;
		G_B5_0 = L_6;
		G_B5_1 = G_B3_0;
		goto IL_002b;
	}

IL_0025:
	{
		float L_7 = __this->___m_MaxAngle_71;
		G_B5_0 = L_7;
		G_B5_1 = G_B4_0;
	}

IL_002b:
	{
		NullCheck(G_B5_1);
		XRLever_SetHandleAngle_m3717163640DE65E1A3456084C0F3A79C67E85D5E(G_B5_1, G_B5_0, NULL);
	}

IL_0031:
	{
		// return;
		goto IL_0096;
	}

IL_0033:
	{
		// m_Value = isOn;
		bool L_8 = ___isOn0;
		__this->___m_Value_69 = L_8;
		// if (m_Value)
		bool L_9 = __this->___m_Value_69;
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		// m_OnLeverActivate.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_11 = __this->___m_OnLeverActivate_73;
		NullCheck(L_11);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_11, NULL);
		goto IL_0062;
	}

IL_0054:
	{
		// m_OnLeverDeactivate.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_12 = __this->___m_OnLeverDeactivate_74;
		NullCheck(L_12);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_12, NULL);
	}

IL_0062:
	{
		// if (!isSelected && (m_LockToValue || forceRotation))
		bool L_13;
		L_13 = XRBaseInteractable_get_isSelected_m48487E7F2E3E1EDB6D9B6985FF146020F628B3CE(__this, NULL);
		if (L_13)
		{
			goto IL_0074;
		}
	}
	{
		bool L_14 = __this->___m_LockToValue_70;
		bool L_15 = ___forceRotation1;
		G_B13_0 = ((int32_t)((int32_t)L_14|(int32_t)L_15));
		goto IL_0075;
	}

IL_0074:
	{
		G_B13_0 = 0;
	}

IL_0075:
	{
		V_3 = (bool)G_B13_0;
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0096;
		}
	}
	{
		// SetHandleAngle(m_Value ? m_MaxAngle : m_MinAngle);
		bool L_17 = __this->___m_Value_69;
		G_B15_0 = __this;
		if (L_17)
		{
			G_B16_0 = __this;
			goto IL_008a;
		}
	}
	{
		float L_18 = __this->___m_MinAngle_72;
		G_B17_0 = L_18;
		G_B17_1 = G_B15_0;
		goto IL_0090;
	}

IL_008a:
	{
		float L_19 = __this->___m_MaxAngle_71;
		G_B17_0 = L_19;
		G_B17_1 = G_B16_0;
	}

IL_0090:
	{
		NullCheck(G_B17_1);
		XRLever_SetHandleAngle_m3717163640DE65E1A3456084C0F3A79C67E85D5E(G_B17_1, G_B17_0, NULL);
	}

IL_0096:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::SetHandleAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_SetHandleAngle_m3717163640DE65E1A3456084C0F3A79C67E85D5E (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, float ___angle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (m_Handle != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_Handle_68;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// m_Handle.localRotation = Quaternion.Euler(angle, 0.0f, 0.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___m_Handle_68;
		float L_4 = ___angle0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_4, (0.0f), (0.0f), NULL);
		NullCheck(L_3);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_3, L_5, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_OnDrawGizmosSelected_m4AEEE83ED7BE1CCDF1FD2B4C6F33ABB7D7DDA621 (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	{
		// var angleStartPoint = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		V_0 = L_1;
		// if (m_Handle != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___m_Handle_68;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_3;
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// angleStartPoint = m_Handle.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___m_Handle_68;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		V_0 = L_6;
	}

IL_0029:
	{
		// var angleMaxPoint = angleStartPoint + transform.TransformDirection(Quaternion.Euler(m_MaxAngle, 0.0f, 0.0f) * Vector3.up) * k_AngleLength;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_9 = __this->___m_MaxAngle_71;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_9, (0.0f), (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_10, L_11, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_8, L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_13, (0.25f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_7, L_14, NULL);
		V_1 = L_15;
		// var angleMinPoint = angleStartPoint + transform.TransformDirection(Quaternion.Euler(m_MinAngle, 0.0f, 0.0f) * Vector3.up) * k_AngleLength;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_18 = __this->___m_MinAngle_72;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_18, (0.0f), (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_19, L_20, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_17, L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_22, (0.25f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_16, L_23, NULL);
		V_2 = L_24;
		// Gizmos.color = Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25;
		L_25 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_25, NULL);
		// Gizmos.DrawLine(angleStartPoint, angleMaxPoint);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_1;
		Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_26, L_27, NULL);
		// Gizmos.color = Color.red;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28;
		L_28 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_28, NULL);
		// Gizmos.DrawLine(angleStartPoint, angleMinPoint);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_2;
		Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_29, L_30, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_OnValidate_m033DF9CB5675C2270E73CF717BEF4B99BD55C770 (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* G_B2_0 = NULL;
	XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* G_B3_1 = NULL;
	{
		// SetHandleAngle(m_Value ? m_MaxAngle : m_MinAngle);
		bool L_0 = __this->___m_Value_69;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0012;
		}
	}
	{
		float L_1 = __this->___m_MinAngle_72;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0012:
	{
		float L_2 = __this->___m_MaxAngle_71;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		NullCheck(G_B3_1);
		XRLever_SetHandleAngle_m3717163640DE65E1A3456084C0F3A79C67E85D5E(G_B3_1, G_B3_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever__ctor_m95F423400F548FF5BB4A2FCC7F157A9047D08E51 (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Transform m_Handle = null;
		__this->___m_Handle_68 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Handle_68), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// bool m_Value = false;
		__this->___m_Value_69 = (bool)0;
		// float m_MaxAngle = 90.0f;
		__this->___m_MaxAngle_71 = (90.0f);
		// float m_MinAngle = -90.0f;
		__this->___m_MinAngle_72 = (-90.0f);
		// UnityEvent m_OnLeverActivate = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		__this->___m_OnLeverActivate_73 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OnLeverActivate_73), (void*)L_0);
		// UnityEvent m_OnLeverDeactivate = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_1, NULL);
		__this->___m_OnLeverDeactivate_74 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OnLeverDeactivate_74), (void*)L_1);
		il2cpp_codegen_runtime_class_init_inline(XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_il2cpp_TypeInfo_var);
		XRBaseInteractable__ctor_m0B36974579D0C9F2799C4C5DE77B136C291247F4(__this, NULL);
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
// UnityEngine.Transform UnityEngine.XR.Content.Interaction.XRPushButton::get_button()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* XRPushButton_get_button_m3AC0BBA87D91B9EE7CBDB5744A71C27D91B26694 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Button;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_Button_67;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::set_button(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_set_button_mE5F8503A2C4DBEF54F302B3316225C2470DACB85 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Button = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___m_Button_67 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Button_67), (void*)L_0);
		return;
	}
}
// System.Single UnityEngine.XR.Content.Interaction.XRPushButton::get_pressDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRPushButton_get_pressDistance_m04FD3DEFD22D628F5C5DA729D2F40A9CEF4DFB0C (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	{
		// get => m_PressDistance;
		float L_0 = __this->___m_PressDistance_68;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::set_pressDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_set_pressDistance_mF7C54FEE2ED2735679ED6D6CE9404E000C9E05EA (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_PressDistance = value;
		float L_0 = ___value0;
		__this->___m_PressDistance_68 = L_0;
		return;
	}
}
// System.Single UnityEngine.XR.Content.Interaction.XRPushButton::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRPushButton_get_value_m345BB8EFF122A48A832AA377B60532777751A328 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	{
		// public float value => m_Value;
		float L_0 = __this->___m_Value_78;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent UnityEngine.XR.Content.Interaction.XRPushButton::get_onPress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* XRPushButton_get_onPress_mBF0BE1B70DAFB6EC67934B1080FAD0C1B9B02AC0 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent onPress => m_OnPress;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___m_OnPress_73;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent UnityEngine.XR.Content.Interaction.XRPushButton::get_onRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* XRPushButton_get_onRelease_m7B6751EE5D5EC96F8D6F262FFA9A31DB42CFBE55 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent onRelease => m_OnRelease;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___m_OnRelease_74;
		return L_0;
	}
}
// UnityEngine.XR.Content.Interaction.XRPushButton/ValueChangeEvent UnityEngine.XR.Content.Interaction.XRPushButton::get_onValueChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueChangeEvent_t6ABB63D6EC8E3745851A79F2AA32B8550933F214* XRPushButton_get_onValueChange_mC59782A7E7E98828029249D8C304C21F396621A7 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	{
		// public ValueChangeEvent onValueChange => m_OnValueChange;
		ValueChangeEvent_t6ABB63D6EC8E3745851A79F2AA32B8550933F214* L_0 = __this->___m_OnValueChange_75;
		return L_0;
	}
}
// System.Boolean UnityEngine.XR.Content.Interaction.XRPushButton::get_toggleValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPushButton_get_toggleValue_m037879BE9FB7D25D8CBD1FD4B7A810D1B38D7C09 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		// get => m_ToggleButton && m_Toggled;
		bool L_0 = __this->___m_ToggleButton_72;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___m_Toggled_77;
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0011;
	}

IL_0010:
	{
		G_B3_0 = 0;
	}

IL_0011:
	{
		return (bool)G_B3_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::set_toggleValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_set_toggleValue_mFC816F2B6C597A72551E524BBEB03A106DEDB2F1 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, bool ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!m_ToggleButton)
		bool L_0 = __this->___m_ToggleButton_72;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		goto IL_003d;
	}

IL_0010:
	{
		// m_Toggled = value;
		bool L_2 = ___value0;
		__this->___m_Toggled_77 = L_2;
		// if (m_Toggled)
		bool L_3 = __this->___m_Toggled_77;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		// SetButtonHeight(-m_PressDistance);
		float L_5 = __this->___m_PressDistance_68;
		XRPushButton_SetButtonHeight_mB6E99F952CB40DDF4A21BF999CBB74A6E7A9B0D6(__this, ((-L_5)), NULL);
		goto IL_003d;
	}

IL_0031:
	{
		// SetButtonHeight(0.0f);
		XRPushButton_SetButtonHeight_mB6E99F952CB40DDF4A21BF999CBB74A6E7A9B0D6(__this, (0.0f), NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.Content.Interaction.XRPushButton::IsHoverableBy(UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPushButton_IsHoverableBy_mF317B49425423246D95911A45D1C821E295EC376 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, RuntimeObject* ___interactor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (interactor is XRRayInteractor)
		RuntimeObject* L_0 = ___interactor0;
		V_0 = (bool)((!(((RuntimeObject*)(XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76*)((XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76*)IsInstClass((RuntimeObject*)L_0, XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_001c;
	}

IL_0012:
	{
		// return base.IsHoverableBy(interactor);
		RuntimeObject* L_2 = ___interactor0;
		bool L_3;
		L_3 = XRBaseInteractable_IsHoverableBy_mA746CF4F19A39315495C004ED35EF6AF75AA8429(__this, L_2, NULL);
		V_1 = L_3;
		goto IL_001c;
	}

IL_001c:
	{
		// }
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_Start_m223746CF20D6979F62B77951D69DD249B789FF44 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (m_Button != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_Button_67;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// m_BaseButtonPosition = m_Button.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___m_Button_67;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		__this->___m_BaseButtonPosition_79 = L_4;
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_OnEnable_mEAD16D16110DBF83BF6875C8992B22745DE3DFCA (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRPushButton_EndHover_mDE942B9C5F9E34BFA025F383C0DFFDF108868BAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRPushButton_StartHover_m9483BD357F3CB7CA4380BFAA8CB7D42D0AEA2D44_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// base.OnEnable();
		XRBaseInteractable_OnEnable_m7BE7345371D6ED1B91C5EC90CDF8F34CE11E3366(__this, NULL);
		// if (m_Toggled)
		bool L_0 = __this->___m_Toggled_77;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// SetButtonHeight(-m_PressDistance);
		float L_2 = __this->___m_PressDistance_68;
		XRPushButton_SetButtonHeight_mB6E99F952CB40DDF4A21BF999CBB74A6E7A9B0D6(__this, ((-L_2)), NULL);
		goto IL_002e;
	}

IL_0022:
	{
		// SetButtonHeight(0.0f);
		XRPushButton_SetButtonHeight_mB6E99F952CB40DDF4A21BF999CBB74A6E7A9B0D6(__this, (0.0f), NULL);
	}

IL_002e:
	{
		// hoverEntered.AddListener(StartHover);
		HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* L_3;
		L_3 = XRBaseInteractable_get_hoverEntered_m49384274F14DF80AC8FEFC1D214B7ACD41C67FB5_inline(__this, NULL);
		UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* L_4 = (UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*)il2cpp_codegen_object_new(UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction_1__ctor_m3C8E30AEA90302CA8E564E339058E839E40196F4(L_4, __this, (intptr_t)((void*)XRPushButton_StartHover_m9483BD357F3CB7CA4380BFAA8CB7D42D0AEA2D44_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F(L_3, L_4, UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F_RuntimeMethod_var);
		// hoverExited.AddListener(EndHover);
		HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* L_5;
		L_5 = XRBaseInteractable_get_hoverExited_m6A0E55603A368A85D086A00AEFD032A434CF6162_inline(__this, NULL);
		UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* L_6 = (UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*)il2cpp_codegen_object_new(UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityAction_1__ctor_m917A650EF730B0F8CDB9227A03A45B24FB54BCF8(L_6, __this, (intptr_t)((void*)XRPushButton_EndHover_mDE942B9C5F9E34BFA025F383C0DFFDF108868BAB_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722(L_5, L_6, UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_OnDisable_m5D35E3F3F91256002ACE66B0C4CD06ECE4FC960B (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRPushButton_EndHover_mDE942B9C5F9E34BFA025F383C0DFFDF108868BAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRPushButton_StartHover_m9483BD357F3CB7CA4380BFAA8CB7D42D0AEA2D44_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hoverEntered.RemoveListener(StartHover);
		HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* L_0;
		L_0 = XRBaseInteractable_get_hoverEntered_m49384274F14DF80AC8FEFC1D214B7ACD41C67FB5_inline(__this, NULL);
		UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* L_1 = (UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*)il2cpp_codegen_object_new(UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_m3C8E30AEA90302CA8E564E339058E839E40196F4(L_1, __this, (intptr_t)((void*)XRPushButton_StartHover_m9483BD357F3CB7CA4380BFAA8CB7D42D0AEA2D44_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33(L_0, L_1, UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33_RuntimeMethod_var);
		// hoverExited.RemoveListener(EndHover);
		HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* L_2;
		L_2 = XRBaseInteractable_get_hoverExited_m6A0E55603A368A85D086A00AEFD032A434CF6162_inline(__this, NULL);
		UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* L_3 = (UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*)il2cpp_codegen_object_new(UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_m917A650EF730B0F8CDB9227A03A45B24FB54BCF8(L_3, __this, (intptr_t)((void*)XRPushButton_EndHover_mDE942B9C5F9E34BFA025F383C0DFFDF108868BAB_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78(L_2, L_3, UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78_RuntimeMethod_var);
		// base.OnDisable();
		XRBaseInteractable_OnDisable_mB02958BFFAFF6C61A9FABE1D80056C3ABDCAB243(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::StartHover(UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_StartHover_m9483BD357F3CB7CA4380BFAA8CB7D42D0AEA2D44 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, HoverEnterEventArgs_t4BCFA6BFD8D007CEE2D72D9D61DAED6C72F8CE2E* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mDE60E023087C042228D40A07287BE805F5445B6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_HoveringInteractors.Add(args.interactorObject, new PressInfo { m_Interactor = args.interactorObject });
		Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* L_0 = __this->___m_HoveringInteractors_80;
		HoverEnterEventArgs_t4BCFA6BFD8D007CEE2D72D9D61DAED6C72F8CE2E* L_1 = ___args0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = HoverEnterEventArgs_get_interactorObject_m9735CAB1FCE64F6DD65498458C582463A0FB5D19(L_1, NULL);
		PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* L_3 = (PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C*)il2cpp_codegen_object_new(PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		PressInfo__ctor_m772C95227A64BD660EBF391384EED3B0BEFCFC15(L_3, NULL);
		PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* L_4 = L_3;
		HoverEnterEventArgs_t4BCFA6BFD8D007CEE2D72D9D61DAED6C72F8CE2E* L_5 = ___args0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = HoverEnterEventArgs_get_interactorObject_m9735CAB1FCE64F6DD65498458C582463A0FB5D19(L_5, NULL);
		NullCheck(L_4);
		L_4->___m_Interactor_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___m_Interactor_0), (void*)L_6);
		NullCheck(L_0);
		Dictionary_2_Add_mDE60E023087C042228D40A07287BE805F5445B6C(L_0, L_2, L_4, Dictionary_2_Add_mDE60E023087C042228D40A07287BE805F5445B6C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::EndHover(UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_EndHover_mDE942B9C5F9E34BFA025F383C0DFFDF108868BAB (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, HoverExitEventArgs_tFFBECDDAF90BF90AA3B7282FAEF1D8E5D19A5AD6* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m86CB67BAD8B42AC3CA321DC66D8AF594F8693EDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mC8FB79F3EC3C89FCD55E73EEE51EB093F058E0BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		// m_HoveringInteractors.Remove(args.interactorObject);
		Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* L_0 = __this->___m_HoveringInteractors_80;
		HoverExitEventArgs_tFFBECDDAF90BF90AA3B7282FAEF1D8E5D19A5AD6* L_1 = ___args0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = HoverExitEventArgs_get_interactorObject_m0018175DBF0540C147451C1E11B5EE5DA64CB150(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_Remove_m86CB67BAD8B42AC3CA321DC66D8AF594F8693EDE(L_0, L_2, Dictionary_2_Remove_m86CB67BAD8B42AC3CA321DC66D8AF594F8693EDE_RuntimeMethod_var);
		// if (m_HoveringInteractors.Count == 0)
		Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* L_4 = __this->___m_HoveringInteractors_80;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mC8FB79F3EC3C89FCD55E73EEE51EB093F058E0BD(L_4, Dictionary_2_get_Count_mC8FB79F3EC3C89FCD55E73EEE51EB093F058E0BD_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		// if (m_ToggleButton && m_Toggled)
		bool L_7 = __this->___m_ToggleButton_72;
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		bool L_8 = __this->___m_Toggled_77;
		G_B4_0 = ((int32_t)(L_8));
		goto IL_0037;
	}

IL_0036:
	{
		G_B4_0 = 0;
	}

IL_0037:
	{
		V_1 = (bool)G_B4_0;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_004b;
		}
	}
	{
		// SetButtonHeight(-m_PressDistance);
		float L_10 = __this->___m_PressDistance_68;
		XRPushButton_SetButtonHeight_mB6E99F952CB40DDF4A21BF999CBB74A6E7A9B0D6(__this, ((-L_10)), NULL);
		goto IL_0057;
	}

IL_004b:
	{
		// SetButtonHeight(0.0f);
		XRPushButton_SetButtonHeight_mB6E99F952CB40DDF4A21BF999CBB74A6E7A9B0D6(__this, (0.0f), NULL);
	}

IL_0057:
	{
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::ProcessInteractable(UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder/UpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_ProcessInteractable_m4C2CE6AA75532791DC9DBA9C88B96DD08B889799 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, int32_t ___updatePhase0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mC8FB79F3EC3C89FCD55E73EEE51EB093F058E0BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// base.ProcessInteractable(updatePhase);
		int32_t L_0 = ___updatePhase0;
		XRBaseInteractable_ProcessInteractable_mD5D51C6B4F6673EE9380C4EA707DA67F7CF8B0F2(__this, L_0, NULL);
		// if (updatePhase == XRInteractionUpdateOrder.UpdatePhase.Dynamic)
		int32_t L_1 = ___updatePhase0;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// if (m_HoveringInteractors.Count > 0)
		Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* L_3 = __this->___m_HoveringInteractors_80;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Dictionary_2_get_Count_mC8FB79F3EC3C89FCD55E73EEE51EB093F058E0BD(L_3, Dictionary_2_get_Count_mC8FB79F3EC3C89FCD55E73EEE51EB093F058E0BD_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		// UpdatePress();
		XRPushButton_UpdatePress_m3ED769AB20F6E97BFAFAD1D5E05114F3A7589906(__this, NULL);
	}

IL_002d:
	{
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::UpdatePress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_UpdatePress_m3ED769AB20F6E97BFAFAD1D5E05114F3A7589906 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mA89399B1E83FA8A54C9AC701F8E2D6C11ACAF68B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3022840D5F4E09DFA22C94D020DF1B1FFDCB95EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7A1722FD044A8E6BD27ACCBFF53B0B4A7E632885_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mAC466C0241DC56E461D88076BF64403B2EA15DE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_mB6EBFD4C49393524358EBA8D1776A6ADFFB814C6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	bool V_3 = false;
	Enumerator_t2B6E17F326D700E0F1BA537F5A36AAE4EB1CE8BB V_4;
	memset((&V_4), 0, sizeof(V_4));
	PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* V_5 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_6 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B23_0 = 0;
	{
		// var minimumHeight = 0.0f;
		V_0 = (0.0f);
		// if (m_ToggleButton && m_Toggled)
		bool L_0 = __this->___m_ToggleButton_72;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		bool L_1 = __this->___m_Toggled_77;
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_3 = (bool)G_B3_0;
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// minimumHeight = -m_PressDistance;
		float L_3 = __this->___m_PressDistance_68;
		V_0 = ((-L_3));
	}

IL_0024:
	{
		// foreach (var pressInfo in m_HoveringInteractors.Values)
		Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* L_4 = __this->___m_HoveringInteractors_80;
		NullCheck(L_4);
		ValueCollection_t273ED87DC7817D2739CBA14EE77F17F33F78B511* L_5;
		L_5 = Dictionary_2_get_Values_mA89399B1E83FA8A54C9AC701F8E2D6C11ACAF68B(L_4, Dictionary_2_get_Values_mA89399B1E83FA8A54C9AC701F8E2D6C11ACAF68B_RuntimeMethod_var);
		NullCheck(L_5);
		Enumerator_t2B6E17F326D700E0F1BA537F5A36AAE4EB1CE8BB L_6;
		L_6 = ValueCollection_GetEnumerator_mB6EBFD4C49393524358EBA8D1776A6ADFFB814C6(L_5, ValueCollection_GetEnumerator_mB6EBFD4C49393524358EBA8D1776A6ADFFB814C6_RuntimeMethod_var);
		V_4 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0110:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3022840D5F4E09DFA22C94D020DF1B1FFDCB95EC((&V_4), Enumerator_Dispose_m3022840D5F4E09DFA22C94D020DF1B1FFDCB95EC_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0102_1;
			}

IL_003c_1:
			{
				// foreach (var pressInfo in m_HoveringInteractors.Values)
				PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* L_7;
				L_7 = Enumerator_get_Current_mAC466C0241DC56E461D88076BF64403B2EA15DE7_inline((&V_4), Enumerator_get_Current_mAC466C0241DC56E461D88076BF64403B2EA15DE7_RuntimeMethod_var);
				V_5 = L_7;
				// var interactorTransform = pressInfo.m_Interactor.GetAttachTransform(this);
				PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* L_8 = V_5;
				NullCheck(L_8);
				RuntimeObject* L_9 = L_8->___m_Interactor_0;
				NullCheck(L_9);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
				L_10 = InterfaceFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, RuntimeObject* >::Invoke(6 /* UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.IXRInteractor::GetAttachTransform(UnityEngine.XR.Interaction.Toolkit.IXRInteractable) */, IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var, L_9, __this);
				V_6 = L_10;
				// var localOffset = transform.InverseTransformVector(interactorTransform.position - m_BaseButtonPosition);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
				L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = V_6;
				NullCheck(L_12);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
				L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = __this->___m_BaseButtonPosition_79;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
				L_15 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_13, L_14, NULL);
				NullCheck(L_11);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
				L_16 = Transform_InverseTransformVector_mBBA687CE32C0394FC9AB4F273D4E4A11F53FB044(L_11, L_15, NULL);
				V_7 = L_16;
				// var withinButtonRegion = (Mathf.Abs(localOffset.x) < m_ButtonSize && Mathf.Abs(localOffset.z) < m_ButtonSize);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_7;
				float L_18 = L_17.___x_2;
				float L_19;
				L_19 = fabsf(L_18);
				float L_20 = __this->___m_ButtonSize_71;
				if ((!(((float)L_19) < ((float)L_20))))
				{
					goto IL_009e_1;
				}
			}
			{
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_7;
				float L_22 = L_21.___z_4;
				float L_23;
				L_23 = fabsf(L_22);
				float L_24 = __this->___m_ButtonSize_71;
				G_B10_0 = ((((float)L_23) < ((float)L_24))? 1 : 0);
				goto IL_009f_1;
			}

IL_009e_1:
			{
				G_B10_0 = 0;
			}

IL_009f_1:
			{
				V_8 = (bool)G_B10_0;
				// if (withinButtonRegion)
				bool L_25 = V_8;
				V_9 = L_25;
				bool L_26 = V_9;
				if (!L_26)
				{
					goto IL_00f8_1;
				}
			}
			{
				// if (!pressInfo.m_InPressRegion)
				PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* L_27 = V_5;
				NullCheck(L_27);
				bool L_28 = L_27->___m_InPressRegion_1;
				V_10 = (bool)((((int32_t)L_28) == ((int32_t)0))? 1 : 0);
				bool L_29 = V_10;
				if (!L_29)
				{
					goto IL_00d2_1;
				}
			}
			{
				// pressInfo.m_WrongSide = (localOffset.y < m_ButtonOffset);
				PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* L_30 = V_5;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_7;
				float L_32 = L_31.___y_3;
				float L_33 = __this->___m_ButtonOffset_70;
				NullCheck(L_30);
				L_30->___m_WrongSide_2 = (bool)((((float)L_32) < ((float)L_33))? 1 : 0);
			}

IL_00d2_1:
			{
				// if (!pressInfo.m_WrongSide)
				PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* L_34 = V_5;
				NullCheck(L_34);
				bool L_35 = L_34->___m_WrongSide_2;
				V_11 = (bool)((((int32_t)L_35) == ((int32_t)0))? 1 : 0);
				bool L_36 = V_11;
				if (!L_36)
				{
					goto IL_00f7_1;
				}
			}
			{
				// minimumHeight = Mathf.Min(minimumHeight, localOffset.y - m_ButtonOffset);
				float L_37 = V_0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_7;
				float L_39 = L_38.___y_3;
				float L_40 = __this->___m_ButtonOffset_70;
				float L_41;
				L_41 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_37, ((float)il2cpp_codegen_subtract(L_39, L_40)), NULL);
				V_0 = L_41;
			}

IL_00f7_1:
			{
			}

IL_00f8_1:
			{
				// pressInfo.m_InPressRegion = withinButtonRegion;
				PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* L_42 = V_5;
				bool L_43 = V_8;
				NullCheck(L_42);
				L_42->___m_InPressRegion_1 = L_43;
			}

IL_0102_1:
			{
				// foreach (var pressInfo in m_HoveringInteractors.Values)
				bool L_44;
				L_44 = Enumerator_MoveNext_m7A1722FD044A8E6BD27ACCBFF53B0B4A7E632885((&V_4), Enumerator_MoveNext_m7A1722FD044A8E6BD27ACCBFF53B0B4A7E632885_RuntimeMethod_var);
				if (L_44)
				{
					goto IL_003c_1;
				}
			}
			{
				goto IL_011f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011f:
	{
		// minimumHeight = Mathf.Max(minimumHeight, -(m_PressDistance + m_PressBuffer));
		float L_45 = V_0;
		float L_46 = __this->___m_PressDistance_68;
		float L_47 = __this->___m_PressBuffer_69;
		float L_48;
		L_48 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_45, ((-((float)il2cpp_codegen_add(L_46, L_47)))), NULL);
		V_0 = L_48;
		// var pressed = m_ToggleButton ? (minimumHeight <= -(m_PressDistance + m_PressBuffer)) : (minimumHeight < -m_PressDistance);
		bool L_49 = __this->___m_ToggleButton_72;
		if (L_49)
		{
			goto IL_0148;
		}
	}
	{
		float L_50 = V_0;
		float L_51 = __this->___m_PressDistance_68;
		G_B23_0 = ((((float)L_50) < ((float)((-L_51))))? 1 : 0);
		goto IL_015c;
	}

IL_0148:
	{
		float L_52 = V_0;
		float L_53 = __this->___m_PressDistance_68;
		float L_54 = __this->___m_PressBuffer_69;
		G_B23_0 = ((((int32_t)((!(((float)L_52) <= ((float)((-((float)il2cpp_codegen_add(L_53, L_54)))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_015c:
	{
		V_1 = (bool)G_B23_0;
		// var currentDistance = Mathf.Max(0f, -minimumHeight - m_PressBuffer);
		float L_55 = V_0;
		float L_56 = __this->___m_PressBuffer_69;
		float L_57;
		L_57 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((0.0f), ((float)il2cpp_codegen_subtract(((-L_55)), L_56)), NULL);
		V_2 = L_57;
		// m_Value = currentDistance / m_PressDistance;
		float L_58 = V_2;
		float L_59 = __this->___m_PressDistance_68;
		__this->___m_Value_78 = ((float)(L_58/L_59));
		// if (m_ToggleButton)
		bool L_60 = __this->___m_ToggleButton_72;
		V_12 = L_60;
		bool L_61 = V_12;
		if (!L_61)
		{
			goto IL_01de;
		}
	}
	{
		// if (pressed)
		bool L_62 = V_1;
		V_13 = L_62;
		bool L_63 = V_13;
		if (!L_63)
		{
			goto IL_01db;
		}
	}
	{
		// if (!m_Pressed)
		bool L_64 = __this->___m_Pressed_76;
		V_14 = (bool)((((int32_t)L_64) == ((int32_t)0))? 1 : 0);
		bool L_65 = V_14;
		if (!L_65)
		{
			goto IL_01da;
		}
	}
	{
		// m_Toggled = !m_Toggled;
		bool L_66 = __this->___m_Toggled_77;
		__this->___m_Toggled_77 = (bool)((((int32_t)L_66) == ((int32_t)0))? 1 : 0);
		// if (m_Toggled)
		bool L_67 = __this->___m_Toggled_77;
		V_15 = L_67;
		bool L_68 = V_15;
		if (!L_68)
		{
			goto IL_01cd;
		}
	}
	{
		// m_OnPress.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_69 = __this->___m_OnPress_73;
		NullCheck(L_69);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_69, NULL);
		goto IL_01d9;
	}

IL_01cd:
	{
		// m_OnRelease.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_70 = __this->___m_OnRelease_74;
		NullCheck(L_70);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_70, NULL);
	}

IL_01d9:
	{
	}

IL_01da:
	{
	}

IL_01db:
	{
		goto IL_0220;
	}

IL_01de:
	{
		// if (pressed)
		bool L_71 = V_1;
		V_16 = L_71;
		bool L_72 = V_16;
		if (!L_72)
		{
			goto IL_0205;
		}
	}
	{
		// if (!m_Pressed)
		bool L_73 = __this->___m_Pressed_76;
		V_17 = (bool)((((int32_t)L_73) == ((int32_t)0))? 1 : 0);
		bool L_74 = V_17;
		if (!L_74)
		{
			goto IL_0202;
		}
	}
	{
		// m_OnPress.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_75 = __this->___m_OnPress_73;
		NullCheck(L_75);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_75, NULL);
	}

IL_0202:
	{
		goto IL_021f;
	}

IL_0205:
	{
		// if (m_Pressed)
		bool L_76 = __this->___m_Pressed_76;
		V_18 = L_76;
		bool L_77 = V_18;
		if (!L_77)
		{
			goto IL_021e;
		}
	}
	{
		// m_OnRelease.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_78 = __this->___m_OnRelease_74;
		NullCheck(L_78);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_78, NULL);
	}

IL_021e:
	{
	}

IL_021f:
	{
	}

IL_0220:
	{
		// m_Pressed = pressed;
		bool L_79 = V_1;
		__this->___m_Pressed_76 = L_79;
		// if (m_Pressed)
		bool L_80 = __this->___m_Pressed_76;
		V_19 = L_80;
		bool L_81 = V_19;
		if (!L_81)
		{
			goto IL_0245;
		}
	}
	{
		// m_OnValueChange.Invoke(m_Value);
		ValueChangeEvent_t6ABB63D6EC8E3745851A79F2AA32B8550933F214* L_82 = __this->___m_OnValueChange_75;
		float L_83 = __this->___m_Value_78;
		NullCheck(L_82);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_82, L_83, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
	}

IL_0245:
	{
		// SetButtonHeight(minimumHeight);
		float L_84 = V_0;
		XRPushButton_SetButtonHeight_mB6E99F952CB40DDF4A21BF999CBB74A6E7A9B0D6(__this, L_84, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::SetButtonHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_SetButtonHeight_mB6E99F952CB40DDF4A21BF999CBB74A6E7A9B0D6 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, float ___height0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// if (m_Button == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_Button_67;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		goto IL_0034;
	}

IL_0013:
	{
		// Vector3 newPosition = m_Button.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___m_Button_67;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_3, NULL);
		V_0 = L_4;
		// newPosition.y = height;
		float L_5 = ___height0;
		(&V_0)->___y_3 = L_5;
		// m_Button.localPosition = newPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___m_Button_67;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		NullCheck(L_6);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_6, L_7, NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_OnDrawGizmosSelected_mC9E10B907162EBF3803EAD773A5EA581EF8D76D7 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// var pressStartPoint = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_0 = L_0;
		// if (m_Button != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___m_Button_67;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// pressStartPoint = m_Button.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___m_Button_67;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_4, NULL);
		V_0 = L_5;
	}

IL_0025:
	{
		// pressStartPoint.y += m_ButtonOffset - (m_PressDistance * 0.5f);
		float* L_6 = (&(&V_0)->___y_3);
		float* L_7 = L_6;
		float L_8 = *((float*)L_7);
		float L_9 = __this->___m_ButtonOffset_70;
		float L_10 = __this->___m_PressDistance_68;
		*((float*)L_7) = (float)((float)il2cpp_codegen_add(L_8, ((float)il2cpp_codegen_subtract(L_9, ((float)il2cpp_codegen_multiply(L_10, (0.5f)))))));
		// Gizmos.color = Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_11, NULL);
		// Gizmos.matrix = transform.localToWorldMatrix;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13;
		L_13 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_12, NULL);
		Gizmos_set_matrix_m100B4ACA7FBDFF65CE1BD0000E9E0D7566147A15(L_13, NULL);
		// Gizmos.DrawWireCube(pressStartPoint, new Vector3(m_ButtonSize, m_PressDistance, m_ButtonSize));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		float L_15 = __this->___m_ButtonSize_71;
		float L_16 = __this->___m_PressDistance_68;
		float L_17 = __this->___m_ButtonSize_71;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), L_15, L_16, L_17, /*hidden argument*/NULL);
		Gizmos_DrawWireCube_m343533B3955A2D04A8638280D0EF537274A1FD8B(L_14, L_18, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_OnValidate_mE1307C6FFC39A82E1A3C9CA558F22D95AAE41A0C (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	{
		// SetButtonHeight(0.0f);
		XRPushButton_SetButtonHeight_mB6E99F952CB40DDF4A21BF999CBB74A6E7A9B0D6(__this, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton__ctor_m8DF438AA2D6C1AD0735FDF04F72D039F51EE02AF (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m6C9DD4CD4BED93B2CFF97A7DD954AA34D2E227A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Transform m_Button = null;
		__this->___m_Button_67 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Button_67), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// float m_PressDistance = 0.1f;
		__this->___m_PressDistance_68 = (0.100000001f);
		// float m_PressBuffer = 0.01f;
		__this->___m_PressBuffer_69 = (0.00999999978f);
		// float m_ButtonOffset = 0.0f;
		__this->___m_ButtonOffset_70 = (0.0f);
		// float m_ButtonSize = 0.1f;
		__this->___m_ButtonSize_71 = (0.100000001f);
		// bool m_ToggleButton = false;
		__this->___m_ToggleButton_72 = (bool)0;
		// bool m_Pressed = false;
		__this->___m_Pressed_76 = (bool)0;
		// bool m_Toggled = false;
		__this->___m_Toggled_77 = (bool)0;
		// float m_Value = 0f;
		__this->___m_Value_78 = (0.0f);
		// Vector3 m_BaseButtonPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___m_BaseButtonPosition_79 = L_0;
		// Dictionary<IXRHoverInteractor, PressInfo> m_HoveringInteractors = new Dictionary<IXRHoverInteractor, PressInfo>();
		Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* L_1 = (Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6*)il2cpp_codegen_object_new(Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m6C9DD4CD4BED93B2CFF97A7DD954AA34D2E227A9(L_1, Dictionary_2__ctor_m6C9DD4CD4BED93B2CFF97A7DD954AA34D2E227A9_RuntimeMethod_var);
		__this->___m_HoveringInteractors_80 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HoveringInteractors_80), (void*)L_1);
		il2cpp_codegen_runtime_class_init_inline(XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_il2cpp_TypeInfo_var);
		XRBaseInteractable__ctor_m0B36974579D0C9F2799C4C5DE77B136C291247F4(__this, NULL);
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
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PressInfo__ctor_m772C95227A64BD660EBF391384EED3B0BEFCFC15 (PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* __this, const RuntimeMethod* method) 
{
	{
		// internal bool m_InPressRegion = false;
		__this->___m_InPressRegion_1 = (bool)0;
		// internal bool m_WrongSide = false;
		__this->___m_WrongSide_2 = (bool)0;
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
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton/ValueChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangeEvent__ctor_mD835B61ABEA661F3D9E1532BA28B36DC4C11926B (ValueChangeEvent_t6ABB63D6EC8E3745851A79F2AA32B8550933F214* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422(__this, UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
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
// System.Single UnityEngine.XR.Content.Interaction.XRSlider::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRSlider_get_value_m982492407CE6474075F5752970F18C3D9A9A6E03 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Value;
		float L_0 = __this->___m_Value_68;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::set_value(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_set_value_m4E443CBC1E64A2AEAB4B67E008B0DB565946E2D5 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// SetValue(value);
		float L_0 = ___value0;
		XRSlider_SetValue_mDCA5611C423F4ACC175FF9622C1BC5B07310C465(__this, L_0, NULL);
		// SetSliderPosition(value);
		float L_1 = ___value0;
		XRSlider_SetSliderPosition_m868C3A5C8660AB80D6080F1C4B8CD26148070B02(__this, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.XR.Content.Interaction.XRSlider/ValueChangeEvent UnityEngine.XR.Content.Interaction.XRSlider::get_onValueChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueChangeEvent_t97011904F6BAB13C48427F4EB2F7F1EB924E2ACD* XRSlider_get_onValueChange_m9EDED400A642BE1D728F58BAC0F9558315EB5B89 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, const RuntimeMethod* method) 
{
	{
		// public ValueChangeEvent onValueChange => m_OnValueChange;
		ValueChangeEvent_t97011904F6BAB13C48427F4EB2F7F1EB924E2ACD* L_0 = __this->___m_OnValueChange_71;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_Start_m5B7EBA3A78BE69A9FBCD18443642F6E02FFB08F5 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, const RuntimeMethod* method) 
{
	{
		// SetValue(m_Value);
		float L_0 = __this->___m_Value_68;
		XRSlider_SetValue_mDCA5611C423F4ACC175FF9622C1BC5B07310C465(__this, L_0, NULL);
		// SetSliderPosition(m_Value);
		float L_1 = __this->___m_Value_68;
		XRSlider_SetSliderPosition_m868C3A5C8660AB80D6080F1C4B8CD26148070B02(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_OnEnable_mD5F09516D73D82B1F64915F3DDE786707151C999 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSlider_EndGrab_mA9D239E474FB31C0D6909D28B51FAA0A6F2147D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSlider_StartGrab_m48F19B86B4802EE3275548105AE49B7F3C5CEF0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		XRBaseInteractable_OnEnable_m7BE7345371D6ED1B91C5EC90CDF8F34CE11E3366(__this, NULL);
		// selectEntered.AddListener(StartGrab);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_0;
		L_0 = XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline(__this, NULL);
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_1 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_1, __this, (intptr_t)((void*)XRSlider_StartGrab_m48F19B86B4802EE3275548105AE49B7F3C5CEF0E_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2(L_0, L_1, UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		// selectExited.AddListener(EndGrab);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_2;
		L_2 = XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline(__this, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_3 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_3, __this, (intptr_t)((void*)XRSlider_EndGrab_mA9D239E474FB31C0D6909D28B51FAA0A6F2147D1_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602(L_2, L_3, UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_OnDisable_mF0A6E46B79E603BDEA7085C8C35AF52953114F34 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSlider_EndGrab_mA9D239E474FB31C0D6909D28B51FAA0A6F2147D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSlider_StartGrab_m48F19B86B4802EE3275548105AE49B7F3C5CEF0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// selectEntered.RemoveListener(StartGrab);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_0;
		L_0 = XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline(__this, NULL);
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_1 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_1, __this, (intptr_t)((void*)XRSlider_StartGrab_m48F19B86B4802EE3275548105AE49B7F3C5CEF0E_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB(L_0, L_1, UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		// selectExited.RemoveListener(EndGrab);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_2;
		L_2 = XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline(__this, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_3 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_3, __this, (intptr_t)((void*)XRSlider_EndGrab_mA9D239E474FB31C0D6909D28B51FAA0A6F2147D1_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B(L_2, L_3, UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		// base.OnDisable();
		XRBaseInteractable_OnDisable_mB02958BFFAFF6C61A9FABE1D80056C3ABDCAB243(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::StartGrab(UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_StartGrab_m48F19B86B4802EE3275548105AE49B7F3C5CEF0E (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* ___args0, const RuntimeMethod* method) 
{
	{
		// m_Interactor = args.interactorObject;
		SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = SelectEnterEventArgs_get_interactorObject_m97F5CFDD451F9E85F5B92FD2B3E668A43B1C146C(L_0, NULL);
		__this->___m_Interactor_72 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Interactor_72), (void*)L_1);
		// UpdateSliderPosition();
		XRSlider_UpdateSliderPosition_m816CAAC7F9DAECFD0C0822B62B195B71680F4D87(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::EndGrab(UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_EndGrab_mA9D239E474FB31C0D6909D28B51FAA0A6F2147D1 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* ___args0, const RuntimeMethod* method) 
{
	{
		// m_Interactor = null;
		__this->___m_Interactor_72 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Interactor_72), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::ProcessInteractable(UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder/UpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_ProcessInteractable_m1A2C82A08D7AEE301698505D8144BD400E0C723E (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, int32_t ___updatePhase0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// base.ProcessInteractable(updatePhase);
		int32_t L_0 = ___updatePhase0;
		XRBaseInteractable_ProcessInteractable_mD5D51C6B4F6673EE9380C4EA707DA67F7CF8B0F2(__this, L_0, NULL);
		// if (updatePhase == XRInteractionUpdateOrder.UpdatePhase.Dynamic)
		int32_t L_1 = ___updatePhase0;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// if (isSelected)
		bool L_3;
		L_3 = XRBaseInteractable_get_isSelected_m48487E7F2E3E1EDB6D9B6985FF146020F628B3CE(__this, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		// UpdateSliderPosition();
		XRSlider_UpdateSliderPosition_m816CAAC7F9DAECFD0C0822B62B195B71680F4D87(__this, NULL);
	}

IL_0025:
	{
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::UpdateSliderPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_UpdateSliderPosition_m816CAAC7F9DAECFD0C0822B62B195B71680F4D87 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// var localPosition = transform.InverseTransformPoint(m_Interactor.GetAttachTransform(this).position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		RuntimeObject* L_1 = __this->___m_Interactor_72;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = InterfaceFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, RuntimeObject* >::Invoke(6 /* UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.IXRInteractor::GetAttachTransform(UnityEngine.XR.Interaction.Toolkit.IXRInteractable) */, IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var, L_1, __this);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_0, L_3, NULL);
		V_0 = L_4;
		// var sliderValue = Mathf.Clamp01((localPosition.z - m_MinPosition) / (m_MaxPosition - m_MinPosition));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		float L_6 = L_5.___z_4;
		float L_7 = __this->___m_MinPosition_70;
		float L_8 = __this->___m_MaxPosition_69;
		float L_9 = __this->___m_MinPosition_70;
		float L_10;
		L_10 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(((float)il2cpp_codegen_subtract(L_6, L_7))/((float)il2cpp_codegen_subtract(L_8, L_9)))), NULL);
		V_1 = L_10;
		// SetValue(sliderValue);
		float L_11 = V_1;
		XRSlider_SetValue_mDCA5611C423F4ACC175FF9622C1BC5B07310C465(__this, L_11, NULL);
		// SetSliderPosition(sliderValue);
		float L_12 = V_1;
		XRSlider_SetSliderPosition_m868C3A5C8660AB80D6080F1C4B8CD26148070B02(__this, L_12, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::SetSliderPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_SetSliderPosition_m868C3A5C8660AB80D6080F1C4B8CD26148070B02 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// if (m_Handle == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_Handle_67;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		goto IL_0045;
	}

IL_0013:
	{
		// var handlePos = m_Handle.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___m_Handle_67;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_3, NULL);
		V_0 = L_4;
		// handlePos.z = Mathf.Lerp(m_MinPosition, m_MaxPosition, value);
		float L_5 = __this->___m_MinPosition_70;
		float L_6 = __this->___m_MaxPosition_69;
		float L_7 = ___value0;
		float L_8;
		L_8 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_5, L_6, L_7, NULL);
		(&V_0)->___z_4 = L_8;
		// m_Handle.localPosition = handlePos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___m_Handle_67;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		NullCheck(L_9);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_9, L_10, NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::SetValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_SetValue_mDCA5611C423F4ACC175FF9622C1BC5B07310C465 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Value = value;
		float L_0 = ___value0;
		__this->___m_Value_68 = L_0;
		// m_OnValueChange.Invoke(m_Value);
		ValueChangeEvent_t97011904F6BAB13C48427F4EB2F7F1EB924E2ACD* L_1 = __this->___m_OnValueChange_71;
		float L_2 = __this->___m_Value_68;
		NullCheck(L_1);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_1, L_2, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_OnDrawGizmosSelected_mC9D44438D48532214F4C8555CE756F8698B13B7D (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var sliderMinPoint = transform.TransformPoint(new Vector3(0.0f, 0.0f, m_MinPosition));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_1 = __this->___m_MinPosition_70;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (0.0f), (0.0f), L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_0, L_2, NULL);
		V_0 = L_3;
		// var sliderMaxPoint = transform.TransformPoint(new Vector3(0.0f, 0.0f, m_MaxPosition));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_5 = __this->___m_MaxPosition_69;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), (0.0f), (0.0f), L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_4, L_6, NULL);
		V_1 = L_7;
		// Gizmos.color = Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_8, NULL);
		// Gizmos.DrawLine(sliderMinPoint, sliderMaxPoint);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_1;
		Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_OnValidate_mEBC5014B234B32BB1DE13EE5BBF3ABDAD6D0AD58 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, const RuntimeMethod* method) 
{
	{
		// SetSliderPosition(m_Value);
		float L_0 = __this->___m_Value_68;
		XRSlider_SetSliderPosition_m868C3A5C8660AB80D6080F1C4B8CD26148070B02(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider__ctor_m4D5345C4FC15B61BA1008ADFB187BA8D9EA97E78 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueChangeEvent_t97011904F6BAB13C48427F4EB2F7F1EB924E2ACD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Transform m_Handle = null;
		__this->___m_Handle_67 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Handle_67), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// float m_Value = 0.5f;
		__this->___m_Value_68 = (0.5f);
		// float m_MaxPosition = 0.5f;
		__this->___m_MaxPosition_69 = (0.5f);
		// float m_MinPosition = -0.5f;
		__this->___m_MinPosition_70 = (-0.5f);
		// ValueChangeEvent m_OnValueChange = new ValueChangeEvent();
		ValueChangeEvent_t97011904F6BAB13C48427F4EB2F7F1EB924E2ACD* L_0 = (ValueChangeEvent_t97011904F6BAB13C48427F4EB2F7F1EB924E2ACD*)il2cpp_codegen_object_new(ValueChangeEvent_t97011904F6BAB13C48427F4EB2F7F1EB924E2ACD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ValueChangeEvent__ctor_m36E0FB628F57A83BB57A575FD914FAA4C5CCABB4(L_0, NULL);
		__this->___m_OnValueChange_71 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OnValueChange_71), (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_il2cpp_TypeInfo_var);
		XRBaseInteractable__ctor_m0B36974579D0C9F2799C4C5DE77B136C291247F4(__this, NULL);
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
// System.Void UnityEngine.XR.Content.Interaction.XRSlider/ValueChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangeEvent__ctor_m36E0FB628F57A83BB57A575FD914FAA4C5CCABB4 (ValueChangeEvent_t97011904F6BAB13C48427F4EB2F7F1EB924E2ACD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422(__this, UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SelectEntered;
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_0 = __this->___m_SelectEntered_30;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SelectExited;
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_0 = __this->___m_SelectExited_31;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_6;
		goto IL_0038;
	}

IL_002d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_7;
	}

IL_0038:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline (float ___a0, float ___b1, float ___value2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		V_0 = (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		float L_3 = ___value2;
		float L_4 = ___a0;
		float L_5 = ___b1;
		float L_6 = ___a0;
		float L_7;
		L_7 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(((float)il2cpp_codegen_subtract(L_3, L_4))/((float)il2cpp_codegen_subtract(L_5, L_6)))), NULL);
		V_1 = L_7;
		goto IL_0023;
	}

IL_001b:
	{
		V_1 = (0.0f);
		goto IL_0023;
	}

IL_0023:
	{
		float L_8 = V_1;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_LerpUnclamped_mF35042F9D25A221BDD4B3FD6251224610AFC1F35_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_3))));
		goto IL_000b;
	}

IL_000b:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___f0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___f0;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
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
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* XRBaseInteractable_get_hoverEntered_m49384274F14DF80AC8FEFC1D214B7ACD41C67FB5_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) 
{
	{
		// get => m_HoverEntered;
		HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* L_0 = __this->___m_HoverEntered_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* XRBaseInteractable_get_hoverExited_m6A0E55603A368A85D086A00AEFD032A434CF6162_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) 
{
	{
		// get => m_HoverExited;
		HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* L_0 = __this->___m_HoverExited_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentValue_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
