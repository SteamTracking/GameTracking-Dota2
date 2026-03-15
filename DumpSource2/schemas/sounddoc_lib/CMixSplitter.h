// MGetKV3ClassDefaults = {
//	"_class": "CMixSplitter",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_flVolume1": 1.000000,
//	"m_flVolume2": 1.000000,
//	"m_flVolume3": 1.000000,
//	"m_flVolume4": 1.000000,
//	"m_flVolume5": 1.000000,
//	"m_flVolume6": 1.000000,
//	"m_flVolume7": 1.000000,
//	"m_flVolume8": 1.000000
//}
// MPropertyFriendlyName = "VMix Splitter Audio Node"
// MPropertyDescription = "Create multiple copies of a track at different volumes for processing or mixing separately."
class CMixSplitter : public CMixPropertyBase
{
	// MPropertyFriendlyName = "Volume1"
	float32 m_flVolume1;
	// MPropertyFriendlyName = "Volume2"
	float32 m_flVolume2;
	// MPropertyFriendlyName = "Volume3"
	float32 m_flVolume3;
	// MPropertyFriendlyName = "Volume4"
	float32 m_flVolume4;
	// MPropertyFriendlyName = "Volume5"
	float32 m_flVolume5;
	// MPropertyFriendlyName = "Volume6"
	float32 m_flVolume6;
	// MPropertyFriendlyName = "Volume7"
	float32 m_flVolume7;
	// MPropertyFriendlyName = "Volume8"
	float32 m_flVolume8;
};
