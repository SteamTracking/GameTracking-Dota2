class CDestructiblePartsComponent
{
	// MNotSaved
	CNetworkVarChainer __m_pChainEntity;
	CUtlVector< uint16 > m_vecDamageTakenByHitGroup;
	CHandle< CBaseModelEntity > m_hOwner;
	// MKV3TransferSaveOpsForField = "GetAnimGraphControllerPtrSaveRestoreOps"
	CBaseAnimGraphDestructibleParts_GraphController* m_pAnimGraphDestructibleGraphController;
};
