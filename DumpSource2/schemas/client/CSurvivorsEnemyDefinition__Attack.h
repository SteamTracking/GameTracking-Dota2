class CSurvivorsEnemyDefinition::Attack
{
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sParticleName;
	float32 m_flDamage; // = 1
	float32 m_flAttackCooldown; // = 1
	float32 m_flSpeed; // = 50
	float32 m_flRange; // = 1000
	float32 m_flMaxDistance;
	float32 m_flLifeTime;
	float32 m_flAttackOffsetUp;
	float32 m_flAttackOffsetForward;
	float32 m_flRadius;
	GameActivity_t m_activity; // = "ACT_DOTA_ATTACK"
	float32 m_flAttackPoint;
	bool m_bHasIndicator;
	float32 m_flSpawnDelay;
	SurvivorsAttackIndicatorShape_t m_eIndicatorShape; // = "k_eSurvivorsShape_Undefined"
};
