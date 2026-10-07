class CSoundOpvarSetPrecipitationEntity : public CSoundOpvarSetPointBase
{
	// MNotSaved
	CUtlVector< Vector > m_arDirections;
	// MNotSaved
	CUtlVector< float32 > m_arSky;
	// MNotSaved
	int32 m_nCurrentIndex;
	// MNotSaved
	float32 m_flSmoothedValue;
	// MNotSaved
	GameTime_t m_flLastSmoothTime;
	int32 m_nMode;
	CUtlSymbolLarge m_iszPrecipitationSubclass;
	Vector m_vBoxMins;
	Vector m_vBoxMaxs;
	float32 m_flDensityMin;
	float32 m_flDensityMax;
	float32 m_flDensityMapMin;
	float32 m_flDensityMapMax;
	int32 m_nTotalDirections;
	int32 m_nTracesPerFrame;
	float32 m_flConeAngle;
	float32 m_flTraceDistance;
	float32 m_flSmoothHalfLife;
};
