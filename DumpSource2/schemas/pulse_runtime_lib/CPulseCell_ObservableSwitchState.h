// MPropertyFriendlyName = "Monitor Observable Switch"
// MPropertyDescription = "While active, manage child cursors based on which case an observable value matches. When the observable result moves to a different case, the prior cursor will be canceled and the matching outflow will fire a new child cursor. Will monitor continuously until externally canceled."
// MHasKV3TransferPolymorphicClassname
class CPulseCell_ObservableSwitchState : public CPulseCell_BaseState
{
	// MPropertyDescription = "Value to evaluate when any of its dependent values change. The result is compared against each case."
	// MPropertyFriendlyName = "Observable"
	CPulseObservableExpression< CPulseVariant > m_SwitchValue; // = { "m_DependentObservableBlackboardReferences": [  ], "m_DependentObservableTempVars": [  ], "m_DependentObservableVars": [  ], "m_EvaluateConnection": { "m_SourceOutflowName": "", "m_nDestChunk": -1, "m_nInstruction": -1 } }
	// MPulseFGDSkipField
	CPulseObservableSwitchCases m_Cases; // = { "m_CaseOutflows": [  ], "m_CaseValues": [  ], "m_DefaultCaseOutflow": { "m_SourceOutflowName": "", "m_nDestChunk": -1, "m_nInstruction": -1 } }
};
