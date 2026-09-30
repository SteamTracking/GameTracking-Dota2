class CCraftworksQuestDefinition
{
	CraftworksQuestID_t m_unQuestID;
	CraftworksQuestType_t m_type; // = "k_eCraftworksQuest_Invalid"
	CUtlString m_strLocName;
	CUtlString m_strLocProgress;
	float32 m_flTurboMultiplier; // = 1
	CUtlVector< CCraftworksQuestComponentReward > m_vecRewards;
	CUtlString m_strTrackedStatName;
	uint32 m_unStatMaximum;
	bool m_bShowInGameProgressToasts;
};
