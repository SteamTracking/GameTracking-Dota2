class CDOTACrownfallCreditsCharacterDefinition
{
	CPanoramaImageName m_strImage;
	CUtlString m_strLocCharacterName;
	CUtlString m_strLocCharacterTitle;
	int32 m_nUniqueClickKey; // = -1
	CPanoramaImageName m_strImageAlt;
	CUtlString m_strLocCharacterNameAlt;
	CUtlString m_strLocCharacterTitleAlt;
	bool m_bFlipFacing;
	CrownfallCreditsAABB_t m_bounds; // = { "h": -1, "w": -1, "x": 0, "y": 0 }
	CUtlString m_strLocCharacterTitleAlt2;
	CUtlString m_strLocCharacterTitleAlt3;
	CUtlString m_strLocCharacterTitleAlt4;
	CUtlString m_strLocCharacterTitleAlt5;
	CUtlString m_strLocCharacterTitleAlt6;
	int32 m_nAltImageW;
	int32 m_nAltImageH;
	int32 m_nAltImageFrameTime; // = 100
	int32 m_nYOffset; // = -1
	uint16 m_unFrameTime; // = 100
};
