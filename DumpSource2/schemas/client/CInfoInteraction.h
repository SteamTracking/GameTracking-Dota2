class CInfoInteraction : public C_PointEntity
{
	SceneRequestHandle_t m_hSceneRequest;
	SceneOpportunityHandle_t m_hSceneOpportunity;
	bool m_bEnabled;
	bool m_bStartDisabled;
	CUtlSymbolLarge m_strSceneVDataName;
	CUtlSymbolLarge m_strPulseVDataName;
	float32 m_flRadius;
	float32 m_flOwnerFOV;
	CUtlSymbolLarge m_strLocalInterestReqTags;
	CUtlSymbolLarge m_strLocalInterestOptTags;
	CUtlSymbolLarge m_strLookTarget;
	float32 m_flDuration;
	float32 m_flCooldown;
	int32 m_nRepeatCount;
	bool m_bDisableOnExit;
};
