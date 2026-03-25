class CQuickBuyController
{
	PlayerID_t m_nPlayerID;
	InventoryQuickBuyState_t m_quickBuyState;
	bool m_bBuybackProtectionEnabled;
	bool m_bAutoMarkForBuy;
	CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecControlledUnits;
	int32 m_nNextOrder;
	bool m_bQuickBuyIgnoredStateDirty;
	int32 m_nSuggestItemIdx;
};
