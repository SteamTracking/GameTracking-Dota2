class CBaseAnimGraph : public C_BaseModelEntity
{
	CAnimGraphControllerManager m_graphControllerManager;
	CAnimGraphControllerPtr m_pMainGraphController;
	bool m_bInitiallyPopulateInterpHistory;
	bool m_bSuppressAnimEventSounds;
	CEntityOutputTemplate< float32 > m_OnLayerCycleUpdated;
	CEntityIOOutput m_OnExternalChoreoGraphChanged;
	bool m_bAnimGraphUpdateEnabled;
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
	bool m_bShouldUpdateTransformations;
	// MNotSaved
	bool m_bHasAnimatedMaterialAttributes;
};
