// MHasKV3TransferPolymorphicClassname
class C_OP_MaintainSequentialPath : public CParticleFunctionOperator
{
	// MPropertyFriendlyName = "maximum distance"
	float32 m_fMaxDistance;
	// MPropertyFriendlyName = "particles to map from start to end"
	float32 m_flNumToAssign; // = 100
	// MPropertyFriendlyName = "cohesion strength"
	float32 m_flCohesionStrength; // = 1
	// MPropertyFriendlyName = "control point movement tolerance"
	float32 m_flTolerance;
	// MPropertyFriendlyName = "restart behavior (0 = bounce, 1 = loop )"
	bool m_bLoop; // = true
	// MPropertyFriendlyName = "use existing particle count"
	bool m_bUseParticleCount;
	CPathParameters m_PathParams; // = { "m_flBulge": 0, "m_flMidPoint": 0.5, "m_nBulgeControl": 0, "m_nEndControlPointNumber": 0, "m_nStartControlPointNumber": 0, "m_vEndOffset": [ 0, 0, 0 ], "m_vMidPointOffset": [ 0, 0, 0 ], "m_vStartPointOffset": [ 0, 0, 0 ] }
};
