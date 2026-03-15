// MGetKV3ClassDefaults = {
//	"_class": "CMixPropertyBase",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false
//}
class CMixPropertyBase
{
	// MPropertyDescription = "Node name"
	// MPropertyFriendlyName = "Name"
	// MPropertySortPriority = 1
	CUtlString m_name;
	// MPropertyDescription = "Description of how this is used  the graph for people reading the graph"
	// MPropertySortPriority = -2
	CUtlString m_Comment;
	// MPropertySortPriority = -1
	// MPropertyHideField
	bool m_bActive;
	// MPropertySortPriority = -1
	// MPropertyHideField
	bool m_bSolo;
	// MPropertySortPriority = -1
	// MPropertyHideField
	bool m_bEditProperties;
};
