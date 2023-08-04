using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.Interaction.Toolkit.AR;

//¾ÞÄ¿ ÀÌµ¿
//´Ù½Ã ¹Ù´Ú ÀÐ±â?

[Serializable]
public class AnchorSystem
{
	public Button ReAnchorBtn;
	public Button DoneBtn;

	public GameObject anchorObject;
	public GameObject visualAnchorObj;

	public ARPlaneManager aRPlaneManager;

	public ARSessionOrigin arSession;

	private Transform parentTracks;
	private List<Transform> planes = new List<Transform>();


	public void Init()
	{
		ReAnchorBtn.onClick.AddListener(() => ReAnchorStart());
		DoneBtn.onClick.AddListener(() => ReAnchorDone());

		visualAnchorObj.SetActive(false);
		aRPlaneManager.enabled = false;
		aRPlaneManager.requestedDetectionMode = UnityEngine.XR.ARSubsystems.PlaneDetectionMode.None;
		aRPlaneManager.enabled = true;
		var tracks = arSession.transform.Find("Trackables");

	}

	~AnchorSystem()
	{
		ReAnchorBtn.onClick.RemoveAllListeners();
		DoneBtn.onClick.RemoveAllListeners();
	}

	private void ReAnchorStart()
	{
		aRPlaneManager.enabled = false;
		aRPlaneManager.requestedDetectionMode = UnityEngine.XR.ARSubsystems.PlaneDetectionMode.Horizontal;
		aRPlaneManager.enabled = true;

		if (parentTracks == null) FindTracks();

		foreach (var track in planes)
		{
			if (parentTracks != track)
				track.gameObject.SetActive(true);
		}
	}

	private void ReAnchorDone()
	{
		anchorObject.transform.position = visualAnchorObj.transform.position;
		anchorObject.transform.rotation = visualAnchorObj.transform.rotation;

		//visualAnchorObj.GetComponent<ARSelectionInteractable>().sele
		visualAnchorObj.transform.SetParent(XRTester.Instance.transform);
		visualAnchorObj.SetActive(false);
		aRPlaneManager.requestedDetectionMode = UnityEngine.XR.ARSubsystems.PlaneDetectionMode.None;

		planes = new List<Transform>();
		foreach(var track in parentTracks.GetComponentsInChildren<Transform>())
		{
			planes.Add(track);
			if (parentTracks != track)
				track.gameObject.SetActive(false);
		}
	}

	private void FindTracks()
	{
		parentTracks = arSession.transform.Find("Trackables");
	}
}