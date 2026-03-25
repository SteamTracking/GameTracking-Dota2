class C_ColorCorrectionVolume : public C_BaseTrigger
{
	// MNotSaved
	float32 m_LastEnterWeight;
	// MNotSaved
	GameTime_t m_LastEnterTime;
	// MNotSaved
	float32 m_LastExitWeight;
	// MNotSaved
	GameTime_t m_LastExitTime;
	// MNotSaved
	bool m_bEnabled;
	// MNotSaved
	float32 m_MaxWeight;
	// MNotSaved
	float32 m_FadeDuration;
	// MNotSaved
	float32 m_Weight;
	// MNotSaved
	char[512] m_lookupFilename;
};
