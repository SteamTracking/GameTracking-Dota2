// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropPulse_FitOnLine",
//	"m_nEditorNodeID": -1,
//	"m_OutflowList":
//	{
//		"m_Outflows":
//		[
//		]
//	}
//}
// MPropertyFriendlyName = "Fit on Line"
// MPropertyDescription = "An element which fits one or more instances of a set of choices on to a line."
// MPulseEditorHeaderIcon = "tools/images/pulse_editor/requirements.png"
// MPulseEditorCanvasItemSpecKV3 = "{ className='IsControlFlowNode AllOutflowsInSpecialSection IsSelectorNode' create_special_outflows_section=true }"
class CSmartPropPulse_FitOnLine : public CPulseCell_BaseFlow
{
	PulseSelectorOutflowList_t m_OutflowList;
};
