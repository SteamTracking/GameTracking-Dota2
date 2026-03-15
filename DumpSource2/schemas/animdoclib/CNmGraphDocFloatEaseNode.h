// MGetKV3ClassDefaults = {
//	"_class": "CNmGraphDocFloatEaseNode",
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
//	"m_easing": "Linear",
//	"m_flEaseTime": 1.000000,
//	"m_bUseStartValue": true,
//	"m_flStartValue": 0.000000
//}
class CNmGraphDocFloatEaseNode : public CNmGraphDocFlowNode
{
	NmEasingOperation_t m_easing;
	float32 m_flEaseTime;
	bool m_bUseStartValue;
	float32 m_flStartValue;
};
