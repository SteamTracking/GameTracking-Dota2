class CDOTA_Modifier_Morphling_EbbAndFlow : public CDOTA_Buff
{
	float32 flStrengthBonus;
	float32 flAgilityBonus;
	float32 stats_pct;
	float32 model_scale;
	float32 swell_up_duration;
	float32 swell_down_duration;
	float32 max_swell_duration;
	CountdownTimer m_SwellUpTimer;
	CountdownTimer m_SwellDownTimer;
	CountdownTimer m_MaxSwellTimer;
};
