class CDOTA_Modifier_Huskar_Burning_Spear_Self : public CDOTA_Buff
{
	CUtlVector< AttackRecord_t > m_InFlightAttackRecords;
	float32 duration;
	float32 duration_for_nothl_conflagration;
};
