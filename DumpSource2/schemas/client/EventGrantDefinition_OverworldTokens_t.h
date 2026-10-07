// MHasKV3TransferPolymorphicClassname
class EventGrantDefinition_OverworldTokens_t : public EventGrantDefinition_t
{
	OverworldID_t m_unOverworldID;
	EventGrantDefinition_OverworldTokens_t::TokenAmount_t[6] m_aTokens;
	bool m_bSuppressPopup;
};
