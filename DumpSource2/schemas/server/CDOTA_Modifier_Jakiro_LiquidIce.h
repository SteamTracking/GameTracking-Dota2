class CDOTA_Modifier_Jakiro_LiquidIce : public CDOTA_Buff
{
	float32 duration;
	CUtlVector< AttackRecord_t > m_InFlightAttackRecords;
	int32 radius;
	ParticleIndex_t m_nFXIndex;
	bool double_head;
	bool m_bForceProc;
};
