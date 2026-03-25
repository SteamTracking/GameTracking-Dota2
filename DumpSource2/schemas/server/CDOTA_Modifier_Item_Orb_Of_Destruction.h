class CDOTA_Modifier_Item_Orb_Of_Destruction : public CDOTA_Buff_Item
{
	float32 duration;
	CUtlVector< AttackRecord_t > m_InFlightAttackRecords;
};
