// MVDataRoot
class CDOTACrateDropLevelDef
{
	DOTACrateDropLevelDefID_t m_unID;
	int32 m_nCratesForGameOver; // = 10
	int32 m_nCratesForNextLevel; // = 10
	float32 m_flCrateSpawnInterval; // = 1.25
	float32 m_flHazardSpawnIntervalMin; // = 2
	float32 m_flHazardSpawnIntervalMax; // = 3
	float32 m_flPowerupInterval; // = 3
	float32 m_flPowerupChance;
	int32 m_nMaxCratesOnLevel; // = 20
	CUtlVector< CDOTACrateDropTable > m_vecDropTableCrates;
	CUtlVector< CDOTACrateDropTable > m_vecDropTableHazards;
	CUtlVector< CDOTACrateDropTable > m_vecDropTablePowerups;
	int32 m_nRotationChance;
	int32 m_nRotationSpeedMin; // = 50
	int32 m_nRotationSpeedMax; // = 150
};
