// MPropertyFriendlyName = "Bone Transforms"
// MHasKV3TransferPolymorphicClassname
class DebugDrawBoneTransforms_t : public DebugSnapshotBaseStructuredData_t
{
	CTransform m_rootToWorld;
	int32 m_nBoneCount;
	CUtlVector< uint16 > m_packed;
};
