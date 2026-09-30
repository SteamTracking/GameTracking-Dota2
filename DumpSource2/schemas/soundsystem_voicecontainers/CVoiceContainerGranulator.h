// MPropertyFriendlyName = "Granulator Container"
// MHasKV3TransferPolymorphicClassname
class CVoiceContainerGranulator : public CVoiceContainerAsyncGenerator
{
	float32 m_flGrainLength; // = 0.1
	float32 m_flGrainCrossfadeAmount; // = 0.1
	float32 m_flStartJitter;
	float32 m_flPlaybackJitter;
	bool m_bShouldWraparound;
	CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_sourceAudio;
};
