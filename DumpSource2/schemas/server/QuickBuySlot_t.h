class QuickBuySlot_t
{
	AbilityID_t m_nAbilityID;
	int32 m_nTopLevelItem;
	AbilityID_t m_nTopLevelItemAbilityID;
	QuickBuyPurchasable_t m_ePurchasableState;
	QuickBuyPurchasable_t m_ePurchasableAccumState;
	bool m_bMarkedForBuy;
	int32 m_nParity;
	bool m_bSticky;
	int32 m_nItemIndex;
};
