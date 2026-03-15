// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropOperation_TraceToLine",
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
//	"m_EndPointA":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_EndPointSpaceA": "WORLD",
//	"m_EndPointB":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_EndPointSpaceB": "WORLD",
//	"m_bTraceAway": false,
//	"m_flTraceLength": 1000.000000
//}
// MPropertyFriendlyName = "Transform: Trace To Line"
// MPropertyDescription = "Perform a trace from a specified origin point to a the closest point on a line."
// MVDataClassGroup (UNKNOWN FOR PARSER)
// MVDataExperimentalNodeSet (UNKNOWN FOR PARSER)
class CSmartPropOperation_TraceToLine : public CSmartPropOperation_Trace
{
	// MPropertyStartGroup = "+Line End Point A"
	// MPropertyDescription = "End point of the line to trace to."
	CSmartPropAttributeVector m_EndPointA;
	// MPropertyDescription = "Coordinate space the end point is specified in."
	CSmartPropAttributeCoordinateSpace m_EndPointSpaceA;
	// MPropertyStartGroup = "+Line End Point B"
	// MPropertyDescription = "End point of the line to trace to."
	CSmartPropAttributeVector m_EndPointB;
	// MPropertyDescription = "Coordinate space the end point is specified in."
	CSmartPropAttributeCoordinateSpace m_EndPointSpaceB;
	// MPropertyStartGroup = "+Trace Away"
	// MPropertyFriendlyName = "Trace away from line"
	// MPropertyDescription = "If enabled, instead of tracing from the origin to the line, trace away from the line for the specified distance starting at the origin."
	CSmartPropAttributeBool m_bTraceAway;
	// MPropertyReadonlyExpr = "m_bTraceAway == false"
	// MPropertyDescription = "Maximum length of the trace. Surfaces beyond this distance will not be hit."
	CSmartPropAttributeFloat m_flTraceLength;
};
