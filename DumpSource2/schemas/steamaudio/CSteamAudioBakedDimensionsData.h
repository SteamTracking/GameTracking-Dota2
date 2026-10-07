class CSteamAudioBakedDimensionsData
{
	SteamAudioCustomDataDimensionsSettings_t m_settings; // = { "m_flInOutBounceLoss": 0.25, "m_flInOutMaxPathLength": 8000, "m_flInsideThreshold": 0, "m_flOutsideThreshold": 0, "m_flSizeThreshold": 0, "m_nAmbisonicsOrderInsideSizeField": 0, "m_nAmbisonicsOrderOutsideField": 0, "m_nInOutMaxBounces": 4, "m_nInOutMode": 0, "m_nNumRays": 32768 }
	CSteamAudioProbeData m_probes;
	CUtlVector< float32 > m_vecInOut;
	CUtlVector< float32 > m_vecSize;
	CUtlVector< CSteamAudioAmbisonicsField > m_vecOutsideField;
	CUtlVector< CSteamAudioAmbisonicsField > m_vecInsideSmallSizeField;
	CSteamAudioMovableBakedData< CSteamAudioBakedDimensionsData > m_movables;
};
