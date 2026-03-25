class CDOTA_Modifier_Juggernaut_BladeFury : public CDOTA_Buff
{
	float32 immunity_resist;
	float32 blade_fury_radius;
	float32 blade_fury_outer_radius;
	int32 blade_fury_damage;
	float32 blade_fury_damage_tick;
	float32 m_flTotalAppliedDamage;
	float32 attack_interval;
	int32 can_crit;
	int32 bonus_movespeed;
	GameTime_t m_flNextAttack;
	bool m_bIgnoreAttackRestriction;
	float32 blade_fury_aspd_multiplier;
};
