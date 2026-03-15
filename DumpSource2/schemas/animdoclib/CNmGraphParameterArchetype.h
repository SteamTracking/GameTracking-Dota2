// MGetKV3ClassDefaults = {
//	"m_entryType": "Parameter",
//	"m_name": "",
//	"m_groupName": "",
//	"m_valueType": "ID",
//	"m_expectedValues":
//	[
//	]
//}
// MVDataRoot
// MVDataOverlayType = 1
class CNmGraphParameterArchetype
{
	CNmGraphParameterArchetype::EntryType_t m_entryType;
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	CUtlString m_name;
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	CUtlString m_groupName;
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	NmGraphValueType_t m_valueType;
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	CUtlVector< CGlobalSymbol > m_expectedValues;
};
