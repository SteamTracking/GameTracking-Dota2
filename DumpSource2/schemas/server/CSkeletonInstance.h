class CSkeletonInstance : public CGameSceneNode
{
	CModelState m_modelState;
	// MNotSaved
	bool m_bUseParentRenderBounds;
	bool m_bDisableSolidCollisionsForHierarchy;
	// MNotSaved
	bitfield:1 m_bDirtyMotionType;
	// MNotSaved
	bitfield:1 m_bIsGeneratingLatchedParentSpaceState;
	CUtlStringToken m_materialGroup;
	uint8 m_nHitboxSet;
	bool m_bForceServerConstraintsEnabled;
};
