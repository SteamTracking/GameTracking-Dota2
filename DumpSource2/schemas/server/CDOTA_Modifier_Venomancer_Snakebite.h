class CDOTA_Modifier_Venomancer_Snakebite : public CDOTA_Buff
{
	float32 base_damage;
	float32 tick_damage;
	float32 damage_interval;
	bool undispellable;
	GameTime_t m_flNextDamageInterval;
	int32 m_nWardIndex;
	float32 m_flPositionAngle;
	float32 m_flTargetPreviousYaw;
	ParticleIndex_t m_nFXIndex;
};
