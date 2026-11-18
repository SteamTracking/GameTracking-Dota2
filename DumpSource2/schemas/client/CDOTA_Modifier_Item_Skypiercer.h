class CDOTA_Modifier_Item_Skypiercer : public CDOTA_Buff_Item
{
	int32 bonus_strength;
	float32 bonus_armor;
	float32 bonus_health_regen;
	int32 hp_regen_amp;
	int32 slow_resistance;
	float32 bonus_evasion;
	float32 buff_cooldown_acceleration_pct;
	float32 close_radius;
	bool m_bEnemyClose;
	float32 m_flInterval;
};
