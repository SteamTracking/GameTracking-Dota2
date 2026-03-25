class CDOTA_Modifier_Shadow_Demon_Purge_Slow : public CDOTA_Buff
{
	bool m_bCasterIsEnemy;
	bool m_bCasterIsParent;
	bool apply_poison_stacks;
	int32 m_nPoisonStacksToApply;
	GameTime_t m_NextPoisonStackTime;
};
