class CSteamAudioBakedOcclusionDynamicObject
{
	CUtlString m_sName;
	CUtlString m_sHammerId;
	uint32 m_nHammerIdHash;
	CUtlVector< uint32 > m_vecPairs;
	CUtlVector< float32 > m_vecPathingRatioDeltas;
	CUtlVector< float32 > m_vecPathingDeviationDeltas;
	CUtlVector< float32 > m_vecReflectionEnergyDeltas;
};
