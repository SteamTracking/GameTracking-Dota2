class CPulse_RegisterInfo
{
	CPulseType m_Type; // = "PVAL_VOID"
	CKV3MemberNameWithStorage m_OriginName;
	int32 m_nWrittenByInstruction; // = -1
	int32 m_nLastReadByInstruction; // = -1
};
