class CDOTA_Modifier_SpiritBreaker_NetherStrike : public CDOTA_Buff
{
	int32 damage;
	bool m_bAttackAfterwards;
	bool m_bStrikeLanded;
	VectorWS m_vCastLocation;
	CHandle< CBaseEntity > m_hTarget;
};
