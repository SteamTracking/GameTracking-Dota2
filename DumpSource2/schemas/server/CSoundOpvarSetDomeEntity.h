class CSoundOpvarSetDomeEntity : public CSoundOpvarSetPointEntity
{
	// MNotSaved
	CUtlVector< Vector > m_arDirections;
	// MNotSaved
	CUtlVector< float32 > m_arOpenness;
	// MNotSaved
	CUtlVector< int32 > m_arNeighbors;
	// MNotSaved
	int32 m_nCurrentIndex;
	// MNotSaved
	CUtlVector< int32 > m_arClusterParent;
	// MNotSaved
	CUtlVector< int32 > m_arClusterSize;
	// MNotSaved
	CUtlVector< float32 > m_arClusterWeight;
	// MNotSaved
	CUtlVector< Vector > m_arClusterDirSum;
	// MNotSaved
	int32 m_nClusterIndex;
	// MNotSaved
	float32 m_flClusteredOpenness;
	// MNotSaved
	Vector m_vClusterDirection;
	// MNotSaved
	Vector m_vSmoothedOpenDir;
	// MNotSaved
	int32 m_nDirWarmupThinksRemaining;
	// MNotSaved
	VectorWS m_vLastTraceOrigin;
	// MNotSaved
	bool m_bTraceOriginValid;
	// MNotSaved
	int32 m_nCatchUpThinksRemaining;
	// MNotSaved
	bool m_bDiscontinuityPending;
	// MNotSaved
	float32 m_flSmoothedOpenness;
	// MNotSaved
	GameTime_t m_flLastSmoothTime;
	float32 m_flSize;
	int32 m_nTotalDirections;
	int32 m_nTracesPerFrame;
	bool m_bDomeMode;
	bool m_bMultiWall;
	float32 m_flWallTransmission;
	int32 m_nClusterK;
	float32 m_flClusterP;
	float32 m_flClusterBlend;
	float32 m_flOpennessExponent;
	float32 m_flShoulderExponent;
	float32 m_flSmoothHalfLife;
};
