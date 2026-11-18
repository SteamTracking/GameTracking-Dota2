class CPulse_LambdaDef
{
	CPulse_OutflowConnection m_EvaluateConnection; // = { "m_SourceOutflowName": "", "m_nDestChunk": -1, "m_nInstruction": -1 }
	CPulseType m_ResultType; // = "PVAL_VOID"
	PulseDocNodeID_t m_nEditorNodeID; // = -1
	PulseSymbol_t m_PortName;
	CUtlVector< PulseRuntimeVarIndex_t > m_DependentObservableVars;
	CUtlVector< PulseRuntimeBlackboardReferenceIndex_t > m_DependentObservableBlackboardReferences;
	CUtlVector< PulseDocNodeID_t > m_DependentObservableTempVars;
};
