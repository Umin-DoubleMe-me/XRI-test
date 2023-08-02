using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit.AR;

[RequireComponent(typeof(ARGestureInteractor))]
public class ARGestureInteractorLog : MonoBehaviour
{
	private ARGestureInteractor arGestureInteractor;

	private void Start()
	{
		arGestureInteractor = GetComponent<ARGestureInteractor>();

		arGestureInteractor.dragGestureRecognizer.onGestureStarted += DragGestureRecognizereStarted;
		arGestureInteractor.pinchGestureRecognizer.onGestureStarted += PinchGestureRecognizereStarted;
		arGestureInteractor.twoFingerDragGestureRecognizer.onGestureStarted += TwoFingerDragGestureRecognizereStarted;

	}

	private void DragGestureRecognizereStarted(Gesture<DragGesture> dragGesture)
	{
		Logger.instance.LogInfo("DragGestureRecognizereStarted executed");

		dragGesture.onStart += (s) =>
		{
			Logger.instance.LogInfo("DragGesture.onStart executed");
		};

		dragGesture.onUpdated += (s) =>
		{
			Logger.instance.LogInfo("DragGesture.onUpdated executed");
		};

		dragGesture.onFinished += (s) =>
		{
			Logger.instance.LogInfo("DragGesture.onFinished executed");
		};
	}

	private void PinchGestureRecognizereStarted(Gesture<PinchGesture> pinchGesture)
	{
		Logger.instance.LogInfo("PinchGestureRecognizereStarted executed");

		pinchGesture.onStart += (s) =>
		{
			Logger.instance.LogInfo("pinchGesture.onStart executed");
		};

		pinchGesture.onUpdated += (s) =>
		{
			Logger.instance.LogInfo("pinchGesture.onUpdated executed");
		};

		pinchGesture.onFinished += (s) =>
		{
			Logger.instance.LogInfo("pinchGesture.onFinished executed");
		};
	}

	private void TwoFingerDragGestureRecognizereStarted(Gesture<TwoFingerDragGesture> twoFingerGesture)
	{
		Logger.instance.LogInfo("TwoFingerDragGestureRecognizereStarted executed");

		twoFingerGesture.onStart += (s) =>
		{
			Logger.instance.LogInfo("twoFingerGesture.onStart executed");
		};

		twoFingerGesture.onUpdated += (s) =>
		{
			Logger.instance.LogInfo("twoFingerGesture.onUpdated executed");
		};

		twoFingerGesture.onFinished += (s) =>
		{
			Logger.instance.LogInfo("twoFingerGesture.onFinished executed");
		};
	}
}
