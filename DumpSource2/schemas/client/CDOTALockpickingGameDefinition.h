// MVDataRoot
class CDOTALockpickingGameDefinition
{
	CUtlVector< CDOTALockpickingStageDefinition > m_vecStages;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_successEffect;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_failEffect;
	int32 m_nScorePerUnlock;
};
