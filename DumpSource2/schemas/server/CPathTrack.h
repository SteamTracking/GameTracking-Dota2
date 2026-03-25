class CPathTrack : public CPointEntity
{
	CHandle< CPathTrack > m_pnext;
	CHandle< CPathTrack > m_pprevious;
	CHandle< CPathTrack > m_paltpath;
	float32 m_flRadius;
	float32 m_length;
	CUtlSymbolLarge m_altName;
	// MNotSaved
	int32 m_nIterVal;
	TrackOrientationType_t m_eOrientationType;
	CEntityIOOutput m_OnPass;
};
