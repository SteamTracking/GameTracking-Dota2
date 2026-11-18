class CDOTA_Modifier_ChaosKnight_Armaggedons_Flank : public CDOTA_Buff
{
	float32 tick_interval;
	float32 bonus_speed;
	float32 movement_turn_rate_max;
	float32 movement_turn_rate_min;
	float32 movement_accel_per_second;
	float32 splash_aoe;
	float32 m_flFacingTarget;
	int32 bonus_attack_range;
	ParticleIndex_t m_nFXIndex;
	float32 m_flCurSpeed;
	float32 m_flSpeedAtCollision;
	bool m_bCollidedLastFrame;
	bool m_bSupercededByLeap;
	GameTime_t m_NextAttackTime;
	CUtlVector< CHandle< C_BaseEntity > > m_hHitEntities;
};
