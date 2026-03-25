class CDOTA_Modifier_DrowRanger_FrostArrows : public CDOTA_Buff
{
	CUtlVector< AttackRecord_t > m_InFlightAttackRecords;
	int32 shard_bonus_damage_per_stack;
};
