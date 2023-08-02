using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem.UI;
using UnityEngine.XR.Interaction.Toolkit.AR;

public class XRTester : MonoBehaviour
{
	[SerializeField] private GameObject cubePrefab;
	[SerializeField] private GameObject ARSessionOrigin;
	private GameObject eventSystemObj;



	private void Start()
	{
		eventSystemObj = GameObject.Find("EventSystem");

#if UNITY_ANDROID || UNITY_IPHONE
		eventSystemObj.AddComponent<InputSystemUIInputModule>();
#else

#endif
	}

	public void SpawnGameObject()
	{
		GameObject cube = Instantiate(cubePrefab);
		cube.transform.localScale = Vector3.one * 0.1f;
		cube.transform.localPosition = Camera.main.transform.localPosition + Camera.main.transform.forward;
		cube.transform.SetParent(ARSessionOrigin.transform);
		//var selected = cube.AddComponent<ARSelectionInteractable>();
		//selected.selectionVisualization = cube.transform.GetChild(0).gameObject;
		//selected.ARse = 

		//var tt = cube.AddComponent<ARTransCustom>();


	}

	public void Update()
	{
		if(Input.GetKeyDown(KeyCode.P))
		{
			SpawnGameObject();
		}
	}
}
