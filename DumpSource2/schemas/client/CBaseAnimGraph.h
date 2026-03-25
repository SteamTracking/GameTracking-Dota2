class CBaseAnimGraph : public C_BaseModelEntity
{
	// MKV3TransferSaveOpsForField = "GetAnimGraphControllerManagerSaveRestoreOps"
	CAnimGraphControllerManager m_graphControllerManager;
	// MKV3TransferSaveOpsForField = "GetAnimGraphControllerPtrSaveRestoreOps"
	CAnimGraphControllerBase* m_pMainGraphController;
	bool m_bInitiallyPopulateInterpHistory;
	bool m_bSuppressAnimEventSounds;
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
	// MNotSaved
	CBaseAnimGraph* m_pClientsideRagdoll;
	// MNotSaved
	bool m_bBuiltRagdoll;
	// MPhysPtr
	IPhysicsRagdollControl* m_pRagdollControl;
	PhysicsRagdollPose_t m_RagdollPose;
	bool m_bRagdollEnabled;
	// MNotSaved
	bool m_bRagdollClientSide;
	// MNotSaved
	bool m_bHasAnimatedMaterialAttributes;
};
