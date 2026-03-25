class CSceneOpportunity
{
	CHandle< CBaseEntity > m_hOwner;
	SceneOpportunityHandle_t m_uHandle;
	CUtlSymbolLarge m_strInteractVDataName;
	bool m_bEnabled;
	bool m_bActive;
	InteractionPriority_t m_ePriority;
	float32 m_flRadius;
	SceneInterestTags_t m_LocalInterestReqTags;
	SceneInterestTags_t m_LocalInterestOptTags;
	float32 m_flOwnerFOV;
	CUtlVector< SceneOpportunityActor_t > m_ActorList;
	CHandle< CBaseEntity > m_hLookTarget;
	float32 m_flDuration;
	GameTime_t m_tStartTime;
	float32 m_flCooldown;
	GameTime_t m_tCooldownTime;
	int32 m_nRepeatCount;
	bool m_bDisableOnExit;
};
