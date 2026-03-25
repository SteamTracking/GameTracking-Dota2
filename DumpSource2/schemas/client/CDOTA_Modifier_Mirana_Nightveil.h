class CDOTA_Modifier_Mirana_Nightveil : public CDOTA_Buff
{
	float32 fade_time;
	GameTime_t m_flFadeTime;
	GameTime_t m_flNextConsumeChargeTime;
	GameTime_t m_flInvisUntil;
	bool m_bInvisLastThink;
};
