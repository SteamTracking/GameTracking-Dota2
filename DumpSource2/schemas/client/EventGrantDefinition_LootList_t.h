// MHasKV3TransferPolymorphicClassname
class EventGrantDefinition_LootList_t : public EventGrantDefinition_t
{
	CUtlString m_strLootList;
	eEconItemOrigin m_eOrigin; // = "kEconItemOrigin_Invalid"
	unacknowledged_item_inventory_positions_t m_eAckPos; // = "UNACK_ITEM_UNKNOWN"
	uint32 m_unQuantity; // = 1
	bool m_bDisableTrade;
	CUtlString m_strRewardName;
	CUtlString m_strRewardDescription;
	CUtlString m_strRewardFlavor;
	CUtlString m_strImage;
	CUtlString m_strScene;
};
