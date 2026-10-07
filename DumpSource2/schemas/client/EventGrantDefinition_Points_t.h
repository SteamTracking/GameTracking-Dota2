// MHasKV3TransferPolymorphicClassname
class EventGrantDefinition_Points_t : public EventGrantDefinition_t
{
	uint32 m_unPoints;
	uint32 m_unPremiumPoints;
	uint32 m_unAuditAction;
	uint64 m_unAuditData;
	EEvent m_eEventID; // = "EVENT_ID_NONE"
	bool m_bRequireEventOwnership; // = true
	bool m_bRewardSeasonalPoints;
};
