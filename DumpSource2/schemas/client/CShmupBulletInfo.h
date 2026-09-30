// MVDataRoot
class CShmupBulletInfo
{
	EShmupBulletPattern m_pattern; // = "k_eShmupBulletPattern_Invalid"
	int32 m_nCount; // = 1
	float32 m_flSpeed; // = 150
	float32 m_flRadius; // = 8
	float32 m_flRandomTargetingOffsetMin;
	float32 m_flRandomTargetingOffsetMax;
	int32 m_nBulletsPerWave; // = 6
	float32 m_flAngleWidth; // = 0.08
	float32 m_flAngleOffset;
	float32 m_flSpeedPerBullet;
	float32 m_flRadiusPerBullet;
	float32 m_flAngleOffsetPerBullet;
	float32 m_flAngleOffsetPerWave;
	float32 m_flAngleStaggerPerWave;
	float32 m_flAngleSinWaveOffset;
	bool m_bSwapColorPerBullet;
	float32 m_flInterval;
	Vector2D m_vFixedDirection; // = [ -1, 0 ]
	bool m_bUseStoredPlayerLocation;
};
