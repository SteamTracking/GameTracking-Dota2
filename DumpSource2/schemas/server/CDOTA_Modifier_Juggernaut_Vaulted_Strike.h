class CDOTA_Modifier_Juggernaut_Vaulted_Strike : public CDOTA_Buff
{
	float32 m_flPredictedTotalTime;
	float32 m_flCurrentTimeVert;
	Vector m_vTargetPos;
	Vector m_vStart;
	float32 m_flZDelta;
	float32 jump_speed;
	float32 start_height;
	float32 jump_attack_radius;
	CUtlVector< CHandle< CBaseEntity > > m_hHitEntities;
};
