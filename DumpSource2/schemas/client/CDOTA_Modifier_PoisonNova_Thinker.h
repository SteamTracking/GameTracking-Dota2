class CDOTA_Modifier_PoisonNova_Thinker : public CDOTA_Buff
{
	float32 m_fCurRadius;
	GameTime_t m_fLastThink;
	CUtlVector< CHandle< C_BaseEntity > > m_entitiesHit;
	float32 speed;
	float32 radius;
	float32 start_radius;
	float32 duration;
};
