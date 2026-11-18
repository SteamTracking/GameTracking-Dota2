class CDOTA_Modifier_ChaosKnight_Armageddon_Charge : public CDOTA_Buff
{
	float32 charge_speed;
	float32 turn_rate;
	float32 hit_radius;
	int32 attack_while_charging;
	float32 jump_distance;
	float32 jump_height;
	float32 run_animation_rate;
	float32 m_flFacingTarget;
	bool m_bSupercededByLeap;
	bool m_bSwappedStopAbility;
};
