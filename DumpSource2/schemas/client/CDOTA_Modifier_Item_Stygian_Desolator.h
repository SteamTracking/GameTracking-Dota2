class CDOTA_Modifier_Item_Stygian_Desolator : public CDOTA_Buff_Item
{
	int32 bonus_damage;
	float32 corruption_duration;
	CUtlVector< AttackRecord_t > m_InFlightAttackRecords;
};
