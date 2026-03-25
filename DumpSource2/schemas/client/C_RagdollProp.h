class C_RagdollProp : public CBaseAnimGraph
{
	// MNotSaved
	C_NetworkUtlVectorBase< bool > m_ragEnabled;
	// MNotSaved
	C_NetworkUtlVectorBase< Vector > m_ragPos;
	// MNotSaved
	C_NetworkUtlVectorBase< QAngle > m_ragAngles;
	// MNotSaved
	float32 m_flBlendWeight;
	// MNotSaved
	CHandle< C_BaseEntity > m_hRagdollSource;
	// MNotSaved
	AttachmentHandle_t m_iEyeAttachment;
	// MNotSaved
	float32 m_flBlendWeightCurrent;
	// MNotSaved
	CUtlVector< int32 > m_parentPhysicsBoneIndices;
	// MNotSaved
	CUtlVector< int32 > m_worldSpaceBoneComputationOrder;
};
