// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropOperation_ComputeCrossProduct3D",
//	"m_bEnabled": true,
//	"m_OutputVariableName": "",
//	"m_InputVectorA":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_InputVectorB":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	]
//}
// MPropertyFriendlyName = "Cross Product"
// MPropertyDescription = "Compute a dot or cross product between two 3D vectors"
// MVDataClassGroup (UNKNOWN FOR PARSER)
class CSmartPropOperation_ComputeCrossProduct3D : public CSmartPropOperation
{
	// MPropertyFriendlyName = "Output Variable"
	// MPropertyAttributeEditor = "SmartPropItemNameEditor( Variable:Vector3 )"
	CUtlString m_OutputVariableName;
	// MPropertyFriendlyName = "Vector A"
	CSmartPropAttributeVector m_InputVectorA;
	// MPropertyFriendlyName = "Vector B"
	CSmartPropAttributeVector m_InputVectorB;
};
