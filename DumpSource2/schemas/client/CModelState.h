class CModelState
{
	CStrongHandle< InfoForResourceTypeCModel > m_hModel;
	CUtlSymbolLarge m_ModelName;
	// MPhysPtr
	IPhysAggregateInstance* m_pVPhysicsAggregate;
	Vector m_vRootBoneOffset;
	uint8 m_nRootBoneOffsetResetSerialNumber;
	bool m_bClientClothCreationSuppressed;
	uint8 m_nAnimStateNoInterpSerialNumber;
	uint64 m_MeshGroupMask;
	C_NetworkUtlVectorBase< int32 > m_nBodyGroupChoices;
	int8 m_nIdealMotionType;
	int8 m_nForceLOD;
	int8 m_nClothUpdateFlags;
};
