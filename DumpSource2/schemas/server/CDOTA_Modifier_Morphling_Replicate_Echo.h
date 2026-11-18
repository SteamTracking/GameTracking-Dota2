class CDOTA_Modifier_Morphling_Replicate_Echo : public CDOTA_Buff
{
	CHandle< CBaseEntity > m_hTarget;
	CHandle< CBaseEntity > m_hEchoAbility;
	int32 m_nEchoIndex;
	bool m_bSpent;
	GameTime_t m_flExpireTime;
	CHandle< CBaseEntity > m_hChannelAbility;
	GameTime_t m_flLastChannelThinkTime;
	float32 echo_power;
	float32 scepter_echo_visible_duration;
};
