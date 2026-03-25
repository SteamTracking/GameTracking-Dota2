class CSceneRequest
{
	CUtlSymbolLarge m_szPayloadVDataName;
	SceneRequestHandle_t m_uHandle;
	ESceneRequestState_t m_state;
	ENPCBehaviorOverride_t m_nNPCBehaviorOverride;
	CUtlVector< SceneRequestTargetMapPair_t > m_vecActorMap;
	CUtlVector< SceneRequestTargetMapPair_t > m_vecAnchorMap;
	CUtlVector< SceneRequestTargetMapPair_t > m_vecGraphMap;
	CHandle< CBaseEntity > m_hOwner;
	KeyValues3 m_nameMapKV3;
};
