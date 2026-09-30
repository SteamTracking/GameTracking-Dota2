// MVDataRoot
// MHasKV3TransferPolymorphicClassname
class CSurvivorsEnemyDefinition_Resurrector : public CSurvivorsEnemyDefinition
{
	int32 m_nNumResurrectionTimes;
	float32 m_flMovementSpeedMultiplierPerDeath; // = 1
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sResurrectParticleName;
};
