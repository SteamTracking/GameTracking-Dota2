// MGetKV3ClassDefaults = {
//	"_class": "CMixConvolution",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_desc":
//	{
//		"m_fldbGain": -12.000000,
//		"m_flPreDelayMS": 0.000000,
//		"m_flWetMix": 1.000000,
//		"m_fldbLow": 0.000000,
//		"m_fldbMid": 0.000000,
//		"m_fldbHigh": 0.000000,
//		"m_flLowCutoffFreq": 1500.000000,
//		"m_flHighCutoffFreq": 7500.000000
//	}
//}
// MPropertyFriendlyName = "VMix Audio Convolution Node"
// MPropertyDescription = "Apply a vsnd as an impulse response (IR) to an audio signal via convolution."
class CMixConvolution : public CMixPropertyBase
{
	// MPropertyAutoExpandSelf
	VMixConvolutionDesc_t m_desc;
};
