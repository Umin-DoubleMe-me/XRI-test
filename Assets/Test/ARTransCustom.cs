using System.Collections;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.XR.Interaction.Toolkit.AR;

public class ARTransCustom : ARBaseGestureInteractable
{
	[SerializeField]
	[Tooltip("Controls whether Unity constrains the object vertically, horizontally, or free to move in all axes.")]
	GestureTransformationUtility.GestureTranslationMode m_ObjectGestureTranslationMode;

	/// <summary>
	/// Controls whether the object will be constrained vertically, horizontally, or free to move in all axis.
	/// </summary>
	public GestureTransformationUtility.GestureTranslationMode objectGestureTranslationMode
	{
		get => m_ObjectGestureTranslationMode;
		set => m_ObjectGestureTranslationMode = value;
	}

	[SerializeField]
	[Tooltip("The maximum translation distance of this object.")]
	float m_MaxTranslationDistance = 10f;

	/// <summary>
	/// The maximum translation distance of this object.
	/// </summary>
	public float maxTranslationDistance
	{
		get => m_MaxTranslationDistance;
		set => m_MaxTranslationDistance = value;
	}

	[SerializeField]
	[Tooltip("The LayerMask that Unity uses during an additional ray cast when a user touch does not hit any AR trackable planes.")]
	LayerMask m_FallbackLayerMask;

	/// <summary>
	/// The <see cref="LayerMask"/> that Unity uses during an additional ray cast
	/// when a user touch does not hit any AR trackable planes.
	/// </summary>
	public LayerMask fallbackLayerMask
	{
		get => m_FallbackLayerMask;
		set => m_FallbackLayerMask = value;
	}

	const float k_PositionSpeed = 12f;
	const float k_DiffThreshold = 0.0001f;

	bool m_IsActive;

	Vector3 m_DesiredLocalPosition;
	IEnumerator FollowRayCastPlane = null;

	/// <inheritdoc />
	public override void ProcessInteractable(XRInteractionUpdateOrder.UpdatePhase updatePhase)
	{
		base.ProcessInteractable(updatePhase);

		if (m_IsActive)
			//UpdateDistance();
			UpdatePosition();
	}

	/// <inheritdoc />
	protected override bool CanStartManipulationForGesture(DragGesture gesture)
	{
		// If the gesture isn't targeting this item, don't start manipulating.
		return gesture.targetObject != null && gesture.targetObject == gameObject && transform.parent != null;
	}

	/// <inheritdoc />
	protected override void OnStartManipulation(DragGesture gesture)
	{
	}

	/// <inheritdoc />
	protected override void OnContinueManipulation(DragGesture gesture)
	{
		if (transform.parent == null)
		{
			Debug.LogError("Translation Interactable needs a parent object.", this);
			return;
		}

		m_IsActive = true;

		if(FollowRayCastPlane == null)
		{
			float dis = Vector3.Distance(Camera.main.transform.position , transform.position);
			FollowRayCastPlane = XRTester.Instance.PlaneFollowCamera(dis);

			StartCoroutine(FollowRayCastPlane);
		}

		var ray = Camera.main.ScreenPointToRay(gesture.position);
		if (Physics.Raycast(ray, out var results, Mathf.Infinity, 1 << 27))
		{
			m_DesiredLocalPosition = results.point;
		}
	}

	/// <inheritdoc />
	protected override void OnEndManipulation(DragGesture gesture)
	{
		m_DesiredLocalPosition = Vector3.zero;

		if(FollowRayCastPlane != null)
			StopCoroutine(FollowRayCastPlane);

		FollowRayCastPlane = null;
	}

	void UpdatePosition()
	{
		if (!m_IsActive || m_DesiredLocalPosition == Vector3.zero)
			return;

		// Lerp position.
		var oldLocalPosition = transform.localPosition;
		var newLocalPosition = Vector3.Lerp(
			oldLocalPosition, m_DesiredLocalPosition, Time.deltaTime * k_PositionSpeed);

		var diffLength = (m_DesiredLocalPosition - newLocalPosition).magnitude;
		if (diffLength < k_DiffThreshold)
		{
			newLocalPosition = m_DesiredLocalPosition;
			m_IsActive = false;
		}

		transform.localPosition = newLocalPosition;
	}
}