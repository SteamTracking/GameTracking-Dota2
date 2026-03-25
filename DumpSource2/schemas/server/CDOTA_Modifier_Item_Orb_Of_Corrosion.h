class CDOTA_Modifier_Item_Orb_Of_Corrosion : public CDOTA_Buff_Item
{
	int32 bonus_agility;
	float32 duration;
	CUtlVector< AttackRecord_t > m_InFlightAttackRecords;
};
