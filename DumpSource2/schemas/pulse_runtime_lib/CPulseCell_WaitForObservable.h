// MGetKV3ClassDefaults = {
//	"_class": "CPulseCell_WaitForObservable",
//	"m_nEditorNodeID": -1,
//	"m_Condition":
//	{
//		"m_EvaluateConnection":
//		{
//			"m_SourceOutflowName": "",
//			"m_nDestChunk": -1,
//			"m_nInstruction": -1
//		},
//		"m_DependentObservableVars":
//		[
//		],
//		"m_DependentObservableBlackboardReferences":
//		[
//		]
//	},
//	"m_OnTrue":
//	{
//		"m_SourceOutflowName": "",
//		"m_nDestChunk": -1,
//		"m_nInstruction": -1
//	}
//}
// MPulseEditorHeaderIcon = "tools/images/pulse_editor/observable_variable_listener.png"
// MPropertyFriendlyName = "Wait Until"
// MPropertyDescription = "All values connected to this node must be 'observable'. Variables on this graph will be automatically promoted to observable. Other value nodes must take an explicit context, look for those nodes with a corresponding icon."
class CPulseCell_WaitForObservable : public CPulseCell_BaseYieldingInflow
{
	// MPropertyDescription = "Condition to evaluate when any of its dependent values change."
	// MPropertyFriendlyName = "Observable"
	PulseObservableBoolExpression_t m_Condition;
	CPulse_ResumePoint m_OnTrue;
};
