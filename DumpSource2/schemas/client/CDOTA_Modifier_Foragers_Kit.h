class CDOTA_Modifier_Foragers_Kit : public CDOTA_Buff_Item
{
	int32 tree_radius;
	int32 max_trees;
	int32 old_destroy_radius;
	float32 tree_creation_interval;
	ParticleIndex_t m_nStartFXIndex;
	C_DotaTree* m_pForagingTree;
	GameTime_t m_ForageTimer;
	GameTime_t m_NextForageTreeTime;
};
