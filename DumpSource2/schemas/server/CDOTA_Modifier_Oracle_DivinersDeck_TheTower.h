class CDOTA_Modifier_Oracle_DivinersDeck_TheTower : public CDOTA_Buff
{
	int32 barrier_amount;
	float32 barrier_restore_time;
	int32 m_nDamageAbsorbed;
	GameTime_t m_timeLastDamage;
};
