// MHasKV3TransferPolymorphicClassname
class CNmClipDocEvent_SoundBase : public CNmClipDocEvent
{
	CNmEventRelevance_t m_relevance;
	// MPropertyAttrStateCallback
	bool m_bContinuePlayingSoundAtDurationEnd;
	// MPropertyAttrStateCallback
	float32 m_flDurationInterruptionThreshold;
	// MPropertyStartGroup = "+Position"
	CNmSoundEventBase::Position_t m_position;
	CUtlString m_attachmentName;
};
