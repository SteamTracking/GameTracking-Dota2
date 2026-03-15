// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropOperation_RestoreState",
//	"m_bEnabled": true,
//	"m_StateName": "",
//	"m_bDiscardIfUknown": false
//}
// MPropertyFriendlyName = "Restore State"
// MPropertyDescription = "Replace the current state with a previously saved state."
// MVDataNodeTintColor (UNKNOWN FOR PARSER)
// MVDataClassGroup (UNKNOWN FOR PARSER)
class CSmartPropOperation_RestoreState : public CSmartPropOperation
{
	// MPropertyAttributeEditor = "SmartPropItemNameEditor( SavedState )"
	// MPropertyDescription = "Name of the previously saved state to restore"
	CSmartPropAttributeStateName m_StateName;
	// MPropertyDescription = "If true, the parent element will be discarded there is no state with the specified name. If false, and there is no state with the specified name then no changes are made."
	CSmartPropAttributeBool m_bDiscardIfUknown;
};
