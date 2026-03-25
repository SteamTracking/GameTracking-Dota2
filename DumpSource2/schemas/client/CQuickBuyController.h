class CQuickBuyController
{
	PlayerID_t m_nPlayerID;
	InventoryQuickBuyState_t m_quickBuyState;
	bool m_bBuybackProtectionEnabled;
	bool m_bAutoMarkForBuy;
	C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecControlledUnits;
	bool m_bQuickBuyIgnoredStateDirty;
	int32 m_nSuggestItemIdx;
	bool m_bIsLocalPlayer;
};
