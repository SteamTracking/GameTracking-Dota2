// MGetKV3ClassDefaults = {
//	"m_footName": "",
//	"m_targetBoneName": "",
//	"m_ikChainName": "",
//	"m_tag":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_paramName": "",
//	"m_param":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_flMaxRotationLeft": 90.000000,
//	"m_flMaxRotationRight": 90.000000
//}
// MPropertyFriendlyName = "Item"
// MPropertyElementNameFn (UNKNOWN FOR PARSER)
class CFootPinningItem
{
	// MPropertyFriendlyName = "Foot"
	// MPropertyAttributeChoiceName = "Foot"
	CUtlString m_footName;
	// MPropertyFriendlyName = "Target Bone"
	// MPropertyAttributeChoiceName = "Bone"
	CUtlString m_targetBoneName;
	// MPropertyFriendlyName = "IK Chain"
	// MPropertyAttributeChoiceName = "IKChain"
	CUtlString m_ikChainName;
	// MPropertyFriendlyName = "Tag"
	// MPropertyAttributeChoiceName = "Tag"
	AnimTagID m_tag;
	// MPropertySuppressField
	CUtlString m_paramName;
	// MPropertyFriendlyName = "Parameter"
	// MPropertyAttributeChoiceName = "BoolParameter"
	AnimParamID m_param;
	// MPropertyFriendlyName = "Max Left Rotation"
	// MPropertyAttributeRange = "0 180"
	float32 m_flMaxRotationLeft;
	// MPropertyFriendlyName = "Max Right Rotation"
	// MPropertyAttributeRange = "0 180"
	float32 m_flMaxRotationRight;
};
