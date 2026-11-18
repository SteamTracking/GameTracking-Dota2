class CDOTA_Modifier_ChaosKnight_Armageddon_Windup : public CDOTA_Buff
{
	float32 max_charge_time;
	float32 windup_turn_rate;
	float32 m_flChargeSpeed;
	float32 m_flFacingTarget;
	VectorWS m_vTargetPos;
	bool m_bReleased;
	bool m_bCharging;
	ParticleIndex_t m_nRangeFinderFX;
};
