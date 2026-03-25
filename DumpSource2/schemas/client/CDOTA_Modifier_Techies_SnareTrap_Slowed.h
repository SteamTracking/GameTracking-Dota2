class CDOTA_Modifier_Techies_SnareTrap_Slowed : public CDOTA_Buff
{
	float32 damage;
	float32 damage_interval;
	float32 move_slow_pct;
	float32 cast_slow_pct;
	float32 effect_radius;
	bool m_bEscaped;
	Vector vTetherOrigin;
};
