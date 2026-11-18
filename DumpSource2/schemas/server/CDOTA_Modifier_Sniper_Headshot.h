class CDOTA_Modifier_Sniper_Headshot : public CDOTA_Buff
{
	float32 proc_chance;
	float32 slow_duration;
	float32 knockback_distance;
	int32 bonus_damage_creeps;
	float32 damage;
	float32 attack_effectiveness;
	AttackRecord_t m_iLastRolledRecord;
	bool m_bLastRollSuccess;
};
