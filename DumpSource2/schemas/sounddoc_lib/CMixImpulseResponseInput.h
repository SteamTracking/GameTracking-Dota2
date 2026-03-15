// MGetKV3ClassDefaults = {
//	"_class": "CMixImpulseResponseInput",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_defaultValue": "sounds/ir/default.vsnd"
//}
// MPropertyFriendlyName = "VMix Control Impulse Response Node"
// MPropertyDescription = "Define a control input that outputs a dynamic impulse response, which can be used by the Steam Audio hybrid reverb processor."
class CMixImpulseResponseInput : public CMixPropertyBase
{
	// MPropertyFriendlyName = "Default Value"
	// MPropertyAttributeEditor = "AssetBrowse( vsnd )"
	CUtlString m_defaultValue;
};
