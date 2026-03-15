// MGetKV3ClassDefaults = {
//	"_class": "CNmGraphDocFloatRemapNode",
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
//			"m_name": "Float",
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
//	"m_inputRange":
//	{
//		"m_flBegin": 0.000000,
//		"m_flEnd": 0.000000
//	},
//	"m_outputRange":
//	{
//		"m_flBegin": 0.000000,
//		"m_flEnd": 0.000000
//	}
//}
class CNmGraphDocFloatRemapNode : public CNmGraphDocFlowNode
{
	CNmGraphDocFloatRemapNode::RemapRange_t m_inputRange;
	CNmGraphDocFloatRemapNode::RemapRange_t m_outputRange;
};
