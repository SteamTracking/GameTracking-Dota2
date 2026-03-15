// MGetKV3ClassDefaults = {
//	"_class": "CMixUtility",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_desc":
//	{
//		"m_nOp": "VMIX_CHAN_STEREO",
//		"m_flInputPan": 0.000000,
//		"m_flOutputBalance": 0.000000,
//		"m_fldbOutputGain": 0.000000,
//		"m_bBassMono": false,
//		"m_flBassFreq": 120.000000
//	}
//}
// MPropertyFriendlyName = "VMix Utility Audio Node"
// MPropertyDescription = "Adjust the stereo spread/pan/balance of a signal or convert it to mono or mid/side."
class CMixUtility : public CMixPropertyBase
{
	// MPropertyAutoExpandSelf
	VMixUtilityDesc_t m_desc;
};
