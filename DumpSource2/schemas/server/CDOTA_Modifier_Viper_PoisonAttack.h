class CDOTA_Modifier_Viper_PoisonAttack : public CDOTA_Buff
{
	float32 duration;
	CUtlVector< AttackRecord_t > m_InFlightAttackRecords;
};
