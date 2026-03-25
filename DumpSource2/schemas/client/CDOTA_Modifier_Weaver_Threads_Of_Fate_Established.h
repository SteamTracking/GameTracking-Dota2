class CDOTA_Modifier_Weaver_Threads_Of_Fate_Established : public CDOTA_Buff
{
	float32 established_thread_break_distance;
	float32 thread_setup_distance;
	int32 damage_per_thread_creep;
	int32 damage_per_thread_hero;
	float32 death_linger_duration;
	float32 thread_setup_time;
	ParticleIndex_t m_nTetherParticle;
	bool m_bEstablished;
	GameTime_t m_fEstablishTime;
};
