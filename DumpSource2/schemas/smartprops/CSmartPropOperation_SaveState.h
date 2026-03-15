// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropOperation_SaveState",
//	"m_bEnabled": true,
//	"m_StateName": ""
//}
// MPropertyFriendlyName = "Save State"
// MPropertyDescription = "Save the current state, allowing it to be restored at a later state."
// MVDataNodeTintColor (UNKNOWN FOR PARSER)
// MVDataClassGroup (UNKNOWN FOR PARSER)
class CSmartPropOperation_SaveState : public CSmartPropOperation
{
	// MPropertyAttributeEditor = "SmartPropItemNameEditor( SavedState )"
	// MPropertyDescription = "Name to assign to the saved state, the save state can be restored later using this name."
	CUtlString m_StateName;
};
