// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropOperation_TraceToPoint",
//	"m_bEnabled": true,
//	"m_Origin":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_OriginSpace": "ELEMENT",
//	"m_flOriginOffset": 0.000000,
//	"m_flSurfaceUpInfluence": 0.000000,
//	"m_nNoHitResult": "NOTHING",
//	"m_bIgnoreToolMaterials": true,
//	"m_bIgnoreSky": true,
//	"m_bIgnoreNoDraw": true,
//	"m_bIgnoreTranslucent": false,
//	"m_bIgnoreModels": false,
//	"m_bIgnoreEntities": true,
//	"m_bIgnoreCables": false,
//	"m_TargetPoint":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_TargetPointSpace": "WORLD",
//	"m_bTraceAway": false,
//	"m_flTraceLength": 1000.000000
//}
// MPropertyFriendlyName = "Transform: Trace To Point"
// MPropertyDescription = "Perform a trace between the specified origin and a specified target point."
// MVDataClassGroup (UNKNOWN FOR PARSER)
// MVDataExperimentalNodeSet (UNKNOWN FOR PARSER)
class CSmartPropOperation_TraceToPoint : public CSmartPropOperation_Trace
{
	// MPropertyStartGroup = "+Target Point"
	// MPropertyDescription = "The target point to trace to from the origin."
	CSmartPropAttributeVector m_TargetPoint;
	// MPropertyDescription = "Specifies the coordinate space the target point is specified in."
	CSmartPropAttributeCoordinateSpace m_TargetPointSpace;
	// MPropertyStartGroup = "+Trace Away"
	// MPropertyFriendlyName = "Trace away from point"
	// MPropertyDescription = "If enabled, instead of tracing from the origin to the target point, trace away from the target point for the specified distance starting at the origin."
	CSmartPropAttributeBool m_bTraceAway;
	// MPropertyReadonlyExpr = "m_bTraceAway == false"
	// MPropertyDescription = "Maximum length of the trace. Surfaces beyond this distance will not be hit."
	CSmartPropAttributeFloat m_flTraceLength;
};
