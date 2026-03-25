class CDOTA_Modifier_FountainPassive : public CDOTA_Buff
{
	int32 bonus_chance;
	CUtlVector< AttackRecord_t > m_InFlightAttackRecords;
};
