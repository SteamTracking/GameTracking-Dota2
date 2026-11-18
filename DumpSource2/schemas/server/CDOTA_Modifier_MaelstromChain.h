class CDOTA_Modifier_MaelstromChain : public CDOTA_Buff
{
	int32 chain_radius;
	int32 chain_strikes;
	float32 chain_damage;
	float32 chain_delay;
	int32 m_iCurJumpCount;
	VectorWS m_vCurTargetLoc;
	CUtlVector< CHandle< CBaseEntity > > m_hHitEntities;
};
