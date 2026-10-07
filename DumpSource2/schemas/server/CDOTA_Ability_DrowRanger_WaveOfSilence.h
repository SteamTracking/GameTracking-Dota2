class CDOTA_Ability_DrowRanger_WaveOfSilence : public CDOTABaseAbility
{
	VectorWS m_vStartPosition;
	VectorWS m_vEndPosition;
	float32 wave_width;
	float32 wave_speed;
	float32 silence_duration;
	float32 knockback_distance_max;
	int32 m_nHeroesHit;
};
