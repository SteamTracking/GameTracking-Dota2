class CSoundOpvarSetPointBase : public CBaseEntity
{
	bool m_bDisabled;
	CEntityHandle m_hSource;
	CUtlSymbolLarge m_iszSourceEntityName;
	// MNotSaved
	VectorWS m_vLastPosition;
	float32 m_flRefreshTime;
	CUtlSymbolLarge m_iszStackName;
	CUtlSymbolLarge m_iszOperatorName;
	CUtlSymbolLarge m_iszOpvarName;
	int32 m_iOpvarIndex;
	bool m_bUseAutoCompare;
	bool m_bFastRefresh;
};
