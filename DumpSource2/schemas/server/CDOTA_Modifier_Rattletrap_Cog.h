class CDOTA_Modifier_Rattletrap_Cog : public CDOTA_Buff
{
	bool m_bEnabled;
	bool m_bPassThrough;
	int32 push_length;
	float32 push_duration;
	int32 radius;
	int32 cogs_pullin;
	int32 attacks_to_destroy;
	float32 m_flTriggerDistance;
	bool m_bCogsPullin;
	int32 m_iCogIndex;
	ParticleIndex_t m_nFXIndex;
	Vector vCenter;
};
