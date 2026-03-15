// MGetKV3ClassDefaults = {
//	"_class": "CMixDynamics",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_nChannels": -1,
//	"m_fldbNoiseGateThreshold": -90.000000,
//	"m_fldbGain": 0.000000,
//	"m_fldbCompressionThreshold": -6.000000,
//	"m_fldbLimiterThreshold": 0.000000,
//	"m_fldbKneeWidth": 0.000000,
//	"m_flRatio": 2.000000,
//	"m_flLimiterRatio": 40.000000,
//	"m_flAttackTime": 100.000000,
//	"m_flReleaseTime": 200.000000,
//	"m_flRMSTime": 200.000000,
//	"m_flWetMix": 1.000000,
//	"m_bPeakMode": false,
//	"m_nUIPage": 0
//}
// MPropertyFriendlyName = "VMix Dynamics Audio Node"
// MPropertyDescription = "A dynamics multiprocessor.  This is a single unit that switches between being a noise gate, compressor, or limiter as the signal moves through its dynamic range.  Useful in some specific cases, e.g. gate+compress or gate+limit usually.  Other cases may be more suited to using multiple compressors in series."
class CMixDynamics : public CMixPropertyBase
{
	// MPropertyFriendlyName = "Channels"
	// MPropertyAttributeChoiceName = "processor_channels"
	int32 m_nChannels;
	// MPropertyFriendlyName = "Noise Gate Threshold(dB)"
	float32 m_fldbNoiseGateThreshold;
	// MPropertyFriendlyName = "Gain (dB)"
	float32 m_fldbGain;
	// MPropertyFriendlyName = "Compression Threshold(dB)"
	float32 m_fldbCompressionThreshold;
	// MPropertyFriendlyName = "Limiter Threshold(dB)"
	float32 m_fldbLimiterThreshold;
	// MPropertyFriendlyName = "Knee width (dB) 0 = hard knee"
	float32 m_fldbKneeWidth;
	// MPropertyFriendlyName = "Compression Ratio"
	float32 m_flRatio;
	// MPropertyFriendlyName = "Limiter Ratio"
	float32 m_flLimiterRatio;
	// MPropertyFriendlyName = "Attack time (ms)"
	float32 m_flAttackTime;
	// MPropertyFriendlyName = "Release time (ms)"
	float32 m_flReleaseTime;
	// MPropertyFriendlyName = "Threshold detection time (ms)"
	float32 m_flRMSTime;
	// MPropertyFriendlyName = "Dry/Wet"
	float32 m_flWetMix;
	// MPropertyFriendlyName = "Peak Mode"
	bool m_bPeakMode;
	int32 m_nUIPage;
};
