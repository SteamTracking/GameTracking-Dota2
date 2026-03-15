// MGetKV3ClassDefaults = {
//	"_class": "CMixVocoder",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_nBandCount": 6,
//	"m_flBandwidth": 1.000000,
//	"m_fldBModGain": 12.000000,
//	"m_flAttackTime": 50.000000,
//	"m_flReleaseTime": 100.000000,
//	"m_flFreqRangeStart": 100.000000,
//	"m_flFreqRangeEnd": 12000.000000,
//	"m_fldBUnvoicedGain": 0.000000,
//	"m_nDebugBand": -1,
//	"m_bPeakMode": false
//}
// MPropertyFriendlyName = "VMix Vocoder Audio Node"
// MPropertyDescription = "Applies multi-band modulation to a carrier signal, based on the multi-band envelope of a modulator signal.  Modulation bands can be configured to a certain number of bands or range of frequencies."
class CMixVocoder : public CMixPropertyBase
{
	// MPropertyFriendlyName = "Vocoder Band Count"
	int32 m_nBandCount;
	// MPropertyFriendlyName = "Bandwidth"
	// MPropertyAttributeRange = "0.1 3.0"
	float32 m_flBandwidth;
	// MPropertyFriendlyName = "dB gain for modulation signal"
	// MPropertyAttributeRange = "-12 12"
	float32 m_fldBModGain;
	// MPropertyFriendlyName = "Attack time (ms)"
	float32 m_flAttackTime;
	// MPropertyFriendlyName = "Release time (ms)"
	float32 m_flReleaseTime;
	// MPropertyFriendlyName = "Frequency Start"
	// MPropertyAttributeRange = "0 11025"
	float32 m_flFreqRangeStart;
	// MPropertyFriendlyName = "Frequency End"
	// MPropertyAttributeRange = "100 22050"
	float32 m_flFreqRangeEnd;
	// MPropertyFriendlyName = "Gain of Unvoiced"
	// MPropertyAttributeRange = "-12 12"
	float32 m_fldBUnvoicedGain;
	int32 m_nDebugBand;
	bool m_bPeakMode;
};
