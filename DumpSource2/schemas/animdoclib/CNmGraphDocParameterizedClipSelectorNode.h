// MGetKV3ClassDefaults = {
//	"_class": "CNmGraphDocParameterizedClipSelectorNode",
//	"m_ID": <HIDDEN FOR DIFF>,
//	"m_name": "",
//	"m_floatingComment": "",
//	"m_position":
//	[
//		0.000000,
//		0.000000
//	],
//	"m_pChildGraph": null,
//	"m_pSecondaryGraph": null,
//	"m_inputPins":
//	[
//		{
//			"m_ID": <HIDDEN FOR DIFF>,
//			"m_name": "Parameter",
//			"m_type": "Float",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": false
//		},
//		{
//			"m_ID": <HIDDEN FOR DIFF>,
//			"m_name": "Option",
//			"m_type": "Pose",
//			"m_bIsDynamicPin": true,
//			"m_bAllowMultipleOutConnections": false
//		},
//		{
//			"m_ID": <HIDDEN FOR DIFF>,
//			"m_name": "Option",
//			"m_type": "Pose",
//			"m_bIsDynamicPin": true,
//			"m_bAllowMultipleOutConnections": false
//		}
//	],
//	"m_outputPins":
//	[
//		{
//			"m_ID": <HIDDEN FOR DIFF>,
//			"m_name": "Pose",
//			"m_type": "Pose",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": false
//		}
//	],
//	"m_pDefaultVariationData":
//	{
//		"_class": "CNmGraphDocParameterizedClipSelectorNode::CData",
//		"m_optionWeights":
//		[
//			0,
//			0
//		]
//	},
//	"m_overrides":
//	[
//	],
//	"m_defaultResourceName": "",
//	"m_optionLabels":
//	[
//		"Option",
//		"Option"
//	],
//	"m_bIgnoreInvalidOptions": false
//}
class CNmGraphDocParameterizedClipSelectorNode : public CNmGraphDocVariationDataNode
{
	// MPropertyAutoExpandSelf
	// MPropertyResizable (UNKNOWN FOR PARSER)
	CUtlVector< CUtlString > m_optionLabels;
	// MPropertyGroupName = "Advanced"
	// MPropertyDescription = "Should we ignore any invalid option and remove them from the selection. This is useful if different variations has different sets of options filled"
	bool m_bIgnoreInvalidOptions;
};
