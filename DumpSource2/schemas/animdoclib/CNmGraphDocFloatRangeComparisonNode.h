// MGetKV3ClassDefaults = {
//	"_class": "CNmGraphDocFloatRangeComparisonNode",
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
//			"m_type": "Bool",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": true
//		}
//	],
//	"m_range":
//	{
//		"m_flMin": 0.000000,
//		"m_flMax": 1.000000
//	},
//	"m_isInclusiveCheck": true
//}
class CNmGraphDocFloatRangeComparisonNode : public CNmGraphDocFlowNode
{
	Range_t m_range;
	bool m_isInclusiveCheck;
};
