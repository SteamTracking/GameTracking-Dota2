class CDOTA_Modifier_Item_Javelin : public CDOTA_Buff_Item
{
	float32 bonus_chance;
	float32 bonus_chance_damage;
	CUtlVector< AttackRecord_t > m_InFlightAttackRecords;
};
