class CDOTA_Modifier_Morphling_Syntropy : public CDOTA_Buff
{
	int32 damage;
	float32 duration;
	float32 slow_duration;
	int32 attack_range_bonus;
	CUtlVector< AttackRecord_t > m_InFlightAttackRecords;
};
