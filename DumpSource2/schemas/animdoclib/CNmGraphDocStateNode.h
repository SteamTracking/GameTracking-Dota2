// MGetKV3ClassDefaults = {
//	"_class": "CNmGraphDocStateNode",
//	"m_ID": <HIDDEN FOR DIFF>,
//	"m_name": "",
//	"m_floatingComment": "",
//	"m_position":
//	[
//		0.000000,
//		0.000000
//	],
//	"m_pChildGraph":
//	{
//		"_class": "CNmGraphDocFlowGraph",
//		"m_ID": <HIDDEN FOR DIFF>,
//		"m_nodes":
//		[
//			{
//				"_class": "CNmGraphDocPoseResultNode",
//				"m_ID": <HIDDEN FOR DIFF>,
//				"m_name": "",
//				"m_floatingComment": "",
//				"m_position":
//				[
//					0.000000,
//					0.000000
//				],
//				"m_pChildGraph": null,
//				"m_pSecondaryGraph": null,
//				"m_inputPins":
//				[
//					{
//						"m_ID": <HIDDEN FOR DIFF>,
//						"m_name": "Out",
//						"m_type": "Pose",
//						"m_bIsDynamicPin": false,
//						"m_bAllowMultipleOutConnections": false
//					}
//				],
//				"m_outputPins":
//				[
//				],
//				"m_resultType": "Pose"
//			}
//		],
//		"m_graphType": "BlendTree",
//		"m_viewOffset":
//		[
//			0.000000,
//			0.000000
//		],
//		"m_flViewZoom": 1.000000,
//		"m_connections":
//		[
//		]
//	},
//	"m_pSecondaryGraph":
//	{
//		"_class": "CNmGraphDocFlowGraph",
//		"m_ID": <HIDDEN FOR DIFF>,
//		"m_nodes":
//		[
//			{
//				"_class": "CNmGraphDocStateLayerDataNode",
//				"m_ID": <HIDDEN FOR DIFF>,
//				"m_name": "",
//				"m_floatingComment": "",
//				"m_position":
//				[
//					0.000000,
//					0.000000
//				],
//				"m_pChildGraph": null,
//				"m_pSecondaryGraph": null,
//				"m_inputPins":
//				[
//					{
//						"m_ID": <HIDDEN FOR DIFF>,
//						"m_name": "Layer Weight",
//						"m_type": "Float",
//						"m_bIsDynamicPin": false,
//						"m_bAllowMultipleOutConnections": false
//					},
//					{
//						"m_ID": <HIDDEN FOR DIFF>,
//						"m_name": "Root Motion Weight",
//						"m_type": "Float",
//						"m_bIsDynamicPin": false,
//						"m_bAllowMultipleOutConnections": false
//					},
//					{
//						"m_ID": <HIDDEN FOR DIFF>,
//						"m_name": "Layer Mask",
//						"m_type": "BoneMask",
//						"m_bIsDynamicPin": false,
//						"m_bAllowMultipleOutConnections": false
//					}
//				],
//				"m_outputPins":
//				[
//				],
//				"m_resultType": "Special"
//			}
//		],
//		"m_graphType": "ValueTree",
//		"m_viewOffset":
//		[
//			0.000000,
//			0.000000
//		],
//		"m_flViewZoom": 1.000000,
//		"m_connections":
//		[
//		]
//	},
//	"m_type": "BlendTreeState",
//	"m_cloneSourceStateID": "00000000-0000-0000-0000-000000000000",
//	"m_stateEvents":
//	[
//	],
//	"m_timedStateEvents":
//	[
//	],
//	"m_events":
//	[
//	],
//	"m_entryEvents":
//	[
//	],
//	"m_executeEvents":
//	[
//	],
//	"m_exitEvents":
//	[
//	],
//	"m_timeRemainingEvents":
//	[
//	],
//	"m_timeElapsedEvents":
//	[
//	],
//	"m_bUseActualElapsedTimeInStateForTimedEvents": false
//}
class CNmGraphDocStateNode : public CNmGraphDocStateMachineGraphNode
{
	// MPropertyHideField
	CNmGraphDocStateNode::StateType_t m_type;
	// MPropertySuppressField
	V_uuid_t m_cloneSourceStateID;
	// MPropertyAutoExpandSelf
	CUtlVector< CNmGraphDocStateNode::StateEvent_t > m_stateEvents;
	// MPropertyAutoExpandSelf
	CUtlVector< CNmGraphDocStateNode::TimedStateEvent_t > m_timedStateEvents;
	// MPropertySuppressField
	CUtlVector< CGlobalSymbol > m_events;
	// MPropertySuppressField
	CUtlVector< CGlobalSymbol > m_entryEvents;
	// MPropertySuppressField
	CUtlVector< CGlobalSymbol > m_executeEvents;
	// MPropertySuppressField
	CUtlVector< CGlobalSymbol > m_exitEvents;
	// MPropertySuppressField
	CUtlVector< CNmGraphDocStateNode::TimedStateEvent_t > m_timeRemainingEvents;
	// MPropertySuppressField
	CUtlVector< CNmGraphDocStateNode::TimedStateEvent_t > m_timeElapsedEvents;
	// MPropertyGroupName = "Advanced"
	bool m_bUseActualElapsedTimeInStateForTimedEvents;
};
