// MPropertyFriendlyName = "Reference Container"
// MPropertyDescription = "Plays a vsnd file."
// MHasKV3TransferPolymorphicClassname
class CVoiceContainerReference : public CVoiceContainerBase
{
	// MPropertyFriendlyName = "Vsnd File"
	CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_sound;
};
