// MGetKV3ClassDefaults = {
//	"_class": "CMixDynamicsCompressor",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_nChannels": -1,
//	"m_desc":
//	{
//		"m_fldbOutputGain": 0.000000,
//		"m_fldbCompressionThreshold": -6.000000,
//		"m_fldbKneeWidth": 0.000000,
//		"m_flCompressionRatio": 2.000000,
//		"m_flAttackTimeMS": 100.000000,
//		"m_flReleaseTimeMS": 400.000000,
//		"m_flRMSTimeMS": 300.000000,
//		"m_flWetMix": 1.000000,
//		"m_bPeakMode": false
//	},
//	"m_nUIPage": 1,
//	"m_bIsLimiter": false
//}
// MPropertyFriendlyName = "VMix Compressor/Limiter Node"
// MPropertyDescription = "Compress the dynamic range of a signal when it is louder than some threshold."
class CMixDynamicsCompressor : public CMixPropertyBase
{
	// MPropertyFriendlyName = "Channels"
	// MPropertyAttributeChoiceName = "processor_channels"
	int32 m_nChannels;
	// MPropertyAutoExpandSelf
	VMixDynamicsCompressorDesc_t m_desc;
	int32 m_nUIPage;
	bool m_bIsLimiter;
};
