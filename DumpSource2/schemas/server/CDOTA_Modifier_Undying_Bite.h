class CDOTA_Modifier_Undying_Bite : public CDOTA_Buff
{
	int32 bonus_attack_range;
	float32 damage;
	bool m_bBite;
	AttackRecord_t m_nBiteRecord;
	VectorWS m_vBiteTargetStart;
	CUtlVector< CHandle< CBaseEntity > > m_vZombies;
};
