class GeneralOptionsEditableData_t
{
	// MPropertyFriendlyName = "Maximum number of undo levels"
	int32 iUndoLevels;
	// MPropertyFriendlyName = "Save changes when building map"
	bool bSaveChangesOnBuildMap;
	// MPropertyFriendlyName = "Render unlit maps as fullbright"
	bool bRenderFullyUnlitAsFullbright;
	// MPropertyFriendlyName = "Show selection mode notification icons"
	bool bShowSelectionModeChangeNotificationIcons;
	// MPropertyFriendlyName = "Show tool notification icons"
	bool bShowToolChangeNotificationIcons;
	// MPropertyFriendlyName = "Pause the game when hammer is activated"
	bool bPauseGameOnActivate;
	// MPropertyFriendlyName = "Default solid entity to create when using tie to entity"
	CUtlString SolidEntity;
	// MPropertyFriendlyName = "Default point entity to select in the entity tool"
	CUtlString PointEntity;
	// MPropertyFriendlyName = "Default path entity to select in the path tool"
	CUtlString PathEntity;
	// MPropertyFriendlyName = "Report crashes during map compile"
	bool bReportMapCompileCrashes;
	// MPropertyFriendlyName = "Steal focus on mouse hover"
	bool bViewFocusStealing;
	// MPropertyFriendlyName = "Allow drag move of selected objects"
	bool bMoveSelectedEnabled;
	// MPropertyFriendlyName = "Apply extracted motion when previewing animations"
	bool bPreviewMotionExtraction;
	// MPropertyFriendlyName = "Font size for text in 2d and 3d viewports"
	int32 nViewportFontSize;
	// MPropertyFriendlyName = "Radius to use when snapping to vertex"
	float32 flVertexSnapRadius;
	// MPropertyFriendlyName = "Force model drag-and-drop to create prop_static"
	bool m_bForceStaticPropsForModelDrags;
};
