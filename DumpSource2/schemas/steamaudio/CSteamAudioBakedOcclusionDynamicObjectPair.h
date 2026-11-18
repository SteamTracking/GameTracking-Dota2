class CSteamAudioBakedOcclusionDynamicObjectPair
{
	CUtlString m_sName;
	uint32 m_nHammerIdHashA;
	uint32 m_nHammerIdHashB;
	CUtlVector< uint32 > m_vecPairs;
	CUtlVector< float32 > m_vecPathingRatioResiduals;
	CUtlVector< float32 > m_vecPathingDeviationResiduals;
	CUtlVector< float32 > m_vecReflectionEnergyResiduals;
};
