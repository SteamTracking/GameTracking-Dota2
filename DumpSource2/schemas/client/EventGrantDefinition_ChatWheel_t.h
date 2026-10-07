// MHasKV3TransferPolymorphicClassname
class EventGrantDefinition_ChatWheel_t : public EventGrantDefinition_t
{
	CUtlString m_strRewardName;
	CUtlString m_strImage;
	SChatWheelMessageIDRange m_messageIDRange; // = { "unEndMessageID": 4294967295, "unStartMessageID": 4294967295 }
	bool bPermanent;
};
