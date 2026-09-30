// MPropertyFriendlyName = "Place On Path"
// MPulseEditorHeaderIcon = "tools/images/pulse_editor/requirements.png"
// MPulseEditorCanvasItemSpecKV3 = "{ className='IsControlFlowNode AllOutflowsInSpecialSection IsSelectorNode' create_special_outflows_section=true }"
// MHasKV3TransferPolymorphicClassname
class CSmartPropPulse_PlaceOnPath : public CSmartPropPulse_BaseQueryableFlow
{
	PulseSelectorOutflowList_t m_OutflowList;
	// MPropertyDescription = "Name of the path to use. This path name will show up in the property editor when selecting a placement of this smart prop in Hammer, allowing selection of a path object in the map to use."
	CUtlString m_PathName;
};
