// MHasKV3TransferPolymorphicClassname
class CPulseCell_TestYieldWithObservables : public CPulseCell_BaseYieldingInflow
{
	float32 m_flWatchForFloatValue;
	CUtlString m_WatchForStringValue;
	CPulse_ResumePoint m_WakeResume; // = { "m_nDestChunk": -1, "m_nInstruction": -1 }
};
