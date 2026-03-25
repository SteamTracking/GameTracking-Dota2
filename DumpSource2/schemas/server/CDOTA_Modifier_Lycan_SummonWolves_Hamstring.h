class CDOTA_Modifier_Lycan_SummonWolves_Hamstring : public CDOTA_Buff
{
	float32 root_duration;
	int32 damage_boost_stacks;
	float32 damage_boost_duration;
	CUtlVector< AttackRecord_t > m_InFlightAttackRecords;
};
