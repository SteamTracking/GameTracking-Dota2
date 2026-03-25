class CDOTA_Modifier_DrowRanger_Marksmanship : public CDOTA_Buff
{
	int32 chance;
	ParticleIndex_t m_nFxIndex;
	CUtlVector< AttackRecord_t > m_InFlightAttackRecords;
	CUtlVector< AttackRecord_t > m_GlacialInFlightAttackRecords;
	int32 bonus_factor;
	int32 disable_range;
	int32 agility_range;
	int32 bonus_damage;
	int32 split_count;
	int32 split_range;
	bool m_bGlacialAttack;
};
