// MHasKV3TransferPolymorphicClassname
class EventGrantDefinition_NewsFeedEvent_t : public EventGrantDefinition_t
{
	ESocialFeedEventType m_eEventType; // = "k_ESocialFeedEventType_Invalid"
	uint16 m_unEventSubType;
	uint64 m_ulParamBigInt1;
	uint32 m_unParamInt1;
	uint32 m_unParamInt2;
	uint32 m_unParamInt3;
	CUtlString m_strParamString;
};
