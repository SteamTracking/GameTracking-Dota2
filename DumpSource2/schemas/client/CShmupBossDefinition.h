// MVDataRoot
class CShmupBossDefinition
{
	CUtlVector< CShmupBossBodyPart > m_vecBodyParts;
	float32 m_flIntroDuration;
	float32 m_flMouthLaserChargeTime;
	float32 m_flMouthLaserDuration;
	float32 m_flWingBarrageChargeTime;
	float32 m_flWingBarrageDuration;
	int32 m_nSplinterBlastCount; // = 1
	float32 m_fSplinterBlastChargeTime; // = 1
	float32 m_flSplinterBlastDuration; // = 1
	float32 m_flColdEmbraceDuration; // = 1
	Vector2D m_vIdlePosition;
};
