using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.XR.Interaction.Toolkit.AR;

public class ARPlacementCustom : ARPlacementInteractable
{
	AnchorSystem AnchorSystem;

	protected override GameObject PlaceObject(Pose pose)
	{
		if (AnchorSystem == null)
		{
			AnchorSystem = XRTester.Instance.AnchorSystem;
		}

		AnchorSystem.visualAnchorObj.SetActive(true);

		var anchor = new GameObject("PlacementAnchor").transform;
		anchor.position = pose.position;
		anchor.rotation = pose.rotation;

		// Use Trackables object in scene to use as parent
		var trackablesParent = xrOrigin != null
			? xrOrigin.TrackablesParent
#pragma warning disable 618 // Calling deprecated property to help with backwards compatibility.
			: (arSessionOrigin != null ? arSessionOrigin.trackablesParent : null);
#pragma warning restore 618
		if (trackablesParent != null)
			anchor.parent = trackablesParent;

		AnchorSystem.visualAnchorObj.transform.SetParent(anchor);
		AnchorSystem.visualAnchorObj.transform.localPosition = Vector3.zero;

		return AnchorSystem.visualAnchorObj;
	}

	protected override bool TryGetPlacementPose(TapGesture gesture, out Pose pose)
	{
//#if UNITY_EDITOR

		//UI�� Tru / �ƴϸ� false
		if (!EventSystem.current.IsPointerOverGameObject())
		{
			return base.TryGetPlacementPose(gesture, out pose);
		}

		//����Ͽ����� param�Ƚ���� ���� �����Ͱ� ���ͼ� ������.

//#elif UNITY_ANDROID || UNITY_IPHONE
//		Debug.Log(EventSystem.current.IsPointerOverGameObject());
//		if (!EventSystem.current.IsPointerOverGameObject(gesture.fingerId))
//		{
//			return base.TryGetPlacementPose(gesture, out pose);
//		}
//#endif
		else
		{
			pose = default;
			return false;
		}
	}
}