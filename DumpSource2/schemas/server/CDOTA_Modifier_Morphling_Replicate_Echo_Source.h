class CDOTA_Modifier_Morphling_Replicate_Echo_Source : public CDOTA_Buff
{
	CHandle< CBaseEntity > m_hPendingSnowball;
	CHandle< CBaseEntity > m_hPendingSnowballTarget;
	GameTime_t m_flPendingSnowballWindupEnd;
	int32 scepter_echo_count;
	float32 scepter_echo_cast_delay;
	float32 scepter_echo_appear_distance;
	float32 scepter_echo_visible_duration;
	float32 scepter_echo_retarget_radius;
	float32 scepter_echo_damage_outgoing_pct;
	float32 scepter_echo_damage_falloff_pct;
	float32 scepter_echo_min_model_scale;
};
