// MVDataRoot
// MHasKV3TransferPolymorphicClassname
class CSurvivorsPowerUpDefinition_ProjectileAttack : public CSurvivorsPowerUpDefinition
{
	ESurvivorsAttackTargeting m_eTargeting; // = "INVALID_TARGET"
	ESurvivorsAttackTargeting m_eBounceTargeting; // = "INVALID_TARGET"
	float32 m_flBounceMinimumLifetime;
	float32 m_flSpawnMinimumLifetime;
	bool m_bExpireOnWorldCollision; // = true
	bool m_bAbilityActiveWhileProjectileIsAlive;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sParticle;
};
