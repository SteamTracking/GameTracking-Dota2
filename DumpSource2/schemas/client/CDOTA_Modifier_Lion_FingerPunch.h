class CDOTA_Modifier_Lion_FingerPunch : public CDOTA_Buff
{
	int32 punch_bonus_movespeed;
	float32 punch_attack_range;
	float32 punch_bonus_damage_base;
	float32 damage_per_kill;
	float32 cleave_starting_width;
	float32 cleave_ending_width;
	float32 cleave_distance;
	float32 cleave_damage;
	float32 grace_period;
	int32 m_iOriginalAttackCapabilities;
};
