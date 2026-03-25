class CDOTA_Modifier_BountyHunter_WindWalk : public CDOTA_Modifier_Invisible
{
	int32 damage_reduction_pct;
	float32 shard_stun_duration;
	CUtlVector< AttackRecord_t > m_InFlightAttackRecords;
	int32 bonus_move_speed_pct;
};
