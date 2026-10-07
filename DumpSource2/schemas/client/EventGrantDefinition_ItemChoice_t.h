// MHasKV3TransferPolymorphicClassname
class EventGrantDefinition_ItemChoice_t : public EventGrantDefinition_t
{
	uint8 m_unChoiceCount;
	eEconItemOrigin m_eOrigin; // = "kEconItemOrigin_Invalid"
	EEconItemQuality m_eQuality; // = "AE_UNDEFINED"
	unacknowledged_item_inventory_positions_t m_eAckPos; // = "UNACK_ITEM_UNKNOWN"
	bool m_bTradeable;
	bool m_bGiftable;
	CUtlString m_strLootList;
};
