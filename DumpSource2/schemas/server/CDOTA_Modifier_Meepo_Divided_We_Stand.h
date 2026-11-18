class CDOTA_Modifier_Meepo_Divided_We_Stand : public CDOTA_Buff
{
	int32 max_level;
	int32 dps_penalty_pct;
	int32 attribute_penalty_pct;
	float32 xp_penalty_time;
	int32 m_nPenaltyAS;
	int32 m_nPenaltyDamage;
	int32 m_nPenaltyHealth;
	int32 m_nPenaltyMana;
	float32 m_flPenaltyHPRegen;
	float32 m_flPenaltyHPRegenPct;
	float32 m_flPenaltyMPRegen;
	float32 m_flPenaltyStrength;
	float32 m_flPenaltyAgility;
	float32 m_flPenaltyIntelligence;
	GameTime_t m_LastExpTime;
};
