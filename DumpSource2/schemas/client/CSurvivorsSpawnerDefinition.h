// MVDataRoot
// MHasKV3TransferPolymorphicClassname
class CSurvivorsSpawnerDefinition
{
	CUtlString m_sEnemyName;
	CUtlString m_sEnemyDisplayName;
	int32 m_nMinimumEnemyCount; // = 1
	int32 m_nMaxSpawnCountPerInterval; // = 30
	int32 m_nOverflowEnemySpawnCount;
	float32 m_flSpawnInterval;
	ESurvivorsEnemySpawnBehavior m_eSpawnBehavior; // = "FIXED_DIRECTION"
	float32 m_flFixedDirectionSpawnDistanceVariance;
	bool m_bIsPersistant;
	bool m_bResetSpawnIntervalOnKill;
	float32 m_flSpawnChance; // = 1
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sSpawnParticle;
	Vector2D m_flSpawnOvalRadius;
	CUtlString m_sSpawnInfoTargetName;
	CUtlString m_sMinimapIconClass;
	float32 m_flPerpendicularWallSpacing;
	bool m_bIgnoreDifficultySpawnMultiplier;
	ESurvivorsEnemySpawnPositionsLayer m_eSpawnPositionsLayer; // = "ENEMY_MAIN"
};
