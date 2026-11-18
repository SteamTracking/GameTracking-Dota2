class CSteamAudioBakedOcclusionData
{
	SteamAudioCustomDataOcclusionSettings_t m_settings; // = { "m_bEnablePathing": false, "m_bEnableReflections": false, "m_flSpatialFilterRadiusFactor": 2, "m_nReflectionBounces": 0, "m_nReflectionRays": 0, "m_nSpatialFilterMode": 0 }
	CSteamAudioProbeData m_probes;
	CUtlVector< float32 > m_vecPathingRatio;
	CUtlVector< float32 > m_vecPathingDeviation;
	CUtlVector< float32 > m_vecReflectionEnergy;
	CUtlVector< CSteamAudioBakedOcclusionDynamicObject > m_vecDynamicObjects;
	CUtlVector< CSteamAudioBakedOcclusionDynamicObjectPair > m_vecDynamicObjectPairs;
};
