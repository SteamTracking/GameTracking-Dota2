class CDOTA_Modifier_Grimstroke_Ink_Trail : public CDOTA_Buff
{
	float32 debuff_duration;
	float32 damage_reduction;
	CUtlVector< AttackRecord_t > m_InFlightAttackRecords;
};
