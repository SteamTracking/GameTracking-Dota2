// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropPulse_Group",
//	"m_nEditorNodeID": -1,
//	"m_OutflowList":
//	{
//		"m_Outflows":
//		[
//		]
//	}
//}
// MPropertyFriendlyName = "Group"
// MPulseEditorHeaderIcon = "tools/images/pulse_editor/requirements.png"
// MPulseEditorCanvasItemSpecKV3 = "{ className='IsControlFlowNode AllOutflowsInSpecialSection IsSelectorNode' create_special_outflows_section=true }"
class CSmartPropPulse_Group : public CPulseCell_BaseFlow
{
	PulseSelectorOutflowList_t m_OutflowList;
};
