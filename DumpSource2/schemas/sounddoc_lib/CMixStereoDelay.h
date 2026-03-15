// MGetKV3ClassDefaults = {
//	"_class": "CMixStereoDelay",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_flDelayLeft": 0.000000,
//	"m_flDelayRight": 0.000000
//}
// MPropertyFriendlyName = "VMix Stereo Delay Audio Node"
// MPropertyDescription = "A simple delay with separate left & right delay times."
class CMixStereoDelay : public CMixPropertyBase
{
	// MPropertyFriendlyName = "Left Channel Delay (in seconds)"
	// MPropertyAttributeRange = "0 100"
	float32 m_flDelayLeft;
	// MPropertyFriendlyName = "Right Channel Delay (in seconds)"
	// MPropertyAttributeRange = "0 100"
	float32 m_flDelayRight;
};
