class CDOTA_Modifier_Passive_Stone_Of_Recall : public CDOTA_Buff
{
	float32 countdown_time;
	float32 radius;
	float32 think_interval;
	float32 availability_time;
	bool m_bAvailable;
	float32 m_flRemainingCountDownTime;
	float32 m_flPauseDuration;
	float32 pause_transition_duration;
	ParticleIndex_t m_nFxProgress;
	bool m_bPlantedByItem;
};
