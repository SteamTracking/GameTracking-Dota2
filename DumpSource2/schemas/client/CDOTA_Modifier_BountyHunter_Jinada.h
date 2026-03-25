class CDOTA_Modifier_BountyHunter_Jinada : public CDOTA_Buff
{
	int32 bonus_damage;
	int32 gold_steal;
	ParticleIndex_t m_nFXIndexA;
	ParticleIndex_t m_nFXIndexB;
	CUtlVector< AttackRecord_t > m_InFlightAttackRecords;
};
