// MHasKV3TransferPolymorphicClassname
class EventGrantDefinition_CandyShopRerollCharges_t : public EventGrantDefinition_t
{
	CUtlString m_strRewardName;
	CUtlString m_strImage;
	uint32 m_unCharges;
	PeriodicResourceID_t m_unPeriodicResourceID;
	bool m_bIgnoreMaximum;
};
