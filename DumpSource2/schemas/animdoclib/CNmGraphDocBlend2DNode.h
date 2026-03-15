// MGetKV3ClassDefaults = {
//	"_class": "CNmGraphDocBlend2DNode",
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
//			"m_name": "X",
//			"m_type": "Float",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": false
//		},
//		{
//			"m_ID": <HIDDEN FOR DIFF>,
//			"m_name": "Y",
//			"m_type": "Float",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": false
//		},
//		{
//			"m_ID": <HIDDEN FOR DIFF>,
//			"m_name": "Option (0.00, 0.00)",
//			"m_type": "Pose",
//			"m_bIsDynamicPin": true,
//			"m_bAllowMultipleOutConnections": false
//		},
//		{
//			"m_ID": <HIDDEN FOR DIFF>,
//			"m_name": "Option (0.00, 0.00)",
//			"m_type": "Pose",
//			"m_bIsDynamicPin": true,
//			"m_bAllowMultipleOutConnections": false
//		},
//		{
//			"m_ID": <HIDDEN FOR DIFF>,
//			"m_name": "Option (0.00, 0.00)",
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
//	"m_blendSpace":
//	{
//		"m_pointNames":
//		[
//			"Option",
//			"Option",
//			"Option"
//		],
//		"m_points":
//		[
//			[
//				0.000000,
//				1.000000
//			],
//			[
//				-1.000000,
//				0.000000
//			],
//			[
//				1.000000,
//				0.000000
//			]
//		],
//		"m_indices":
//		[
//			0,
//			2,
//			1
//		],
//		"m_hullIndices":
//		[
//			0,
//			2,
//			1,
//			0
//		]
//	},
//	"m_bAllowLooping": true
//}
class CNmGraphDocBlend2DNode : public CNmGraphDocFlowNode
{
	// MPropertyAttributeEditor = "BlendSpace2D()"
	CNmBlendSpace2D m_blendSpace;
	bool m_bAllowLooping;
};
