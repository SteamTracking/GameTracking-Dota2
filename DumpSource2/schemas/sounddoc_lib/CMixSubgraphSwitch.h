// MGetKV3ClassDefaults = {
//	"_class": "CMixSubgraphSwitch",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"bUseDetailedPlugNames": false,
//	"defaultSubgraph":
//	{
//		"_class": "CSelectableSubgraph",
//		"file": "soundstacks/subgraph_default.vmix",
//		"subgraphName": ""
//	},
//	"interpolationMode": "SUBGRAPH_INTERPOLATION_TEMPORAL_CROSSFADE",
//	"bOnlyTailsOnFadeOut": false,
//	"flTransitionTime": 0.500000,
//	"nChannels": -1,
//	"subgraphs":
//	[
//	]
//}
// MPropertyFriendlyName = "VMix Subgraph Switch Audio Node"
// MPropertyDescription = "Allows you to swap between sub-graphs with a short crossfade.  Can be used to swap out processing algorithms/configurations, or to dynamically enable/disable optional processing stages.  This can also expose control parameters from the subgraphs so those can be connected to the outer graph."
class CMixSubgraphSwitch : public CMixPropertyBase
{
	// MPropertyFriendlyName = "Show Detailed Plug Names"
	bool bUseDetailedPlugNames;
	// MPropertyFriendlyName = "Default Subgraph"
	CSelectableSubgraph defaultSubgraph;
	// MPropertyFriendlyName = "Mode"
	// MPropertyGroupName = "+Transition Behavior"
	VMixSubgraphSwitchInterpolationType_t interpolationMode;
	// MPropertyFriendlyName = "Only Let Effect Ring On Fadeout"
	// MPropertyGroupName = "Transition Behavior"
	bool bOnlyTailsOnFadeOut;
	// MPropertyFriendlyName = "Transition time (seconds)"
	// MPropertyGroupName = "Transition Behavior"
	float32 flTransitionTime;
	// MPropertyFriendlyName = "Channels"
	// MPropertyAttributeChoiceName = "processor_channels"
	int32 nChannels;
	CUtlVector< CSelectableSubgraph > subgraphs;
};
