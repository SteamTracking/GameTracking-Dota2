// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropPulse_PickOneSelector",
//	"m_nEditorNodeID": -1,
//	"m_HandleShape": "SQUARE",
//	"m_OutflowList":
//	{
//		"m_Outflows":
//		[
//		]
//	}
//}
// MPropertyFriendlyName = "Select Single Child"
// MPropertyDescription = "An element which selects a single choice from its set of child choices."
// MPulseEditorHeaderIcon = "tools/images/pulse_editor/requirements.png"
// MPulseEditorCanvasItemSpecKV3 = "{ className='IsControlFlowNode AllOutflowsInSpecialSection IsSelectorNode' create_special_outflows_section=true }"
class CSmartPropPulse_PickOneSelector : public CPulseCell_BaseFlow
{
	// MPropertyGroupName = "Handle Settings"
	// MPropertyReadonlyExpr = "bConfigurable == false"
	// MPropertyDescription = "Shape of the configuration handle to display."
	ConfigurationHandleShape_t m_HandleShape;
	PulseSelectorOutflowList_t m_OutflowList;
};
