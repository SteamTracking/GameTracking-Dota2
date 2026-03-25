// MGetKV3ClassDefaults = {
//	"_class": "CSndSeqInstMidiSampler",
//	"m_nType": "eSndSeqInstMidiSampler",
//	"m_nPlayerType": "eSndSeqPlayerMidiSeq",
//	"m_bStopCurrentEvents": false,
//	"m_flBPM": 120.000000,
//	"m_flBPMFactor": 2.000000,
//	"m_flBPMInvFactor": 0.500000,
//	"m_bIsSoundEvent": false,
//	"m_bStopPrevious": true,
//	"m_nMinNote": 0,
//	"m_nMaxNote": 0,
//	"m_flMinVelocityAtten": 0.000000,
//	"m_flMaxVelocityAtten": 0.000000,
//	"m_flAttack": 0.000000,
//	"m_flRelease": 0.000000,
//	"m_bBeatEnvelopes": true,
//	"m_nNextVoiceSlot": 0,
//	"m_hSoundEventHash": 0
//}
// MPropertyFriendlyName = "Midi Sampler"
class CSndSeqInstMidiSampler : public CSndSeqInstBaseSchema
{
	bool m_bIsSoundEvent;
	bool m_bStopPrevious;
	uint8 m_nMinNote;
	uint8 m_nMaxNote;
	float32 m_flMinVelocityAtten;
	float32 m_flMaxVelocityAtten;
	float32 m_flAttack;
	float32 m_flRelease;
	bool m_bBeatEnvelopes;
	uint8 m_nNextVoiceSlot;
	uint32 m_hSoundEventHash;
};
