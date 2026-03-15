// MGetKV3ClassDefaults = {
//	"_class": "CMixVsndName",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_defaultValue": "sounds/ir/default.vsnd"
//}
// MPropertyFriendlyName = "VMix VSND Input Node"
// MPropertyDescription = "Create a variable that can contain the name of a vsnd file that can be modified by code/operator stack.  This can be used to select the IR for a convolution node."
class CMixVsndName : public CMixPropertyBase
{
	// MPropertyFriendlyName = "Default Value"
	// MPropertyAttributeEditor = "AssetBrowse( vsnd )"
	CUtlString m_defaultValue;
};
