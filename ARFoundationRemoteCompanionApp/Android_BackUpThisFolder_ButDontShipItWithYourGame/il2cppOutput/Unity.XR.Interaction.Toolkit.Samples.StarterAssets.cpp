﻿#include "pch-cpp.hpp"

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

// System.Action`1<Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs>
struct Action_1_t941F5236BDA57C5BC0EE651FF51B247342AFE701;
// System.Action`1<UnityEngine.XR.InputDevice>
struct Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractionGroupRegisteredEventArgs>
struct Action_1_t2AD535AD822BBF4C84782176E131C879B7DE281C;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractionGroupUnregisteredEventArgs>
struct Action_1_t253935EBEC6470ADBF9515523E953BB179550B28;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs>
struct Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs>
struct Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.LocomotionSystem>
struct Action_1_tF1EFD363206113AB62CC79E4ABC28A4901B693B7;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData>
struct Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8;
// System.Action`1<Unity.Mathematics.float3>
struct Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>
struct Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333;
// System.Action`2<System.Object,System.Int32Enum>
struct Action_2_t9C4E97D0565650F0AEF7C72077EB8A0F9326E40B;
// Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1<Unity.Mathematics.float3>
struct BindableVariableBase_1_t6E41640D2419E25E9579C521963F28A608530041;
// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<System.Single>
struct BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember,System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember>>
struct Dictionary_2_t8CEDD2D32D08349AD1D8C28AEAC70886C4065720;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,System.Single>
struct Dictionary_2_tEABA4693399BB94F9F9031F041277F4D01CA9BB2;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose>
struct Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter>
struct ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter>
struct ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8;
// System.Func`1<UnityEngine.Vector3>
struct Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC;
// System.Func`3<Unity.Mathematics.float3,Unity.Mathematics.float3,System.Boolean>
struct Func_3_tE454B2F07459EA885F6D39FCB5E70BF80B11F175;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable>
struct HashSetList_1_tC521CA1513DA32AFAD8144C7529793E24EA52945;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractionStrengthInteractable>
struct HashSetList_1_tC1867B681AE7023306C341F97E7483BB3C8532B2;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct HashSetList_1_t4D485A2E14AF33326E4D8B5E60BEDD0E47CEE3F0;
// System.Collections.Generic.HashSet`1<UnityEngine.Collider>
struct HashSet_1_t109CCE87260348881F7ED50EEE3FFD003542DC8B;
// System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.InputAction>
struct HashSet_1_tAB819E09BD04F94C3EA7D69BA059B0DD13F941A3;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.InputSystem.InputAction>
struct IEqualityComparer_1_tCB440C44B4062E7556BE411EE98E72E23AA84374;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>
struct LinkedPool_1_t99CFF33CB8085652A0F2FC6579D0388FB3CBAA01;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs>
struct LinkedPool_1_t0F5C109EA19EF35798DEF24B63645919D0B7B53B;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<Unity.XR.CoreUtils.Bindings.IEventBinding>
struct List_1_t60791FB9179CEFADA93C6B032DED2E65CB5DA58F;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRActivateInteractable>
struct List_1_tAB2FD3FF9900A585A26C6DC2D8EE94D30F2AECCA;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember>
struct List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable>
struct List_1_tEDA90BAEBDE9ABE36C7E54D6A64EE12E2E3A93F0;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable>
struct List_1_t02510C493B34D49F210C22C40442D863A08509CB;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t90832B88D7207769654164CC28440CF594CC397D;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup/GroupMemberAndOverridesPair>
struct List_1_t7B533F2BFE8502F6350DBBF38D88D5B3EBE3518B;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/SamplePoint>
struct List_1_tC0F6311D5ACC55EC4184D225E50673DBDAC555BD;
// UnityEngine.XR.Interaction.Toolkit.Utilities.RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember>
struct RegistrationList_1_t2B2426074F9547A645EEE2F3F10E3EE551BFD2EF;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1<Unity.Mathematics.float3>
struct TweenableVariableAsyncBase_1_tBC224ABEF15BBD66D75B9D20BED7ADB1F273E430;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1<Unity.Mathematics.float3>
struct TweenableVariableBase_1_t491314D6C5C1BEA5AFEAB55CCB93192270815F82;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEventArgs>
struct UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEventArgs>
struct UnityEvent_1_tB85545AD30FFE5714BBEB3B52C9C13A9BEEDB057;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.InputSystem.InputAction>[]
struct SlotU5BU5D_t0498CBAD61DD72D459F822B584CCCEEA24C72481;
// System.Collections.Generic.HashSet`1/Slot<System.Object>[]
struct SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.XR.Interaction.Toolkit.IXRGroupMember[]
struct IXRGroupMemberU5BU5D_tC8120A7E6EDEDDEDB7320E0542BCF1EDC5C3FD37;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548;
// UnityEngine.XR.InputDevice[]
struct InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Unity.Mathematics.float3[]
struct float3U5BU5D_t94C1DF28FA7E0FA017D0C77B720D9FF3519E0D45;
// UnityEngine.InputSystem.InputDevice/ControlBitRangeNode[]
struct ControlBitRangeNodeU5BU5D_t912A404149DE6D350D1735A026182C409C510F27;
// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44;
// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0;
// UnityEngine.XR.Interaction.Toolkit.ActionBasedContinuousMoveProvider
struct ActionBasedContinuousMoveProvider_t9F6714C0271E33DE9DBF31AEE774B257E971A29E;
// UnityEngine.XR.Interaction.Toolkit.ActionBasedController
struct ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68;
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager
struct ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// Unity.XR.CoreUtils.Bindings.BindingsGroup
struct BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase
struct ContinuousMoveProviderBase_t63CEB8C11A9935A166BE324AA48EBD5035ED635A;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider
struct DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager
struct GazeInputManager_t76600ACADAE6718BABD1166EBED065FFD8C90C83;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent
struct HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB;
// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent
struct HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Unity.XR.CoreUtils.Bindings.IEventBinding
struct IEventBinding_tD24AFBA7F41D64F17C1FA501D200A3B6439C4CBB;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.IMultiPokeStateDataProvider
struct IMultiPokeStateDataProvider_t2DBE7B31C49AA582A553D1A47172919E555599D8;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.IPokeStateDataProvider
struct IPokeStateDataProvider_t44A37A07F4158455AD30DD3BE0AE5B603E61AD1E;
// UnityEngine.XR.Interaction.Toolkit.UI.IUIInteractor
struct IUIInteractor_t5E87AB04096E6A5D1AF1D291E2096599065E94EA;
// UnityEngine.XR.Interaction.Toolkit.IXRFocusInteractable
struct IXRFocusInteractable_tC51F05C774C48143B23BF42507151489CD486AA0;
// UnityEngine.XR.Interaction.Toolkit.IXRGroupMember
struct IXRGroupMember_tFC6EF8D3F38A7F3921414DFF1FDECBA44479D9F5;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractable
struct IXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup
struct IXRInteractionGroup_tAD9069A6C37036CE5C97D68CF2F97B1F25044D5D;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractor
struct IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable
struct IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735;
// UnityEngine.XR.Interaction.Toolkit.Filtering.IXRTargetFilter
struct IXRTargetFilter_t51750E0C671ECA90F38CC75BCD395285E61D2778;
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.IncrementUIText
struct IncrementUIText_tF29B22345E086474C294CAFCFCEF0F336CA34359;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
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
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.XR.Interaction.Toolkit.LocomotionProvider
struct LocomotionProvider_tC65B288AF39EACCD294F953F300BA33E33C2017B;
// UnityEngine.XR.Interaction.Toolkit.LocomotionSystem
struct LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.XR.Interaction.Toolkit.UI.RegisteredUIInteractorCache
struct RegisteredUIInteractorCache_t81419313AA113B206AF3FF94CD9D3B64A09CE413;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs
struct SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent
struct SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs
struct SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.XR.Interaction.Toolkit.Utilities.TriggerContactMonitor
struct TriggerContactMonitor_t7534ED632C47D926F92937DE752DA2D4DC79AEA2;
// UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEnterEvent
struct UIHoverEnterEvent_t4C957A3405A5D9CB867C5EC446620BB4BA7E7298;
// UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEventArgs
struct UIHoverEventArgs_tC712F3F829391F25C89B9951234415D4C354DC39;
// UnityEngine.XR.Interaction.Toolkit.UI.UIHoverExitEvent
struct UIHoverExitEvent_t63E5E9C921AFB8E2CB9CA4D32882DD4F62CD509B;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives.Vector3TweenableVariable
struct Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7;
// UnityEngine.XR.Interaction.Toolkit.XRBaseController
struct XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor
struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158;
// UnityEngine.XR.Interaction.Toolkit.Filtering.XRBaseTargetFilter
struct XRBaseTargetFilter_t24D9DBCEA900DFEA08D543C91DFC070C1C91594F;
// UnityEngine.XR.Interaction.Toolkit.XRController
struct XRController_t928E104C899E51FDE12C0A8AC68874587C46C28F;
// UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor
struct XRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup
struct XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
struct XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD;
// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent
struct XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2;
// Unity.XR.CoreUtils.XROrigin
struct XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE;
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance
struct XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC;
// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor
struct XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76;
// UnityEngine.XR.Interaction.Toolkit.XRScreenSpaceController
struct XRScreenSpaceController_t046F18C2FE01EB347832DB82D42C84131771FF17;
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager/<OnAfterInteractionEvents>d__43
struct U3COnAfterInteractionEventsU3Ed__43_t506464F213A3B72344EE54D5A25DE1EF048C9303;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/RaycastHitComparer
struct RaycastHitComparer_tC59C36D577B7426F5EE8E3AE65B988F953757E9D;

IL2CPP_EXTERN_C RuntimeClass* ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tAB819E09BD04F94C3EA7D69BA059B0DD13F941A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMultiPokeStateDataProvider_t2DBE7B31C49AA582A553D1A47172919E555599D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPokeStateDataProvider_t44A37A07F4158455AD30DD3BE0AE5B603E61AD1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyBindableVariable_1_tD608177C44612AEF9CD25AEDCA15F1734DD0E073_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MovementDirection_tCAD7DEA53759ECE3132FEB72767B4A528AD0F0A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnAfterInteractionEventsU3Ed__43_t506464F213A3B72344EE54D5A25DE1EF048C9303_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral011D3DCC095E581ECDB235DA85D0318CB7DAE281;
IL2CPP_EXTERN_C String_t* _stringLiteral08922C02E680D90FAAB0862833A88225C5A1F397;
IL2CPP_EXTERN_C String_t* _stringLiteral1109D191766120E6AE6C1E227D686E0DF3130138;
IL2CPP_EXTERN_C String_t* _stringLiteral675D495E61C139628601D1F560A558803C58CB67;
IL2CPP_EXTERN_C String_t* _stringLiteral91BEF5D9E8C19A7BAA9335746C74FFE9F0A218C1;
IL2CPP_EXTERN_C String_t* _stringLiteralA3FB88DDD46531AE82CBA3C68DE5F2B43578B1DA;
IL2CPP_EXTERN_C String_t* _stringLiteralAE556C5D923A68B00D17767856C66003D52D6CEC;
IL2CPP_EXTERN_C String_t* _stringLiteralCAC9FA4EA913C7FEEEFEEA8D8C3FEF0ADF872886;
IL2CPP_EXTERN_C String_t* _stringLiteralD689EACA9A810383FB2DD66A0BB9FAE341BDC5F6;
IL2CPP_EXTERN_C String_t* _stringLiteralF35C02D0118C69B6ADE22DDE2F7B35FDD2B1AD7C;
IL2CPP_EXTERN_C const RuntimeMethod* ActionBasedControllerManager_OnCancelTeleport_mC59ABFDCA878A574A8C9DD05B45EA430A7E36DED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActionBasedControllerManager_OnRaySelectEntered_m4939EA779DE4C940346028241B357379B18DC99F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActionBasedControllerManager_OnRaySelectExited_m8236E24078DD99AA472BCFBD19F1E6E0D56B06F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActionBasedControllerManager_OnStartLocomotion_mF7DE7C7684F1EC6E994236B253C6BF836013A60F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActionBasedControllerManager_OnStartTeleport_m146507128AA7DEDE85FF3DDE8570389F9F7F948E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActionBasedControllerManager_OnStopLocomotion_m1DE893579564A76634647EA3D0B9197B69C160B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActionBasedControllerManager_OnUIHoverEntered_m0D61FC4C73078E5CB303A6875F2EE19CDD9D1F45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActionBasedControllerManager_OnUIHoverExited_m3F1275A8FA61278C2E8715D01A0915CD36436908_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BindableVariableBase_1_Subscribe_mC4E18EDA53B1AF95B57D4D6976353EC198EA6608_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisIMultiPokeStateDataProvider_t2DBE7B31C49AA582A553D1A47172919E555599D8_m083FDB476C1BFAA915E4C6CEA8904DF070F09569_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisIPokeStateDataProvider_t44A37A07F4158455AD30DD3BE0AE5B603E61AD1E_mD04C3940E4B8C24B3DF01EFC7D17BFA69FF2804E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF7167BCE82C30E7D09082FFCA3F3EFFD32B186CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mFAC408E08BBD06FE731A9E84F5E79461F23EACBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFB31F2643918A411B2F1539CA180A763D0200945_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GazeInputManager_OnDeviceChange_m5A5EA7E87A46CAEC0CA21EA476B0DAEBB8F2885E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GazeInputManager_OnDeviceConnected_mFD98427178DBDAF1C7B406FEA28161D3186F2E68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mFA65768161AFFCF3635EDD51B9D5A27E1ECC3E53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_mCD1D1786A37A068E7B80418B00BD4F2CBF2BEF0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mD28F97EDC08E91C2F50CDF8E86AF228489358EA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_get_Count_m830B4E1CB08A93B4C9803638B3AC2CB9925EB52E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mACBF1E6BD883475F3939DB16B207A64E7D937AAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m854A94510A2DE1CE03E558FF06F92F9A5B67255B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m3638DBC1A95785413DAA97E9C4D8B666EF05451D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyArray_1_GetEnumerator_m40DC2BB2BC3C855369753E8780E2B2DE6F38E88C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenableVariableAsyncBase_1_Dispose_m7D9825BEBF868FFDC835F08406D9E9AD17F53E32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenableVariableBase_1_HandleTween_m61752C0D7316DD05AB1C8E10319F47902D4CDCD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenableVariableBase_1_set_target_m3127A21F0C2EF40FA4604D603803BA53DE604337_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnAfterInteractionEventsU3Ed__43_System_Collections_IEnumerator_Reset_m0B895C550E8FD11D1D1F49866CFF37E8101A39A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mFFC598528B87DB66F65FC395BA09A0319CD2BE0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRPokeFollowAffordance_OnPokeStateDataUpdated_m47E524438FBC3D238855A42C176A43355387137F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRPokeFollowAffordance_OnTransformTweenableVariableUpdated_m45F75BBA331A940327AD949A7C0939F24F6B57B2_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tC1F2131D82E2A9E70B1FFB012BBCEB8A6BE4A8AF 
{
};

// System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.InputAction>
struct HashSet_1_tAB819E09BD04F94C3EA7D69BA059B0DD13F941A3  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t0498CBAD61DD72D459F822B584CCCEEA24C72481* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember>
struct List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IXRGroupMemberU5BU5D_tC8120A7E6EDEDDEDB7320E0542BCF1EDC5C3FD37* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IXRGroupMemberU5BU5D_tC8120A7E6EDEDDEDB7320E0542BCF1EDC5C3FD37* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* ___s_emptyArray_5;
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

// UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs
struct BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E  : public RuntimeObject
{
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractor UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs::<interactorObject>k__BackingField
	RuntimeObject* ___U3CinteractorObjectU3Ek__BackingField_0;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractable UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs::<interactableObject>k__BackingField
	RuntimeObject* ___U3CinteractableObjectU3Ek__BackingField_1;
};

// Unity.XR.CoreUtils.Bindings.BindingsGroup
struct BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Unity.XR.CoreUtils.Bindings.IEventBinding> Unity.XR.CoreUtils.Bindings.BindingsGroup::m_Bindings
	List_1_t60791FB9179CEFADA93C6B032DED2E65CB5DA58F* ___m_Bindings_0;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager/<OnAfterInteractionEvents>d__43
