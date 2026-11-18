class CDOTA_Modifier_Item_VilePhial : public CDOTA_Buff_Item
{
	int32 required_hits;
	float32 counter_duration;
	float32 poison_duration;
	CUtlVector< AttackRecord_t > m_InFlightAttackRecords;
};
