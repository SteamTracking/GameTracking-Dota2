class CDOTA_Modifier_Drow_Ranger_Glaicer_Intrinsic : public CDOTA_Buff
{
	int32 damage_bonus;
	CUtlVector< AttackRecord_t > m_InFlightAttackRecords;
};
