// MHasKV3TransferPolymorphicClassname
class EventGrantDefinition_Item_t : public EventGrantDefinition_t
{
	item_definition_index_t m_unItemDef;
	eEconItemOrigin m_eOrigin; // = "kEconItemOrigin_Invalid"
	EEconItemQuality m_eQuality; // = "AE_UNDEFINED"
	unacknowledged_item_inventory_positions_t m_eAckPos; // = "UNACK_ITEM_UNKNOWN"
	uint32 m_unQuantity; // = 1
	bool m_bDisableTrade;
	bool m_bOnlyGrantIfNotOwned;
	CUtlString m_strRewardDescription;
};
