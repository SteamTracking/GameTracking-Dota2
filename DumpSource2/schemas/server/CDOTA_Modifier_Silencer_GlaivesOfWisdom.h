class CDOTA_Modifier_Silencer_GlaivesOfWisdom : public CDOTA_Buff
{
	float32 intellect_damage_pct;
	CUtlVector< AttackRecord_t > m_InFlightAttackRecords;
	CUtlVector< AttackRecord_t > m_InFlightSilenceAttackRecords;
	CDOTA_Buff* m_pAttackCounterBuff;
};
