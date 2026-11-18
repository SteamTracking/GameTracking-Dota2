// MHasKV3TransferPolymorphicClassname
class CNmSoundEventBase : public CNmEvent
{
	CNmEventRelevance_t m_relevance;
	bool m_bContinuePlayingSoundAtDurationEnd;
	float32 m_flDurationInterruptionThreshold;
	CNmSoundEventBase::Position_t m_position;
	CUtlString m_attachmentName;
};
