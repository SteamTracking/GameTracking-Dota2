// MGetKV3ClassDefaults = {
//	"_class": "CMixDualCompressor",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_nChannels": -1,
//	"m_desc":
//	{
//		"m_flRMSTimeMS": 300.000000,
//		"m_fldbKneeWidth": 0.000000,
//		"m_flWetMix": 1.000000,
//		"m_bPeakMode": false,
//		"m_bandDesc":
//		{
//			"m_fldbGainInput": 0.000000,
//			"m_fldbGainOutput": 0.000000,
//			"m_fldbThresholdBelow": -40.000000,
//			"m_fldbThresholdAbove": -30.000000,
//			"m_flRatioBelow": 12.000000,
//			"m_flRatioAbove": 4.000000,
//			"m_flAttackTimeMS": 50.000000,
//			"m_flReleaseTimeMS": 200.000000,
//			"m_bEnable": true,
//			"m_bSolo": false
//		}
//	}
//}
// MPropertyFriendlyName = "VMix Dual Compressor Node"
// MPropertyDescription = "Compress the dynamic range of both ends of a signal."
class CMixDualCompressor : public CMixPropertyBase
{
	// MPropertyFriendlyName = "Channels"
	// MPropertyAttributeChoiceName = "processor_channels"
	int32 m_nChannels;
	// MPropertyAutoExpandSelf
	VMixDualCompressorDesc_t m_desc;
};
