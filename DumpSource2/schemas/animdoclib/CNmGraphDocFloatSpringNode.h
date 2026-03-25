// MGetKV3ClassDefaults = {
//	"_class": "CNmGraphDocFloatSpringNode",
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
//			"m_name": "Value",
//			"m_type": "Float",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": false
//		}
//	],
//	"m_outputPins":
//	[
//		{
//			"m_ID": <HIDDEN FOR DIFF>,
//			"m_name": "Result",
//			"m_type": "Float",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": true
//		}
//	],
//	"m_flHertz": 4.000000,
//	"m_flDampingRatio": 0.700000,
//	"m_bUseStartValue": true,
//	"m_flStartValue": 0.000000
//}
class CNmGraphDocFloatSpringNode : public CNmGraphDocFlowNode
{
	// MPropertyDescription = "Valid Range [0.1 : 30]"
	float32 m_flHertz;
	// MPropertyDescription = "Valid Range [0 : 10], 1 = Critically Damped"
	float32 m_flDampingRatio;
	// MPropertyDescription = "Should we initialize this node to the input value or to the specified start value"
	bool m_bUseStartValue;
	// MPropertyDescription = "Optional initialization value for this node"
	float32 m_flStartValue;
};
