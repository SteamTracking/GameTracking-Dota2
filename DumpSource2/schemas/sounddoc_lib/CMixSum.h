// MGetKV3ClassDefaults = {
//	"_class": "CMixSum",
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
//	"m_flVolume8": 1.000000,
//	"m_channelName":
//	[
//		"Vol:1",
//		"Vol:2",
//		"Vol:3",
//		"Vol:4",
//		"Vol:5",
//		"Vol:6",
//		"Vol:7",
//		"Vol:8"
//	]
//}
// MPropertyFriendlyName = "VMix Mixer Audio Node"
// MPropertyDescription = "Mixes audio tracks together into a single track.  Mix levels can be automated."
class CMixSum : public CMixPropertyBase
{
	// MPropertyFriendlyName = "Volume:1"
	float32 m_flVolume1;
	// MPropertyFriendlyName = "Volume:2"
	float32 m_flVolume2;
	// MPropertyFriendlyName = "Volume:3"
	float32 m_flVolume3;
	// MPropertyFriendlyName = "Volume:4"
	float32 m_flVolume4;
	// MPropertyFriendlyName = "Volume:5"
	float32 m_flVolume5;
	// MPropertyFriendlyName = "Volume:6"
	float32 m_flVolume6;
	// MPropertyFriendlyName = "Volume:7"
	float32 m_flVolume7;
	// MPropertyFriendlyName = "Volume:8"
	float32 m_flVolume8;
	// MPropertyFriendlyName = "Channel Name"
	CUtlString[8] m_channelName;
};
