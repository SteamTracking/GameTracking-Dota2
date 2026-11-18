class CDOTA_Modifier_Gyrocopter_Homing_Missile : public CDOTA_Buff
{
	ParticleIndex_t m_nFXIndex;
	ParticleIndex_t m_nFXIndex2;
	int32 acceleration;
	float32 hit_damage;
	int32 max_distance;
	float32 shard_radius;
	float32 shard_delay;
	float32 pre_flight_time;
	float32 stun_duration;
	int32 m_nTeamNumber;
	float32 speed;
	int32 hits_to_kill;
	CHandle< C_BaseEntity > m_hAttachTarget;
	VectorWS m_vStartPosition;
	CountdownTimer m_EnemyVision;
	CountdownTimer m_MoveTime;
};
