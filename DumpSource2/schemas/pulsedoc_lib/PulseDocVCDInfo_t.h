class PulseDocVCDInfo_t
{
	CUtlVector< CUtlString > m_Actors;
	CUtlVector< PulseDocVCDAnchorInfo_t > m_Anchors;
	CUtlVector< CUtlString > m_ExternalGraphs;
	CUtlVector< PulseDocVCDClipInfo_t > m_ExternalClips;
	CUtlVector< CUtlString > m_ExternalSequences;
	CUtlVector< CUtlString > m_TargetOverrides;
	CUtlVector< PulseDocVCDEventInfo_t > m_Triggers;
	CUtlVector< PulseDocVCDEventInfo_t > m_Requirements;
	PulseDocVCDEventInfo_t m_FirstSpeak;
};
