class CDOTA_Modifier_Brewmaster_LiquidCourage : public CDOTA_Buff
{
	int32 damage_threshold;
	float32 trigger_duration;
	float32 damage_reset_interval;
	float32 trigger_cooldown;
	float32 status_resist;
	int32 min_speed;
	int32 max_speed;
	float32 max_hp_regen;
	float32 speed_toggle_time;
	int32 m_nCurrentSpeed;
	int32 m_nDamageTaken;
	GameTime_t m_flLastDamageTime;
	bool m_bForceActive;
	bool m_bShardDrink;
	bool m_bMinimumSpeed;
	GameTime_t m_SpeedToggleTime;
	ParticleIndex_t m_nFXIndex;
};
