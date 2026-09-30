class PingMinimapIconLayerInfo_t
{
	// MPropertyDescription = "ID of icon to show on minimap. See scripts/minimap_icons.txt and mod_textures.txt"
	int32 m_nIconID;
	float32 m_flSizeScale; // = 1
	float32 m_flIntensity; // = 1
	bool m_bAdditive;
	bool m_bForceBaseIconWhite;
	EPingMinimapAnimType m_eAnimType; // = "k_ePingMinimapAnimType_None"
	EPingMinimapDrawCondition m_eDrawCondition; // = "k_ePingMinimapDrawCondition_Always"
	float32 m_flPulseStartSizeScale;
	float32 m_flPulseBonusIntensity;
	float32 m_flPulseDuration; // = 1
	int32 m_nPulseCount; // = 1
};
