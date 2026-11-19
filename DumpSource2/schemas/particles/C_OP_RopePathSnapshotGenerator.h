// MHasKV3TransferPolymorphicClassname
class C_OP_RopePathSnapshotGenerator : public CParticleFunctionPreEmission
{
	// MPropertyFriendlyName = "snapshot control point number"
	int32 m_nCPSnapshot;
	// MPropertyFriendlyName = "control point number"
	int32 m_nCPPnt; // = 1
	// MPropertyFriendlyName = "Trace To Surface"
	bool m_bTraceToSurface; // = true
	// MPropertyFriendlyName = "Trace Length"
	// MPropertySuppressExpr = "m_bTraceToSurface == false"
	CParticleCollectionFloatInput m_flTraceLength; // = { "m_flLiteralValue": 4 }
	// MPropertyFriendlyName = "Trace Offset"
	// MPropertySuppressExpr = "m_bTraceToSurface == false"
	CParticleCollectionFloatInput m_flTraceOffset; // = { "m_flLiteralValue": 2 }
	// MPropertyFriendlyName = "Teleport Distance Threshold"
	CParticleCollectionFloatInput m_flTeleportDistance; // = { "m_flLiteralValue": 64 }
	// MPropertyFriendlyName = "Placement Offset"
	// MPropertySuppressExpr = "m_bTraceToSurface == false"
	CParticleCollectionFloatInput m_flPlacementOffset; // = { "m_flLiteralValue": 0.1 }
	// MPropertyFriendlyName = "Trace Direction"
	// MPropertySuppressExpr = "m_bTraceToSurface == false"
	CParticleCollectionVecInput m_vecTraceDirection; // = { "m_vLiteralValue": [ 0, 0, -1 ] }
	// MPropertyFriendlyName = "Trace Set"
	// MPropertySuppressExpr = "m_bTraceToSurface == false"
	ParticleTraceSet_t m_nTraceSet; // = "PARTICLE_TRACE_SET_ALL"
	// MPropertyFriendlyName = "valid position output control point number"
	int32 m_nValidCPPnt; // = -1
	// MPropertyFriendlyName = "UV Scale"
	CParticleCollectionFloatInput m_flUVScale; // = { "m_flLiteralValue": 1 }
	// MPropertyFriendlyName = "UV Offset"
	CParticleCollectionFloatInput m_flUVOffset;
	// MPropertyFriendlyName = "Radius"
	CParticleCollectionFloatInput m_flRadius; // = { "m_flLiteralValue": 10 }
	// MPropertyFriendlyName = "Density"
	CParticleCollectionFloatInput m_flDensity; // = { "m_flLiteralValue": 1 }
	// MPropertyFriendlyName = "Line Subset Name"
	CUtlString m_strLinePointsName; // = "Line"
	// MPropertyFriendlyName = "End points Subset Name"
	CUtlString m_strEndPointsName; // = "EndPoints"
	// MPropertyFriendlyName = "Last Valid Point Subset Name"
	CUtlString m_strLastValidName; // = "LastValid"
};
