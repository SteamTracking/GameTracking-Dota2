class C_EntityDissolve : public C_BaseModelEntity
{
	// MNotSaved
	GameTime_t m_flStartTime;
	// MNotSaved
	float32 m_flFadeInStart;
	// MNotSaved
	float32 m_flFadeInLength;
	// MNotSaved
	float32 m_flFadeOutModelStart;
	// MNotSaved
	float32 m_flFadeOutModelLength;
	// MNotSaved
	float32 m_flFadeOutStart;
	// MNotSaved
	float32 m_flFadeOutLength;
	// MNotSaved
	GameTime_t m_flNextSparkTime;
	// MNotSaved
	EntityDisolveType_t m_nDissolveType;
	// MNotSaved
	VectorWS m_vDissolverOrigin;
	// MNotSaved
	uint32 m_nMagnitude;
	// MNotSaved
	bool m_bCoreExplode;
	// MNotSaved
	bool m_bLinkedToServerEnt;
};
