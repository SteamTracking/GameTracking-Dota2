class CDOTA_Modifier_BigThunderLizard_Slam_Thinker : public CDOTA_Buff
{
	float32 base_radius;
	float32 radius_increment_per_pulse;
	float32 pulse_count;
	float32 pulse_interval;
	int32 m_nCurrentPulseCount;
};
