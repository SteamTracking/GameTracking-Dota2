// MGetKV3ClassDefaults = {
//	"_class": "CNmGraphDocStateMachineNode",
//	"m_ID": <HIDDEN FOR DIFF>,
//	"m_name": "SM",
//	"m_floatingComment": "",
//	"m_position":
//	[
//		0.000000,
//		0.000000
//	],
//	"m_pChildGraph":
//	{
//		"_class": "CNmGraphDocStateMachineGraph",
//		"m_ID": <HIDDEN FOR DIFF>,
//		"m_nodes":
//		[
//			{
//				"_class": "CNmGraphDocEntryStateOverrideConduitNode",
//				"m_ID": <HIDDEN FOR DIFF>,
//				"m_name": "",
//				"m_floatingComment": "",
//				"m_position":
//				[
//					0.000000,
//					0.000000
//				],
//				"m_pChildGraph": null,
//				"m_pSecondaryGraph":
//				{
//					"_class": "CNmGraphDocFlowGraph",
//					"m_ID": <HIDDEN FOR DIFF>,
//					"m_nodes":
//					[
//						{
//							"_class": "CNmGraphDocEntryStateOverrideConditionsNode",
//							"m_ID": <HIDDEN FOR DIFF>,
//							"m_name": "",
//							"m_floatingComment": "",
//							"m_position":
//							[
//								0.000000,
//								0.000000
//							],
//							"m_pChildGraph": null,
//							"m_pSecondaryGraph": null,
//							"m_inputPins":
//							[
//							],
//							"m_outputPins":
//							[
//							],
//							"m_resultType": "Special",
//							"m_pinToStateMapping":
//							[
//							]
//						},
//						{
//							"_class": "CNmGraphDocEntryOverrideNode",
//							"m_ID": <HIDDEN FOR DIFF>,
//							"m_name": "State",
//							"m_floatingComment": "",
//							"m_position":
//							[
//								0.000000,
//								200.000000
//							],
//							"m_pChildGraph": null,
//							"m_pSecondaryGraph": null,
//							"m_inputPins":
//							[
//								{
//									"m_ID": <HIDDEN FOR DIFF>,
//									"m_name": "Condition",
//									"m_type": "Bool",
//									"m_bIsDynamicPin": false,
//									"m_bAllowMultipleOutConnections": false
//								}
//							],
//							"m_outputPins":
//							[
//							],
//							"m_resultType": "Special",
//							"m_stateID": <HIDDEN FOR DIFF>,
//						}
//					],
//					"m_graphType": "EntryOverrideTree",
//					"m_viewOffset":
//					[
//						0.000000,
//						0.000000
//					],
//					"m_flViewZoom": 1.000000,
//					"m_connections":
//					[
//					]
//				}
//			},
//			{
//				"_class": "CNmGraphDocGlobalTransitionConduitNode",
//				"m_ID": <HIDDEN FOR DIFF>,
//				"m_name": "",
//				"m_floatingComment": "",
//				"m_position":
//				[
//					0.000000,
//					0.000000
//				],
//				"m_pChildGraph": null,
//				"m_pSecondaryGraph":
//				{
//					"_class": "CNmGraphDocFlowGraph",
//					"m_ID": <HIDDEN FOR DIFF>,
//					"m_nodes":
//					[
//						{
//							"_class": "CNmGraphDocGlobalTransitionNode",
//							"m_ID": <HIDDEN FOR DIFF>,
//							"m_name": "State",
//							"m_floatingComment": "",
//							"m_position":
//							[
//								0.000000,
//								200.000000
//							],
//							"m_pChildGraph": null,
//							"m_pSecondaryGraph": null,
//							"m_inputPins":
//							[
//								{
//									"m_ID": <HIDDEN FOR DIFF>,
//									"m_name": "Condition",
//									"m_type": "Bool",
//									"m_bIsDynamicPin": false,
//									"m_bAllowMultipleOutConnections": false
//								},
//								{
//									"m_ID": <HIDDEN FOR DIFF>,
//									"m_name": "Duration Override",
//									"m_type": "Float",
//									"m_bIsDynamicPin": false,
//									"m_bAllowMultipleOutConnections": false
//								},
//								{
//									"m_ID": <HIDDEN FOR DIFF>,
//									"m_name": "Time Offset Override",
//									"m_type": "Float",
//									"m_bIsDynamicPin": false,
//									"m_bAllowMultipleOutConnections": false
//								},
//								{
//									"m_ID": <HIDDEN FOR DIFF>,
//									"m_name": "Start Bone Mask",
//									"m_type": "BoneMask",
//									"m_bIsDynamicPin": false,
//									"m_bAllowMultipleOutConnections": false
//								},
//								{
//									"m_ID": <HIDDEN FOR DIFF>,
//									"m_name": "Target Sync ID",
//									"m_type": "ID",
//									"m_bIsDynamicPin": false,
//									"m_bAllowMultipleOutConnections": false
//								}
//							],
//							"m_outputPins":
//							[
//							],
//							"m_resultType": "Special",
//							"m_flDurationSeconds": 0.200000,
//							"m_bClampDurationToSource": false,
//							"m_rootMotionBlend": "Blend",
//							"m_blendWeightEasing": "Linear",
//							"m_flBoneMaskBlendInTimePercentage": 0.330000,
//							"m_timeMatchMode": "None",
//							"m_flTimeOffset": 0.000000,
//							"m_bCanBeForced": false,
//							"m_stateID": <HIDDEN FOR DIFF>,
//						}
//					],
//					"m_graphType": "GlobalTransitionConduit",
//					"m_viewOffset":
//					[
//						0.000000,
//						0.000000
//					],
//					"m_flViewZoom": 1.000000,
//					"m_connections":
//					[
//					]
//				}
//			},
//			{
//				"_class": "CNmGraphDocStateNode",
//				"m_ID": <HIDDEN FOR DIFF>,
//				"m_name": "State",
//				"m_floatingComment": "",
//				"m_position":
//				[
//					0.000000,
//					150.000000
//				],
//				"m_pChildGraph":
//				{
//					"_class": "CNmGraphDocFlowGraph",
//					"m_ID": <HIDDEN FOR DIFF>,
//					"m_nodes":
//					[
//						{
//							"_class": "CNmGraphDocPoseResultNode",
//							"m_ID": <HIDDEN FOR DIFF>,
//							"m_name": "",
//							"m_floatingComment": "",
//							"m_position":
//							[
//								0.000000,
//								0.000000
//							],
//							"m_pChildGraph": null,
//							"m_pSecondaryGraph": null,
//							"m_inputPins":
//							[
//								{
//									"m_ID": <HIDDEN FOR DIFF>,
//									"m_name": "Out",
//									"m_type": "Pose",
//									"m_bIsDynamicPin": false,
//									"m_bAllowMultipleOutConnections": false
//								}
//							],
//							"m_outputPins":
//							[
//							],
//							"m_resultType": "Pose"
//						}
//					],
//					"m_graphType": "BlendTree",
//					"m_viewOffset":
//					[
//						0.000000,
//						0.000000
//					],
//					"m_flViewZoom": 1.000000,
//					"m_connections":
//					[
//					]
//				},
//				"m_pSecondaryGraph":
//				{
//					"_class": "CNmGraphDocFlowGraph",
//					"m_ID": <HIDDEN FOR DIFF>,
//					"m_nodes":
//					[
//						{
//							"_class": "CNmGraphDocStateLayerDataNode",
//							"m_ID": <HIDDEN FOR DIFF>,
//							"m_name": "",
//							"m_floatingComment": "",
//							"m_position":
//							[
//								0.000000,
//								0.000000
//							],
//							"m_pChildGraph": null,
//							"m_pSecondaryGraph": null,
//							"m_inputPins":
//							[
//								{
//									"m_ID": <HIDDEN FOR DIFF>,
//									"m_name": "Layer Weight",
//									"m_type": "Float",
//									"m_bIsDynamicPin": false,
//									"m_bAllowMultipleOutConnections": false
//								},
//								{
//									"m_ID": <HIDDEN FOR DIFF>,
//									"m_name": "Root Motion Weight",
//									"m_type": "Float",
//									"m_bIsDynamicPin": false,
//									"m_bAllowMultipleOutConnections": false
//								},
//								{
//									"m_ID": <HIDDEN FOR DIFF>,
//									"m_name": "Layer Mask",
//									"m_type": "BoneMask",
//									"m_bIsDynamicPin": false,
//									"m_bAllowMultipleOutConnections": false
//								}
//							],
//							"m_outputPins":
//							[
//							],
//							"m_resultType": "Special"
//						}
//					],
//					"m_graphType": "ValueTree",
//					"m_viewOffset":
//					[
//						0.000000,
//						0.000000
//					],
//					"m_flViewZoom": 1.000000,
//					"m_connections":
//					[
//					]
//				},
//				"m_type": "BlendTreeState",
//				"m_cloneSourceStateID": "00000000-0000-0000-0000-000000000000",
//				"m_stateEvents":
//				[
//				],
//				"m_timedStateEvents":
//				[
//				],
//				"m_events":
//				[
//				],
//				"m_entryEvents":
//				[
//				],
//				"m_executeEvents":
//				[
//				],
//				"m_exitEvents":
//				[
//				],
//				"m_timeRemainingEvents":
//				[
//				],
//				"m_timeElapsedEvents":
//				[
//				],
//				"m_bUseActualElapsedTimeInStateForTimedEvents": false
//			}
//		],
//		"m_graphType": "StateMachine",
//		"m_viewOffset":
//		[
//			0.000000,
//			0.000000
//		],
//		"m_flViewZoom": 1.000000,
//		"m_entryStateID": <HIDDEN FOR DIFF>,
//	},
//	"m_pSecondaryGraph": null,
//	"m_inputPins":
//	[
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
//	]
//}
class CNmGraphDocStateMachineNode : public CNmGraphDocFlowNode
{
};
