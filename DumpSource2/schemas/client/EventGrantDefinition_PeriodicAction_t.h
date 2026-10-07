// MHasKV3TransferPolymorphicClassname
class EventGrantDefinition_PeriodicAction_t : public EventGrantDefinition_t
{
	EEvent m_eEventID; // = "EVENT_ID_NONE"
	uint32 m_unActionID;
	uint32 m_unCount;
	PeriodicResourceID_t m_unPeriodicResourceID;
	bool m_bUsePeriodAsActionRangeOffset;
};
