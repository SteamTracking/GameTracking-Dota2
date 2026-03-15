// MGetKV3ClassDefaults = {
//	"_class": "CMixAmp",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_flVolume": 1.000000
//}
// MPropertyFriendlyName = "Mix Amp"
// MPropertyDescription = "Adjust the volume of an audio track."
class CMixAmp : public CMixPropertyBase
{
	// MPropertyDescription = "Default volume scale (0-1) if not automated by connecting the volume input."
	float32 m_flVolume;
};