struct U3COnAfterInteractionEventsU3Ed__43_t506464F213A3B72344EE54D5A25DE1EF048C9303  : public RuntimeObject
{
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager/<OnAfterInteractionEvents>d__43::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager/<OnAfterInteractionEvents>d__43::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager/<OnAfterInteractionEvents>d__43::<>4__this
	ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* ___U3CU3E4__this_2;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<UnityEngine.InputSystem.InputDevice>
struct Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_Array
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_IndexStart
	int32_t ___m_IndexStart_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_IndexEnd
	int32_t ___m_IndexEnd_2;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_Index
	int32_t ___m_Index_3;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<System.Object>
struct Enumerator_t13B0EDB01F0A85A952803970AFD1073D96A46C94 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_Array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_IndexStart
	int32_t ___m_IndexStart_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_IndexEnd
	int32_t ___m_IndexEnd_2;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_Index
	int32_t ___m_Index_3;
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

// Unity.Collections.NativeArray`1<System.Single>
struct NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<Unity.Mathematics.float3>
struct NativeArray_1_tEDE9DAD2CAE5954286BC0EF394A57ED0AC69FEE6 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>
struct ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<System.Object>
struct ReadOnlyArray_1_t40B8DDDCD6ACBA3B2C0AF1387BE23D68DAEF77B5 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
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

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEventArgs>
struct UnityEvent_1_tB85545AD30FFE5714BBEB3B52C9C13A9BEEDB057  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
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

// UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD 
{
	// System.Boolean UnityEngine.InputSystem.InputActionProperty::m_UseReference
	bool ___m_UseReference_0;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::m_Action
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.InputSystem.InputActionProperty::m_Reference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD_marshaled_pinvoke
{
	int32_t ___m_UseReference_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD_marshaled_com
{
	int32_t ___m_UseReference_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
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

// UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD 
{
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_1;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_2;
};

struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.InputDevice::s_InputSubsystemCache
	List_1_t90832B88D7207769654164CC28440CF594CC397D* ___s_InputSubsystemCache_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_com
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
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

// UnityEngine.PhysicsScene
struct PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE 
{
	// System.Int32 UnityEngine.PhysicsScene::m_Handle
	int32_t ___m_Handle_0;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// Unity.Mathematics.float3
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E 
{
	// System.Single Unity.Mathematics.float3::x
	float ___x_0;
	// System.Single Unity.Mathematics.float3::y
	float ___y_1;
	// System.Single Unity.Mathematics.float3::z
	float ___z_2;
};

struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_StaticFields
{
	// Unity.Mathematics.float3 Unity.Mathematics.float3::zero
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___zero_3;
};

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1<Unity.Mathematics.float3>
struct BindableVariableBase_1_t6E41640D2419E25E9579C521963F28A608530041  : public RuntimeObject
{
	// System.Action`1<T> Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::valueUpdated
	Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B* ___valueUpdated_0;
	// T Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_InternalValue
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___m_InternalValue_1;
	// System.Boolean Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_CheckEquality
	bool ___m_CheckEquality_2;
	// System.Boolean Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_IsInitialized
	bool ___m_IsInitialized_3;
	// System.Func`3<T,T,System.Boolean> Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_EqualityMethod
	Func_3_tE454B2F07459EA885F6D39FCB5E70BF80B11F175* ___m_EqualityMethod_4;
	// System.Int32 Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_BindingCount
	int32_t ___m_BindingCount_5;
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

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 
{
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField_40;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::m_ByteOffset
	uint32_t ___m_ByteOffset_41;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_42;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_43;
};

struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5_StaticFields
{
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatInvalid
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatInvalid_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatBit
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatBit_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSBit
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatSBit_6;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatInt
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatInt_8;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUInt
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatUInt_10;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatShort
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatShort_12;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUShort
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatUShort_14;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatByte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatByte_16;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSByte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatSByte_18;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatLong
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatLong_20;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatULong
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatULong_22;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatFloat
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatFloat_24;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatDouble
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatDouble_26;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2_28;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3_30;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatQuaternion
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatQuaternion_32;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Short
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2Short_34;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Short
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3Short_35;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Byte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2Byte_36;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Byte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3Byte_37;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatPose
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatPose_38;
};

// Unity.Jobs.JobHandle
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	// System.IntPtr Unity.Jobs.JobHandle::jobGroup
	intptr_t ___jobGroup_0;
	// System.Int32 Unity.Jobs.JobHandle::version
	int32_t ___version_1;
};

// UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve
struct NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 
{
	// Unity.Collections.NativeArray`1<System.Single> UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve::m_Values
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___m_Values_0;
	// UnityEngine.WrapMode UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve::m_PreWrapMode
	int32_t ___m_PreWrapMode_1;
	// UnityEngine.WrapMode UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve::m_PostWrapMode
	int32_t ___m_PostWrapMode_2;
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

// UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData
struct PokeStateData_t87D34716C1C477FC04D9344710D09399FE6F5032 
{
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::<meetsRequirements>k__BackingField
	bool ___U3CmeetsRequirementsU3Ek__BackingField_0;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::<pokeInteractionPoint>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CpokeInteractionPointU3Ek__BackingField_1;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::<axisAlignedPokeInteractionPoint>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CaxisAlignedPokeInteractionPointU3Ek__BackingField_2;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::<interactionStrength>k__BackingField
	float ___U3CinteractionStrengthU3Ek__BackingField_3;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::<target>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtargetU3Ek__BackingField_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData
struct PokeStateData_t87D34716C1C477FC04D9344710D09399FE6F5032_marshaled_pinvoke
{
	int32_t ___U3CmeetsRequirementsU3Ek__BackingField_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CpokeInteractionPointU3Ek__BackingField_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CaxisAlignedPokeInteractionPointU3Ek__BackingField_2;
	float ___U3CinteractionStrengthU3Ek__BackingField_3;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtargetU3Ek__BackingField_4;
};
// Native definition for COM marshalling of UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData
struct PokeStateData_t87D34716C1C477FC04D9344710D09399FE6F5032_marshaled_com
{
	int32_t ___U3CmeetsRequirementsU3Ek__BackingField_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CpokeInteractionPointU3Ek__BackingField_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CaxisAlignedPokeInteractionPointU3Ek__BackingField_2;
	float ___U3CinteractionStrengthU3Ek__BackingField_3;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtargetU3Ek__BackingField_4;
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

// UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEnterEvent
struct UIHoverEnterEvent_t4C957A3405A5D9CB867C5EC446620BB4BA7E7298  : public UnityEvent_1_tB85545AD30FFE5714BBEB3B52C9C13A9BEEDB057
{
};

// UnityEngine.XR.Interaction.Toolkit.UI.UIHoverExitEvent
struct UIHoverExitEvent_t63E5E9C921AFB8E2CB9CA4D32882DD4F62CD509B  : public UnityEvent_1_tB85545AD30FFE5714BBEB3B52C9C13A9BEEDB057
{
};

// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<Unity.Mathematics.float3>
struct BindableVariable_1_tB68DAB26AE7AF6E274A845BB487AEE92F9E1DAA0  : public BindableVariableBase_1_t6E41640D2419E25E9579C521963F28A608530041
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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
	// System.Boolean UnityEngine.InputSystem.InputControl::m_CachedValueIsStale
	bool ___m_CachedValueIsStale_18;
	// System.Boolean UnityEngine.InputSystem.InputControl::m_UnprocessedCachedValueIsStale
	bool ___m_UnprocessedCachedValueIsStale_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_DefaultState_20;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MinValue_21;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MaxValue_22;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.InputControl::m_OptimizedControlDataType
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_OptimizedControlDataType_23;
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

// UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel/ImplementationData
struct ImplementationData_t175CD17EADED010E9B5BA19575E4AD41F2FE67AC 
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel/ImplementationData::<hoverTargets>k__BackingField
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___U3ChoverTargetsU3Ek__BackingField_0;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel/ImplementationData::<pointerTarget>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerTargetU3Ek__BackingField_1;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel/ImplementationData::<isDragging>k__BackingField
	bool ___U3CisDraggingU3Ek__BackingField_2;
	// System.Single UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel/ImplementationData::<pressedTime>k__BackingField
	float ___U3CpressedTimeU3Ek__BackingField_3;
	// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel/ImplementationData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_4;
	// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel/ImplementationData::<pressedPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressedPositionU3Ek__BackingField_5;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel/ImplementationData::<pressedWorldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CpressedWorldPositionU3Ek__BackingField_6;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel/ImplementationData::<pressedRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpressedRaycastU3Ek__BackingField_7;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel/ImplementationData::<pressedGameObject>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpressedGameObjectU3Ek__BackingField_8;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel/ImplementationData::<pressedGameObjectRaw>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpressedGameObjectRawU3Ek__BackingField_9;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel/ImplementationData::<draggedGameObject>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CdraggedGameObjectU3Ek__BackingField_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel/ImplementationData
struct ImplementationData_t175CD17EADED010E9B5BA19575E4AD41F2FE67AC_marshaled_pinvoke
{
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___U3ChoverTargetsU3Ek__BackingField_0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerTargetU3Ek__BackingField_1;
	int32_t ___U3CisDraggingU3Ek__BackingField_2;
	float ___U3CpressedTimeU3Ek__BackingField_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_4;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressedPositionU3Ek__BackingField_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CpressedWorldPositionU3Ek__BackingField_6;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke ___U3CpressedRaycastU3Ek__BackingField_7;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpressedGameObjectU3Ek__BackingField_8;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpressedGameObjectRawU3Ek__BackingField_9;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CdraggedGameObjectU3Ek__BackingField_10;
};
// Native definition for COM marshalling of UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel/ImplementationData
struct ImplementationData_t175CD17EADED010E9B5BA19575E4AD41F2FE67AC_marshaled_com
{
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___U3ChoverTargetsU3Ek__BackingField_0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerTargetU3Ek__BackingField_1;
	int32_t ___U3CisDraggingU3Ek__BackingField_2;
	float ___U3CpressedTimeU3Ek__BackingField_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_4;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressedPositionU3Ek__BackingField_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CpressedWorldPositionU3Ek__BackingField_6;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com ___U3CpressedRaycastU3Ek__BackingField_7;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpressedGameObjectU3Ek__BackingField_8;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpressedGameObjectRawU3Ek__BackingField_9;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CdraggedGameObjectU3Ek__BackingField_10;
};

// System.Action`1<UnityEngine.XR.InputDevice>
struct Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData>
struct Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.Mathematics.float3>
struct Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E  : public MulticastDelegate_t
{
};

// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>
struct Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333  : public MulticastDelegate_t
{
};

// UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1<Unity.Mathematics.float3>
struct TweenableVariableBase_1_t491314D6C5C1BEA5AFEAB55CCB93192270815F82  : public BindableVariable_1_tB68DAB26AE7AF6E274A845BB487AEE92F9E1DAA0
{
	// UnityEngine.AnimationCurve UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1::m_AnimationCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_AnimationCurve_7;
	// T UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1::m_Target
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___m_Target_8;
	// T UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1::<initialValue>k__BackingField
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___U3CinitialValueU3Ek__BackingField_9;
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEventArgs>
struct UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7  : public MulticastDelegate_t
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
	int32_t ___m_DeviceFlags_27;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceId
	int32_t ___m_DeviceId_28;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_ParticipantId
	int32_t ___m_ParticipantId_29;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceIndex
	int32_t ___m_DeviceIndex_30;
	// UnityEngine.InputSystem.Layouts.InputDeviceDescription UnityEngine.InputSystem.InputDevice::m_Description
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F ___m_Description_31;
	// System.Double UnityEngine.InputSystem.InputDevice::m_LastUpdateTimeInternal
	double ___m_LastUpdateTimeInternal_32;
	// System.UInt32 UnityEngine.InputSystem.InputDevice::m_CurrentUpdateStepCount
	uint32_t ___m_CurrentUpdateStepCount_33;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_AliasesForEachControl
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_AliasesForEachControl_34;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_UsagesForEachControl
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_UsagesForEachControl_35;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_UsageToControl
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_UsageToControl_36;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_ChildrenForEachControl
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_ChildrenForEachControl_37;
	// System.UInt32[] UnityEngine.InputSystem.InputDevice::m_StateOffsetToControlMap
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_StateOffsetToControlMap_38;
	// UnityEngine.InputSystem.InputDevice/ControlBitRangeNode[] UnityEngine.InputSystem.InputDevice::m_ControlTreeNodes
	ControlBitRangeNodeU5BU5D_t912A404149DE6D350D1735A026182C409C510F27* ___m_ControlTreeNodes_39;
	// System.UInt16[] UnityEngine.InputSystem.InputDevice::m_ControlTreeIndices
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___m_ControlTreeIndices_40;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel
struct TrackedDeviceModel_t38B1BA171F5602138D487005E134580213B4DBE8 
{
	// UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel/ImplementationData UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::m_ImplementationData
	ImplementationData_t175CD17EADED010E9B5BA19575E4AD41F2FE67AC ___m_ImplementationData_1;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::m_SelectDown
	bool ___m_SelectDown_3;
	// UnityEngine.XR.Interaction.Toolkit.UI.ButtonDeltaState UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::<selectDelta>k__BackingField
	int32_t ___U3CselectDeltaU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::<changedThisFrame>k__BackingField
	bool ___U3CchangedThisFrameU3Ek__BackingField_5;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::m_Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position_6;
	// System.Func`1<UnityEngine.Vector3> UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::<positionGetter>k__BackingField
	Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC* ___U3CpositionGetterU3Ek__BackingField_7;
	// UnityEngine.Quaternion UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::m_Orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Orientation_8;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::m_RaycastPoints
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___m_RaycastPoints_9;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::<currentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CcurrentRaycastU3Ek__BackingField_10;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::<currentRaycastEndpointIndex>k__BackingField
	int32_t ___U3CcurrentRaycastEndpointIndexU3Ek__BackingField_11;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::m_RaycastLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_RaycastLayerMask_12;
	// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::m_ScrollDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ScrollDelta_13;
	// System.Single UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::m_PokeDepth
	float ___m_PokeDepth_14;
	// UnityEngine.XR.Interaction.Toolkit.UI.UIInteractionType UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::m_InteractionType
	int32_t ___m_InteractionType_15;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::<selectableObject>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CselectableObjectU3Ek__BackingField_16;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::<isScrollable>k__BackingField
	bool ___U3CisScrollableU3Ek__BackingField_17;
	// System.Single UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::m_MaxRaycastDistance
	float ___m_MaxRaycastDistance_18;
};

struct TrackedDeviceModel_t38B1BA171F5602138D487005E134580213B4DBE8_StaticFields
{
	// UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::<invalid>k__BackingField
	TrackedDeviceModel_t38B1BA171F5602138D487005E134580213B4DBE8 ___U3CinvalidU3Ek__BackingField_19;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel
struct TrackedDeviceModel_t38B1BA171F5602138D487005E134580213B4DBE8_marshaled_pinvoke
{
	ImplementationData_t175CD17EADED010E9B5BA19575E4AD41F2FE67AC_marshaled_pinvoke ___m_ImplementationData_1;
	int32_t ___U3CpointerIdU3Ek__BackingField_2;
	int32_t ___m_SelectDown_3;
	int32_t ___U3CselectDeltaU3Ek__BackingField_4;
	int32_t ___U3CchangedThisFrameU3Ek__BackingField_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position_6;
	Il2CppMethodPointer ___U3CpositionGetterU3Ek__BackingField_7;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Orientation_8;
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___m_RaycastPoints_9;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke ___U3CcurrentRaycastU3Ek__BackingField_10;
	int32_t ___U3CcurrentRaycastEndpointIndexU3Ek__BackingField_11;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_RaycastLayerMask_12;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ScrollDelta_13;
	float ___m_PokeDepth_14;
	int32_t ___m_InteractionType_15;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CselectableObjectU3Ek__BackingField_16;
	int32_t ___U3CisScrollableU3Ek__BackingField_17;
	float ___m_MaxRaycastDistance_18;
};
// Native definition for COM marshalling of UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel
struct TrackedDeviceModel_t38B1BA171F5602138D487005E134580213B4DBE8_marshaled_com
{
	ImplementationData_t175CD17EADED010E9B5BA19575E4AD41F2FE67AC_marshaled_com ___m_ImplementationData_1;
	int32_t ___U3CpointerIdU3Ek__BackingField_2;
	int32_t ___m_SelectDown_3;
	int32_t ___U3CselectDeltaU3Ek__BackingField_4;
	int32_t ___U3CchangedThisFrameU3Ek__BackingField_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position_6;
	Il2CppMethodPointer ___U3CpositionGetterU3Ek__BackingField_7;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Orientation_8;
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___m_RaycastPoints_9;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com ___U3CcurrentRaycastU3Ek__BackingField_10;
	int32_t ___U3CcurrentRaycastEndpointIndexU3Ek__BackingField_11;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_RaycastLayerMask_12;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ScrollDelta_13;
	float ___m_PokeDepth_14;
	int32_t ___m_InteractionType_15;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CselectableObjectU3Ek__BackingField_16;
	int32_t ___U3CisScrollableU3Ek__BackingField_17;
	float ___m_MaxRaycastDistance_18;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1<Unity.Mathematics.float3>
struct TweenableVariableAsyncBase_1_tBC224ABEF15BBD66D75B9D20BED7ADB1F273E430  : public TweenableVariableBase_1_t491314D6C5C1BEA5AFEAB55CCB93192270815F82
{
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1::m_OutputInitialized
	bool ___m_OutputInitialized_10;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1::m_JobOutputStore
	NativeArray_1_tEDE9DAD2CAE5954286BC0EF394A57ED0AC69FEE6 ___m_JobOutputStore_11;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1::m_CurveDirty
	bool ___m_CurveDirty_12;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1::m_NativeCurve
	NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 ___m_NativeCurve_13;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1::m_HasJobPending
	bool ___m_HasJobPending_14;
	// Unity.Jobs.JobHandle UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1::m_LastJobHandle
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___m_LastJobHandle_15;
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

// UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEventArgs
struct UIHoverEventArgs_tC712F3F829391F25C89B9951234415D4C354DC39  : public RuntimeObject
{
	// UnityEngine.XR.Interaction.Toolkit.UI.IUIInteractor UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEventArgs::<interactorObject>k__BackingField
	RuntimeObject* ___U3CinteractorObjectU3Ek__BackingField_0;
	// UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEventArgs::<deviceModel>k__BackingField
	TrackedDeviceModel_t38B1BA171F5602138D487005E134580213B4DBE8 ___U3CdeviceModelU3Ek__BackingField_1;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEventArgs::<uiObject>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CuiObjectU3Ek__BackingField_2;
};

// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager
struct ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_ManipulationInteractionGroup
	XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A* ___m_ManipulationInteractionGroup_5;
	// UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_DirectInteractor
	XRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B* ___m_DirectInteractor_6;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_RayInteractor
	XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* ___m_RayInteractor_7;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_TeleportInteractor
	XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* ___m_TeleportInteractor_8;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_TeleportModeActivate
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_TeleportModeActivate_9;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_TeleportModeCancel
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_TeleportModeCancel_10;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_Turn
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Turn_11;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_SnapTurn
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_SnapTurn_12;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_Move
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Move_13;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_UIScroll
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_UIScroll_14;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_SmoothMotionEnabled
	bool ___m_SmoothMotionEnabled_15;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_SmoothTurnEnabled
	bool ___m_SmoothTurnEnabled_16;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_UIScrollingEnabled
	bool ___m_UIScrollingEnabled_17;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_PostponedDeactivateTeleport
	bool ___m_PostponedDeactivateTeleport_18;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_UIScrollModeActive
	bool ___m_UIScrollModeActive_19;
	// System.Collections.IEnumerator UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_AfterInteractionEventsRoutine
	RuntimeObject* ___m_AfterInteractionEventsRoutine_21;
	// System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.InputAction> UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_LocomotionUsers
	HashSet_1_tAB819E09BD04F94C3EA7D69BA059B0DD13F941A3* ___m_LocomotionUsers_22;
};

struct ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember> UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::s_GroupMembers
	List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F* ___s_GroupMembers_23;
};

// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager
struct GazeInputManager_t76600ACADAE6718BABD1166EBED065FFD8C90C83  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager::m_FallbackIfEyeTrackingUnavailable
	bool ___m_FallbackIfEyeTrackingUnavailable_5;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager::m_EyeTrackingDeviceFound
	bool ___m_EyeTrackingDeviceFound_6;
};

// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.IncrementUIText
struct IncrementUIText_tF29B22345E086474C294CAFCFCEF0F336CA34359  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.IncrementUIText::m_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_Text_4;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.IncrementUIText::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.XR.Interaction.Toolkit.LocomotionProvider
struct LocomotionProvider_tC65B288AF39EACCD294F953F300BA33E33C2017B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.LocomotionSystem> UnityEngine.XR.Interaction.Toolkit.LocomotionProvider::beginLocomotion
	Action_1_tF1EFD363206113AB62CC79E4ABC28A4901B693B7* ___beginLocomotion_4;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.LocomotionSystem> UnityEngine.XR.Interaction.Toolkit.LocomotionProvider::endLocomotion
	Action_1_tF1EFD363206113AB62CC79E4ABC28A4901B693B7* ___endLocomotion_5;
	// UnityEngine.XR.Interaction.Toolkit.LocomotionSystem UnityEngine.XR.Interaction.Toolkit.LocomotionProvider::m_System
	LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B* ___m_System_6;
	// UnityEngine.XR.Interaction.Toolkit.LocomotionPhase UnityEngine.XR.Interaction.Toolkit.LocomotionProvider::<locomotionPhase>k__BackingField
	int32_t ___U3ClocomotionPhaseU3Ek__BackingField_7;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.LocomotionSystem> UnityEngine.XR.Interaction.Toolkit.LocomotionProvider::startLocomotion
	Action_1_tF1EFD363206113AB62CC79E4ABC28A4901B693B7* ___startLocomotion_8;
};

// UnityEngine.XR.Interaction.Toolkit.LocomotionSystem
struct LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.LocomotionProvider UnityEngine.XR.Interaction.Toolkit.LocomotionSystem::m_CurrentExclusiveProvider
	LocomotionProvider_tC65B288AF39EACCD294F953F300BA33E33C2017B* ___m_CurrentExclusiveProvider_4;
	// System.Single UnityEngine.XR.Interaction.Toolkit.LocomotionSystem::m_TimeMadeExclusive
	float ___m_TimeMadeExclusive_5;
	// System.Single UnityEngine.XR.Interaction.Toolkit.LocomotionSystem::m_Timeout
	float ___m_Timeout_6;
	// Unity.XR.CoreUtils.XROrigin UnityEngine.XR.Interaction.Toolkit.LocomotionSystem::m_XROrigin
	XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___m_XROrigin_7;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives.Vector3TweenableVariable
struct Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5  : public TweenableVariableAsyncBase_1_tBC224ABEF15BBD66D75B9D20BED7ADB1F273E430
{
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

// UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup
struct XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractionGroupRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::registered
	Action_1_t2AD535AD822BBF4C84782176E131C879B7DE281C* ___registered_4;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractionGroupUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::unregistered
	Action_1_t253935EBEC6470ADBF9515523E953BB179550B28* ___unregistered_5;
	// System.String UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::m_GroupName
	String_t* ___m_GroupName_6;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::m_InteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_InteractionManager_7;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::m_RegisteredInteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_RegisteredInteractionManager_8;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::<containingGroup>k__BackingField
	RuntimeObject* ___U3CcontainingGroupU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::m_StartingGroupMembers
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingGroupMembers_10;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup/GroupMemberAndOverridesPair> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::m_StartingInteractionOverridesMap
	List_1_t7B533F2BFE8502F6350DBBF38D88D5B3EBE3518B* ___m_StartingInteractionOverridesMap_11;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractor UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::<activeInteractor>k__BackingField
	RuntimeObject* ___U3CactiveInteractorU3Ek__BackingField_12;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractor UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::<focusInteractor>k__BackingField
	RuntimeObject* ___U3CfocusInteractorU3Ek__BackingField_13;
	// UnityEngine.XR.Interaction.Toolkit.IXRFocusInteractable UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::<focusInteractable>k__BackingField
	RuntimeObject* ___U3CfocusInteractableU3Ek__BackingField_14;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::<hasRegisteredStartingMembers>k__BackingField
	bool ___U3ChasRegisteredStartingMembersU3Ek__BackingField_15;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::m_GroupMembers
	RegistrationList_1_t2B2426074F9547A645EEE2F3F10E3EE551BFD2EF* ___m_GroupMembers_16;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::m_TempGroupMembers
	List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F* ___m_TempGroupMembers_17;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::m_IsProcessingGroupMembers
	bool ___m_IsProcessingGroupMembers_18;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember,System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember>> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::m_InteractionOverridesMap
	Dictionary_2_t8CEDD2D32D08349AD1D8C28AEAC70886C4065720* ___m_InteractionOverridesMap_19;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::m_ValidTargets
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___m_ValidTargets_20;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::m_DeprecatedValidTargets
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___m_DeprecatedValidTargets_21;
};

struct XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::s_InteractablesSelected
	List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B* ___s_InteractablesSelected_22;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::s_InteractablesHovered
	List_1_tEDA90BAEBDE9ABE36C7E54D6A64EE12E2E3A93F0* ___s_InteractablesHovered_23;
};

// Unity.XR.CoreUtils.XROrigin
struct XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera Unity.XR.CoreUtils.XROrigin::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_4;
	// UnityEngine.Transform Unity.XR.CoreUtils.XROrigin::<TrackablesParent>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CTrackablesParentU3Ek__BackingField_5;
	// System.Action`1<Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs> Unity.XR.CoreUtils.XROrigin::TrackablesParentTransformChanged
	Action_1_t941F5236BDA57C5BC0EE651FF51B247342AFE701* ___TrackablesParentTransformChanged_6;
	// UnityEngine.GameObject Unity.XR.CoreUtils.XROrigin::m_OriginBaseGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_OriginBaseGameObject_8;
	// UnityEngine.GameObject Unity.XR.CoreUtils.XROrigin::m_CameraFloorOffsetObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CameraFloorOffsetObject_9;
	// Unity.XR.CoreUtils.XROrigin/TrackingOriginMode Unity.XR.CoreUtils.XROrigin::m_RequestedTrackingOriginMode
	int32_t ___m_RequestedTrackingOriginMode_10;
	// System.Single Unity.XR.CoreUtils.XROrigin::m_CameraYOffset
	float ___m_CameraYOffset_11;
	// UnityEngine.XR.TrackingOriginModeFlags Unity.XR.CoreUtils.XROrigin::<CurrentTrackingOriginMode>k__BackingField
	int32_t ___U3CCurrentTrackingOriginModeU3Ek__BackingField_12;
	// System.Boolean Unity.XR.CoreUtils.XROrigin::m_CameraInitialized
	bool ___m_CameraInitialized_14;
	// System.Boolean Unity.XR.CoreUtils.XROrigin::m_CameraInitializing
	bool ___m_CameraInitializing_15;
};

struct XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> Unity.XR.CoreUtils.XROrigin::s_InputSubsystems
	List_1_t90832B88D7207769654164CC28440CF594CC397D* ___s_InputSubsystems_13;
};

// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance
struct XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_PokeFollowTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_PokeFollowTransform_4;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_SmoothingSpeed
	float ___m_SmoothingSpeed_5;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_ReturnToInitialPosition
	bool ___m_ReturnToInitialPosition_6;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_ApplyIfChildIsTarget
	bool ___m_ApplyIfChildIsTarget_7;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_ClampToMaxDistance
	bool ___m_ClampToMaxDistance_8;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_MaxDistance
	float ___m_MaxDistance_9;
	// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.IPokeStateDataProvider UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_PokeDataProvider
	RuntimeObject* ___m_PokeDataProvider_10;
	// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.IMultiPokeStateDataProvider UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_MultiPokeStateDataProvider
	RuntimeObject* ___m_MultiPokeStateDataProvider_11;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives.Vector3TweenableVariable UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_TransformTweenableVariable
	Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* ___m_TransformTweenableVariable_12;
	// Unity.XR.CoreUtils.Bindings.BindingsGroup UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_BindingsGroup
	BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A* ___m_BindingsGroup_13;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_InitialPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_InitialPosition_14;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_IsFirstFrame
	bool ___m_IsFirstFrame_15;
};

// UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase
struct ContinuousMoveProviderBase_t63CEB8C11A9935A166BE324AA48EBD5035ED635A  : public LocomotionProvider_tC65B288AF39EACCD294F953F300BA33E33C2017B
{
	// System.Single UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase::m_MoveSpeed
	float ___m_MoveSpeed_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase::m_EnableStrafe
	bool ___m_EnableStrafe_10;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase::m_EnableFly
	bool ___m_EnableFly_11;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase::m_UseGravity
	bool ___m_UseGravity_12;
	// UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase/GravityApplicationMode UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase::m_GravityApplicationMode
	int32_t ___m_GravityApplicationMode_13;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase::m_ForwardSource
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ForwardSource_14;
	// UnityEngine.CharacterController UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase::m_CharacterController
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_CharacterController_15;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase::m_AttemptedGetCharacterController
	bool ___m_AttemptedGetCharacterController_16;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase::m_IsMovingXROrigin
	bool ___m_IsMovingXROrigin_17;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase::m_VerticalVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_VerticalVelocity_18;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
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

// UnityEngine.XR.Interaction.Toolkit.ActionBasedContinuousMoveProvider
struct ActionBasedContinuousMoveProvider_t9F6714C0271E33DE9DBF31AEE774B257E971A29E  : public ContinuousMoveProviderBase_t63CEB8C11A9935A166BE324AA48EBD5035ED635A
{
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedContinuousMoveProvider::m_LeftHandMoveAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_LeftHandMoveAction_19;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedContinuousMoveProvider::m_RightHandMoveAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_RightHandMoveAction_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor
struct XRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B  : public XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E
{
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor::m_ImproveAccuracyWithSphereCollider
	bool ___m_ImproveAccuracyWithSphereCollider_107;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor::m_PhysicsLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_PhysicsLayerMask_108;
	// UnityEngine.QueryTriggerInteraction UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor::m_PhysicsTriggerInteraction
	int32_t ___m_PhysicsTriggerInteraction_109;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor::<unsortedValidTargets>k__BackingField
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___U3CunsortedValidTargetsU3Ek__BackingField_110;
	// System.Collections.Generic.HashSet`1<UnityEngine.Collider> UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor::m_StayedColliders
	HashSet_1_t109CCE87260348881F7ED50EEE3FFD003542DC8B* ___m_StayedColliders_111;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.TriggerContactMonitor UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor::m_TriggerContactMonitor
	TriggerContactMonitor_t7534ED632C47D926F92937DE752DA2D4DC79AEA2* ___m_TriggerContactMonitor_112;
	// System.Collections.IEnumerator UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor::m_UpdateCollidersAfterTriggerStay
	RuntimeObject* ___m_UpdateCollidersAfterTriggerStay_114;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor::m_UsingSphereColliderAccuracyImprovement
	bool ___m_UsingSphereColliderAccuracyImprovement_115;
	// UnityEngine.SphereCollider UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor::m_SphereCollider
	SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* ___m_SphereCollider_116;
	// UnityEngine.PhysicsScene UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor::m_LocalPhysicsScene
	PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE ___m_LocalPhysicsScene_117;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor::m_LastSphereCastOrigin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_LastSphereCastOrigin_118;
	// UnityEngine.Collider[] UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor::m_OverlapSphereHits
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___m_OverlapSphereHits_119;
	// UnityEngine.RaycastHit[] UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor::m_SphereCastHits
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___m_SphereCastHits_120;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor::m_FirstFrame
	bool ___m_FirstFrame_121;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor::m_ContactsSortedThisFrame
	bool ___m_ContactsSortedThisFrame_122;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor::m_SortedValidTargets
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___m_SortedValidTargets_123;
};

struct XRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B_StaticFields
{
	// UnityEngine.WaitForFixedUpdate UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor::s_WaitForFixedUpdate
	WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7* ___s_WaitForFixedUpdate_113;
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

// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider
struct DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A  : public ActionBasedContinuousMoveProvider_t9F6714C0271E33DE9DBF31AEE774B257E971A29E
{
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::m_HeadTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HeadTransform_21;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::m_LeftControllerTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_LeftControllerTransform_22;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::m_RightControllerTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RightControllerTransform_23;
	// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider/MovementDirection UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::m_LeftHandMovementDirection
	int32_t ___m_LeftHandMovementDirection_24;
	// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider/MovementDirection UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::m_RightHandMovementDirection
	int32_t ___m_RightHandMovementDirection_25;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::m_CombinedTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_CombinedTransform_26;
	// UnityEngine.Pose UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::m_LeftMovementPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_LeftMovementPose_27;
	// UnityEngine.Pose UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::m_RightMovementPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_RightMovementPose_28;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_gshared (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_gshared_inline (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<TValue> UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t13B0EDB01F0A85A952803970AFD1073D96A46C94 ReadOnlyArray_1_GetEnumerator_mE43A032C7C67896D9F8377C6C1C863C22F3044B6_gshared (ReadOnlyArray_1_t40B8DDDCD6ACBA3B2C0AF1387BE23D68DAEF77B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m041721B53AC187277BACB4EA9C86E299322EB0AB_gshared (Enumerator_t13B0EDB01F0A85A952803970AFD1073D96A46C94* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mC38F33A423715DE1D9EAD3EADE1C8C03C52E4465_gshared (Enumerator_t13B0EDB01F0A85A952803970AFD1073D96A46C94* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m95272BAC87E97D7B862DB72A8639565003BD244B_gshared (Enumerator_t13B0EDB01F0A85A952803970AFD1073D96A46C94* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.InputDevice>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m9EFC6656FE579E4D72FFCA991DE5860FA28DD71E_gshared (Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m6DEC13F96CE9CD74561DCCA7017E450079C96942_gshared (Action_2_t9C4E97D0565650F0AEF7C72077EB8A0F9326E40B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.Mathematics.float3>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mB233B0C3B645B249C912144F3F6EA0B343C5E5F0_gshared (Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// Unity.XR.CoreUtils.Bindings.IEventBinding Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1<Unity.Mathematics.float3>::Subscribe(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BindableVariableBase_1_Subscribe_mC4E18EDA53B1AF95B57D4D6976353EC198EA6608_gshared (BindableVariableBase_1_t6E41640D2419E25E9579C521963F28A608530041* __this, Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B* ___callback0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m51E8C8F6D6AAA447F906F82CBA1114C86E69FF54_gshared (Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1<Unity.Mathematics.float3>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_Dispose_m7D9825BEBF868FFDC835F08406D9E9AD17F53E32_gshared (TweenableVariableAsyncBase_1_tBC224ABEF15BBD66D75B9D20BED7ADB1F273E430* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1<Unity.Mathematics.float3>::HandleTween(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_HandleTween_m61752C0D7316DD05AB1C8E10319F47902D4CDCD9_gshared (TweenableVariableBase_1_t491314D6C5C1BEA5AFEAB55CCB93192270815F82* __this, float ___tweenTarget0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1<Unity.Mathematics.float3>::set_target(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_set_target_m3127A21F0C2EF40FA4604D603803BA53DE604337_gshared (TweenableVariableBase_1_t491314D6C5C1BEA5AFEAB55CCB93192270815F82* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___value0, const RuntimeMethod* method) ;

// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::UpdateLocomotionActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_UpdateLocomotionActions_m90E85E149A202B3BEE453D8CCE7B9DC95F9442CA (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::UpdateUIActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_UpdateUIActions_m4228CBE3F66C86C0241412811F9D855DDE76F4B5 (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::get_selectEntered()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* XRBaseInteractor_get_selectEntered_m49681B23359BF5E9E0C3F69040D0C1567A528EC3_inline (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, const RuntimeMethod* method) ;
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
// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::get_selectExited()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* XRBaseInteractor_get_selectExited_m2B4FA666B95E8DF09EB6D92ACEDB892BFF375384_inline (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, const RuntimeMethod* method) ;
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
// UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::get_uiHoverEntered()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UIHoverEnterEvent_t4C957A3405A5D9CB867C5EC446620BB4BA7E7298* XRRayInteractor_get_uiHoverEntered_mAF9AD8B5AFAE9C82EE906DA8380A09BBA74CD279_inline (XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mD4F2DD3BDD2495C5DBD9B73FDA365B7A05DBF472 (UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mFFC598528B87DB66F65FC395BA09A0319CD2BE0E (UnityEvent_1_tB85545AD30FFE5714BBEB3B52C9C13A9BEEDB057* __this, UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tB85545AD30FFE5714BBEB3B52C9C13A9BEEDB057*, UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// UnityEngine.XR.Interaction.Toolkit.UI.UIHoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::get_uiHoverExited()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UIHoverExitEvent_t63E5E9C921AFB8E2CB9CA4D32882DD4F62CD509B* XRRayInteractor_get_uiHoverExited_m693A4F8EA43A37238373A93AA5A47797B0FEA19B_inline (XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::GetInputAction(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ActionBasedControllerManager_GetInputAction_mB065776536731D218E38E2CD6E46BA7837AEBC44 (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___actionReference0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57 (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.InputSystem.InputAction::add_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::add_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
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
// System.Void UnityEngine.InputSystem.InputAction::remove_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputAction/CallbackContext::get_started()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CallbackContext_get_started_m0A946F354239889D41B6D191BCCD573330F9C59D (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputAction/CallbackContext::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* CallbackContext_get_action_mE1ABC0E3E19C045663AB8EDAB9A9205B8C181CE4 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.InputAction>::Add(T)
inline bool HashSet_1_Add_mFA65768161AFFCF3635EDD51B9D5A27E1ECC3E53 (HashSet_1_tAB819E09BD04F94C3EA7D69BA059B0DD13F941A3* __this, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tAB819E09BD04F94C3EA7D69BA059B0DD13F941A3*, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.InputAction>::Remove(T)
inline bool HashSet_1_Remove_mCD1D1786A37A068E7B80418B00BD4F2CBF2BEF0F (HashSet_1_tAB819E09BD04F94C3EA7D69BA059B0DD13F941A3* __this, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tAB819E09BD04F94C3EA7D69BA059B0DD13F941A3*, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.InputAction>::get_Count()
inline int32_t HashSet_1_get_Count_m830B4E1CB08A93B4C9803638B3AC2CB9925EB52E_inline (HashSet_1_tAB819E09BD04F94C3EA7D69BA059B0DD13F941A3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_tAB819E09BD04F94C3EA7D69BA059B0DD13F941A3*, const RuntimeMethod*))HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::DisableLocomotionActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_DisableLocomotionActions_mE6A2290813F1BD07280BF4A6E9B6BBA800E81E8C (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEventArgs::get_deviceModel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackedDeviceModel_t38B1BA171F5602138D487005E134580213B4DBE8 UIHoverEventArgs_get_deviceModel_m89E4A51B73B17932351940327599EC37D74BCE95_inline (UIHoverEventArgs_tC712F3F829391F25C89B9951234415D4C354DC39* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel::get_isScrollable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackedDeviceModel_get_isScrollable_m2ADDFD1E1BD1F28CDBD07D6970C5325FCD62A505_inline (TrackedDeviceModel_t38B1BA171F5602138D487005E134580213B4DBE8* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::OnAfterInteractionEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ActionBasedControllerManager_OnAfterInteractionEvents_mCF40B0815F54413521A227CA9945ACAE6EBB83FD (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::SetupInteractorEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_SetupInteractorEvents_mE9FCCBD1C9BEEBBE22AD9B10F017A9EE1EBDA852 (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::TeardownInteractorEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_TeardownInteractorEvents_mD09E6747F7DEBAC01AC1D58D78FA53503A2B68C8 (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::GetGroupMembers(System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInteractionGroup_GetGroupMembers_mD9F958024795254B67D0B8F39D9D25F81B4E6D19 (XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A* __this, List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F* ___results0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m3638DBC1A95785413DAA97E9C4D8B666EF05451D (List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember>::get_Count()
inline int32_t List_1_get_Count_m854A94510A2DE1CE03E558FF06F92F9A5B67255B_inline (List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::AddGroupMember(UnityEngine.XR.Interaction.Toolkit.IXRGroupMember)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInteractionGroup_AddGroupMember_m3E3F11BE7E94DD2F4C1DFE57DC1F44760EC40F8C (XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A* __this, RuntimeObject* ___groupMember0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::MoveGroupMemberTo(UnityEngine.XR.Interaction.Toolkit.IXRGroupMember,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInteractionGroup_MoveGroupMemberTo_mBCAE55279CA53E830E563504F0377555C6339EC0 (XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A* __this, RuntimeObject* ___groupMember0, int32_t ___newIndex1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager/<OnAfterInteractionEvents>d__43::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnAfterInteractionEventsU3Ed__43__ctor_m9A6E6C96664BB95E01F1A850F6EDB7AC5A8498EF (U3COnAfterInteractionEventsU3Ed__43_t506464F213A3B72344EE54D5A25DE1EF048C9303* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::SetEnabled(UnityEngine.InputSystem.InputActionReference,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_SetEnabled_m2EEABE3C85A63159A290D3812A96EA5A725D028F (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___actionReference0, bool ___enabled1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::DisableAction(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_DisableAction_m7DB0495AE24BDF1E2F626F4EAFEBF580B911FA9F (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___actionReference0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::EnableAction(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_EnableAction_m4F594C5139322B9A68E0A809201BFB76538E9AD8 (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___actionReference0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputAction::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAction_get_enabled_mA1E3523D89FCD4649E787A4BFE9D5863674846FA (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_Enable_mB3897C0741409C033656E4566EC49135C3C8BC68 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_Disable_m72D1982F82457C6E003440BADD06989D399BDE50 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionReference::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.InputAction>::.ctor()
inline void HashSet_1__ctor_mD28F97EDC08E91C2F50CDF8E86AF228489358EA7 (HashSet_1_tAB819E09BD04F94C3EA7D69BA059B0DD13F941A3* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tAB819E09BD04F94C3EA7D69BA059B0DD13F941A3*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember>::.ctor()
inline void List_1__ctor_mACBF1E6BD883475F3939DB16B207A64E7D937AAA (List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.LocomotionProvider::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocomotionProvider_Awake_mDB71AC0528310B8B6A57E0D5D0C6E54C0E0E22EB (LocomotionProvider_tC65B288AF39EACCD294F953F300BA33E33C2017B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase::set_forwardSource(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ContinuousMoveProviderBase_set_forwardSource_mA1CBEB304ED21A5E919AEDBC38CAD176E23C9195_inline (ContinuousMoveProviderBase_t63CEB8C11A9935A166BE324AA48EBD5035ED635A* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.LocomotionSystem UnityEngine.XR.Interaction.Toolkit.LocomotionProvider::get_system()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B* LocomotionProvider_get_system_m2FFD680EAEA3837BF1BE61B34DB6685118760D94_inline (LocomotionProvider_tC65B288AF39EACCD294F953F300BA33E33C2017B* __this, const RuntimeMethod* method) ;
// Unity.XR.CoreUtils.XROrigin UnityEngine.XR.Interaction.Toolkit.LocomotionSystem::get_xrOrigin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* LocomotionSystem_get_xrOrigin_m06C2599D9739A71562F0F3DD27BC57BCC18F3EF7_inline (LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera Unity.XR.CoreUtils.XROrigin::get_Camera()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* XROrigin_get_Camera_m8959027D616F5BD9AEAE3E41ADEE23BBC2CE3629_inline (XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose Unity.XR.CoreUtils.TransformExtensions::GetWorldPose(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 TransformExtensions_GetWorldPose_m08E343202174666DFF9A07560AB1A72ACD0DDCF1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void UnityEngine.Assertions.Assert::IsTrue(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsTrue_m390B3F48332F46CE76AB45491A60ACDCCF521AAE (bool ___condition0, String_t* ___message1, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedContinuousMoveProvider::get_leftHandMoveAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ActionBasedContinuousMoveProvider_get_leftHandMoveAction_m1A3CE1F7AFE741716F8CABEE541C67DE5E16C64B_inline (ActionBasedContinuousMoveProvider_t9F6714C0271E33DE9DBF31AEE774B257E971A29E* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47 (InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedContinuousMoveProvider::get_rightHandMoveAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ActionBasedContinuousMoveProvider_get_rightHandMoveAction_m798EAE65B649189963A7A35D4084FE9B28618490_inline (ActionBasedContinuousMoveProvider_t9F6714C0271E33DE9DBF31AEE774B257E971A29E* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase::ComputeDesiredMove(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ContinuousMoveProviderBase_ComputeDesiredMove_mDB77C9D41306941782F36D150B7CD774E1E3A702 (ContinuousMoveProviderBase_t63CEB8C11A9935A166BE324AA48EBD5035ED635A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___input0, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E (const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.ActionBasedContinuousMoveProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedContinuousMoveProvider__ctor_m1310A2218E70F36811987629965EF7BC0F356583 (ActionBasedContinuousMoveProvider_t9F6714C0271E33DE9DBF31AEE774B257E971A29E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
inline void List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4 (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*, const RuntimeMethod*))List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_gshared)(__this, method);
}
// System.Void UnityEngine.XR.InputDevices::GetDevicesWithCharacteristics(UnityEngine.XR.InputDeviceCharacteristics,System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevices_GetDevicesWithCharacteristics_m82F54DE2802FCE4EB730FCFBF8731CA91A27DEB0 (uint32_t ___desiredCharacteristics0, List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* ___inputDevices1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Count()
inline int32_t List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_inline (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*, const RuntimeMethod*))List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.InputSystem::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA InputSystem_get_devices_mBE599285E43211ACE15248654A3E3D7DB42C85CA (const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<TValue> UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>::GetEnumerator()
inline Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B ReadOnlyArray_1_GetEnumerator_m40DC2BB2BC3C855369753E8780E2B2DE6F38E88C (ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B (*) (ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA*, const RuntimeMethod*))ReadOnlyArray_1_GetEnumerator_mE43A032C7C67896D9F8377C6C1C863C22F3044B6_gshared)(__this, method);
}
// System.Void UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<UnityEngine.InputSystem.InputDevice>::Dispose()
inline void Enumerator_Dispose_mF7167BCE82C30E7D09082FFCA3F3EFFD32B186CB (Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B*, const RuntimeMethod*))Enumerator_Dispose_m041721B53AC187277BACB4EA9C86E299322EB0AB_gshared)(__this, method);
}
// TValue UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<UnityEngine.InputSystem.InputDevice>::get_Current()
inline InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* Enumerator_get_Current_mFB31F2643918A411B2F1539CA180A763D0200945 (Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B* __this, const RuntimeMethod* method)
{
	return ((  InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* (*) (Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B*, const RuntimeMethod*))Enumerator_get_Current_mC38F33A423715DE1D9EAD3EADE1C8C03C52E4465_gshared)(__this, method);
}
// System.String UnityEngine.InputSystem.InputControl::get_layout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputControl_get_layout_mE6054F87BB94A1F1D06355E137A1840B2EFF7971 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<UnityEngine.InputSystem.InputDevice>::MoveNext()
inline bool Enumerator_MoveNext_mFAC408E08BBD06FE731A9E84F5E79461F23EACBC (Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B*, const RuntimeMethod*))Enumerator_MoveNext_m95272BAC87E97D7B862DB72A8639565003BD244B_gshared)(__this, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.InputDevice>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9EFC6656FE579E4D72FFCA991DE5860FA28DD71E (Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m9EFC6656FE579E4D72FFCA991DE5860FA28DD71E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.InputDevices::add_deviceConnected(System.Action`1<UnityEngine.XR.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevices_add_deviceConnected_m0329DBAE47CA4A20778F7DCBA470FCF9A672E9C9 (Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC* ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m23A4911D82F290811EDC6BFC315C339857526804 (Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m6DEC13F96CE9CD74561DCCA7017E450079C96942_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::add_onDeviceChange(System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_add_onDeviceChange_mC1BAF8DE08B2B3F6D0A98D80AE1E4FF5531C60FA (Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.InputDevices::remove_deviceConnected(System.Action`1<UnityEngine.XR.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevices_remove_deviceConnected_m52D0C5E73A9BBEEF775E21DF93DDF0DD4F7D1BB5 (Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::remove_onDeviceChange(System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_remove_onDeviceChange_mD08F75C263C2D687B2E6E68E86105829075BF717 (Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* ___value0, const RuntimeMethod* method) ;
// UnityEngine.XR.InputDeviceCharacteristics UnityEngine.XR.InputDevice::get_characteristics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InputDevice_get_characteristics_mEEDC9AB2254C155C47B48848FECF347A87925ADB (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.IMultiPokeStateDataProvider>()
inline RuntimeObject* Component_GetComponentInParent_TisIMultiPokeStateDataProvider_t2DBE7B31C49AA582A553D1A47172919E555599D8_m083FDB476C1BFAA915E4C6CEA8904DF070F09569 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInParent<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.IPokeStateDataProvider>()
inline RuntimeObject* Component_GetComponentInParent_TisIPokeStateDataProvider_t44A37A07F4158455AD30DD3BE0AE5B603E61AD1E_mD04C3940E4B8C24B3DF01EFC7D17BFA69FF2804E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.Mathematics.float3>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mB233B0C3B645B249C912144F3F6EA0B343C5E5F0 (Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mB233B0C3B645B249C912144F3F6EA0B343C5E5F0_gshared)(__this, ___object0, ___method1, method);
}
// Unity.XR.CoreUtils.Bindings.IEventBinding Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1<Unity.Mathematics.float3>::Subscribe(System.Action`1<T>)
inline RuntimeObject* BindableVariableBase_1_Subscribe_mC4E18EDA53B1AF95B57D4D6976353EC198EA6608 (BindableVariableBase_1_t6E41640D2419E25E9579C521963F28A608530041* __this, Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B* ___callback0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (BindableVariableBase_1_t6E41640D2419E25E9579C521963F28A608530041*, Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B*, const RuntimeMethod*))BindableVariableBase_1_Subscribe_mC4E18EDA53B1AF95B57D4D6976353EC198EA6608_gshared)(__this, ___callback0, method);
}
// System.Void Unity.XR.CoreUtils.Bindings.BindingsGroup::AddBinding(Unity.XR.CoreUtils.Bindings.IEventBinding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindingsGroup_AddBinding_m18697E73861A1C67DE0674F162B43CCE9E67C89B (BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A* __this, RuntimeObject* ___binding0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m51E8C8F6D6AAA447F906F82CBA1114C86E69FF54 (Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m51E8C8F6D6AAA447F906F82CBA1114C86E69FF54_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.XR.CoreUtils.Bindings.BindingsGroup::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindingsGroup_Clear_m092668459F10E46245228224D1334DAB089B72E3 (BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1<Unity.Mathematics.float3>::Dispose()
inline void TweenableVariableAsyncBase_1_Dispose_m7D9825BEBF868FFDC835F08406D9E9AD17F53E32 (TweenableVariableAsyncBase_1_tBC224ABEF15BBD66D75B9D20BED7ADB1F273E430* __this, const RuntimeMethod* method)
{
	((  void (*) (TweenableVariableAsyncBase_1_tBC224ABEF15BBD66D75B9D20BED7ADB1F273E430*, const RuntimeMethod*))TweenableVariableAsyncBase_1_Dispose_m7D9825BEBF868FFDC835F08406D9E9AD17F53E32_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1<Unity.Mathematics.float3>::HandleTween(System.Single)
inline void TweenableVariableBase_1_HandleTween_m61752C0D7316DD05AB1C8E10319F47902D4CDCD9 (TweenableVariableBase_1_t491314D6C5C1BEA5AFEAB55CCB93192270815F82* __this, float ___tweenTarget0, const RuntimeMethod* method)
{
	((  void (*) (TweenableVariableBase_1_t491314D6C5C1BEA5AFEAB55CCB93192270815F82*, float, const RuntimeMethod*))TweenableVariableBase_1_HandleTween_m61752C0D7316DD05AB1C8E10319F47902D4CDCD9_gshared)(__this, ___tweenTarget0, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 Unity.Mathematics.float3::op_Implicit(Unity.Mathematics.float3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 float3_op_Implicit_m9CC301DFD67EEFAA15CA05E91913E862B22326F6 (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___v0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::get_target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* PokeStateData_get_target_m464672F352B73F0010B9829CA5C692505783091C_inline (PokeStateData_t87D34716C1C477FC04D9344710D09399FE6F5032* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Transform::IsChildOf(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transform_IsChildOf_mFE071BE1E775E825401FE0A9B9BE49E39D256CEA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::get_axisAlignedPokeInteractionPoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PokeStateData_get_axisAlignedPokeInteractionPoint_mC3B4E6D1232B8A2E2A98374B3AA9976E29E67D43_inline (PokeStateData_t87D34716C1C477FC04D9344710D09399FE6F5032* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::ClampMagnitude(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, float ___maxLength1, const RuntimeMethod* method) ;
// Unity.Mathematics.float3 Unity.Mathematics.float3::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Implicit_mE1831A3AC179B7EB3236F8202EC8DD5CE05376AB (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1<Unity.Mathematics.float3>::set_target(T)
inline void TweenableVariableBase_1_set_target_m3127A21F0C2EF40FA4604D603803BA53DE604337 (TweenableVariableBase_1_t491314D6C5C1BEA5AFEAB55CCB93192270815F82* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___value0, const RuntimeMethod* method)
{
	((  void (*) (TweenableVariableBase_1_t491314D6C5C1BEA5AFEAB55CCB93192270815F82*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E, const RuntimeMethod*))TweenableVariableBase_1_set_target_m3127A21F0C2EF40FA4604D603803BA53DE604337_gshared)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives.Vector3TweenableVariable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3TweenableVariable__ctor_m22723734B74E394A833F2EEA06F910E45A91F042 (Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* __this, const RuntimeMethod* method) ;
// System.Void Unity.XR.CoreUtils.Bindings.BindingsGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindingsGroup__ctor_m1EFD3F405050571D3A66F9B95E8FBC296866A716 (BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
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
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::get_smoothMotionEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActionBasedControllerManager_get_smoothMotionEnabled_m8B330E329AE71CE007B9DE78AFA9A87D4E2C4F61 (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SmoothMotionEnabled;
		bool L_0 = __this->___m_SmoothMotionEnabled_15;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::set_smoothMotionEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_set_smoothMotionEnabled_mAD21DF2AADD6B279F352C7D7CEBBCC372B78BF96 (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// m_SmoothMotionEnabled = value;
		bool L_0 = ___value0;
		__this->___m_SmoothMotionEnabled_15 = L_0;
		// UpdateLocomotionActions();
		ActionBasedControllerManager_UpdateLocomotionActions_m90E85E149A202B3BEE453D8CCE7B9DC95F9442CA(__this, NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::get_smoothTurnEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActionBasedControllerManager_get_smoothTurnEnabled_m9AEFB376258A823C5C42D9128BF7F5F6331419A3 (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SmoothTurnEnabled;
		bool L_0 = __this->___m_SmoothTurnEnabled_16;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::set_smoothTurnEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_set_smoothTurnEnabled_m7503E78C50CEEE5F3F51D885F6363A264DA7B24F (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// m_SmoothTurnEnabled = value;
		bool L_0 = ___value0;
		__this->___m_SmoothTurnEnabled_16 = L_0;
		// UpdateLocomotionActions();
		ActionBasedControllerManager_UpdateLocomotionActions_m90E85E149A202B3BEE453D8CCE7B9DC95F9442CA(__this, NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::get_uiScrollingEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActionBasedControllerManager_get_uiScrollingEnabled_mA196A96F97069B3365FF8C2B1CFF55091720A9B9 (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) 
{
	{
		// get => m_UIScrollingEnabled;
		bool L_0 = __this->___m_UIScrollingEnabled_17;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::set_uiScrollingEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_set_uiScrollingEnabled_mEB0544A9670EA0F80ED951B6159C0787B01930E2 (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// m_UIScrollingEnabled = value;
		bool L_0 = ___value0;
		__this->___m_UIScrollingEnabled_17 = L_0;
		// UpdateUIActions();
		ActionBasedControllerManager_UpdateUIActions_m4228CBE3F66C86C0241412811F9D855DDE76F4B5(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::SetupInteractorEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_SetupInteractorEvents_mE9FCCBD1C9BEEBBE22AD9B10F017A9EE1EBDA852 (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnCancelTeleport_mC59ABFDCA878A574A8C9DD05B45EA430A7E36DED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnRaySelectEntered_m4939EA779DE4C940346028241B357379B18DC99F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnRaySelectExited_m8236E24078DD99AA472BCFBD19F1E6E0D56B06F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnStartLocomotion_mF7DE7C7684F1EC6E994236B253C6BF836013A60F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnStartTeleport_m146507128AA7DEDE85FF3DDE8570389F9F7F948E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnStopLocomotion_m1DE893579564A76634647EA3D0B9197B69C160B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnUIHoverEntered_m0D61FC4C73078E5CB303A6875F2EE19CDD9D1F45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnUIHoverExited_m3F1275A8FA61278C2E8715D01A0915CD36436908_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mFFC598528B87DB66F65FC395BA09A0319CD2BE0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_0 = NULL;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_1 = NULL;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_2 = NULL;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	{
		// if (m_RayInteractor != null)
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_0 = __this->___m_RayInteractor_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_4 = L_1;
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_0089;
		}
	}
	{
		// m_RayInteractor.selectEntered.AddListener(OnRaySelectEntered);
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_3 = __this->___m_RayInteractor_7;
		NullCheck(L_3);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_4;
		L_4 = XRBaseInteractor_get_selectEntered_m49681B23359BF5E9E0C3F69040D0C1567A528EC3_inline(L_3, NULL);
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_5 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_5, __this, (intptr_t)((void*)ActionBasedControllerManager_OnRaySelectEntered_m4939EA779DE4C940346028241B357379B18DC99F_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2(L_4, L_5, UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		// m_RayInteractor.selectExited.AddListener(OnRaySelectExited);
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_6 = __this->___m_RayInteractor_7;
		NullCheck(L_6);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_7;
		L_7 = XRBaseInteractor_get_selectExited_m2B4FA666B95E8DF09EB6D92ACEDB892BFF375384_inline(L_6, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_8 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_8, __this, (intptr_t)((void*)ActionBasedControllerManager_OnRaySelectExited_m8236E24078DD99AA472BCFBD19F1E6E0D56B06F5_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602(L_7, L_8, UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		// m_RayInteractor.uiHoverEntered.AddListener(OnUIHoverEntered);
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_9 = __this->___m_RayInteractor_7;
		NullCheck(L_9);
		UIHoverEnterEvent_t4C957A3405A5D9CB867C5EC446620BB4BA7E7298* L_10;
		L_10 = XRRayInteractor_get_uiHoverEntered_mAF9AD8B5AFAE9C82EE906DA8380A09BBA74CD279_inline(L_9, NULL);
		UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7* L_11 = (UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7*)il2cpp_codegen_object_new(UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction_1__ctor_mD4F2DD3BDD2495C5DBD9B73FDA365B7A05DBF472(L_11, __this, (intptr_t)((void*)ActionBasedControllerManager_OnUIHoverEntered_m0D61FC4C73078E5CB303A6875F2EE19CDD9D1F45_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		UnityEvent_1_AddListener_mFFC598528B87DB66F65FC395BA09A0319CD2BE0E(L_10, L_11, UnityEvent_1_AddListener_mFFC598528B87DB66F65FC395BA09A0319CD2BE0E_RuntimeMethod_var);
		// m_RayInteractor.uiHoverExited.AddListener(OnUIHoverExited);
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_12 = __this->___m_RayInteractor_7;
		NullCheck(L_12);
		UIHoverExitEvent_t63E5E9C921AFB8E2CB9CA4D32882DD4F62CD509B* L_13;
		L_13 = XRRayInteractor_get_uiHoverExited_m693A4F8EA43A37238373A93AA5A47797B0FEA19B_inline(L_12, NULL);
		UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7* L_14 = (UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7*)il2cpp_codegen_object_new(UnityAction_1_tF84284B75FFACCEAC80371566C7B8164DD76E4E7_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		UnityAction_1__ctor_mD4F2DD3BDD2495C5DBD9B73FDA365B7A05DBF472(L_14, __this, (intptr_t)((void*)ActionBasedControllerManager_OnUIHoverExited_m3F1275A8FA61278C2E8715D01A0915CD36436908_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		UnityEvent_1_AddListener_mFFC598528B87DB66F65FC395BA09A0319CD2BE0E(L_13, L_14, UnityEvent_1_AddListener_mFFC598528B87DB66F65FC395BA09A0319CD2BE0E_RuntimeMethod_var);
	}

IL_0089:
	{
		// var teleportModeActivateAction = GetInputAction(m_TeleportModeActivate);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_15 = __this->___m_TeleportModeActivate_9;
		il2cpp_codegen_runtime_class_init_inline(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_16;
		L_16 = ActionBasedControllerManager_GetInputAction_mB065776536731D218E38E2CD6E46BA7837AEBC44(L_15, NULL);
		V_0 = L_16;
		// if (teleportModeActivateAction != null)
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_17 = V_0;
		V_5 = (bool)((!(((RuntimeObject*)(InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_00ed;
		}
	}
	{
		// teleportModeActivateAction.performed += OnStartTeleport;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_19 = V_0;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_20 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_20, __this, (intptr_t)((void*)ActionBasedControllerManager_OnStartTeleport_m146507128AA7DEDE85FF3DDE8570389F9F7F948E_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_19, L_20, NULL);
		// teleportModeActivateAction.performed += OnStartLocomotion;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_21 = V_0;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_22 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_22, __this, (intptr_t)((void*)ActionBasedControllerManager_OnStartLocomotion_mF7DE7C7684F1EC6E994236B253C6BF836013A60F_RuntimeMethod_var), NULL);
		NullCheck(L_21);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_21, L_22, NULL);
		// teleportModeActivateAction.canceled += OnCancelTeleport;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_23 = V_0;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_24 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_24, __this, (intptr_t)((void*)ActionBasedControllerManager_OnCancelTeleport_mC59ABFDCA878A574A8C9DD05B45EA430A7E36DED_RuntimeMethod_var), NULL);
		NullCheck(L_23);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_23, L_24, NULL);
		// teleportModeActivateAction.canceled += OnStopLocomotion;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_25 = V_0;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_26 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_26, __this, (intptr_t)((void*)ActionBasedControllerManager_OnStopLocomotion_m1DE893579564A76634647EA3D0B9197B69C160B3_RuntimeMethod_var), NULL);
		NullCheck(L_25);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_25, L_26, NULL);
	}

IL_00ed:
	{
		// var teleportModeCancelAction = GetInputAction(m_TeleportModeCancel);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_27 = __this->___m_TeleportModeCancel_10;
		il2cpp_codegen_runtime_class_init_inline(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_28;
		L_28 = ActionBasedControllerManager_GetInputAction_mB065776536731D218E38E2CD6E46BA7837AEBC44(L_27, NULL);
		V_1 = L_28;
		// if (teleportModeCancelAction != null)
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_29 = V_1;
		V_6 = (bool)((!(((RuntimeObject*)(InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*)L_29) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_30 = V_6;
		if (!L_30)
		{
			goto IL_012b;
		}
	}
	{
		// teleportModeCancelAction.performed += OnCancelTeleport;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_31 = V_1;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_32 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_32, __this, (intptr_t)((void*)ActionBasedControllerManager_OnCancelTeleport_mC59ABFDCA878A574A8C9DD05B45EA430A7E36DED_RuntimeMethod_var), NULL);
		NullCheck(L_31);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_31, L_32, NULL);
		// teleportModeActivateAction.canceled += OnStopLocomotion;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_33 = V_0;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_34 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_34, __this, (intptr_t)((void*)ActionBasedControllerManager_OnStopLocomotion_m1DE893579564A76634647EA3D0B9197B69C160B3_RuntimeMethod_var), NULL);
		NullCheck(L_33);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_33, L_34, NULL);
	}

IL_012b:
	{
		// var moveAction = GetInputAction(m_Move);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_35 = __this->___m_Move_13;
		il2cpp_codegen_runtime_class_init_inline(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_36;
		L_36 = ActionBasedControllerManager_GetInputAction_mB065776536731D218E38E2CD6E46BA7837AEBC44(L_35, NULL);
		V_2 = L_36;
		// if (moveAction != null)
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_37 = V_2;
		V_7 = (bool)((!(((RuntimeObject*)(InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*)L_37) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_38 = V_7;
		if (!L_38)
		{
			goto IL_0169;
		}
	}
	{
		// moveAction.performed += OnStartLocomotion;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_39 = V_2;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_40 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_40, __this, (intptr_t)((void*)ActionBasedControllerManager_OnStartLocomotion_mF7DE7C7684F1EC6E994236B253C6BF836013A60F_RuntimeMethod_var), NULL);
		NullCheck(L_39);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_39, L_40, NULL);
		// moveAction.canceled += OnStopLocomotion;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_41 = V_2;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_42 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_42, __this, (intptr_t)((void*)ActionBasedControllerManager_OnStopLocomotion_m1DE893579564A76634647EA3D0B9197B69C160B3_RuntimeMethod_var), NULL);
		NullCheck(L_41);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_41, L_42, NULL);
	}

IL_0169:
	{
		// var turnAction = GetInputAction(m_Turn);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_43 = __this->___m_Turn_11;
		il2cpp_codegen_runtime_class_init_inline(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_44;
		L_44 = ActionBasedControllerManager_GetInputAction_mB065776536731D218E38E2CD6E46BA7837AEBC44(L_43, NULL);
		V_3 = L_44;
		// if (turnAction != null)
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_45 = V_3;
		V_8 = (bool)((!(((RuntimeObject*)(InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*)L_45) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_46 = V_8;
		if (!L_46)
		{
			goto IL_01a7;
		}
	}
	{
		// turnAction.performed += OnStartLocomotion;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_47 = V_3;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_48 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_48, __this, (intptr_t)((void*)ActionBasedControllerManager_OnStartLocomotion_mF7DE7C7684F1EC6E994236B253C6BF836013A60F_RuntimeMethod_var), NULL);
		NullCheck(L_47);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_47, L_48, NULL);
		// turnAction.canceled += OnStopLocomotion;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_49 = V_3;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_50 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_50, __this, (intptr_t)((void*)ActionBasedControllerManager_OnStopLocomotion_m1DE893579564A76634647EA3D0B9197B69C160B3_RuntimeMethod_var), NULL);
		NullCheck(L_49);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_49, L_50, NULL);
	}

IL_01a7:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::TeardownInteractorEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_TeardownInteractorEvents_mD09E6747F7DEBAC01AC1D58D78FA53503A2B68C8 (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnCancelTeleport_mC59ABFDCA878A574A8C9DD05B45EA430A7E36DED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnRaySelectEntered_m4939EA779DE4C940346028241B357379B18DC99F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnRaySelectExited_m8236E24078DD99AA472BCFBD19F1E6E0D56B06F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnStartLocomotion_mF7DE7C7684F1EC6E994236B253C6BF836013A60F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnStartTeleport_m146507128AA7DEDE85FF3DDE8570389F9F7F948E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnStopLocomotion_m1DE893579564A76634647EA3D0B9197B69C160B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_0 = NULL;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_1 = NULL;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_2 = NULL;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	{
		// if (m_RayInteractor != null)
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_0 = __this->___m_RayInteractor_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_4 = L_1;
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_004f;
		}
	}
	{
		// m_RayInteractor.selectEntered.RemoveListener(OnRaySelectEntered);
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_3 = __this->___m_RayInteractor_7;
		NullCheck(L_3);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_4;
		L_4 = XRBaseInteractor_get_selectEntered_m49681B23359BF5E9E0C3F69040D0C1567A528EC3_inline(L_3, NULL);
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_5 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_5, __this, (intptr_t)((void*)ActionBasedControllerManager_OnRaySelectEntered_m4939EA779DE4C940346028241B357379B18DC99F_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB(L_4, L_5, UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		// m_RayInteractor.selectExited.RemoveListener(OnRaySelectExited);
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_6 = __this->___m_RayInteractor_7;
		NullCheck(L_6);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_7;
		L_7 = XRBaseInteractor_get_selectExited_m2B4FA666B95E8DF09EB6D92ACEDB892BFF375384_inline(L_6, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_8 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_8, __this, (intptr_t)((void*)ActionBasedControllerManager_OnRaySelectExited_m8236E24078DD99AA472BCFBD19F1E6E0D56B06F5_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B(L_7, L_8, UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
	}

IL_004f:
	{
		// var teleportModeActivateAction = GetInputAction(m_TeleportModeActivate);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_9 = __this->___m_TeleportModeActivate_9;
		il2cpp_codegen_runtime_class_init_inline(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_10;
		L_10 = ActionBasedControllerManager_GetInputAction_mB065776536731D218E38E2CD6E46BA7837AEBC44(L_9, NULL);
		V_0 = L_10;
		// if (teleportModeActivateAction != null)
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_11 = V_0;
		V_5 = (bool)((!(((RuntimeObject*)(InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*)L_11) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_00b3;
		}
	}
	{
		// teleportModeActivateAction.performed -= OnStartTeleport;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_13 = V_0;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_14 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_14, __this, (intptr_t)((void*)ActionBasedControllerManager_OnStartTeleport_m146507128AA7DEDE85FF3DDE8570389F9F7F948E_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_13, L_14, NULL);
		// teleportModeActivateAction.performed -= OnStartLocomotion;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_15 = V_0;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_16 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_16, __this, (intptr_t)((void*)ActionBasedControllerManager_OnStartLocomotion_mF7DE7C7684F1EC6E994236B253C6BF836013A60F_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_15, L_16, NULL);
		// teleportModeActivateAction.canceled -= OnCancelTeleport;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_17 = V_0;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_18 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_18, __this, (intptr_t)((void*)ActionBasedControllerManager_OnCancelTeleport_mC59ABFDCA878A574A8C9DD05B45EA430A7E36DED_RuntimeMethod_var), NULL);
		NullCheck(L_17);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_17, L_18, NULL);
		// teleportModeActivateAction.canceled -= OnStopLocomotion;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_19 = V_0;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_20 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_20, __this, (intptr_t)((void*)ActionBasedControllerManager_OnStopLocomotion_m1DE893579564A76634647EA3D0B9197B69C160B3_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_19, L_20, NULL);
	}

IL_00b3:
	{
		// var teleportModeCancelAction = GetInputAction(m_TeleportModeCancel);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_21 = __this->___m_TeleportModeCancel_10;
		il2cpp_codegen_runtime_class_init_inline(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_22;
		L_22 = ActionBasedControllerManager_GetInputAction_mB065776536731D218E38E2CD6E46BA7837AEBC44(L_21, NULL);
		V_1 = L_22;
		// if (teleportModeCancelAction != null)
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_23 = V_1;
		V_6 = (bool)((!(((RuntimeObject*)(InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*)L_23) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_24 = V_6;
		if (!L_24)
		{
			goto IL_00f1;
		}
	}
	{
		// teleportModeCancelAction.performed -= OnCancelTeleport;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_25 = V_1;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_26 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_26, __this, (intptr_t)((void*)ActionBasedControllerManager_OnCancelTeleport_mC59ABFDCA878A574A8C9DD05B45EA430A7E36DED_RuntimeMethod_var), NULL);
		NullCheck(L_25);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_25, L_26, NULL);
		// teleportModeCancelAction.performed -= OnStopLocomotion;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_27 = V_1;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_28 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_28, __this, (intptr_t)((void*)ActionBasedControllerManager_OnStopLocomotion_m1DE893579564A76634647EA3D0B9197B69C160B3_RuntimeMethod_var), NULL);
		NullCheck(L_27);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_27, L_28, NULL);
	}

IL_00f1:
	{
		// var moveAction = GetInputAction(m_Move);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_29 = __this->___m_Move_13;
		il2cpp_codegen_runtime_class_init_inline(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_30;
		L_30 = ActionBasedControllerManager_GetInputAction_mB065776536731D218E38E2CD6E46BA7837AEBC44(L_29, NULL);
		V_2 = L_30;
		// if (moveAction != null)
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_31 = V_2;
		V_7 = (bool)((!(((RuntimeObject*)(InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*)L_31) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_32 = V_7;
		if (!L_32)
		{
			goto IL_012f;
		}
	}
	{
		// moveAction.performed -= OnStartLocomotion;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_33 = V_2;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_34 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_34, __this, (intptr_t)((void*)ActionBasedControllerManager_OnStartLocomotion_mF7DE7C7684F1EC6E994236B253C6BF836013A60F_RuntimeMethod_var), NULL);
		NullCheck(L_33);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_33, L_34, NULL);
		// moveAction.canceled -= OnStopLocomotion;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_35 = V_2;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_36 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_36, __this, (intptr_t)((void*)ActionBasedControllerManager_OnStopLocomotion_m1DE893579564A76634647EA3D0B9197B69C160B3_RuntimeMethod_var), NULL);
		NullCheck(L_35);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_35, L_36, NULL);
	}

IL_012f:
	{
		// var turnAction = GetInputAction(m_Turn);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_37 = __this->___m_Turn_11;
		il2cpp_codegen_runtime_class_init_inline(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_38;
		L_38 = ActionBasedControllerManager_GetInputAction_mB065776536731D218E38E2CD6E46BA7837AEBC44(L_37, NULL);
		V_3 = L_38;
		// if (turnAction != null)
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_39 = V_3;
		V_8 = (bool)((!(((RuntimeObject*)(InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*)L_39) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_40 = V_8;
		if (!L_40)
		{
			goto IL_016d;
		}
	}
	{
		// turnAction.performed -= OnStartLocomotion;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_41 = V_3;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_42 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_42, __this, (intptr_t)((void*)ActionBasedControllerManager_OnStartLocomotion_mF7DE7C7684F1EC6E994236B253C6BF836013A60F_RuntimeMethod_var), NULL);
		NullCheck(L_41);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_41, L_42, NULL);
		// turnAction.canceled -= OnStopLocomotion;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_43 = V_3;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_44 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_44, __this, (intptr_t)((void*)ActionBasedControllerManager_OnStopLocomotion_m1DE893579564A76634647EA3D0B9197B69C160B3_RuntimeMethod_var), NULL);
		NullCheck(L_43);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_43, L_44, NULL);
	}

IL_016d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::OnStartTeleport(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_OnStartTeleport_m146507128AA7DEDE85FF3DDE8570389F9F7F948E (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// m_PostponedDeactivateTeleport = false;
		__this->___m_PostponedDeactivateTeleport_18 = (bool)0;
		// if (m_TeleportInteractor != null)
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_0 = __this->___m_TeleportInteractor_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// m_TeleportInteractor.gameObject.SetActive(true);
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_3 = __this->___m_TeleportInteractor_8;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
	}

IL_002a:
	{
		// if (m_RayInteractor != null)
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_5 = __this->___m_RayInteractor_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_004c;
		}
	}
	{
		// m_RayInteractor.gameObject.SetActive(false);
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_8 = __this->___m_RayInteractor_7;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::OnCancelTeleport(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_OnCancelTeleport_mC59ABFDCA878A574A8C9DD05B45EA430A7E36DED (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// m_PostponedDeactivateTeleport = true;
		__this->___m_PostponedDeactivateTeleport_18 = (bool)1;
		// if (m_RayInteractor != null)
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_0 = __this->___m_RayInteractor_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// m_RayInteractor.gameObject.SetActive(true);
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_3 = __this->___m_RayInteractor_7;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::OnStartLocomotion(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_OnStartLocomotion_mF7DE7C7684F1EC6E994236B253C6BF836013A60F (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mFA65768161AFFCF3635EDD51B9D5A27E1ECC3E53_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!context.started)
		bool L_0;
		L_0 = CallbackContext_get_started_m0A946F354239889D41B6D191BCCD573330F9C59D((&___context0), NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		goto IL_0024;
	}

IL_0011:
	{
		// m_LocomotionUsers.Add(context.action);
		HashSet_1_tAB819E09BD04F94C3EA7D69BA059B0DD13F941A3* L_2 = __this->___m_LocomotionUsers_22;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = CallbackContext_get_action_mE1ABC0E3E19C045663AB8EDAB9A9205B8C181CE4((&___context0), NULL);
		NullCheck(L_2);
		bool L_4;
		L_4 = HashSet_1_Add_mFA65768161AFFCF3635EDD51B9D5A27E1ECC3E53(L_2, L_3, HashSet_1_Add_mFA65768161AFFCF3635EDD51B9D5A27E1ECC3E53_RuntimeMethod_var);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::OnStopLocomotion(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_OnStopLocomotion_m1DE893579564A76634647EA3D0B9197B69C160B3 (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_mCD1D1786A37A068E7B80418B00BD4F2CBF2BEF0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_get_Count_m830B4E1CB08A93B4C9803638B3AC2CB9925EB52E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// m_LocomotionUsers.Remove(context.action);
		HashSet_1_tAB819E09BD04F94C3EA7D69BA059B0DD13F941A3* L_0 = __this->___m_LocomotionUsers_22;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = CallbackContext_get_action_mE1ABC0E3E19C045663AB8EDAB9A9205B8C181CE4((&___context0), NULL);
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Remove_mCD1D1786A37A068E7B80418B00BD4F2CBF2BEF0F(L_0, L_1, HashSet_1_Remove_mCD1D1786A37A068E7B80418B00BD4F2CBF2BEF0F_RuntimeMethod_var);
		// if (m_LocomotionUsers.Count == 0 && m_UIScrollModeActive)
		HashSet_1_tAB819E09BD04F94C3EA7D69BA059B0DD13F941A3* L_3 = __this->___m_LocomotionUsers_22;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = HashSet_1_get_Count_m830B4E1CB08A93B4C9803638B3AC2CB9925EB52E_inline(L_3, HashSet_1_get_Count_m830B4E1CB08A93B4C9803638B3AC2CB9925EB52E_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		bool L_5 = __this->___m_UIScrollModeActive_19;
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 0;
	}

IL_002a:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		// DisableLocomotionActions();
		ActionBasedControllerManager_DisableLocomotionActions_mE6A2290813F1BD07280BF4A6E9B6BBA800E81E8C(__this, NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::OnRaySelectEntered(UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_OnRaySelectEntered_m4939EA779DE4C940346028241B357379B18DC99F (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* ___args0, const RuntimeMethod* method) 
{
	{
		// DisableLocomotionActions();
		ActionBasedControllerManager_DisableLocomotionActions_mE6A2290813F1BD07280BF4A6E9B6BBA800E81E8C(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::OnRaySelectExited(UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_OnRaySelectExited_m8236E24078DD99AA472BCFBD19F1E6E0D56B06F5 (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* ___args0, const RuntimeMethod* method) 
{
	{
		// UpdateLocomotionActions();
		ActionBasedControllerManager_UpdateLocomotionActions_m90E85E149A202B3BEE453D8CCE7B9DC95F9442CA(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::OnUIHoverEntered(UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_OnUIHoverEntered_m0D61FC4C73078E5CB303A6875F2EE19CDD9D1F45 (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, UIHoverEventArgs_tC712F3F829391F25C89B9951234415D4C354DC39* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_get_Count_m830B4E1CB08A93B4C9803638B3AC2CB9925EB52E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TrackedDeviceModel_t38B1BA171F5602138D487005E134580213B4DBE8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* G_B2_0 = NULL;
	ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* G_B3_1 = NULL;
	{
		// m_UIScrollModeActive = args.deviceModel.isScrollable && m_UIScrollingEnabled;
		UIHoverEventArgs_tC712F3F829391F25C89B9951234415D4C354DC39* L_0 = ___args0;
		NullCheck(L_0);
		TrackedDeviceModel_t38B1BA171F5602138D487005E134580213B4DBE8 L_1;
		L_1 = UIHoverEventArgs_get_deviceModel_m89E4A51B73B17932351940327599EC37D74BCE95_inline(L_0, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = TrackedDeviceModel_get_isScrollable_m2ADDFD1E1BD1F28CDBD07D6970C5325FCD62A505_inline((&V_0), NULL);
		G_B1_0 = __this;
		if (!L_2)
		{
			G_B2_0 = __this;
			goto IL_001a;
		}
	}
	{
		bool L_3 = __this->___m_UIScrollingEnabled_17;
		G_B3_0 = ((int32_t)(L_3));
		G_B3_1 = G_B1_0;
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_001b:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_UIScrollModeActive_19 = (bool)G_B3_0;
		// if (!m_UIScrollModeActive)
		bool L_4 = __this->___m_UIScrollModeActive_19;
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		// return;
		goto IL_004a;
	}

IL_002f:
	{
		// if (m_LocomotionUsers.Count == 0)
		HashSet_1_tAB819E09BD04F94C3EA7D69BA059B0DD13F941A3* L_6 = __this->___m_LocomotionUsers_22;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = HashSet_1_get_Count_m830B4E1CB08A93B4C9803638B3AC2CB9925EB52E_inline(L_6, HashSet_1_get_Count_m830B4E1CB08A93B4C9803638B3AC2CB9925EB52E_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_004a;
		}
	}
	{
		// DisableLocomotionActions();
		ActionBasedControllerManager_DisableLocomotionActions_mE6A2290813F1BD07280BF4A6E9B6BBA800E81E8C(__this, NULL);
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::OnUIHoverExited(UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_OnUIHoverExited_m3F1275A8FA61278C2E8715D01A0915CD36436908 (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, UIHoverEventArgs_tC712F3F829391F25C89B9951234415D4C354DC39* ___args0, const RuntimeMethod* method) 
{
	{
		// m_UIScrollModeActive = false;
		__this->___m_UIScrollModeActive_19 = (bool)0;
		// UpdateLocomotionActions();
		ActionBasedControllerManager_UpdateLocomotionActions_m90E85E149A202B3BEE453D8CCE7B9DC95F9442CA(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_Awake_m218F72512646A09591011C77FC350C86E8761271 (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) 
{
	{
		// m_AfterInteractionEventsRoutine = OnAfterInteractionEvents();
		RuntimeObject* L_0;
		L_0 = ActionBasedControllerManager_OnAfterInteractionEvents_mCF40B0815F54413521A227CA9945ACAE6EBB83FD(__this, NULL);
		__this->___m_AfterInteractionEventsRoutine_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AfterInteractionEventsRoutine_21), (void*)L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_OnEnable_m51D610223E8BB80FA2AA9945D7BE39E54DB2431B (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (m_TeleportInteractor != null)
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_0 = __this->___m_TeleportInteractor_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// m_TeleportInteractor.gameObject.SetActive(false);
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_3 = __this->___m_TeleportInteractor_8;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
	}

IL_0023:
	{
		// SetupInteractorEvents();
		ActionBasedControllerManager_SetupInteractorEvents_mE9FCCBD1C9BEEBBE22AD9B10F017A9EE1EBDA852(__this, NULL);
		// StartCoroutine(m_AfterInteractionEventsRoutine);
		RuntimeObject* L_5 = __this->___m_AfterInteractionEventsRoutine_21;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_OnDisable_m8B966E4F807DA7CF20155AD1239C1CE86658C535 (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) 
{
	{
		// TeardownInteractorEvents();
		ActionBasedControllerManager_TeardownInteractorEvents_mD09E6747F7DEBAC01AC1D58D78FA53503A2B68C8(__this, NULL);
		// StopCoroutine(m_AfterInteractionEventsRoutine);
		RuntimeObject* L_0 = __this->___m_AfterInteractionEventsRoutine_21;
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_Start_m18D931BF912208154FC2425A4C2565B74BCE5897 (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m854A94510A2DE1CE03E558FF06F92F9A5B67255B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3638DBC1A95785413DAA97E9C4D8B666EF05451D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1109D191766120E6AE6C1E227D686E0DF3130138);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	{
		// UpdateLocomotionActions();
		ActionBasedControllerManager_UpdateLocomotionActions_m90E85E149A202B3BEE453D8CCE7B9DC95F9442CA(__this, NULL);
		// UpdateUIActions();
		ActionBasedControllerManager_UpdateUIActions_m4228CBE3F66C86C0241412811F9D855DDE76F4B5(__this, NULL);
		// if (m_ManipulationInteractionGroup == null)
		XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A* L_0 = __this->___m_ManipulationInteractionGroup_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// Debug.LogError("Missing required Manipulation Interaction Group reference. Use the Inspector window to assign the XR Interaction Group component reference.", this);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E(_stringLiteral1109D191766120E6AE6C1E227D686E0DF3130138, __this, NULL);
		// return;
		goto IL_0179;
	}

IL_0031:
	{
		// var directInteractorIndex = k_InteractorNotInGroup;
		V_0 = (-1);
		// var rayInteractorIndex = k_InteractorNotInGroup;
		V_1 = (-1);
		// m_ManipulationInteractionGroup.GetGroupMembers(s_GroupMembers);
		XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A* L_3 = __this->___m_ManipulationInteractionGroup_5;
		il2cpp_codegen_runtime_class_init_inline(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F* L_4 = ((ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_StaticFields*)il2cpp_codegen_static_fields_for(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var))->___s_GroupMembers_23;
		NullCheck(L_3);
		XRInteractionGroup_GetGroupMembers_mD9F958024795254B67D0B8F39D9D25F81B4E6D19(L_3, L_4, NULL);
		// for (var i = 0; i < s_GroupMembers.Count; ++i)
		V_3 = 0;
		goto IL_0083;
	}

IL_004a:
	{
		// var groupMember = s_GroupMembers[i];
		il2cpp_codegen_runtime_class_init_inline(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F* L_5 = ((ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_StaticFields*)il2cpp_codegen_static_fields_for(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var))->___s_GroupMembers_23;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = List_1_get_Item_m3638DBC1A95785413DAA97E9C4D8B666EF05451D(L_5, L_6, List_1_get_Item_m3638DBC1A95785413DAA97E9C4D8B666EF05451D_RuntimeMethod_var);
		V_4 = L_7;
		// if (ReferenceEquals(groupMember, m_DirectInteractor))
		RuntimeObject* L_8 = V_4;
		XRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B* L_9 = __this->___m_DirectInteractor_6;
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_8) == ((RuntimeObject*)(XRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B*)L_9))? 1 : 0);
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_006c;
		}
	}
	{
		// directInteractorIndex = i;
		int32_t L_11 = V_3;
		V_0 = L_11;
		goto IL_007e;
	}

IL_006c:
	{
		// else if (ReferenceEquals(groupMember, m_RayInteractor))
		RuntimeObject* L_12 = V_4;
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_13 = __this->___m_RayInteractor_7;
		V_6 = (bool)((((RuntimeObject*)(RuntimeObject*)L_12) == ((RuntimeObject*)(XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76*)L_13))? 1 : 0);
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_007e;
		}
	}
	{
		// rayInteractorIndex = i;
		int32_t L_15 = V_3;
		V_1 = L_15;
	}

IL_007e:
	{
		// for (var i = 0; i < s_GroupMembers.Count; ++i)
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0083:
	{
		// for (var i = 0; i < s_GroupMembers.Count; ++i)
		int32_t L_17 = V_3;
		il2cpp_codegen_runtime_class_init_inline(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F* L_18 = ((ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_StaticFields*)il2cpp_codegen_static_fields_for(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var))->___s_GroupMembers_23;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = List_1_get_Count_m854A94510A2DE1CE03E558FF06F92F9A5B67255B_inline(L_18, List_1_get_Count_m854A94510A2DE1CE03E558FF06F92F9A5B67255B_RuntimeMethod_var);
		V_7 = (bool)((((int32_t)L_17) < ((int32_t)L_19))? 1 : 0);
		bool L_20 = V_7;
		if (L_20)
		{
			goto IL_004a;
		}
	}
	{
		// if (directInteractorIndex == k_InteractorNotInGroup)
		int32_t L_21 = V_0;
		V_8 = (bool)((((int32_t)L_21) == ((int32_t)(-1)))? 1 : 0);
		bool L_22 = V_8;
		if (!L_22)
		{
			goto IL_0124;
		}
	}
	{
		// if (rayInteractorIndex == k_InteractorNotInGroup)
		int32_t L_23 = V_1;
		V_9 = (bool)((((int32_t)L_23) == ((int32_t)(-1)))? 1 : 0);
		bool L_24 = V_9;
		if (!L_24)
		{
			goto IL_00fa;
		}
	}
	{
		// if (m_DirectInteractor != null)
		XRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B* L_25 = __this->___m_DirectInteractor_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_25, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_10 = L_26;
		bool L_27 = V_10;
		if (!L_27)
		{
			goto IL_00d3;
		}
	}
	{
		// m_ManipulationInteractionGroup.AddGroupMember(m_DirectInteractor);
		XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A* L_28 = __this->___m_ManipulationInteractionGroup_5;
		XRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B* L_29 = __this->___m_DirectInteractor_6;
		NullCheck(L_28);
		XRInteractionGroup_AddGroupMember_m3E3F11BE7E94DD2F4C1DFE57DC1F44760EC40F8C(L_28, L_29, NULL);
	}

IL_00d3:
	{
		// if (m_RayInteractor != null)
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_30 = __this->___m_RayInteractor_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_30, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_11 = L_31;
		bool L_32 = V_11;
		if (!L_32)
		{
			goto IL_00f7;
		}
	}
	{
		// m_ManipulationInteractionGroup.AddGroupMember(m_RayInteractor);
		XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A* L_33 = __this->___m_ManipulationInteractionGroup_5;
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_34 = __this->___m_RayInteractor_7;
		NullCheck(L_33);
		XRInteractionGroup_AddGroupMember_m3E3F11BE7E94DD2F4C1DFE57DC1F44760EC40F8C(L_33, L_34, NULL);
	}

IL_00f7:
	{
		goto IL_0121;
	}

IL_00fa:
	{
		// else if (m_DirectInteractor != null)
		XRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B* L_35 = __this->___m_DirectInteractor_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_35, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_12 = L_36;
		bool L_37 = V_12;
		if (!L_37)
		{
			goto IL_0121;
		}
	}
	{
		// m_ManipulationInteractionGroup.MoveGroupMemberTo(m_DirectInteractor, rayInteractorIndex);
		XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A* L_38 = __this->___m_ManipulationInteractionGroup_5;
		XRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B* L_39 = __this->___m_DirectInteractor_6;
		int32_t L_40 = V_1;
		NullCheck(L_38);
		XRInteractionGroup_MoveGroupMemberTo_mBCAE55279CA53E830E563504F0377555C6339EC0(L_38, L_39, L_40, NULL);
	}

IL_0121:
	{
		goto IL_0179;
	}

IL_0124:
	{
		// if (rayInteractorIndex == k_InteractorNotInGroup)
		int32_t L_41 = V_1;
		V_13 = (bool)((((int32_t)L_41) == ((int32_t)(-1)))? 1 : 0);
		bool L_42 = V_13;
		if (!L_42)
		{
			goto IL_0157;
		}
	}
	{
		// if (m_RayInteractor != null)
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_43 = __this->___m_RayInteractor_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_43, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_14 = L_44;
		bool L_45 = V_14;
		if (!L_45)
		{
			goto IL_0154;
		}
	}
	{
		// m_ManipulationInteractionGroup.AddGroupMember(m_RayInteractor);
		XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A* L_46 = __this->___m_ManipulationInteractionGroup_5;
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_47 = __this->___m_RayInteractor_7;
		NullCheck(L_46);
		XRInteractionGroup_AddGroupMember_m3E3F11BE7E94DD2F4C1DFE57DC1F44760EC40F8C(L_46, L_47, NULL);
	}

IL_0154:
	{
		goto IL_0178;
	}

IL_0157:
	{
		// if (rayInteractorIndex < directInteractorIndex)
		int32_t L_48 = V_1;
		int32_t L_49 = V_0;
		V_15 = (bool)((((int32_t)L_48) < ((int32_t)L_49))? 1 : 0);
		bool L_50 = V_15;
		if (!L_50)
		{
			goto IL_0177;
		}
	}
	{
		// m_ManipulationInteractionGroup.MoveGroupMemberTo(m_DirectInteractor, rayInteractorIndex);
		XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A* L_51 = __this->___m_ManipulationInteractionGroup_5;
		XRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B* L_52 = __this->___m_DirectInteractor_6;
		int32_t L_53 = V_1;
		NullCheck(L_51);
		XRInteractionGroup_MoveGroupMemberTo_mBCAE55279CA53E830E563504F0377555C6339EC0(L_51, L_52, L_53, NULL);
	}

IL_0177:
	{
	}

IL_0178:
	{
	}

IL_0179:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::OnAfterInteractionEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ActionBasedControllerManager_OnAfterInteractionEvents_mCF40B0815F54413521A227CA9945ACAE6EBB83FD (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnAfterInteractionEventsU3Ed__43_t506464F213A3B72344EE54D5A25DE1EF048C9303_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3COnAfterInteractionEventsU3Ed__43_t506464F213A3B72344EE54D5A25DE1EF048C9303* L_0 = (U3COnAfterInteractionEventsU3Ed__43_t506464F213A3B72344EE54D5A25DE1EF048C9303*)il2cpp_codegen_object_new(U3COnAfterInteractionEventsU3Ed__43_t506464F213A3B72344EE54D5A25DE1EF048C9303_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COnAfterInteractionEventsU3Ed__43__ctor_m9A6E6C96664BB95E01F1A850F6EDB7AC5A8498EF(L_0, 0, NULL);
		U3COnAfterInteractionEventsU3Ed__43_t506464F213A3B72344EE54D5A25DE1EF048C9303* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::UpdateLocomotionActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_UpdateLocomotionActions_m90E85E149A202B3BEE453D8CCE7B9DC95F9442CA (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* G_B2_0 = NULL;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* G_B3_1 = NULL;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* G_B5_0 = NULL;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* G_B6_1 = NULL;
	{
		// SetEnabled(m_Move, m_SmoothMotionEnabled);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_Move_13;
		bool L_1 = __this->___m_SmoothMotionEnabled_15;
		il2cpp_codegen_runtime_class_init_inline(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		ActionBasedControllerManager_SetEnabled_m2EEABE3C85A63159A290D3812A96EA5A725D028F(L_0, L_1, NULL);
		// SetEnabled(m_TeleportModeActivate, !m_SmoothMotionEnabled);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_2 = __this->___m_TeleportModeActivate_9;
		bool L_3 = __this->___m_SmoothMotionEnabled_15;
		ActionBasedControllerManager_SetEnabled_m2EEABE3C85A63159A290D3812A96EA5A725D028F(L_2, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0), NULL);
		// SetEnabled(m_TeleportModeCancel, !m_SmoothMotionEnabled);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_4 = __this->___m_TeleportModeCancel_10;
		bool L_5 = __this->___m_SmoothMotionEnabled_15;
		ActionBasedControllerManager_SetEnabled_m2EEABE3C85A63159A290D3812A96EA5A725D028F(L_4, (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0), NULL);
		// SetEnabled(m_Turn, !m_SmoothMotionEnabled && m_SmoothTurnEnabled);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_6 = __this->___m_Turn_11;
		bool L_7 = __this->___m_SmoothMotionEnabled_15;
		G_B1_0 = L_6;
		if (L_7)
		{
			G_B2_0 = L_6;
			goto IL_0053;
		}
	}
	{
		bool L_8 = __this->___m_SmoothTurnEnabled_16;
		G_B3_0 = ((int32_t)(L_8));
		G_B3_1 = G_B1_0;
		goto IL_0054;
	}

IL_0053:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0054:
	{
		il2cpp_codegen_runtime_class_init_inline(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		ActionBasedControllerManager_SetEnabled_m2EEABE3C85A63159A290D3812A96EA5A725D028F(G_B3_1, (bool)G_B3_0, NULL);
		// SetEnabled(m_SnapTurn, !m_SmoothMotionEnabled && !m_SmoothTurnEnabled);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_9 = __this->___m_SnapTurn_12;
		bool L_10 = __this->___m_SmoothMotionEnabled_15;
		G_B4_0 = L_9;
		if (L_10)
		{
			G_B5_0 = L_9;
			goto IL_0073;
		}
	}
	{
		bool L_11 = __this->___m_SmoothTurnEnabled_16;
		G_B6_0 = ((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_0074;
	}

IL_0073:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0074:
	{
		il2cpp_codegen_runtime_class_init_inline(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		ActionBasedControllerManager_SetEnabled_m2EEABE3C85A63159A290D3812A96EA5A725D028F(G_B6_1, (bool)G_B6_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::DisableLocomotionActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_DisableLocomotionActions_mE6A2290813F1BD07280BF4A6E9B6BBA800E81E8C (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DisableAction(m_Move);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_Move_13;
		il2cpp_codegen_runtime_class_init_inline(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		ActionBasedControllerManager_DisableAction_m7DB0495AE24BDF1E2F626F4EAFEBF580B911FA9F(L_0, NULL);
		// DisableAction(m_TeleportModeActivate);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_1 = __this->___m_TeleportModeActivate_9;
		ActionBasedControllerManager_DisableAction_m7DB0495AE24BDF1E2F626F4EAFEBF580B911FA9F(L_1, NULL);
		// DisableAction(m_TeleportModeCancel);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_2 = __this->___m_TeleportModeCancel_10;
		ActionBasedControllerManager_DisableAction_m7DB0495AE24BDF1E2F626F4EAFEBF580B911FA9F(L_2, NULL);
		// DisableAction(m_Turn);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_3 = __this->___m_Turn_11;
		ActionBasedControllerManager_DisableAction_m7DB0495AE24BDF1E2F626F4EAFEBF580B911FA9F(L_3, NULL);
		// DisableAction(m_SnapTurn);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_4 = __this->___m_SnapTurn_12;
		ActionBasedControllerManager_DisableAction_m7DB0495AE24BDF1E2F626F4EAFEBF580B911FA9F(L_4, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::UpdateUIActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_UpdateUIActions_m4228CBE3F66C86C0241412811F9D855DDE76F4B5 (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetEnabled(m_UIScroll, m_UIScrollingEnabled);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_UIScroll_14;
		bool L_1 = __this->___m_UIScrollingEnabled_17;
		il2cpp_codegen_runtime_class_init_inline(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		ActionBasedControllerManager_SetEnabled_m2EEABE3C85A63159A290D3812A96EA5A725D028F(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::SetEnabled(UnityEngine.InputSystem.InputActionReference,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_SetEnabled_m2EEABE3C85A63159A290D3812A96EA5A725D028F (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___actionReference0, bool ___enabled1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (enabled)
		bool L_0 = ___enabled1;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// EnableAction(actionReference);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_2 = ___actionReference0;
		il2cpp_codegen_runtime_class_init_inline(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		ActionBasedControllerManager_EnableAction_m4F594C5139322B9A68E0A809201BFB76538E9AD8(L_2, NULL);
		goto IL_0016;
	}

IL_000f:
	{
		// DisableAction(actionReference);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_3 = ___actionReference0;
		il2cpp_codegen_runtime_class_init_inline(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		ActionBasedControllerManager_DisableAction_m7DB0495AE24BDF1E2F626F4EAFEBF580B911FA9F(L_3, NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::EnableAction(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_EnableAction_m4F594C5139322B9A68E0A809201BFB76538E9AD8 (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___actionReference0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_0 = NULL;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// var action = GetInputAction(actionReference);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = ___actionReference0;
		il2cpp_codegen_runtime_class_init_inline(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = ActionBasedControllerManager_GetInputAction_mB065776536731D218E38E2CD6E46BA7837AEBC44(L_0, NULL);
		V_0 = L_1;
		// if (action != null && !action.enabled)
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = InputAction_get_enabled_mA1E3523D89FCD4649E787A4BFE9D5863674846FA(L_3, NULL);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		V_1 = (bool)G_B3_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		// action.Enable();
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6 = V_0;
		NullCheck(L_6);
		InputAction_Enable_mB3897C0741409C033656E4566EC49135C3C8BC68(L_6, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::DisableAction(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_DisableAction_m7DB0495AE24BDF1E2F626F4EAFEBF580B911FA9F (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___actionReference0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_0 = NULL;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// var action = GetInputAction(actionReference);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = ___actionReference0;
		il2cpp_codegen_runtime_class_init_inline(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = ActionBasedControllerManager_GetInputAction_mB065776536731D218E38E2CD6E46BA7837AEBC44(L_0, NULL);
		V_0 = L_1;
		// if (action != null && action.enabled)
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = InputAction_get_enabled_mA1E3523D89FCD4649E787A4BFE9D5863674846FA(L_3, NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		V_1 = (bool)G_B3_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		// action.Disable();
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6 = V_0;
		NullCheck(L_6);
		InputAction_Disable_m72D1982F82457C6E003440BADD06989D399BDE50(L_6, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// UnityEngine.InputSystem.InputAction UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::GetInputAction(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ActionBasedControllerManager_GetInputAction_mB065776536731D218E38E2CD6E46BA7837AEBC44 (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___actionReference0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_0 = NULL;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* G_B3_0 = NULL;
	{
		// return actionReference != null ? actionReference.action : null;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = ___actionReference0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*)(NULL));
		goto IL_0013;
	}

IL_000d:
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_2 = ___actionReference0;
		NullCheck(L_2);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_2, NULL);
		G_B3_0 = L_3;
	}

IL_0013:
	{
		V_0 = G_B3_0;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager__ctor_m3CC27D6ED7208EDE2640264C9C20DBDCF01B130C (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mD28F97EDC08E91C2F50CDF8E86AF228489358EA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tAB819E09BD04F94C3EA7D69BA059B0DD13F941A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool m_UIScrollModeActive = false;
		__this->___m_UIScrollModeActive_19 = (bool)0;
		// HashSet<InputAction> m_LocomotionUsers = new HashSet<InputAction>();
		HashSet_1_tAB819E09BD04F94C3EA7D69BA059B0DD13F941A3* L_0 = (HashSet_1_tAB819E09BD04F94C3EA7D69BA059B0DD13F941A3*)il2cpp_codegen_object_new(HashSet_1_tAB819E09BD04F94C3EA7D69BA059B0DD13F941A3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashSet_1__ctor_mD28F97EDC08E91C2F50CDF8E86AF228489358EA7(L_0, HashSet_1__ctor_mD28F97EDC08E91C2F50CDF8E86AF228489358EA7_RuntimeMethod_var);
		__this->___m_LocomotionUsers_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LocomotionUsers_22), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager__cctor_m4D99D01660DA757E177F62D5C4574BBDC3517EFC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mACBF1E6BD883475F3939DB16B207A64E7D937AAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly List<IXRGroupMember> s_GroupMembers = new List<IXRGroupMember>();
		List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F* L_0 = (List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F*)il2cpp_codegen_object_new(List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mACBF1E6BD883475F3939DB16B207A64E7D937AAA(L_0, List_1__ctor_mACBF1E6BD883475F3939DB16B207A64E7D937AAA_RuntimeMethod_var);
		((ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_StaticFields*)il2cpp_codegen_static_fields_for(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var))->___s_GroupMembers_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_StaticFields*)il2cpp_codegen_static_fields_for(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var))->___s_GroupMembers_23), (void*)L_0);
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
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager/<OnAfterInteractionEvents>d__43::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnAfterInteractionEventsU3Ed__43__ctor_m9A6E6C96664BB95E01F1A850F6EDB7AC5A8498EF (U3COnAfterInteractionEventsU3Ed__43_t506464F213A3B72344EE54D5A25DE1EF048C9303* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager/<OnAfterInteractionEvents>d__43::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnAfterInteractionEventsU3Ed__43_System_IDisposable_Dispose_mAF255F0926146E3BAA540BD3721F1ABE8465EE76 (U3COnAfterInteractionEventsU3Ed__43_t506464F213A3B72344EE54D5A25DE1EF048C9303* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager/<OnAfterInteractionEvents>d__43::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COnAfterInteractionEventsU3Ed__43_MoveNext_m907B5A27CA55A1D0F70C703B884B714493F94D93 (U3COnAfterInteractionEventsU3Ed__43_t506464F213A3B72344EE54D5A25DE1EF048C9303* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0033;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0084;
	}

IL_0022:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0033:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (m_PostponedDeactivateTeleport)
		ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		bool L_4 = L_3->___m_PostponedDeactivateTeleport_18;
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0083;
		}
	}
	{
		// if (m_TeleportInteractor != null)
		ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* L_6 = __this->___U3CU3E4__this_2;
		NullCheck(L_6);
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_7 = L_6->___m_TeleportInteractor_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0076;
		}
	}
	{
		// m_TeleportInteractor.gameObject.SetActive(false);
		ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* L_10 = __this->___U3CU3E4__this_2;
		NullCheck(L_10);
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_11 = L_10->___m_TeleportInteractor_8;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
	}

IL_0076:
	{
		// m_PostponedDeactivateTeleport = false;
		ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* L_13 = __this->___U3CU3E4__this_2;
		NullCheck(L_13);
		L_13->___m_PostponedDeactivateTeleport_18 = (bool)0;
	}

IL_0083:
	{
	}

IL_0084:
	{
		// while (true)
		V_3 = (bool)1;
		goto IL_0022;
	}
}
// System.Object UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager/<OnAfterInteractionEvents>d__43::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnAfterInteractionEventsU3Ed__43_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA7C8731AC03CEE18D2B843444B3361AF6FF5B9A8 (U3COnAfterInteractionEventsU3Ed__43_t506464F213A3B72344EE54D5A25DE1EF048C9303* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager/<OnAfterInteractionEvents>d__43::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnAfterInteractionEventsU3Ed__43_System_Collections_IEnumerator_Reset_m0B895C550E8FD11D1D1F49866CFF37E8101A39A8 (U3COnAfterInteractionEventsU3Ed__43_t506464F213A3B72344EE54D5A25DE1EF048C9303* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COnAfterInteractionEventsU3Ed__43_System_Collections_IEnumerator_Reset_m0B895C550E8FD11D1D1F49866CFF37E8101A39A8_RuntimeMethod_var)));
	}
}
// System.Object UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager/<OnAfterInteractionEvents>d__43::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnAfterInteractionEventsU3Ed__43_System_Collections_IEnumerator_get_Current_m3143CE19DE249429CEC3838B90166393EEBE5120 (U3COnAfterInteractionEventsU3Ed__43_t506464F213A3B72344EE54D5A25DE1EF048C9303* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::get_headTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* DynamicMoveProvider_get_headTransform_m303EF17C689C6B515494F07F2259A0BA6B8D0605 (DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A* __this, const RuntimeMethod* method) 
{
	{
		// get => m_HeadTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_HeadTransform_21;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::set_headTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicMoveProvider_set_headTransform_mCB442704F390FE95E70DE479145A5F2E2E138885 (DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_HeadTransform = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___m_HeadTransform_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HeadTransform_21), (void*)L_0);
		return;
	}
}
// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::get_leftControllerTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* DynamicMoveProvider_get_leftControllerTransform_mAA1DA9B68DEEA326FC1560FDADDF454DEC69C8A8 (DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A* __this, const RuntimeMethod* method) 
{
	{
		// get => m_LeftControllerTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_LeftControllerTransform_22;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::set_leftControllerTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicMoveProvider_set_leftControllerTransform_mF1E47F46BFE01F5355FC71BD67DD1A9CFD2C3DB1 (DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_LeftControllerTransform = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___m_LeftControllerTransform_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LeftControllerTransform_22), (void*)L_0);
		return;
	}
}
// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::get_rightControllerTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* DynamicMoveProvider_get_rightControllerTransform_m6FAEE855A31155E21184B32D086F15CE9DA7C92E (DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A* __this, const RuntimeMethod* method) 
{
	{
		// get => m_RightControllerTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_RightControllerTransform_23;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::set_rightControllerTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicMoveProvider_set_rightControllerTransform_mD138BE95DF4A34447A88F1817806C4BAE2239CFA (DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_RightControllerTransform = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___m_RightControllerTransform_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RightControllerTransform_23), (void*)L_0);
		return;
	}
}
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider/MovementDirection UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::get_leftHandMovementDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicMoveProvider_get_leftHandMovementDirection_m5D0D0D4A984DC0B0CAED6DE32722BE640296ABBF (DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A* __this, const RuntimeMethod* method) 
{
	{
		// get => m_LeftHandMovementDirection;
		int32_t L_0 = __this->___m_LeftHandMovementDirection_24;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::set_leftHandMovementDirection(UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider/MovementDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicMoveProvider_set_leftHandMovementDirection_mB73B1139104B7F11E0360C8E900789C0E05881F2 (DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_LeftHandMovementDirection = value;
		int32_t L_0 = ___value0;
		__this->___m_LeftHandMovementDirection_24 = L_0;
		return;
	}
}
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider/MovementDirection UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::get_rightHandMovementDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicMoveProvider_get_rightHandMovementDirection_m88088CD035CDA2ED6597F19DC5C93D8730089C7C (DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A* __this, const RuntimeMethod* method) 
{
	{
		// get => m_RightHandMovementDirection;
		int32_t L_0 = __this->___m_RightHandMovementDirection_25;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::set_rightHandMovementDirection(UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider/MovementDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicMoveProvider_set_rightHandMovementDirection_m985C438DA67D7479D5D0AA020A8EB411856E51E5 (DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_RightHandMovementDirection = value;
		int32_t L_0 = ___value0;
		__this->___m_RightHandMovementDirection_25 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicMoveProvider_Awake_m3BAB88EE73C713431D822EB7323817318C4C0711 (DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral011D3DCC095E581ECDB235DA85D0318CB7DAE281);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		LocomotionProvider_Awake_mDB71AC0528310B8B6A57E0D5D0C6E54C0E0E22EB(__this, NULL);
		// m_CombinedTransform = new GameObject("[Dynamic Move Provider] Combined Forward Source").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteral011D3DCC095E581ECDB235DA85D0318CB7DAE281, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		__this->___m_CombinedTransform_26 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CombinedTransform_26), (void*)L_1);
		// m_CombinedTransform.SetParent(transform, false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___m_CombinedTransform_26;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_2, L_3, (bool)0, NULL);
		// m_CombinedTransform.localPosition = Vector3.zero;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___m_CombinedTransform_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_4);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_4, L_5, NULL);
		// m_CombinedTransform.localRotation = Quaternion.identity;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___m_CombinedTransform_26;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_6);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_6, L_7, NULL);
		// forwardSource = m_CombinedTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___m_CombinedTransform_26;
		ContinuousMoveProviderBase_set_forwardSource_mA1CBEB304ED21A5E919AEDBC38CAD176E23C9195_inline(__this, L_8, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::ComputeDesiredMove(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DynamicMoveProvider_ComputeDesiredMove_mADD1C5EB231A3EDA633059109A91BC4361274733 (DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MovementDirection_tCAD7DEA53759ECE3132FEB72767B4A528AD0F0A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3FB88DDD46531AE82CBA3C68DE5F2B43578B1DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD689EACA9A810383FB2DD66A0BB9FAE341BDC5F6);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* V_9 = NULL;
	bool V_10 = false;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_11 = NULL;
	bool V_12 = false;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	bool V_15 = false;
	bool V_16 = false;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	bool V_19 = false;
	bool V_20 = false;
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD V_21;
	memset((&V_21), 0, sizeof(V_21));
	bool V_22 = false;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* G_B32_0 = NULL;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* G_B31_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B33_0;
	memset((&G_B33_0), 0, sizeof(G_B33_0));
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* G_B35_0 = NULL;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* G_B34_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B36_0;
	memset((&G_B36_0), 0, sizeof(G_B36_0));
	{
		// if (input == Vector2.zero)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___input0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		bool L_2;
		L_2 = Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline(L_0, L_1, NULL);
		V_6 = L_2;
		bool L_3 = V_6;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_7 = L_4;
		goto IL_0244;
	}

IL_001e:
	{
		// if (m_HeadTransform == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___m_HeadTransform_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_8 = L_6;
		bool L_7 = V_8;
		if (!L_7)
		{
			goto IL_0073;
		}
	}
	{
		// var xrOrigin = system.xrOrigin;
		LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B* L_8;
		L_8 = LocomotionProvider_get_system_m2FFD680EAEA3837BF1BE61B34DB6685118760D94_inline(__this, NULL);
		NullCheck(L_8);
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_9;
		L_9 = LocomotionSystem_get_xrOrigin_m06C2599D9739A71562F0F3DD27BC57BCC18F3EF7_inline(L_8, NULL);
		V_9 = L_9;
		// if (xrOrigin != null)
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_10 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_10 = L_11;
		bool L_12 = V_10;
		if (!L_12)
		{
			goto IL_0072;
		}
	}
	{
		// var xrCamera = xrOrigin.Camera;
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_13 = V_9;
		NullCheck(L_13);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14;
		L_14 = XROrigin_get_Camera_m8959027D616F5BD9AEAE3E41ADEE23BBC2CE3629_inline(L_13, NULL);
		V_11 = L_14;
		// if (xrCamera != null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15 = V_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_12 = L_16;
		bool L_17 = V_12;
		if (!L_17)
		{
			goto IL_0071;
		}
	}
	{
		// m_HeadTransform = xrCamera.transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_18 = V_11;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		__this->___m_HeadTransform_21 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HeadTransform_21), (void*)L_19);
	}

IL_0071:
	{
	}

IL_0072:
	{
	}

IL_0073:
	{
		// switch (m_LeftHandMovementDirection)
		int32_t L_20 = __this->___m_LeftHandMovementDirection_24;
		V_14 = L_20;
		int32_t L_21 = V_14;
		V_13 = L_21;
		int32_t L_22 = V_13;
		if (!L_22)
		{
			goto IL_008c;
		}
	}
	{
		goto IL_0085;
	}

IL_0085:
	{
		int32_t L_23 = V_13;
		if ((((int32_t)L_23) == ((int32_t)1)))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_00d6;
	}

IL_008c:
	{
		// if (m_HeadTransform != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = __this->___m_HeadTransform_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_15 = L_25;
		bool L_26 = V_15;
		if (!L_26)
		{
			goto IL_00af;
		}
	}
	{
		// m_LeftMovementPose = m_HeadTransform.GetWorldPose();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = __this->___m_HeadTransform_21;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_28;
		L_28 = TransformExtensions_GetWorldPose_m08E343202174666DFF9A07560AB1A72ACD0DDCF1(L_27, NULL);
		__this->___m_LeftMovementPose_27 = L_28;
	}

IL_00af:
	{
		// break;
		goto IL_00f9;
	}

IL_00b1:
	{
		// if (m_LeftControllerTransform != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = __this->___m_LeftControllerTransform_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_29, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_16 = L_30;
		bool L_31 = V_16;
		if (!L_31)
		{
			goto IL_00d4;
		}
	}
	{
		// m_LeftMovementPose = m_LeftControllerTransform.GetWorldPose();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = __this->___m_LeftControllerTransform_22;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_33;
		L_33 = TransformExtensions_GetWorldPose_m08E343202174666DFF9A07560AB1A72ACD0DDCF1(L_32, NULL);
		__this->___m_LeftMovementPose_27 = L_33;
	}

IL_00d4:
	{
		// break;
		goto IL_00f9;
	}

IL_00d6:
	{
		// Assert.IsTrue(false, $"Unhandled {nameof(MovementDirection)}={m_LeftHandMovementDirection}");
		int32_t L_34 = __this->___m_LeftHandMovementDirection_24;
		int32_t L_35 = L_34;
		RuntimeObject* L_36 = Box(MovementDirection_tCAD7DEA53759ECE3132FEB72767B4A528AD0F0A7_il2cpp_TypeInfo_var, &L_35);
		String_t* L_37;
		L_37 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralD689EACA9A810383FB2DD66A0BB9FAE341BDC5F6, _stringLiteralA3FB88DDD46531AE82CBA3C68DE5F2B43578B1DA, L_36, NULL);
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_m390B3F48332F46CE76AB45491A60ACDCCF521AAE((bool)0, L_37, NULL);
		// break;
		goto IL_00f9;
	}

IL_00f9:
	{
		// switch (m_RightHandMovementDirection)
		int32_t L_38 = __this->___m_RightHandMovementDirection_25;
		V_18 = L_38;
		int32_t L_39 = V_18;
		V_17 = L_39;
		int32_t L_40 = V_17;
		if (!L_40)
		{
			goto IL_0112;
		}
	}
	{
		goto IL_010b;
	}

IL_010b:
	{
		int32_t L_41 = V_17;
		if ((((int32_t)L_41) == ((int32_t)1)))
		{
			goto IL_0137;
		}
	}
	{
		goto IL_015c;
	}

IL_0112:
	{
		// if (m_HeadTransform != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42 = __this->___m_HeadTransform_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_42, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_19 = L_43;
		bool L_44 = V_19;
		if (!L_44)
		{
			goto IL_0135;
		}
	}
	{
		// m_RightMovementPose = m_HeadTransform.GetWorldPose();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45 = __this->___m_HeadTransform_21;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_46;
		L_46 = TransformExtensions_GetWorldPose_m08E343202174666DFF9A07560AB1A72ACD0DDCF1(L_45, NULL);
		__this->___m_RightMovementPose_28 = L_46;
	}

IL_0135:
	{
		// break;
		goto IL_017f;
	}

IL_0137:
	{
		// if (m_RightControllerTransform != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47 = __this->___m_RightControllerTransform_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_48;
		L_48 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_47, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_20 = L_48;
		bool L_49 = V_20;
		if (!L_49)
		{
			goto IL_015a;
		}
	}
	{
		// m_RightMovementPose = m_RightControllerTransform.GetWorldPose();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50 = __this->___m_RightControllerTransform_23;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_51;
		L_51 = TransformExtensions_GetWorldPose_m08E343202174666DFF9A07560AB1A72ACD0DDCF1(L_50, NULL);
		__this->___m_RightMovementPose_28 = L_51;
	}

IL_015a:
	{
		// break;
		goto IL_017f;
	}

IL_015c:
	{
		// Assert.IsTrue(false, $"Unhandled {nameof(MovementDirection)}={m_RightHandMovementDirection}");
		int32_t L_52 = __this->___m_RightHandMovementDirection_25;
		int32_t L_53 = L_52;
		RuntimeObject* L_54 = Box(MovementDirection_tCAD7DEA53759ECE3132FEB72767B4A528AD0F0A7_il2cpp_TypeInfo_var, &L_53);
		String_t* L_55;
		L_55 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralD689EACA9A810383FB2DD66A0BB9FAE341BDC5F6, _stringLiteralA3FB88DDD46531AE82CBA3C68DE5F2B43578B1DA, L_54, NULL);
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_m390B3F48332F46CE76AB45491A60ACDCCF521AAE((bool)0, L_55, NULL);
		// break;
		goto IL_017f;
	}

IL_017f:
	{
		// var leftHandValue = leftHandMoveAction.action?.ReadValue<Vector2>() ?? Vector2.zero;
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_56;
		L_56 = ActionBasedContinuousMoveProvider_get_leftHandMoveAction_m1A3CE1F7AFE741716F8CABEE541C67DE5E16C64B_inline(__this, NULL);
		V_21 = L_56;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_57;
		L_57 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_21), NULL);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_58 = L_57;
		G_B31_0 = L_58;
		if (L_58)
		{
			G_B32_0 = L_58;
			goto IL_0199;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59;
		L_59 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		G_B33_0 = L_59;
		goto IL_019e;
	}

IL_0199:
	{
		NullCheck(G_B32_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_60;
		L_60 = InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF(G_B32_0, InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		G_B33_0 = L_60;
	}

IL_019e:
	{
		V_0 = G_B33_0;
		// var rightHandValue = rightHandMoveAction.action?.ReadValue<Vector2>() ?? Vector2.zero;
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_61;
		L_61 = ActionBasedContinuousMoveProvider_get_rightHandMoveAction_m798EAE65B649189963A7A35D4084FE9B28618490_inline(__this, NULL);
		V_21 = L_61;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_62;
		L_62 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_21), NULL);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_63 = L_62;
		G_B34_0 = L_63;
		if (L_63)
		{
			G_B35_0 = L_63;
			goto IL_01b9;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_64;
		L_64 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		G_B36_0 = L_64;
		goto IL_01be;
	}

IL_01b9:
	{
		NullCheck(G_B35_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_65;
		L_65 = InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF(G_B35_0, InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		G_B36_0 = L_65;
	}

IL_01be:
	{
		V_1 = G_B36_0;
		// var totalSqrMagnitude = leftHandValue.sqrMagnitude + rightHandValue.sqrMagnitude;
		float L_66;
		L_66 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&V_0), NULL);
		float L_67;
		L_67 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&V_1), NULL);
		V_2 = ((float)il2cpp_codegen_add(L_66, L_67));
		// var leftHandBlend = 0.5f;
		V_3 = (0.5f);
		// if (totalSqrMagnitude > Mathf.Epsilon)
		float L_68 = V_2;
		float L_69 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		V_22 = (bool)((((float)L_68) > ((float)L_69))? 1 : 0);
		bool L_70 = V_22;
		if (!L_70)
		{
			goto IL_01ed;
		}
	}
	{
		// leftHandBlend = leftHandValue.sqrMagnitude / totalSqrMagnitude;
		float L_71;
		L_71 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&V_0), NULL);
		float L_72 = V_2;
		V_3 = ((float)(L_71/L_72));
	}

IL_01ed:
	{
		// var combinedPosition = Vector3.Lerp(m_RightMovementPose.position, m_LeftMovementPose.position, leftHandBlend);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_73 = (&__this->___m_RightMovementPose_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = L_73->___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_75 = (&__this->___m_LeftMovementPose_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75->___position_0;
		float L_77 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_74, L_76, L_77, NULL);
		V_4 = L_78;
		// var combinedRotation = Quaternion.Slerp(m_RightMovementPose.rotation, m_LeftMovementPose.rotation, leftHandBlend);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_79 = (&__this->___m_RightMovementPose_28);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_80 = L_79->___rotation_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_81 = (&__this->___m_LeftMovementPose_27);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_82 = L_81->___rotation_1;
		float L_83 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_84;
		L_84 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_80, L_82, L_83, NULL);
		V_5 = L_84;
		// m_CombinedTransform.SetPositionAndRotation(combinedPosition, combinedRotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_85 = __this->___m_CombinedTransform_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_87 = V_5;
		NullCheck(L_85);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_85, L_86, L_87, NULL);
		// return base.ComputeDesiredMove(input);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_88 = ___input0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = ContinuousMoveProviderBase_ComputeDesiredMove_mDB77C9D41306941782F36D150B7CD774E1E3A702(__this, L_88, NULL);
		V_7 = L_89;
		goto IL_0244;
	}

IL_0244:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90 = V_7;
		return L_90;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicMoveProvider__ctor_mABE04D06EBE852E39DDBBB9A305090A5A7B04650 (DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Pose m_LeftMovementPose = Pose.identity;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0;
		L_0 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		__this->___m_LeftMovementPose_27 = L_0;
		// Pose m_RightMovementPose = Pose.identity;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		__this->___m_RightMovementPose_28 = L_1;
		ActionBasedContinuousMoveProvider__ctor_m1310A2218E70F36811987629965EF7BC0F356583(__this, NULL);
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
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager::get_fallbackIfEyeTrackingUnavailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GazeInputManager_get_fallbackIfEyeTrackingUnavailable_m4FB13F913AD2277E5F65AB7D7EF0729644F2D657 (GazeInputManager_t76600ACADAE6718BABD1166EBED065FFD8C90C83* __this, const RuntimeMethod* method) 
{
	{
		// get => m_FallbackIfEyeTrackingUnavailable;
		bool L_0 = __this->___m_FallbackIfEyeTrackingUnavailable_5;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager::set_fallbackIfEyeTrackingUnavailable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInputManager_set_fallbackIfEyeTrackingUnavailable_mE6650150E8EC6483E35CF60782A877B7434DE288 (GazeInputManager_t76600ACADAE6718BABD1166EBED065FFD8C90C83* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_FallbackIfEyeTrackingUnavailable = value;
		bool L_0 = ___value0;
		__this->___m_FallbackIfEyeTrackingUnavailable_5 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInputManager_Awake_m913673B2763F78D3AC484A62A8CB66DC93CAF6B7 (GazeInputManager_t76600ACADAE6718BABD1166EBED065FFD8C90C83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF7167BCE82C30E7D09082FFCA3F3EFFD32B186CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFAC408E08BBD06FE731A9E84F5E79461F23EACBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFB31F2643918A411B2F1539CA180A763D0200945_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GazeInputManager_OnDeviceChange_m5A5EA7E87A46CAEC0CA21EA476B0DAEBB8F2885E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GazeInputManager_OnDeviceConnected_mFD98427178DBDAF1C7B406FEA28161D3186F2E68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyArray_1_GetEnumerator_m40DC2BB2BC3C855369753E8780E2B2DE6F38E88C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08922C02E680D90FAAB0862833A88225C5A1F397);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91BEF5D9E8C19A7BAA9335746C74FFE9F0A218C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAC9FA4EA913C7FEEEFEEA8D8C3FEF0ADF872886);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF35C02D0118C69B6ADE22DDE2F7B35FDD2B1AD7C);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* V_0 = NULL;
	bool V_1 = false;
	Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B V_2;
	memset((&V_2), 0, sizeof(V_2));
	ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA V_3;
	memset((&V_3), 0, sizeof(V_3));
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* V_4 = NULL;
	bool V_5 = false;
	{
		// var inputDeviceList = new List<InputDevice>();
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_0 = (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*)il2cpp_codegen_object_new(List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4(L_0, List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_RuntimeMethod_var);
		V_0 = L_0;
		// InputDevices.GetDevicesWithCharacteristics(InputDeviceCharacteristics.EyeTracking, inputDeviceList);
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_1 = V_0;
		InputDevices_GetDevicesWithCharacteristics_m82F54DE2802FCE4EB730FCFBF8731CA91A27DEB0(((int32_t)16), L_1, NULL);
		// if (inputDeviceList.Count > 0)
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_inline(L_2, List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// Debug.Log("Eye tracking device found!", this);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(_stringLiteralCAC9FA4EA913C7FEEEFEEA8D8C3FEF0ADF872886, __this, NULL);
		// m_EyeTrackingDeviceFound = true;
		__this->___m_EyeTrackingDeviceFound_6 = (bool)1;
		// return;
		goto IL_00e1;
	}

IL_0036:
	{
		// foreach (var device in InputSystem.InputSystem.devices)
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA L_5;
		L_5 = InputSystem_get_devices_mBE599285E43211ACE15248654A3E3D7DB42C85CA(NULL);
		V_3 = L_5;
		Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B L_6;
		L_6 = ReadOnlyArray_1_GetEnumerator_m40DC2BB2BC3C855369753E8780E2B2DE6F38E88C((&V_3), ReadOnlyArray_1_GetEnumerator_m40DC2BB2BC3C855369753E8780E2B2DE6F38E88C_RuntimeMethod_var);
		V_2 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF7167BCE82C30E7D09082FFCA3F3EFFD32B186CB((&V_2), Enumerator_Dispose_mF7167BCE82C30E7D09082FFCA3F3EFFD32B186CB_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007f_1;
			}

IL_0047_1:
			{
				// foreach (var device in InputSystem.InputSystem.devices)
				InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_7;
				L_7 = Enumerator_get_Current_mFB31F2643918A411B2F1539CA180A763D0200945((&V_2), Enumerator_get_Current_mFB31F2643918A411B2F1539CA180A763D0200945_RuntimeMethod_var);
				V_4 = L_7;
				// if (device.layout == k_EyeGazeLayoutName)
				InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_8 = V_4;
				NullCheck(L_8);
				String_t* L_9;
				L_9 = InputControl_get_layout_mE6054F87BB94A1F1D06355E137A1840B2EFF7971(L_8, NULL);
				bool L_10;
				L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteralF35C02D0118C69B6ADE22DDE2F7B35FDD2B1AD7C, NULL);
				V_5 = L_10;
				bool L_11 = V_5;
				if (!L_11)
				{
					goto IL_007e_1;
				}
			}
			{
				// Debug.Log("Eye gaze device found!", this);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(_stringLiteral91BEF5D9E8C19A7BAA9335746C74FFE9F0A218C1, __this, NULL);
				// m_EyeTrackingDeviceFound = true;
				__this->___m_EyeTrackingDeviceFound_6 = (bool)1;
				// return;
				goto IL_00e1;
			}

IL_007e_1:
			{
			}

IL_007f_1:
			{
				// foreach (var device in InputSystem.InputSystem.devices)
				bool L_12;
				L_12 = Enumerator_MoveNext_mFAC408E08BBD06FE731A9E84F5E79461F23EACBC((&V_2), Enumerator_MoveNext_mFAC408E08BBD06FE731A9E84F5E79461F23EACBC_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_0047_1;
				}
			}
			{
				goto IL_0099;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0099:
	{
		// Debug.LogWarning($"Could not find a device that supports eye tracking on Awake. {this} has subscribed to device connected events and will activate the GameObject when an eye tracking device is connected.", this);
		String_t* L_13;
		L_13 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral08922C02E680D90FAAB0862833A88225C5A1F397, __this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(L_13, __this, NULL);
		// InputDevices.deviceConnected += OnDeviceConnected;
		Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC* L_14 = (Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC*)il2cpp_codegen_object_new(Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Action_1__ctor_m9EFC6656FE579E4D72FFCA991DE5860FA28DD71E(L_14, __this, (intptr_t)((void*)GazeInputManager_OnDeviceConnected_mFD98427178DBDAF1C7B406FEA28161D3186F2E68_RuntimeMethod_var), NULL);
		InputDevices_add_deviceConnected_m0329DBAE47CA4A20778F7DCBA470FCF9A672E9C9(L_14, NULL);
		// InputSystem.InputSystem.onDeviceChange += OnDeviceChange;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_15 = (Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333*)il2cpp_codegen_object_new(Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Action_2__ctor_m23A4911D82F290811EDC6BFC315C339857526804(L_15, __this, (intptr_t)((void*)GazeInputManager_OnDeviceChange_m5A5EA7E87A46CAEC0CA21EA476B0DAEBB8F2885E_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_add_onDeviceChange_mC1BAF8DE08B2B3F6D0A98D80AE1E4FF5531C60FA(L_15, NULL);
		// gameObject.SetActive(m_FallbackIfEyeTrackingUnavailable);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		bool L_17 = __this->___m_FallbackIfEyeTrackingUnavailable_5;
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, L_17, NULL);
	}

IL_00e1:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInputManager_OnDestroy_m3D9C35EE01B4439AE17459009DD257CC22B45A4A (GazeInputManager_t76600ACADAE6718BABD1166EBED065FFD8C90C83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GazeInputManager_OnDeviceChange_m5A5EA7E87A46CAEC0CA21EA476B0DAEBB8F2885E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GazeInputManager_OnDeviceConnected_mFD98427178DBDAF1C7B406FEA28161D3186F2E68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InputDevices.deviceConnected -= OnDeviceConnected;
		Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC* L_0 = (Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC*)il2cpp_codegen_object_new(Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m9EFC6656FE579E4D72FFCA991DE5860FA28DD71E(L_0, __this, (intptr_t)((void*)GazeInputManager_OnDeviceConnected_mFD98427178DBDAF1C7B406FEA28161D3186F2E68_RuntimeMethod_var), NULL);
		InputDevices_remove_deviceConnected_m52D0C5E73A9BBEEF775E21DF93DDF0DD4F7D1BB5(L_0, NULL);
		// InputSystem.InputSystem.onDeviceChange -= OnDeviceChange;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_1 = (Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333*)il2cpp_codegen_object_new(Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_2__ctor_m23A4911D82F290811EDC6BFC315C339857526804(L_1, __this, (intptr_t)((void*)GazeInputManager_OnDeviceChange_m5A5EA7E87A46CAEC0CA21EA476B0DAEBB8F2885E_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_remove_onDeviceChange_mD08F75C263C2D687B2E6E68E86105829075BF717(L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager::OnDeviceConnected(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInputManager_OnDeviceConnected_mFD98427178DBDAF1C7B406FEA28161D3186F2E68 (GazeInputManager_t76600ACADAE6718BABD1166EBED065FFD8C90C83* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___inputDevice0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAC9FA4EA913C7FEEEFEEA8D8C3FEF0ADF872886);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (m_EyeTrackingDeviceFound || !inputDevice.characteristics.HasFlag(InputDeviceCharacteristics.EyeTracking))
		bool L_0 = __this->___m_EyeTrackingDeviceFound_6;
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		uint32_t L_1;
		L_1 = InputDevice_get_characteristics_mEEDC9AB2254C155C47B48848FECF347A87925ADB((&___inputDevice0), NULL);
		uint32_t L_2 = L_1;
		int32_t L_3 = ((int32_t)16);
		bool L_4 = il2cpp_codegen_enum_has_flag((uint32_t)L_2, (uint32_t)L_3);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = 1;
	}

IL_0027:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		// return;
		goto IL_004d;
	}

IL_002d:
	{
		// Debug.Log("Eye tracking device found!", this);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(_stringLiteralCAC9FA4EA913C7FEEEFEEA8D8C3FEF0ADF872886, __this, NULL);
		// m_EyeTrackingDeviceFound = true;
		__this->___m_EyeTrackingDeviceFound_6 = (bool)1;
		// gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager::OnDeviceChange(UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInputManager_OnDeviceChange_m5A5EA7E87A46CAEC0CA21EA476B0DAEBB8F2885E (GazeInputManager_t76600ACADAE6718BABD1166EBED065FFD8C90C83* __this, InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, int32_t ___change1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91BEF5D9E8C19A7BAA9335746C74FFE9F0A218C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF35C02D0118C69B6ADE22DDE2F7B35FDD2B1AD7C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// if (m_EyeTrackingDeviceFound || change != InputDeviceChange.Added)
		bool L_0 = __this->___m_EyeTrackingDeviceFound_6;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___change1;
		G_B3_0 = ((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// return;
		goto IL_004c;
	}

IL_0016:
	{
		// if (device.layout == k_EyeGazeLayoutName)
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_3 = ___device0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InputControl_get_layout_mE6054F87BB94A1F1D06355E137A1840B2EFF7971(L_3, NULL);
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteralF35C02D0118C69B6ADE22DDE2F7B35FDD2B1AD7C, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_004c;
		}
	}
	{
		// Debug.Log("Eye gaze device found!", this);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(_stringLiteral91BEF5D9E8C19A7BAA9335746C74FFE9F0A218C1, __this, NULL);
		// m_EyeTrackingDeviceFound = true;
		__this->___m_EyeTrackingDeviceFound_6 = (bool)1;
		// gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInputManager__ctor_m745DE4041AB26B99172061A4E8050A0FD507BEB8 (GazeInputManager_t76600ACADAE6718BABD1166EBED065FFD8C90C83* __this, const RuntimeMethod* method) 
{
	{
		// bool m_FallbackIfEyeTrackingUnavailable = true;
		__this->___m_FallbackIfEyeTrackingUnavailable_5 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.IncrementUIText::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* IncrementUIText_get_text_mEE9AC522102D09B1CDE167EA4E3379C6405FCC4E (IncrementUIText_tF29B22345E086474C294CAFCFCEF0F336CA34359* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___m_Text_4;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.IncrementUIText::set_text(UnityEngine.UI.Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementUIText_set_text_m77A3581107A2AD2C94A2410B6E2AF024DA5E6A7F (IncrementUIText_tF29B22345E086474C294CAFCFCEF0F336CA34359* __this, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Text = value;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = ___value0;
		__this->___m_Text_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Text_4), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.IncrementUIText::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementUIText_Awake_mC97B06670534A04F0A2C68E119D8D1391236BA56 (IncrementUIText_tF29B22345E086474C294CAFCFCEF0F336CA34359* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE556C5D923A68B00D17767856C66003D52D6CEC);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (m_Text == null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___m_Text_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// Debug.LogWarning("Missing required Text component reference. Use the Inspector window to assign which Text component to increment.", this);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(_stringLiteralAE556C5D923A68B00D17767856C66003D52D6CEC, __this, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.IncrementUIText::IncrementText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementUIText_IncrementText_m8E724ACEA196D506DEEA23752B3950D25883BFEA (IncrementUIText_tF29B22345E086474C294CAFCFCEF0F336CA34359* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// m_Count += 1;
		int32_t L_0 = __this->___m_Count_5;
		__this->___m_Count_5 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if (m_Text != null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___m_Text_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// m_Text.text = m_Count.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___m_Text_4;
		int32_t* L_5 = (&__this->___m_Count_5);
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_5, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_6);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.IncrementUIText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementUIText__ctor_m4699F30CF0F521FCC7C05391C13F1711B78CA9EA (IncrementUIText_tF29B22345E086474C294CAFCFCEF0F336CA34359* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::get_pokeFollowTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* XRPokeFollowAffordance_get_pokeFollowTransform_m73344435C2867D159F2F7E02F49376F558087F1E (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, const RuntimeMethod* method) 
{
	{
		// get => m_PokeFollowTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_PokeFollowTransform_4;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::set_pokeFollowTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_set_pokeFollowTransform_m349E957CDD31FC13ABF0136717A3CACDD1451546 (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_PokeFollowTransform = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___m_PokeFollowTransform_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PokeFollowTransform_4), (void*)L_0);
		return;
	}
}
// System.Single UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::get_smoothingSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRPokeFollowAffordance_get_smoothingSpeed_m6DA02413915676F5754E172BAF1C07C0C517BB75 (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SmoothingSpeed;
		float L_0 = __this->___m_SmoothingSpeed_5;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::set_smoothingSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_set_smoothingSpeed_m6F6EDC78B71DE4F9223FB1DC41EA3EB1FBEC210D (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_SmoothingSpeed = value;
		float L_0 = ___value0;
		__this->___m_SmoothingSpeed_5 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::get_returnToInitialPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPokeFollowAffordance_get_returnToInitialPosition_m8D6FC7BDF8A2419ACEAF06B9E46321416A22412A (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ReturnToInitialPosition;
		bool L_0 = __this->___m_ReturnToInitialPosition_6;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::set_returnToInitialPosition(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_set_returnToInitialPosition_m77573EFC79B33125B097570F60A87EBA1BA1BA91 (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ReturnToInitialPosition = value;
		bool L_0 = ___value0;
		__this->___m_ReturnToInitialPosition_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::get_applyIfChildIsTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPokeFollowAffordance_get_applyIfChildIsTarget_m1023FE2DD7E8622125AB3E6261B00B38DC1CA302 (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ApplyIfChildIsTarget;
		bool L_0 = __this->___m_ApplyIfChildIsTarget_7;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::set_applyIfChildIsTarget(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_set_applyIfChildIsTarget_mBBE196D3022D66890463276AAFDFB54444A0BFE2 (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ApplyIfChildIsTarget = value;
		bool L_0 = ___value0;
		__this->___m_ApplyIfChildIsTarget_7 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::get_clampToMaxDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPokeFollowAffordance_get_clampToMaxDistance_m6F811E71D7755E06CC1F40B6566FACE71EADC78C (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ClampToMaxDistance;
		bool L_0 = __this->___m_ClampToMaxDistance_8;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::set_clampToMaxDistance(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_set_clampToMaxDistance_mD0D40453025EF106A1D04AD65A8FC4315B83AA2E (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ClampToMaxDistance = value;
		bool L_0 = ___value0;
		__this->___m_ClampToMaxDistance_8 = L_0;
		return;
	}
}
// System.Single UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::get_maxDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRPokeFollowAffordance_get_maxDistance_m72B9FC2D76C8CE120CAFA3C35A30CB7E61711F5D (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, const RuntimeMethod* method) 
{
	{
		// get => m_MaxDistance;
		float L_0 = __this->___m_MaxDistance_9;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::set_maxDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_set_maxDistance_m10822A5C3A8814B606594E089B6E8CBB4268AC49 (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_MaxDistance = value;
		float L_0 = ___value0;
		__this->___m_MaxDistance_9 = L_0;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::get_initialPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XRPokeFollowAffordance_get_initialPosition_m2076FCE50726A24B4A56CEA94A5AE7CC2BFE7401 (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, const RuntimeMethod* method) 
{
	{
		// get => m_InitialPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_InitialPosition_14;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::set_initialPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_set_initialPosition_mDEC89AA206367BCE6753B8BB9DAC0D3272B3947A (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_InitialPosition = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___m_InitialPosition_14 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_Awake_m610BBBA2BD47341BB933845C9C005C3C5211F342 (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisIMultiPokeStateDataProvider_t2DBE7B31C49AA582A553D1A47172919E555599D8_m083FDB476C1BFAA915E4C6CEA8904DF070F09569_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisIPokeStateDataProvider_t44A37A07F4158455AD30DD3BE0AE5B603E61AD1E_mD04C3940E4B8C24B3DF01EFC7D17BFA69FF2804E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// m_MultiPokeStateDataProvider = GetComponentInParent<IMultiPokeStateDataProvider>();
		RuntimeObject* L_0;
		L_0 = Component_GetComponentInParent_TisIMultiPokeStateDataProvider_t2DBE7B31C49AA582A553D1A47172919E555599D8_m083FDB476C1BFAA915E4C6CEA8904DF070F09569(__this, Component_GetComponentInParent_TisIMultiPokeStateDataProvider_t2DBE7B31C49AA582A553D1A47172919E555599D8_m083FDB476C1BFAA915E4C6CEA8904DF070F09569_RuntimeMethod_var);
		__this->___m_MultiPokeStateDataProvider_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_MultiPokeStateDataProvider_11), (void*)L_0);
		// if(m_MultiPokeStateDataProvider == null)
		RuntimeObject* L_1 = __this->___m_MultiPokeStateDataProvider_11;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// m_PokeDataProvider = GetComponentInParent<IPokeStateDataProvider>();
		RuntimeObject* L_3;
		L_3 = Component_GetComponentInParent_TisIPokeStateDataProvider_t44A37A07F4158455AD30DD3BE0AE5B603E61AD1E_mD04C3940E4B8C24B3DF01EFC7D17BFA69FF2804E(__this, Component_GetComponentInParent_TisIPokeStateDataProvider_t44A37A07F4158455AD30DD3BE0AE5B603E61AD1E_mD04C3940E4B8C24B3DF01EFC7D17BFA69FF2804E_RuntimeMethod_var);
		__this->___m_PokeDataProvider_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PokeDataProvider_10), (void*)L_3);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_Start_m4499F1A6DA2148644B4AE565B55C82612943C8F9 (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BindableVariableBase_1_Subscribe_mC4E18EDA53B1AF95B57D4D6976353EC198EA6608_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultiPokeStateDataProvider_t2DBE7B31C49AA582A553D1A47172919E555599D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPokeStateDataProvider_t44A37A07F4158455AD30DD3BE0AE5B603E61AD1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyBindableVariable_1_tD608177C44612AEF9CD25AEDCA15F1734DD0E073_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRPokeFollowAffordance_OnPokeStateDataUpdated_m47E524438FBC3D238855A42C176A43355387137F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRPokeFollowAffordance_OnTransformTweenableVariableUpdated_m45F75BBA331A940327AD949A7C0939F24F6B57B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral675D495E61C139628601D1F560A558803C58CB67);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (m_PokeFollowTransform != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_PokeFollowTransform_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00be;
		}
	}
	{
		// m_InitialPosition = m_PokeFollowTransform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___m_PokeFollowTransform_4;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_3, NULL);
		__this->___m_InitialPosition_14 = L_4;
		// m_BindingsGroup.AddBinding(m_TransformTweenableVariable.Subscribe(OnTransformTweenableVariableUpdated));
		BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A* L_5 = __this->___m_BindingsGroup_13;
		Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* L_6 = __this->___m_TransformTweenableVariable_12;
		Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B* L_7 = (Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B*)il2cpp_codegen_object_new(Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_mB233B0C3B645B249C912144F3F6EA0B343C5E5F0(L_7, __this, (intptr_t)((void*)XRPokeFollowAffordance_OnTransformTweenableVariableUpdated_m45F75BBA331A940327AD949A7C0939F24F6B57B2_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = BindableVariableBase_1_Subscribe_mC4E18EDA53B1AF95B57D4D6976353EC198EA6608(L_6, L_7, BindableVariableBase_1_Subscribe_mC4E18EDA53B1AF95B57D4D6976353EC198EA6608_RuntimeMethod_var);
		NullCheck(L_5);
		BindingsGroup_AddBinding_m18697E73861A1C67DE0674F162B43CCE9E67C89B(L_5, L_8, NULL);
		// if(m_MultiPokeStateDataProvider != null)
		RuntimeObject* L_9 = __this->___m_MultiPokeStateDataProvider_11;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_9) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0086;
		}
	}
	{
		// m_BindingsGroup.AddBinding(m_MultiPokeStateDataProvider.GetPokeStateDataForTarget(transform).Subscribe(OnPokeStateDataUpdated));
		BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A* L_11 = __this->___m_BindingsGroup_13;
		RuntimeObject* L_12 = __this->___m_MultiPokeStateDataProvider_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker1< RuntimeObject*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(0 /* Unity.XR.CoreUtils.Bindings.Variables.IReadOnlyBindableVariable`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.IMultiPokeStateDataProvider::GetPokeStateDataForTarget(UnityEngine.Transform) */, IMultiPokeStateDataProvider_t2DBE7B31C49AA582A553D1A47172919E555599D8_il2cpp_TypeInfo_var, L_12, L_13);
		Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8* L_15 = (Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8*)il2cpp_codegen_object_new(Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Action_1__ctor_m51E8C8F6D6AAA447F906F82CBA1114C86E69FF54(L_15, __this, (intptr_t)((void*)XRPokeFollowAffordance_OnPokeStateDataUpdated_m47E524438FBC3D238855A42C176A43355387137F_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker1< RuntimeObject*, Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8* >::Invoke(0 /* Unity.XR.CoreUtils.Bindings.IEventBinding Unity.XR.CoreUtils.Bindings.Variables.IReadOnlyBindableVariable`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData>::Subscribe(System.Action`1<T>) */, IReadOnlyBindableVariable_1_tD608177C44612AEF9CD25AEDCA15F1734DD0E073_il2cpp_TypeInfo_var, L_14, L_15);
		NullCheck(L_11);
		BindingsGroup_AddBinding_m18697E73861A1C67DE0674F162B43CCE9E67C89B(L_11, L_16, NULL);
		goto IL_00bb;
	}

IL_0086:
	{
		// else if(m_PokeDataProvider != null)
		RuntimeObject* L_17 = __this->___m_PokeDataProvider_10;
		V_2 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_18 = V_2;
		if (!L_18)
		{
			goto IL_00bb;
		}
	}
	{
		// m_BindingsGroup.AddBinding(m_PokeDataProvider.pokeStateData.SubscribeAndUpdate(OnPokeStateDataUpdated));
		BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A* L_19 = __this->___m_BindingsGroup_13;
		RuntimeObject* L_20 = __this->___m_PokeDataProvider_10;
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Unity.XR.CoreUtils.Bindings.Variables.IReadOnlyBindableVariable`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.IPokeStateDataProvider::get_pokeStateData() */, IPokeStateDataProvider_t44A37A07F4158455AD30DD3BE0AE5B603E61AD1E_il2cpp_TypeInfo_var, L_20);
		Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8* L_22 = (Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8*)il2cpp_codegen_object_new(Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		Action_1__ctor_m51E8C8F6D6AAA447F906F82CBA1114C86E69FF54(L_22, __this, (intptr_t)((void*)XRPokeFollowAffordance_OnPokeStateDataUpdated_m47E524438FBC3D238855A42C176A43355387137F_RuntimeMethod_var), NULL);
		NullCheck(L_21);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker1< RuntimeObject*, Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8* >::Invoke(1 /* Unity.XR.CoreUtils.Bindings.IEventBinding Unity.XR.CoreUtils.Bindings.Variables.IReadOnlyBindableVariable`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData>::SubscribeAndUpdate(System.Action`1<T>) */, IReadOnlyBindableVariable_1_tD608177C44612AEF9CD25AEDCA15F1734DD0E073_il2cpp_TypeInfo_var, L_21, L_22);
		NullCheck(L_19);
		BindingsGroup_AddBinding_m18697E73861A1C67DE0674F162B43CCE9E67C89B(L_19, L_23, NULL);
	}

IL_00bb:
	{
		goto IL_00da;
	}

IL_00be:
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// Debug.LogWarning($"Missing Poke Follow Transform assignment on {this}. Disabling component.", this);
		String_t* L_24;
		L_24 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral675D495E61C139628601D1F560A558803C58CB67, __this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(L_24, __this, NULL);
	}

IL_00da:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_OnDestroy_mE345311D68D5D9E9877A7384691B230B1B0073FB (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenableVariableAsyncBase_1_Dispose_m7D9825BEBF868FFDC835F08406D9E9AD17F53E32_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* G_B2_0 = NULL;
	Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* G_B1_0 = NULL;
	{
		// m_BindingsGroup.Clear();
		BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A* L_0 = __this->___m_BindingsGroup_13;
		NullCheck(L_0);
		BindingsGroup_Clear_m092668459F10E46245228224D1334DAB089B72E3(L_0, NULL);
		// m_TransformTweenableVariable?.Dispose();
		Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* L_1 = __this->___m_TransformTweenableVariable_12;
		Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0019;
		}
	}
	{
		goto IL_001f;
	}

IL_0019:
	{
		NullCheck(G_B2_0);
		TweenableVariableAsyncBase_1_Dispose_m7D9825BEBF868FFDC835F08406D9E9AD17F53E32(G_B2_0, TweenableVariableAsyncBase_1_Dispose_m7D9825BEBF868FFDC835F08406D9E9AD17F53E32_RuntimeMethod_var);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_LateUpdate_m4C59B8156DE2AF9D63A61A9E523A059A41DD9099 (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenableVariableBase_1_HandleTween_m61752C0D7316DD05AB1C8E10319F47902D4CDCD9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* G_B4_0 = NULL;
	Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* G_B3_0 = NULL;
	float G_B5_0 = 0.0f;
	Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* G_B5_1 = NULL;
	{
		// if (m_IsFirstFrame)
		bool L_0 = __this->___m_IsFirstFrame_15;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// m_TransformTweenableVariable.HandleTween(1f);
		Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* L_2 = __this->___m_TransformTweenableVariable_12;
		NullCheck(L_2);
		TweenableVariableBase_1_HandleTween_m61752C0D7316DD05AB1C8E10319F47902D4CDCD9(L_2, (1.0f), TweenableVariableBase_1_HandleTween_m61752C0D7316DD05AB1C8E10319F47902D4CDCD9_RuntimeMethod_var);
		// m_IsFirstFrame = false;
		__this->___m_IsFirstFrame_15 = (bool)0;
		// return;
		goto IL_0052;
	}

IL_0026:
	{
		// m_TransformTweenableVariable.HandleTween(m_SmoothingSpeed > 0f ? Time.deltaTime * m_SmoothingSpeed : 1f);
		Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* L_3 = __this->___m_TransformTweenableVariable_12;
		float L_4 = __this->___m_SmoothingSpeed_5;
		G_B3_0 = L_3;
		if ((((float)L_4) > ((float)(0.0f))))
		{
			G_B4_0 = L_3;
			goto IL_0040;
		}
	}
	{
		G_B5_0 = (1.0f);
		G_B5_1 = G_B3_0;
		goto IL_004c;
	}

IL_0040:
	{
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_6 = __this->___m_SmoothingSpeed_5;
		G_B5_0 = ((float)il2cpp_codegen_multiply(L_5, L_6));
		G_B5_1 = G_B4_0;
	}

IL_004c:
	{
		NullCheck(G_B5_1);
		TweenableVariableBase_1_HandleTween_m61752C0D7316DD05AB1C8E10319F47902D4CDCD9(G_B5_1, G_B5_0, TweenableVariableBase_1_HandleTween_m61752C0D7316DD05AB1C8E10319F47902D4CDCD9_RuntimeMethod_var);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::OnTransformTweenableVariableUpdated(Unity.Mathematics.float3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_OnTransformTweenableVariableUpdated_m45F75BBA331A940327AD949A7C0939F24F6B57B2 (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___position0, const RuntimeMethod* method) 
{
	{
		// m_PokeFollowTransform.localPosition = position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_PokeFollowTransform_4;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1 = ___position0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = float3_op_Implicit_m9CC301DFD67EEFAA15CA05E91913E862B22326F6(L_1, NULL);
		NullCheck(L_0);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::OnPokeStateDataUpdated(UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_OnPokeStateDataUpdated_m47E524438FBC3D238855A42C176A43355387137F (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, PokeStateData_t87D34716C1C477FC04D9344710D09399FE6F5032 ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenableVariableBase_1_set_target_m3127A21F0C2EF40FA4604D603803BA53DE604337_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B9_0 = 0;
	{
		// var pokeTarget = data.target;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = PokeStateData_get_target_m464672F352B73F0010B9829CA5C692505783091C_inline((&___data0), NULL);
		V_0 = L_0;
		// var applyFollow = m_ApplyIfChildIsTarget
		//     ? pokeTarget != null && pokeTarget.IsChildOf(transform)
		//     : pokeTarget == transform;
		bool L_1 = __this->___m_ApplyIfChildIsTarget_7;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, L_3, NULL);
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0037;
	}

IL_001f:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		bool L_9;
		L_9 = Transform_IsChildOf_mFE071BE1E775E825401FE0A9B9BE49E39D256CEA(L_7, L_8, NULL);
		G_B5_0 = ((int32_t)(L_9));
		goto IL_0037;
	}

IL_0036:
	{
		G_B5_0 = 0;
	}

IL_0037:
	{
		V_1 = (bool)G_B5_0;
		// if (applyFollow)
		bool L_10 = V_1;
		V_2 = L_10;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0095;
		}
	}
	{
		// var targetPosition = pokeTarget.InverseTransformPoint(data.axisAlignedPokeInteractionPoint);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = PokeStateData_get_axisAlignedPokeInteractionPoint_mC3B4E6D1232B8A2E2A98374B3AA9976E29E67D43_inline((&___data0), NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_12, L_13, NULL);
		V_3 = L_14;
		// if (m_ClampToMaxDistance && targetPosition.sqrMagnitude > m_MaxDistance * m_MaxDistance)
		bool L_15 = __this->___m_ClampToMaxDistance_8;
		if (!L_15)
		{
			goto IL_006c;
		}
	}
	{
		float L_16;
		L_16 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_3), NULL);
		float L_17 = __this->___m_MaxDistance_9;
		float L_18 = __this->___m_MaxDistance_9;
		G_B9_0 = ((((float)L_16) > ((float)((float)il2cpp_codegen_multiply(L_17, L_18))))? 1 : 0);
		goto IL_006d;
	}

IL_006c:
	{
		G_B9_0 = 0;
	}

IL_006d:
	{
		V_4 = (bool)G_B9_0;
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_0080;
		}
	}
	{
		// targetPosition = Vector3.ClampMagnitude(targetPosition, m_MaxDistance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_3;
		float L_21 = __this->___m_MaxDistance_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline(L_20, L_21, NULL);
		V_3 = L_22;
	}

IL_0080:
	{
		// m_TransformTweenableVariable.target = targetPosition;
		Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* L_23 = __this->___m_TransformTweenableVariable_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_3;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_25;
		L_25 = float3_op_Implicit_mE1831A3AC179B7EB3236F8202EC8DD5CE05376AB(L_24, NULL);
		NullCheck(L_23);
		TweenableVariableBase_1_set_target_m3127A21F0C2EF40FA4604D603803BA53DE604337(L_23, L_25, TweenableVariableBase_1_set_target_m3127A21F0C2EF40FA4604D603803BA53DE604337_RuntimeMethod_var);
		goto IL_00ba;
	}

IL_0095:
	{
		// else if (m_ReturnToInitialPosition)
		bool L_26 = __this->___m_ReturnToInitialPosition_6;
		V_5 = L_26;
		bool L_27 = V_5;
		if (!L_27)
		{
			goto IL_00ba;
		}
	}
	{
		// m_TransformTweenableVariable.target = m_InitialPosition;
		Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* L_28 = __this->___m_TransformTweenableVariable_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = __this->___m_InitialPosition_14;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_30;
		L_30 = float3_op_Implicit_mE1831A3AC179B7EB3236F8202EC8DD5CE05376AB(L_29, NULL);
		NullCheck(L_28);
		TweenableVariableBase_1_set_target_m3127A21F0C2EF40FA4604D603803BA53DE604337(L_28, L_30, TweenableVariableBase_1_set_target_m3127A21F0C2EF40FA4604D603803BA53DE604337_RuntimeMethod_var);
	}

IL_00ba:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::ResetFollowTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_ResetFollowTransform_m56E4E198D3EBA4057BD93763D169309CF7910E80 (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (!m_ClampToMaxDistance || m_PokeFollowTransform == null)
		bool L_0 = __this->___m_ClampToMaxDistance_8;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___m_PokeFollowTransform_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// return;
		goto IL_0030;
	}

IL_001e:
	{
		// m_PokeFollowTransform.localPosition = m_InitialPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___m_PokeFollowTransform_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___m_InitialPosition_14;
		NullCheck(L_4);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_4, L_5, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance__ctor_mCBB6E96BA2E8B60AE508F619BFDBC0BAAD5CEBE5 (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float m_SmoothingSpeed = 16f;
		__this->___m_SmoothingSpeed_5 = (16.0f);
		// bool m_ReturnToInitialPosition = true;
		__this->___m_ReturnToInitialPosition_6 = (bool)1;
		// bool m_ApplyIfChildIsTarget = true;
		__this->___m_ApplyIfChildIsTarget_7 = (bool)1;
		// readonly Vector3TweenableVariable m_TransformTweenableVariable = new Vector3TweenableVariable();
		Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* L_0 = (Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5*)il2cpp_codegen_object_new(Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Vector3TweenableVariable__ctor_m22723734B74E394A833F2EEA06F910E45A91F042(L_0, NULL);
		__this->___m_TransformTweenableVariable_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TransformTweenableVariable_12), (void*)L_0);
		// readonly BindingsGroup m_BindingsGroup = new BindingsGroup();
		BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A* L_1 = (BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A*)il2cpp_codegen_object_new(BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BindingsGroup__ctor_m1EFD3F405050571D3A66F9B95E8FBC296866A716(L_1, NULL);
		__this->___m_BindingsGroup_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_BindingsGroup_13), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* XRBaseInteractor_get_selectEntered_m49681B23359BF5E9E0C3F69040D0C1567A528EC3_inline (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SelectEntered;
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_0 = __this->___m_SelectEntered_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* XRBaseInteractor_get_selectExited_m2B4FA666B95E8DF09EB6D92ACEDB892BFF375384_inline (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SelectExited;
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_0 = __this->___m_SelectExited_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UIHoverEnterEvent_t4C957A3405A5D9CB867C5EC446620BB4BA7E7298* XRRayInteractor_get_uiHoverEntered_mAF9AD8B5AFAE9C82EE906DA8380A09BBA74CD279_inline (XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* __this, const RuntimeMethod* method) 
{
	{
		// get => m_UIHoverEntered;
		UIHoverEnterEvent_t4C957A3405A5D9CB867C5EC446620BB4BA7E7298* L_0 = __this->___m_UIHoverEntered_142;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UIHoverExitEvent_t63E5E9C921AFB8E2CB9CA4D32882DD4F62CD509B* XRRayInteractor_get_uiHoverExited_m693A4F8EA43A37238373A93AA5A47797B0FEA19B_inline (XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* __this, const RuntimeMethod* method) 
{
	{
		// get => m_UIHoverExited;
		UIHoverExitEvent_t63E5E9C921AFB8E2CB9CA4D32882DD4F62CD509B* L_0 = __this->___m_UIHoverExited_143;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackedDeviceModel_t38B1BA171F5602138D487005E134580213B4DBE8 UIHoverEventArgs_get_deviceModel_m89E4A51B73B17932351940327599EC37D74BCE95_inline (UIHoverEventArgs_tC712F3F829391F25C89B9951234415D4C354DC39* __this, const RuntimeMethod* method) 
{
	{
		// public TrackedDeviceModel deviceModel { get; set; }
		TrackedDeviceModel_t38B1BA171F5602138D487005E134580213B4DBE8 L_0 = __this->___U3CdeviceModelU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackedDeviceModel_get_isScrollable_m2ADDFD1E1BD1F28CDBD07D6970C5325FCD62A505_inline (TrackedDeviceModel_t38B1BA171F5602138D487005E134580213B4DBE8* __this, const RuntimeMethod* method) 
{
	{
		// public bool isScrollable { get; set; }
		bool L_0 = __this->___U3CisScrollableU3Ek__BackingField_17;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ContinuousMoveProviderBase_set_forwardSource_mA1CBEB304ED21A5E919AEDBC38CAD176E23C9195_inline (ContinuousMoveProviderBase_t63CEB8C11A9935A166BE324AA48EBD5035ED635A* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ForwardSource = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___m_ForwardSource_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ForwardSource_14), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B* LocomotionProvider_get_system_m2FFD680EAEA3837BF1BE61B34DB6685118760D94_inline (LocomotionProvider_tC65B288AF39EACCD294F953F300BA33E33C2017B* __this, const RuntimeMethod* method) 
{
	{
		// get => m_System;
		LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B* L_0 = __this->___m_System_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* LocomotionSystem_get_xrOrigin_m06C2599D9739A71562F0F3DD27BC57BCC18F3EF7_inline (LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B* __this, const RuntimeMethod* method) 
{
	{
		// get => m_XROrigin;
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_0 = __this->___m_XROrigin_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* XROrigin_get_Camera_m8959027D616F5BD9AEAE3E41ADEE23BBC2CE3629_inline (XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Camera;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___m_Camera_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ActionBasedContinuousMoveProvider_get_leftHandMoveAction_m1A3CE1F7AFE741716F8CABEE541C67DE5E16C64B_inline (ActionBasedContinuousMoveProvider_t9F6714C0271E33DE9DBF31AEE774B257E971A29E* __this, const RuntimeMethod* method) 
{
	{
		// get => m_LeftHandMoveAction;
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_0 = __this->___m_LeftHandMoveAction_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ActionBasedContinuousMoveProvider_get_rightHandMoveAction_m798EAE65B649189963A7A35D4084FE9B28618490_inline (ActionBasedContinuousMoveProvider_t9F6714C0271E33DE9DBF31AEE774B257E971A29E* __this, const RuntimeMethod* method) 
{
	{
		// get => m_RightHandMoveAction;
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_0 = __this->___m_RightHandMoveAction_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* PokeStateData_get_target_m464672F352B73F0010B9829CA5C692505783091C_inline (PokeStateData_t87D34716C1C477FC04D9344710D09399FE6F5032* __this, const RuntimeMethod* method) 
{
	{
		// public Transform target { get; set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CtargetU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PokeStateData_get_axisAlignedPokeInteractionPoint_mC3B4E6D1232B8A2E2A98374B3AA9976E29E67D43_inline (PokeStateData_t87D34716C1C477FC04D9344710D09399FE6F5032* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 axisAlignedPokeInteractionPoint { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CaxisAlignedPokeInteractionPointU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, float ___maxLength1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___vector0), NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = ___maxLength1;
		float L_3 = ___maxLength1;
		V_1 = (bool)((((float)L_1) > ((float)((float)il2cpp_codegen_multiply(L_2, L_3))))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		float L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)L_5));
		V_2 = ((float)L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___vector0;
		float L_8 = L_7.___x_2;
		float L_9 = V_2;
		V_3 = ((float)(L_8/L_9));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___y_3;
		float L_12 = V_2;
		V_4 = ((float)(L_11/L_12));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___vector0;
		float L_14 = L_13.___z_4;
		float L_15 = V_2;
		V_5 = ((float)(L_14/L_15));
		float L_16 = V_3;
		float L_17 = ___maxLength1;
		float L_18 = V_4;
		float L_19 = ___maxLength1;
		float L_20 = V_5;
		float L_21 = ___maxLength1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), ((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)), ((float)il2cpp_codegen_multiply(L_20, L_21)), /*hidden argument*/NULL);
		V_6 = L_22;
		goto IL_0053;
	}

IL_004e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = ___vector0;
		V_6 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_6;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_gshared_inline (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
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
