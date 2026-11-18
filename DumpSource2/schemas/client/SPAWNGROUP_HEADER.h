class SPAWNGROUP_HEADER
{
	CUtlString m_sGroupName;
	CUtlString m_sEntityLumpName;
	matrix3x4a_t m_vecWorldOffset;
	bool m_bClientSpawnGroup;
	bool m_bSuppressAllEntities;
	bool m_bPersistentSpawnGroup;
	int32 m_nSaveSlot; // = -1
};
