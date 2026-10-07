class SteamAudioCustomDataDimensionsSettings_t
{
	int32 m_nAmbisonicsOrderOutsideField;
	int32 m_nAmbisonicsOrderInsideSizeField;
	float32 m_flOutsideThreshold;
	float32 m_flSizeThreshold;
	float32 m_flInsideThreshold;
	int32 m_nInOutMode;
	int32 m_nNumRays; // = 32768
	int32 m_nInOutMaxBounces; // = 4
	float32 m_flInOutMaxPathLength; // = 8000
	float32 m_flInOutBounceLoss; // = 0.25
};
