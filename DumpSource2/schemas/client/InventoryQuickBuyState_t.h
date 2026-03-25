class InventoryQuickBuyState_t
{
	C_UtlVectorEmbeddedNetworkVar< QuickBuySlot_t > m_vecItemSlots;
	int32 m_nTotalSlotCountIncludingOverflow;
	QuickBuySlot_t m_stickyItemSlot;
	int32 m_nPrevPurchasable;
};
