class CDOTA_Modifier_Techies_SnareTrap : public CDOTA_Modifier_Invisible
{
	float32 activation_radius;
	float32 effect_radius;
	float32 effect_duration;
	float32 activation_time;
	bool m_bActivated;
	bool m_bTriggered;
};
