// MHasKV3TransferPolymorphicClassname
class EventGrantDefinition_CavernItem_t : public EventGrantDefinition_t
{
	CUtlString m_strRewardName;
	CUtlString m_strImage;
	EEvent m_eEventID; // = "EVENT_ID_NONE"
	uint8 m_unItemType;
	uint8 m_unQuantity;
};
