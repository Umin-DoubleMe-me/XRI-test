using System;
using System.Collections;
using UnityEngine;
using UnityEngine.InputSystem.UI;
using UnityEngine.XR.Interaction.Toolkit.AR;

public class XRTester : MonoBehaviour
{
	public static XRTester Instance;

	[SerializeField] private GameObject cubePrefab;
	[SerializeField] private GameObject ARSessionOrigin;
	[SerializeField] private GameObject Board;

	[SerializeField] public AnchorSystem AnchorSystem;

	private GameObject eventSystemObj;

	private void Awake()
	{
		if(Instance == null)
			Instance = this;
	}


	private void Start()
	{
		eventSystemObj = GameObject.Find("EventSystem");

#if UNITY_ANDROID || UNITY_IPHONE
		eventSystemObj.AddComponent<InputSystemUIInputModule>();
#else

#endif

		AnchorSystem.Init();
	}

	public void SpawnGameObject()
	{
		GameObject cube = Instantiate(cubePrefab);
		cube.transform.localScale = Vector3.one * 0.1f;
		cube.transform.localPosition = Camera.main.transform.localPosition + Camera.main.transform.forward;
		cube.transform.SetParent(ARSessionOrigin.transform);

		var selected = cube.AddComponent<ARSelectionInteractable>();
		selected.selectionVisualization = cube.transform.GetChild(0).gameObject;
		
		var trans = cube.AddComponent<ARTransCustom>();

		var scal = cube.AddComponent<ARScaleInteractable>();
		scal.maxScale = 0.5f;
		scal.minScale = 0.01f;
		
		var rots = cube.AddComponent<ARRotationInteractable>();

	}

	public IEnumerator PlaneFollowCamera(float dist)
	{
		while(true)
		{
			Vector3 endpos = Camera.main.transform.position + (Camera.main.transform.forward * dist);

			Board.transform.position = endpos;
			Board.transform.LookAt(Camera.main.transform);
			yield return null;
		}
	}
}
