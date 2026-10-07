// MHasKV3TransferPolymorphicClassname
class EventGrantDefinition_ItemGift_t : public EventGrantDefinition_t
{
	CUtlString m_strItemName;
	CUtlString m_strImage;
	item_definition_index_t m_unItemDef;
	eEconItemOrigin m_eOrigin; // = "kEconItemOrigin_Invalid"
	unacknowledged_item_inventory_positions_t m_eAckPos; // = "UNACK_ITEM_UNKNOWN"
	bool m_bDisableTrade;
};
