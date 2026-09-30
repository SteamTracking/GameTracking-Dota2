// MVDataRoot
class CDOTAFightingGameCancelOptionDefinition
{
	EFightingGameButtonBit m_eCancelInput;
	EFightingGameButtonBit m_eCancelInput2;
	EFightingGameButtonBit m_eCancelInput3;
	int32 m_nCancelStart; // = -1
	int32 m_nCancelDuration; // = -1
	int32 m_nCancelInputBuffer; // = -1
	bool m_bRequiresInstall;
	bool m_bAllowCancelOnWhiff;
	EFightingGameActionID m_nCancelActionID; // = "INVALID_ACTION_DEFINITION"
	CUtlString m_strCancelActionName;
};
