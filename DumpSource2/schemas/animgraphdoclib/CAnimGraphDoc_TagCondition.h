// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_TagCondition",
//	"m_tagID":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_comparisonValue": true,
//	"m_latestValue": false
//}
// MPropertyFriendlyName = "Tag Condition"
class CAnimGraphDoc_TagCondition : public CAnimGraphDoc_Condition
{
	// MPropertyFriendlyName = "Tag"
	// MPropertyAttributeChoiceName = "Tag"
	AnimTagID m_tagID;
	// MPropertyFriendlyName = "Value"
	bool m_comparisonValue;
	// MPropertyFriendlyName = "Lastest Value"
	bool m_latestValue;
};
