// MGetKV3ClassDefaults = {
//	"_class": "CMixPanner",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_type": "PANNER_TYPE_EQUAL_POWER",
//	"m_flStrength": 1.000000
//}
// MPropertyFriendlyName = "VMix Panner Audio Node"
// MPropertyDescription = "Adjust the stereo panning of an audio track."
class CMixPanner : public CMixPropertyBase
{
	// MPropertyFriendlyName = "Type"
	VMixPannerType_t m_type;
	// MPropertyFriendlyName = "Strength"
	// MPropertyAttributeRange = "0 1"
	float32 m_flStrength;
};
