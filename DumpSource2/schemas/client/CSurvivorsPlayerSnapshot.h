// MVDataRoot
class CSurvivorsPlayerSnapshot
{
	SurvivorsHeroID_t m_heroID;
	int32 m_nCurrentLevel; // = 1
	float32 m_flCurrentExp;
	int32 m_nRerollsRemaining;
	CUtlVector< CSurvivorsPowerUpSnapshot > m_vecPowerUps;
	VectorWS m_vOrigin;
};
