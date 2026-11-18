// MPulseEditorHeaderIcon = "tools/images/pulse_editor/observable_variable_listener.png"
// MPropertyFriendlyName = "Wait Until"
// MPropertyDescription = "All values connected to this node must be 'observable'. Variables on this graph will be automatically promoted to observable. Other value nodes must take an explicit context, look for those nodes with a corresponding icon."
// MHasKV3TransferPolymorphicClassname
class CPulseCell_WaitForObservable : public CPulseCell_BaseYieldingInflow
{
	CPulse_ResumePoint m_OnTrue; // = { "m_SourceOutflowName": "", "m_nDestChunk": -1, "m_nInstruction": -1 }
};
