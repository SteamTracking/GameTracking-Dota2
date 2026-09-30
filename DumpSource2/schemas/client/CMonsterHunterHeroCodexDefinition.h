class CMonsterHunterHeroCodexDefinition
{
	CVDataLocalizedToken m_strLocHeroName;
	CVDataLocalizedToken m_strLocFieldNotes;
	CVDataLocalizedToken m_strLocNonHeroName;
	CVDataLocalizedToken m_strLocPersonaFieldNotes;
	CUtlString m_strNonHeroStickerName;
	CUtlString m_strNonHeroStickerDisplayName;
	bool m_bAlwaysUnlocked;
	bool m_bIsHero; // = true
	bool m_bIsForeword;
	int32 m_nUnlocksAtCodexCompletionCount; // = -1
	EMonsterHunterCodexAuthor m_eAuthor; // = "k_eInvalid"
	EMonsterHunterCodexAuthor m_ePersonaAuthor; // = "k_eInvalid"
};
