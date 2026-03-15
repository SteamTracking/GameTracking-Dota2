// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_MotionItemGroup",
//	"m_motions":
//	[
//	],
//	"m_name": "Unnamed Group",
//	"m_conditions":
//	{
//		"_class": "CAnimGraphDoc_ConditionContainer",
//		"m_conditions":
//		[
//		]
//	}
//}
// MPropertyFriendlyName = "Motion Clip Group"
class CAnimGraphDoc_MotionItemGroup
{
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimGraphDoc_MotionItem > > m_motions;
	// MPropertyFriendlyName = "Name"
	CUtlString m_name;
	CAnimGraphDoc_ConditionContainer m_conditions;
};
