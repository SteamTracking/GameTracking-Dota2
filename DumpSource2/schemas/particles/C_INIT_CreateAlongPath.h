// MHasKV3TransferPolymorphicClassname
class C_INIT_CreateAlongPath : public CParticleFunctionInitializer
{
	// MPropertyFriendlyName = "maximum distance"
	float32 m_fMaxDistance;
	CPathParameters m_PathParams; // = { "m_flBulge": 0, "m_flMidPoint": 0.5, "m_nBulgeControl": 0, "m_nEndControlPointNumber": 0, "m_nStartControlPointNumber": 0, "m_vEndOffset": [ 0, 0, 0 ], "m_vMidPointOffset": [ 0, 0, 0 ], "m_vStartPointOffset": [ 0, 0, 0 ] }
	// MPropertyFriendlyName = "randomly select sequential CP pairs between start and end points"
	bool m_bUseRandomCPs;
	// MPropertyFriendlyName = "Offset from control point for path end"
	// MVectorIsCoordinate
	Vector m_vEndOffset;
	// MPropertyFriendlyName = "save offset"
	bool m_bSaveOffset;
};
