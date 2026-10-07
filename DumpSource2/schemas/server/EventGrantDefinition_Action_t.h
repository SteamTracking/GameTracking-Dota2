// MHasKV3TransferPolymorphicClassname
class EventGrantDefinition_Action_t : public EventGrantDefinition_t
{
	EEvent m_eEvent; // = "EVENT_ID_NONE"
	uint32 m_unGrantCount; // = 1
	bool m_bShouldSkipAudit;
};
