class CPathMoverEntitySpawner : public CLogicalEntity
{
	CUtlSymbolLarge[4] m_szSpawnTemplates;
	int32 m_nSpawnIndex;
	CHandle< CPathMover > m_hPathMover;
	float32 m_flSpawnFrequencySeconds;
	float32 m_flSpawnFrequencyDistToNearestMover;
	CUtlHashtable< CHandle< CFuncMover >, PathMoverEntitySpawn > m_mapSpawnedMoverTemplates;
	int32 m_nMaxActive;
	int32 m_nSpawnNum;
	GameTime_t m_flLastSpawnTime;
	bool m_bEnabled;
	bool m_bDestroyMoverOnArrivedAtEnd;
	CUtlVector< CHandle< CFuncMover > > m_vecQueuedRemovals;
	CEntityIOOutput m_OnTemplateSpawned;
	CEntityIOOutput m_OnTemplateGroupSpawned;
};
