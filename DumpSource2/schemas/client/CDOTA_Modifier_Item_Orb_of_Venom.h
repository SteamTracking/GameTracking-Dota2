class CDOTA_Modifier_Item_Orb_of_Venom : public CDOTA_Buff_Item
{
	float32 poison_duration;
	CUtlVector< AttackRecord_t > m_InFlightAttackRecords;
};
