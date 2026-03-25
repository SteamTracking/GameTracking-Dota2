class CDestructiblePartsComponent
{
	// MNotSaved
	CNetworkVarChainer __m_pChainEntity;
	CUtlVector< uint16 > m_vecDamageTakenByHitGroup;
	CHandle< C_BaseModelEntity > m_hOwner;
	// MKV3TransferSaveOpsForField = "GetAnimGraphControllerPtrSaveRestoreOps"
	CBaseAnimGraphDestructibleParts_GraphController* m_pAnimGraphDestructibleGraphController;
};
