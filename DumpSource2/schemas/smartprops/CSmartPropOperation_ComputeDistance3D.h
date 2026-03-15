// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropOperation_ComputeDistance3D",
//	"m_bEnabled": true,
//	"m_OutputVariableName": "",
//	"m_OutputCoordinateSpace": "WORLD",
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
// MPropertyFriendlyName = "Distance"
// MPropertyDescription = "Compute the distance between two 3D points"
// MVDataClassGroup (UNKNOWN FOR PARSER)
class CSmartPropOperation_ComputeDistance3D : public CSmartPropOperation
{
	// MPropertyFriendlyName = "Output Variable"
	// MPropertyAttributeEditor = "SmartPropItemNameEditor( Variable:Float )"
	CUtlString m_OutputVariableName;
	// MPropertyDescription = "Specifies the coordinate space the distance should be computed in. The scale of the coordinate space may affect the distance value."
	CSmartPropAttributeCoordinateSpace m_OutputCoordinateSpace;
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
