using System.Collections;
using System.Collections.Generic;
using Unity.XR.CoreUtils;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.Interaction.Toolkit.AR;

public class ARRotCustom : ARBaseGestureInteractable
{
	[SerializeField, Tooltip("The rate at which Unity rotates the attached object with a drag gesture.")]
	float m_RotationRateDegreesDrag = 100f;

	/// <summary>
	/// The rate at which Unity rotates the attached object with a drag gesture.
	/// </summary>
	public float rotationRateDegreesDrag
	{
		get => m_RotationRateDegreesDrag;
		set => m_RotationRateDegreesDrag = value;
	}

	[SerializeField, Tooltip("The rate at which Unity rotates the attached object with a twist gesture.")]
	float m_RotationRateDegreesTwist = 2.5f;

	/// <summary>
	/// The rate at which Unity rotates the attached object with a twist gesture.
	/// </summary>
	public float rotationRateDegreesTwist
	{
		get => m_RotationRateDegreesTwist;
		set => m_RotationRateDegreesTwist = value;
	}

	/// <inheritdoc />
	protected override bool CanStartManipulationForGesture(DragGesture gesture)
	{
		return IsGameObjectSelected() && gesture.targetObject == null;
	}

	/// <inheritdoc />
	protected override bool CanStartManipulationForGesture(TwistGesture gesture)
	{
		return IsGameObjectSelected() && gesture.targetObject == null;
	}

	/// <summary>
	/// Rotates the object around the y-axis via a Drag gesture.
	/// </summary>
	/// <param name="gesture">The current drag gesture.</param>
	/// <inheritdoc />
	protected override void OnContinueManipulation(DragGesture gesture)
	{
		// ReSharper disable once LocalVariableHidesMember -- hide deprecated camera property
		var camera = xrOrigin != null
			? xrOrigin.Camera
#pragma warning disable 618 // Calling deprecated property to help with backwards compatibility.
			: (arSessionOrigin != null ? arSessionOrigin.camera : Camera.main);
#pragma warning restore 618
		if (camera == null)
			return;

		var forward = camera.transform.forward;
		var worldToVerticalOrientedDevice = Quaternion.Inverse(Quaternion.LookRotation(forward, Vector3.up));
		var deviceToWorld = camera.transform.rotation;
		var rotatedDelta = worldToVerticalOrientedDevice * deviceToWorld * gesture.delta;

		var rotationAmount = -1f * (rotatedDelta.x / Screen.dpi) * m_RotationRateDegreesDrag;
		transform.Rotate(0f, rotationAmount, 0f);
	}

	/// <summary>
	/// Rotates the object around the y-axis via a Twist gesture.
	/// </summary>
	/// <param name="gesture">The current twist gesture.</param>
	/// <inheritdoc />
	protected override void OnContinueManipulation(TwistGesture gesture)
	{
		var rotationAmount = -gesture.deltaRotation * m_RotationRateDegreesTwist;
		transform.Rotate(0f, rotationAmount, 0f);
	}
}