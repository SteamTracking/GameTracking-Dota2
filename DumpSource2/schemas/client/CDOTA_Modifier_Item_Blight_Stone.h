class CDOTA_Modifier_Item_Blight_Stone : public CDOTA_Buff_Item
{
	float32 corruption_duration;
	CUtlVector< AttackRecord_t > m_InFlightAttackRecords;
};
