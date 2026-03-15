// MGetKV3ClassDefaults = {
//	"_class": "CMixControlCrossfade",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_flFadeStart": 0.000000,
//	"m_flFadeEnd": 1.000000
//}
// MPropertyFriendlyName = "VMix Crossfade Control Node"
// MPropertyDescription = "Generates two control signals from a single input that can be used to drive an equal power volume crossfade."
class CMixControlCrossfade : public CMixPropertyBase
{
	// MPropertyFriendlyName = "Fade Start"
	float32 m_flFadeStart;
	// MPropertyFriendlyName = "Fade End"
	float32 m_flFadeEnd;
};
