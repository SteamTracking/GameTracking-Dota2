class CDOTA_Modifier_Tinker_Turret : public CDOTA_Buff
{
	float32 missile_range;
	float32 missile_target_range;
	float32 missile_width;
	float32 missile_speed;
	float32 activation_time;
	float32 turret_duration;
	float32 turret_placement_radius;
	float32 knockback_distance;
	float32 initial_slow;
	float32 slow_duration;
	float32 additional_attack_speed;
	float32 duration_reduction_per_attack;
	float32 missile_spawn_interval;
	int32 targets_creeps;
	int32 turret_hp;
	int32 turret_ammo;
	CHandle< CBaseEntity > m_hTarget;
	GameTime_t m_flLastMissileFiredTime;
	bool m_bFixedDirection;
};
