class CDSPMixgroupModifier
{
	// MPropertyDescription = "Name of the mixgroup. TODO: needs to be autopopulated with mixgroups."
	// MPropertyFriendlyName = "Mixgroup Name"
	CUtlString m_mixgroup; // = "default"
	// MPropertyDescription = "The amount to multiply the volume of the non-spatialized reverb/dsp by when at the max reverb blend distance. 1.0 leaves the volume unchanged."
	// MPropertyFriendlyName = "Far reverb gain amount for listener DSP."
	float32 m_flListenerReverbFar; // = 1
	// MPropertyDescription = "The amount to multiply the volume of the non-spatialized reverb/dsp by when at the min reverb blend distance. 1.0 leaves the volume unchanged."
	// MPropertyFriendlyName = "Near reverb gain amount for listener DSP."
	float32 m_flListenerReverbNear;
	// MPropertyDescription = "If set to >= 0, we will use this mix modifier for source-specific DSP effects. Otherwise we will use the listener DSP value."
	// MPropertyFriendlyName = "Far reverb gain amount for source-specific DSP."
	float32 m_flSourceReverbFar; // = -1
	// MPropertyDescription = "If set to >= 0, we will use this mix modifier for source-specific DSP effects. Otherwise we will use the listener DSP value."
	// MPropertyFriendlyName = "Near reverb gain amount for source-specific DSP."
	float32 m_flSourceReverbNear; // = -1
	// MPropertyDescription = "When a source has source-specific DSP, this can be used as an additional mix stage for the listener reverb amount."
	// MPropertyFriendlyName = "Modification amount for listener DSP when source DSP is used."
	float32 m_flListenerReverbModifierWhenSourceReverbIsActive; // = 1
	// MPropertyDescription = "Gain applied to the tail of sounds whose source is in this DSP preset (see csgo_mega use_tail_distance_attenuation). 1.0 leaves the tail unchanged."
	// MPropertyFriendlyName = "Tail volume for sources in this DSP preset."
	float32 m_flTailVolume; // = 1
};
