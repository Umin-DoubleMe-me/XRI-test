using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics.SymbolStore;
using System.Linq;
using TMPro;
using UnityEngine;

public class Logger : MonoBehaviour
{
    public static Logger instance = null;

	private void Awake()
	{
        if (instance == null)
            instance = this;
	}

    [SerializeField]
    private TextMeshProUGUI debugAreaText;

    [SerializeField]
    private bool enableDebug = false;

    [SerializeField]
    private int maxLines = 15;

	private void OnEnable()
	{
		debugAreaText.enabled = enableDebug;
        enabled = enableDebug;
	}

	public void LogInfo(string message)
	{
		ClearLines();
		debugAreaText.text += $"{DateTime.Now.ToString("yyyy-dd-M--HH-mm-ss")}<color=\"white\">{message}</color>)\n";
	}
	public void LogError(string message)
	{
		ClearLines();
		debugAreaText.text += $"{DateTime.Now.ToString("yyyy-dd-M--HH-mm-ss")}<color=\"red\">{message}</color>)\n";
	}
	public void LogWarning(string message)
	{
		ClearLines();
		debugAreaText.text += $"{DateTime.Now.ToString("yyyy-dd-M--HH-mm-ss")}<color=\"yellow\">{message}</color>)\n";
	}


	public void ClearLines()
    {
		if(debugAreaText.text.Split('\n').Count() >= maxLines)
		{
			debugAreaText.text = string.Empty;
		}
    }
}
