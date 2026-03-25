class CBaseAnimGraph : public CBaseModelEntity
{
	// MKV3TransferSaveOpsForField = "GetAnimGraphControllerManagerSaveRestoreOps"
	CAnimGraphControllerManager m_graphControllerManager;
	// MKV3TransferSaveOpsForField = "GetAnimGraphControllerPtrSaveRestoreOps"
	CAnimGraphControllerBase* m_pMainGraphController;
	bool m_bInitiallyPopulateInterpHistory;
	// MKV3TransferSaveOpsForField = "GetChoreoServicesSaveRestoreOps"
	IChoreoServices* m_pChoreoServices;
	bool m_bAnimGraphUpdateEnabled;
	float32 m_flMaxSlopeDistance;
	// MNotSaved
	VectorWS m_vLastSlopeCheckPos;
	uint32 m_nAnimGraphUpdateId;
	// MNotSaved
	bool m_bAnimationUpdateScheduled;
	// MNotSaved
	Vector m_vecForce;
	// MNotSaved
	int32 m_nForceBone;
	// MPhysPtr
	IPhysicsRagdollControl* m_pRagdollControl;
	PhysicsRagdollPose_t m_RagdollPose;
	bool m_bRagdollEnabled;
	// MNotSaved
	bool m_bRagdollClientSide;
	CTransform m_xParentedRagdollRootInEntitySpace;
};
