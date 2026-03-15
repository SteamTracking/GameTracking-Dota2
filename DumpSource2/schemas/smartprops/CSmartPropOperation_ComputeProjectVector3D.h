// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropOperation_ComputeProjectVector3D",
//	"m_bEnabled": true,
//	"m_OutputVariableName": "",
//	"m_OutputCoordinateSpace": "WORLD",
//	"m_InputVectorA":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_CoordinateSpaceA": "WORLD",
//	"m_InputVectorB":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_CoordinateSpaceB": "WORLD",
//	"m_bPlane": false
//}
// MPropertyFriendlyName = "Project Vector"
// MPropertyDescription = "Project Vector A onto Vector B"
// MVDataClassGroup (UNKNOWN FOR PARSER)
class CSmartPropOperation_ComputeProjectVector3D : public CSmartPropOperation
{
	// MPropertyFriendlyName = "Output Variable"
	// MPropertyAttributeEditor = "SmartPropItemNameEditor( Variable:Vector3 )"
	CUtlString m_OutputVariableName;
	// MPropertyDescription = "Specifies the coordinate space that vector should be returned in."
	CSmartPropAttributeCoordinateSpace m_OutputCoordinateSpace;
	// MPropertyGroupName = "+Vector A"
	// MPropertyFriendlyName = "Vector A"
	CSmartPropAttributeVector m_InputVectorA;
	// MPropertyGroupName = "+Vector A"
	// MPropertyDescription = "Specifies the coordinate space of vector A."
	CSmartPropAttributeCoordinateSpace m_CoordinateSpaceA;
	// MPropertyGroupName = "+Vector B"
	// MPropertyFriendlyName = "Vector B"
	CSmartPropAttributeVector m_InputVectorB;
	// MPropertyGroupName = "+Vector B"
	// MPropertyDescription = "Specifies the coordinate space of posivectortion B."
	CSmartPropAttributeCoordinateSpace m_CoordinateSpaceB;
	// MPropertyFriendlyName = "Projection to plane"
	// MPropertyDescription = "Interpret Vector B as plane normal."
	CSmartPropAttributeBool m_bPlane;
};
