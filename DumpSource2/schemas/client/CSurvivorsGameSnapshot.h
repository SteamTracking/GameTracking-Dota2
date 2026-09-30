// MVDataRoot
class CSurvivorsGameSnapshot
{
	SurvivorsGameModeID_t m_gameModeID;
	CSurvivorsPlayerSnapshot m_playerSnapshot; // = { "m_flCurrentExp": 0, "m_heroID": 0, "m_nCurrentLevel": 1, "m_nRerollsRemaining": 0, "m_vOrigin": null, "m_vecPowerUps": [  ] }
	CUtlVector< CSurvivorsEnemySnapshot > m_enemiesSnapshot;
	CUtlVector< CSurvivorsPickupSnapshot > m_pickupsSnapshot;
	float32 m_flGameTime;
	int32 m_nCurrentLevelEvent;
};
