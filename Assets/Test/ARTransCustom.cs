using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.XR.Interaction.Toolkit.AR;

public class ARTransCustom : ARBaseGestureInteractable
{
	private bool _isTag = false;
	private float _dist = 0;
	private Vector3 _offset;
	private Vector3 _startPos;
	private Vector3 _v3;

	/// <inheritdoc />
	public override void ProcessInteractable(XRInteractionUpdateOrder.UpdatePhase updatePhase)
	{
		base.ProcessInteractable(updatePhase);
	}

	/// <inheritdoc />
	protected override bool CanStartManipulationForGesture(DragGesture gesture)
	{
		// If the gesture isn't targeting this item, don't start manipulating.
		return gesture.targetObject != null && gesture.targetObject == gameObject && transform.parent != null;
	}
	/// <inheritdoc />
	protected override void OnContinueManipulation(DragGesture gesture)
	{
		if(!_isTag)
		{
			_startPos = gesture.startPosition;
			_dist = Vector3.Distance(transform.position, Camera.main.transform.position);

			_v3 = new Vector3(_startPos.x, _startPos.y, _dist);
			_v3 = Camera.main.ScreenToWorldPoint(_v3);
			_offset = transform.position - _v3;

			_isTag = true;
		}

		else
		{
			_v3 = new Vector3(gesture.position.x, gesture.position.y, _dist);
			_v3 = Camera.main.ScreenToWorldPoint(_v3);
			transform.position = _v3 + _offset;
		}
	}

	/// <inheritdoc />
	protected override void OnEndManipulation(DragGesture gesture)
	{
		_isTag = false;
	}
}