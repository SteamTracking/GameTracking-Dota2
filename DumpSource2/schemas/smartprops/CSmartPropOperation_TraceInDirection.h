// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropOperation_TraceInDirection",
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
//	"m_vTraceDirection":
//	[
//		0.000000,
//		0.000000,
//		-1.000000
//	],
//	"m_DirectionSpace": "WORLD",
//	"m_flTraceLength": 1000.000000
//}
// MPropertyFriendlyName = "Transform: Trace In Direction"
// MPropertyDescription = "Perform a trace in a direction from a specified origin and stop when a surface is hit."
// MVDataClassGroup (UNKNOWN FOR PARSER)
class CSmartPropOperation_TraceInDirection : public CSmartPropOperation_Trace
{
	// MPropertyStartGroup = "+Trace Direction"
	CSmartPropAttributeVector m_vTraceDirection;
	// MPropertyDescription = "Specifies the coordinate space the trace direction vector is specified in."
	CSmartPropAttributeCoordinateSpace m_DirectionSpace;
	// MPropertyDescription = "Maximum length of the trace. Surfaces beyond this distance will not be hit."
	CSmartPropAttributeFloat m_flTraceLength;
};
