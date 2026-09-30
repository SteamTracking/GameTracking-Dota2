// MVDataRoot
// MHasKV3TransferPolymorphicClassname
class CSurvivorsPowerUpDefinition_InstantAttack : public CSurvivorsPowerUpDefinition
{
	ESurvivorsAttackTargeting m_eTargeting; // = "INVALID_TARGET"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sParticle;
};
