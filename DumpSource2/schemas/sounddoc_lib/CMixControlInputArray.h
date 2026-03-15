// MGetKV3ClassDefaults = {
//	"_class": "CMixControlInputArray",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_vflData":
//	[
//	]
//}
// MPropertyFriendlyName = "VMix Control Array Input Node"
// MPropertyDescription = "Define a control array variable that can be set by code or an operator stack.  This can be used to control steamaudio pathing or steamaudio reverb for example."
class CMixControlInputArray : public CMixPropertyBase
{
	// MPropertyFriendlyName = "Input Data"
	// MPropertyAttributeRange = "-1 1"
	CUtlVector< float32 > m_vflData;
};
