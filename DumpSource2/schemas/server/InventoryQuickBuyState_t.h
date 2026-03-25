class InventoryQuickBuyState_t
{
	CUtlVectorEmbeddedNetworkVar< QuickBuySlot_t > m_vecItemSlots;
	int32 m_nTotalSlotCountIncludingOverflow;
	QuickBuySlot_t m_stickyItemSlot;
};
