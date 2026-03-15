// MGetKV3ClassDefaults = {
//	"m_footName": "",
//	"m_triggerPhase": "StepPhase_OnGround",
//	"m_tagNames":
//	[
//	],
//	"m_tagIDs":
//	[
//	]
//}
// MPropertyFriendlyName = "Item"
// MPropertyElementNameFn (UNKNOWN FOR PARSER)
class CFootStepTriggerItem
{
	// MPropertyFriendlyName = "Foot"
	// MPropertyAttributeChoiceName = "Foot"
	CUtlString m_footName;
	// MPropertyFriendlyName = "Trigger Phase"
	StepPhase m_triggerPhase;
	// MPropertySuppressField
	CUtlVector< CGlobalSymbol > m_tagNames;
	// MPropertyFriendlyName = "Tags"
	// MPropertyAttributeChoiceName = "Tag"
	CUtlVector< AnimTagID > m_tagIDs;
};
