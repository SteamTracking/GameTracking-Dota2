class CEnvWindController : public CBaseEntity
{
	CEnvWindShared m_EnvWindShared;
	float32 m_fDirectionVariation;
	float32 m_fSpeedVariation;
	float32 m_fTurbulence;
	float32 m_fVolumeHalfExtentXY;
	float32 m_fVolumeHalfExtentZ;
	int32 m_nVolumeResolutionXY;
	int32 m_nVolumeResolutionZ;
	int32 m_nClipmapLevels;
	bool m_bIsMaster;
	bool m_bFirstTime;
};
