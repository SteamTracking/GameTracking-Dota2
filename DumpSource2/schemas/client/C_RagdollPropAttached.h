class C_RagdollPropAttached : public C_RagdollProp
{
	// MNotSaved
	uint32 m_boneIndexAttached;
	// MNotSaved
	uint32 m_ragdollAttachedObjectIndex;
	// MNotSaved
	Vector m_attachmentPointBoneSpace;
	// MNotSaved
	Vector m_attachmentPointRagdollSpace;
	// MNotSaved
	Vector m_vecOffset;
	// MNotSaved
	float32 m_parentTime;
	// MNotSaved
	bool m_bHasParent;
};
