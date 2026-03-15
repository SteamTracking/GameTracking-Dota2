// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_StateTransition",
//	"m_conditionList":
//	{
//		"_class": "CAnimGraphDoc_ConditionContainer",
//		"m_conditions":
//		[
//		]
//	},
//	"m_srcState":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_destState":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_sComment": "",
//	"m_bDisabled": false
//}
// MPropertyFriendlyName = "Transition"
class CAnimGraphDoc_StateTransition
{
	// MPropertySuppressField
	CAnimGraphDoc_ConditionContainer m_conditionList;
	// MPropertySuppressField
	AnimStateID m_srcState;
	// MPropertySuppressField
	AnimStateID m_destState;
	// MPropertyFriendlyName = "Comment"
	// MPropertyAttributeEditor = "TextBlock()"
	// MPropertySortPriority = -100
	CUtlString m_sComment;
	// MPropertyFriendlyName = "Disable"
	bool m_bDisabled;
};
