class CDOTA_Modifier_Medusa_Mystic_Snake_AttackBuff : public CDOTA_Buff
{
	int32 m_nProcDamage;
	CUtlVector< AttackRecord_t > m_InFlightAttackRecords;
};
