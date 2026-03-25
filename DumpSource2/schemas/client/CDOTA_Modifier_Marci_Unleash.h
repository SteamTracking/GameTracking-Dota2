class CDOTA_Modifier_Marci_Unleash : public CDOTA_Buff
{
	float32 time_between_flurries;
	int32 charges_per_flurry;
	int32 flurry_charge_increment;
	int32 bonus_movespeed;
	CUtlVector< AttackRecord_t > m_InFlightAttackRecords;
};
