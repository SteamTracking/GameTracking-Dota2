class CDOTA_Modifier_TemplarAssassin_InnerPeace_Passive : public CDOTA_Buff
{
	float32 m_fElapsedTime;
	float32 max_attack_range;
	float32 max_hp_regen;
	float32 max_mana_regen;
	float32 time_until_meditation;
	CountdownTimer m_StartMeditationTimer;
	float32 m_fElapsedMeditationTime;
	float32 m_fElapsedLingerTime;
	float32 time_until_max_bonus;
	float32 bonus_linger_time;
	int32 m_nCurrentMaxStackCount;
	bool m_bHasBonusRange;
};
