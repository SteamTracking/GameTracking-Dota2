class CInfoWorldLayer : public CBaseEntity
{
	CEntityIOOutput m_pOutputOnEntitiesSpawned;
	// MNotSaved
	CUtlSymbolLarge m_worldName;
	// MNotSaved
	CUtlSymbolLarge m_layerName;
	bool m_bWorldLayerVisible;
	bool m_bEntitiesSpawned;
	bool m_bCreateAsChildSpawnGroup;
	// MNotSaved
	uint32 m_hLayerSpawnGroup;
};
