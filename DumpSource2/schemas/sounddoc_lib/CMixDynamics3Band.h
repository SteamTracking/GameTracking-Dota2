// MGetKV3ClassDefaults = {
//	"_class": "CMixDynamics3Band",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_nChannels": -1,
//	"m_fldbOutputGain": 0.000000,
//	"m_flRMSTime": 500.000000,
//	"m_flDepth": 1.000000,
//	"m_flWetMix": 1.000000,
//	"m_flTimeScale": 1.000000,
//	"m_fldbKneeWidth": 5.000000,
//	"m_flLowCutoffFreq": 88.300003,
//	"m_flHighCutoffFreq": 2500.000000,
//	"m_bPeakMode": false,
//	"m_nSelectedPage": 0,
//	"m_bands":
//	[
//		{
//			"m_fldbGainInput": 5.200000,
//			"m_fldbGainOutput": 8.000000,
//			"m_fldbThresholdBelow": -40.799999,
//			"m_fldbThresholdAbove": -33.799999,
//			"m_flRatioBelow": 4.170000,
//			"m_flRatioAbove": 39.000000,
//			"m_flAttackTimeMS": 47.799999,
//			"m_flReleaseTimeMS": 282.000000,
//			"m_bEnable": true,
//			"m_bSolo": false
//		},
//		{
//			"m_fldbGainInput": 5.200000,
//			"m_fldbGainOutput": 4.420000,
//			"m_fldbThresholdBelow": -41.799999,
//			"m_fldbThresholdAbove": -30.200001,
//			"m_flRatioBelow": 4.170000,
//			"m_flRatioAbove": 39.000000,
//			"m_flAttackTimeMS": 22.400000,
//			"m_flReleaseTimeMS": 282.000000,
//			"m_bEnable": true,
//			"m_bSolo": false
//		},
//		{
//			"m_fldbGainInput": 5.200000,
//			"m_fldbGainOutput": 8.000000,
//			"m_fldbThresholdBelow": -40.799999,
//			"m_fldbThresholdAbove": -35.500000,
//			"m_flRatioBelow": 4.170000,
//			"m_flRatioAbove": 80.000000,
//			"m_flAttackTimeMS": 13.500000,
//			"m_flReleaseTimeMS": 132.000000,
//			"m_bEnable": true,
//			"m_bSolo": false
//		}
//	]
//}
// MPropertyFriendlyName = "VMix 3 Band Dynamics Node"
// MPropertyDescription = "This is a multi-band dynamics processor.  First the signal is split into low/mid/high bands, then each band is routed through two compressors providing upward and downward compression to each band.  Input & Output gain can also be adjusted."
class CMixDynamics3Band : public CMixPropertyBase
{
	// MPropertyFriendlyName = "Channels"
	// MPropertyAttributeChoiceName = "processor_channels"
	int32 m_nChannels;
	// MPropertyFriendlyName = "Output Gain (dB)"
	// MPropertyAttributeRange = "-18 18"
	float32 m_fldbOutputGain;
	// MPropertyFriendlyName = "Threshold detection time (ms)"
	float32 m_flRMSTime;
	// MPropertyFriendlyName = "Depth [0.0 - 1.0]"
	// MPropertyAttributeRange = "0 1"
	float32 m_flDepth;
	// MPropertyFriendlyName = "Wet [0.0 - 1.0]"
	// MPropertyAttributeRange = "0 1"
	float32 m_flWetMix;
	// MPropertyFriendlyName = "Time Scale [0.0 - 10.0]"
	// MPropertyAttributeRange = "0 10"
	float32 m_flTimeScale;
	// MPropertyFriendlyName = "Knee width (dB) 0 = hard knee"
	float32 m_fldbKneeWidth;
	// MPropertyFriendlyName = "Low Cutoff Freq (Hz)"
	float32 m_flLowCutoffFreq;
	// MPropertyFriendlyName = "High Cutoff Freq (Hz)"
	float32 m_flHighCutoffFreq;
	// MPropertyFriendlyName = "Peak Mode"
	bool m_bPeakMode;
	// MPropertyHideField
	int32 m_nSelectedPage;
	VMixDynamicsBand_t[3] m_bands;
};
