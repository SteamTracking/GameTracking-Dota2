// MGetKV3ClassDefaults = {
//	"_class": "CPulseCell_Step_CallExternalMethod",
//	"m_nEditorNodeID": -1,
//	"m_MethodName": "",
//	"m_nBlackboardIndex": -1,
//	"m_ExpectedArgs":
//	[
//	],
//	"m_nAsyncCallMode": "ASYNC_FIRE_AND_FORGET",
//	"m_OnFinished":
//	{
//		"m_SourceOutflowName": "",
//		"m_nDestChunk": -1,
//		"m_nInstruction": -1
//	}
//}
class CPulseCell_Step_CallExternalMethod : public CPulseCell_BaseYieldingInflow
{
	PulseSymbol_t m_MethodName;
	PulseRuntimeBlackboardReferenceIndex_t m_nBlackboardIndex;
	CUtlLeanVector< CPulseRuntimeMethodArg > m_ExpectedArgs;
	PulseMethodCallMode_t m_nAsyncCallMode;
	CPulse_ResumePoint m_OnFinished;
};
