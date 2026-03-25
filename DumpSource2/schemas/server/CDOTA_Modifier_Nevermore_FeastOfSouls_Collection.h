class CDOTA_Modifier_Nevermore_FeastOfSouls_Collection : public CDOTA_Buff
{
	int32 max_collection_count;
	int32 soul_collection_per_interval;
	float32 soul_collection_radius;
	float32 soul_collection_interval;
	int32 soul_collection_per_hero;
	int32 soul_collection_per_creep;
	int32 bonus_attack_speed;
	int32 cast_speed_pct;
	int32 m_nSoulsCollected;
	CUtlVector< CHandle< CBaseEntity > > m_hSoulCollectionList;
};
