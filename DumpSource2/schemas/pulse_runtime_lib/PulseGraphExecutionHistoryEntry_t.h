class PulseGraphExecutionHistoryEntry_t
{
	PulseDocNodeID_t nEditorID; // = -1
	PulseSymbol_t seqPoint;
	float32 flExecTime;
	uint32 unFlags;
	PulseSymbol_t tagName;
	PulseCursorID_t childID; // = -1
};
