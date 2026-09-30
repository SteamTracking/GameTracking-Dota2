class CDOTACrownfallCreditsDefinition
{
	CUtlVector< CDOTACrownfallCreditsBlockDefinition > m_vecCreditsBlocks;
	int32 m_nPixelScale; // = 4
	int32 m_nWidth;
	int32 m_nHeight;
	int32 m_nDefaultBlockMarginTop; // = 100
	float32 m_flFinalLogoTimeAfterStop; // = 3
	float32 m_flDelayBeforeValveHead; // = 1
};
