class CDOTACrownfallCreditsBlockDefinition
{
	CUtlVector< CDOTACrownfallCreditsCharacterDefinition > m_vecCharacters;
	CDOTACrownfallCreditsMapSceneDefinition m_scene; // = { "m_bScale": false, "m_bounds": { "h": -1, "w": -1, "x": 0, "y": 0 }, "m_nAnimOffsetX": 0, "m_nAnimOffsetY": 0, "m_strImage": "", "m_strImageMask": "", "m_vViewEnd": [ 0, 0 ], "m_vViewStart": [ 0, 0 ], "m_vecAnimations": [  ] }
	CUtlString m_strCustomPanoramaClass;
	int32 m_nMarginBottom; // = 10
	int32 m_nMarginTop; // = -1
	bool m_bSpecialThanksBlock;
	CUtlString m_strLocText;
	bool m_bJustText;
	int32 m_nStopOffset; // = -1
};
