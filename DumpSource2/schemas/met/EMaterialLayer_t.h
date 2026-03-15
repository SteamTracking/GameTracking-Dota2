// MGetKV3ClassDefaults = {
//	"m_VariableNames":
//	[
//	],
//	"m_HiddenVariableUiNames":
//	[
//	],
//	"m_ReferenceVariableIndex": -1,
//	"m_RefType": "",
//	"m_RefFileEnding": "",
//	"m_bActive": true,
//	"inheritedVariableValues": null,
//	"inheritedVariableSources": null
//}
class EMaterialLayer_t
{
	CUtlVector< CUtlString > m_VariableNames;
	CUtlVector< std::pair< CUtlString, CUtlString > > m_HiddenVariableUiNames;
	int32 m_ReferenceVariableIndex;
	CUtlString m_RefType;
	CUtlString m_RefFileEnding;
	bool m_bActive;
	KeyValues3 inheritedVariableValues;
	KeyValues3 inheritedVariableSources;
};
