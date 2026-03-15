// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropElement_Group",
//	"m_nElementID": -1,
//	"m_bEnabled": true,
//	"m_sLabel": "",
//	"m_SelectionCriteria":
//	[
//	],
//	"m_Modifiers":
//	[
//	],
//	"m_Children":
//	[
//	]
//}
// MPropertyFriendlyName = "Group"
// MPropertyDescription = "A group of elements that will all be evaulated."
class CSmartPropElement_Group : public CSmartPropElement
{
	// MPropertyFriendlyName = "Children"
	// MPropertyDescription = "List of child elements which will appear if this element appears"
	// MVDataPromoteField (UNKNOWN FOR PARSER)
	CUtlVector< CSmartPropElement* > m_Children;
};
