// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropOperation_ComputeVectorBetweenPoints3D",
//	"m_bEnabled": true,
//	"m_OutputVariableName": "",
//	"m_OutputCoordinateSpace": "WORLD",
//	"m_bNormalized": false,
//	"m_InputPositionA":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_CoordinateSpaceA": "WORLD",
//	"m_InputPositionB":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_CoordinateSpaceB": "WORLD"
//}
// MPropertyFriendlyName = "Vector Between Points"
// MPropertyDescription = "Compute the vector between two 3D points"
// MVDataClassGroup (UNKNOWN FOR PARSER)
class CSmartPropOperation_ComputeVectorBetweenPoints3D : public CSmartPropOperation
{
	// MPropertyFriendlyName = "Output Variable"
	// MPropertyAttributeEditor = "SmartPropItemNameEditor( Variable:Vector3 )"
	CUtlString m_OutputVariableName;
	// MPropertyDescription = "Specifies the coordinate space that vector should be returned in."
	CSmartPropAttributeCoordinateSpace m_OutputCoordinateSpace;
	// MPropertyFriendlyName = "Normalized (Direction Vector)"
	// MPropertyDescription = "Should the return value be normalized to unit length (direction vector)."
	CSmartPropAttributeBool m_bNormalized;
	// MPropertyGroupName = "+Position A"
	// MPropertyFriendlyName = "Position A"
	CSmartPropAttributeVector m_InputPositionA;
	// MPropertyGroupName = "+Position A"
	// MPropertyDescription = "Specifies the coordinate space of position A."
	CSmartPropAttributeCoordinateSpace m_CoordinateSpaceA;
	// MPropertyGroupName = "+Position B"
	// MPropertyFriendlyName = "Position B"
	CSmartPropAttributeVector m_InputPositionB;
	// MPropertyGroupName = "+Position B"
	// MPropertyDescription = "Specifies the coordinate space of position B."
	CSmartPropAttributeCoordinateSpace m_CoordinateSpaceB;
};
