// MGetKV3ClassDefaults = {
//	"_class": "CMixEQ8",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_nChannels": -1,
//	"m_stages":
//	[
//		{
//			"m_filterType": "FILTER_LOW_SHELF",
//			"m_flFrequency": 80.000000,
//			"m_flQ": 1.000000,
//			"m_fldbGain": 0.000000,
//			"m_nFilterSlope": "FILTER_SLOPE_12dB",
//			"m_bEnable": true
//		},
//		{
//			"m_filterType": "FILTER_PEAKING_EQ",
//			"m_flFrequency": 500.000000,
//			"m_flQ": 3.000000,
//			"m_fldbGain": 0.000000,
//			"m_nFilterSlope": "FILTER_SLOPE_12dB",
//			"m_bEnable": true
//		},
//		{
//			"m_filterType": "FILTER_PEAKING_EQ",
//			"m_flFrequency": 750.000000,
//			"m_flQ": 3.000000,
//			"m_fldbGain": 0.000000,
//			"m_nFilterSlope": "FILTER_SLOPE_12dB",
//			"m_bEnable": false
//		},
//		{
//			"m_filterType": "FILTER_PEAKING_EQ",
//			"m_flFrequency": 1200.000000,
//			"m_flQ": 3.000000,
//			"m_fldbGain": 0.000000,
//			"m_nFilterSlope": "FILTER_SLOPE_12dB",
//			"m_bEnable": true
//		},
//		{
//			"m_filterType": "FILTER_PEAKING_EQ",
//			"m_flFrequency": 2000.000000,
//			"m_flQ": 3.000000,
//			"m_fldbGain": 0.000000,
//			"m_nFilterSlope": "FILTER_SLOPE_12dB",
//			"m_bEnable": false
//		},
//		{
//			"m_filterType": "FILTER_PEAKING_EQ",
//			"m_flFrequency": 3000.000000,
//			"m_flQ": 3.000000,
//			"m_fldbGain": 0.000000,
//			"m_nFilterSlope": "FILTER_SLOPE_12dB",
//			"m_bEnable": true
//		},
//		{
//			"m_filterType": "FILTER_PEAKING_EQ",
//			"m_flFrequency": 5000.000000,
//			"m_flQ": 3.000000,
//			"m_fldbGain": 0.000000,
//			"m_nFilterSlope": "FILTER_SLOPE_12dB",
//			"m_bEnable": false
//		},
//		{
//			"m_filterType": "FILTER_HIGH_SHELF",
//			"m_flFrequency": 12000.000000,
//			"m_flQ": 1.000000,
//			"m_fldbGain": 0.000000,
//			"m_nFilterSlope": "FILTER_SLOPE_12dB",
//			"m_bEnable": true
//		}
//	]
//}
// MPropertyFriendlyName = "VMix EQ8 Audio Node"
// MPropertyDescription = "Up to 8 bands of EQ.  Boost/cut up to 8 bands with adjustable Q.  Filters can also be configured as low/high pass or low/high shelf."
class CMixEQ8 : public CMixPropertyBase
{
	// MPropertyFriendlyName = "Channels"
	// MPropertyAttributeChoiceName = "processor_channels"
	int32 m_nChannels;
	// MPropertyFriendlyName = "EQ Stages"
	CFilterStage[8] m_stages;
};
