class View3DOptionsEditableData_t
{
	// MPropertyFriendlyName = "Reverse Y"
	bool bReverseY;
	// MPropertyFriendlyName = "Pan Speed"
	float32 flPanSpeed;
	// MPropertyFriendlyName = "Rotation scale"
	float32 flRotationScale;
	// MPropertyFriendlyName = "Forward speed max (world units/sec)"
	int32 nForwardSpeedMax;
	// MPropertyFriendlyName = "Time to max speed (ms)"
	int32 nTimeToMaxSpeed;
	// MPropertyFriendlyName = "Field of View (degrees)"
	int32 flFOV;
	// MPropertyFriendlyName = "Resolution Gate"
	CUtlString szResolutionGate;
	// MPropertyFriendlyName = "Backplane distance"
	int32 iBackPlane;
	// MPropertyFriendlyName = "Nearplane distance"
	float32 flNearPlane;
	// MPropertyFriendlyName = "Default light_environment draw distance"
	float32 flShadowFarPlane;
	// MPropertyFriendlyName = "Alt+Mouse wheel adjusts backplane distance"
	bool bMouseWheelControlsFarPlane;
	// MPropertyFriendlyName = "Zoom sensitivity using mouse move"
	int32 nMouseMoveZoomSensitivity;
	// MPropertyFriendlyName = "Zoom sensitivity using mousewheel"
	int32 nMouseWheelZoomSensitivity;
	// MPropertyFriendlyName = "Default distance of camera from point it is set to center view on"
	int32 nCameraTargetDist;
	// MPropertyFriendlyName = "Grid Intensity"
	int32 iGridIntensity;
	// MPropertyFriendlyName = "Alpha of selection mask (0..1)"
	float32 fSelectionOverlayAlpha;
	// MPropertyFriendlyName = "Outline selected objects"
	bool bShowSelectionOutline;
	// MPropertyFriendlyName = "Use depth for selection outline"
	bool bSelectionOutlineDepth;
	// MPropertyFriendlyName = "Unlit SSAO Radius Scale"
	float32 fToolsVisSSAORadiusScale;
	// MPropertyFriendlyName = "Unlit SSAO Power Scale"
	float32 fToolsVisSSAOPowerScale;
	// MPropertyFriendlyName = "Enable Post Processing"
	bool bPostProcessingEnabled;
};
