// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropElement_PlaceMultiple",
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
//	],
//	"m_nCount": 1,
//	"m_Expression": ""
//}
// MPropertyFriendlyName = "Place Multiple"
// MPropertyDescription = "An element which places multiple instances of its child elements."
class CSmartPropElement_PlaceMultiple : public CSmartPropElement_Group
{
	// MPropertyDescription = "Number of instances of this object and its children to be placed."
	CSmartPropAttributeInt m_nCount;
	// MPropertyFriendlyName = "Stop When"
	// MPropertyDescription = "Stop placing copies of the children when this expression evaluates to true."
	// MPropertyAttributeEditor = "SmartPropAttributeEditor(expression)"
	CUtlString m_Expression;
};
