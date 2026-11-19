class CDOTACrownfallCreditsBlockDefinition
{
	CUtlVector< CDOTACrownfallCreditsCharacterDefinition > m_vecCharacters;
	CDOTACrownfallCreditsMapSceneDefinition m_scene;
	CUtlString m_strCustomPanoramaClass;
	int32 m_nMarginBottom; // = 10
	int32 m_nMarginTop; // = -1
	bool m_bSpecialThanksBlock;
	CUtlString m_strLocText;
	bool m_bJustText;
	int32 m_nStopOffset; // = -1
};
