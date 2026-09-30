class PingMinimapIconInfo_t
{
	// MPropertyDescription = "ID of icon to show on minimap. See scripts/minimap_icons.txt and mod_textures.txt"
	int32 m_nIconID;
	// MPropertyDescription = "Size in world units of the minimap icon."
	float32 m_flSize; // = 800
	bool m_bAlignBottom;
	bool m_bForceBaseIconWhite;
	float32 m_flAnimStartSize; // = 10000
	float32 m_flAnimThrobSize; // = 300
	float32 m_flAnimThrobRate; // = 6
	// MPropertyDescription = "Duration of time that the intro takes."
	float32 m_flAnimIntroDuration; // = 0.3
	// MPropertyDescription = "Duration of time the outro takes."
	float32 m_flAnimOutroDuration; // = 0.5
	EPingMinimapDrawCondition m_eDrawCondition; // = "k_ePingMinimapDrawCondition_Always"
};
