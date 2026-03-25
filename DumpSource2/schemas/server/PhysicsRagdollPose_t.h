class PhysicsRagdollPose_t
{
	CNetworkUtlVectorBase< CTransform > m_Transforms;
	CHandle< CBaseEntity > m_hOwner;
	// MNotSaved
	bool m_bSetFromDebugHistory;
};
