// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropOperation_ComputeNormalizedVector3D",
//	"m_bEnabled": true,
//	"m_OutputVariableName": "",
//	"m_InputVector":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	]
//}
// MPropertyFriendlyName = "Normalize Vector"
// MPropertyDescription = "Normalize the value of a 3d vector."
// MVDataClassGroup (UNKNOWN FOR PARSER)
class CSmartPropOperation_ComputeNormalizedVector3D : public CSmartPropOperation
{
	// MPropertyFriendlyName = "Output Variable"
	// MPropertyAttributeEditor = "SmartPropItemNameEditor( Variable:Vector3 )"
	CUtlString m_OutputVariableName;
	CSmartPropAttributeVector m_InputVector;
};
