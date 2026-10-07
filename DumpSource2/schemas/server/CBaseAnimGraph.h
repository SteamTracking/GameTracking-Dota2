class CBaseAnimGraph : public CBaseModelEntity
{
	CAnimGraphControllerManager m_graphControllerManager;
	CAnimGraphControllerPtr m_pMainGraphController;
	bool m_bInitiallyPopulateInterpHistory;
	CEntityOutputTemplate< float32 > m_OnLayerCycleUpdated;
	CEntityIOOutput m_OnExternalChoreoGraphChanged;
	// MKV3TransferSaveOpsForField = "GetChoreoServicesSaveRestoreOps"
	IChoreoServices* m_pChoreoServices;
	bool m_bAnimGraphUpdateEnabled;
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
	bool m_bShouldUpdateTransformations;
	CTransform m_xParentedRagdollRootInEntitySpace;
};
