// MVDataRoot
class CDOTALockpickingStageDefinition
{
	ELockpickingStageMode m_eMode; // = "INVALID"
	int32 m_nNumUnlocks;
	float32 m_flInitialSpeed;
	float32 m_flSpeedIncrementPerUnlock;
	float32 m_flMinDegreesBetweenUnlocks;
	float32 m_flTimeLimit;
	float32 m_flTimerIncreasePerUnlock;
	float32 m_flSpeedBoostRate;
	float32 m_flSpeedBoostPercentage;
	float32 m_flDecelerationRate;
	float32 m_flRecoverRate;
	float32 m_flBaseUnlockAppearRate;
	float32 m_flUnlockAppearIncreaseRate;
	float32 m_flMaxSpeedMultiplier;
	float32 m_flTimerIncreaseUnlockChance;
	float32 m_flTimerIncreaseUnlockEscalatingChance;
	int32 m_nMaxUnlocksOnBoard;
	int32 m_nBoardRadius;
	int32 m_nUnlockRadius;
	float32 m_flUnlockDegreeDecreaseRate;
	int32 m_nScorePerUnlock;
};
