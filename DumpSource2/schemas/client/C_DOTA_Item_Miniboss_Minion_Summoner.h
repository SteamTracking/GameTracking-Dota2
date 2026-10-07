class C_DOTA_Item_Miniboss_Minion_Summoner : public C_DOTA_Item
{
	GameTime_t m_fEquipTime;
	GameTime_t m_flActivatedTime;
	CHandle< C_BaseEntity > m_hOwner;
	bool m_bItemActivated;
};
