class CDOTA_Modifier_Juggernaut_BladeFury : public CDOTA_Buff
{
	float32 immunity_resist;
	float32 blade_fury_radius;
	float32 blade_fury_outer_radius;
	int32 blade_fury_damage;
	float32 blade_fury_damage_tick;
	float32 m_flTotalAppliedDamage;
	int32 can_crit;
	int32 bonus_movespeed;
	float32 scepter_attack_damage_pct;
	CHandle< CBaseEntity > m_hTarget;
};
