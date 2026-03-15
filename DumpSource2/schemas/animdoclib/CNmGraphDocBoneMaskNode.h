// MGetKV3ClassDefaults = {
//	"_class": "CNmGraphDocBoneMaskNode",
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
//	],
//	"m_outputPins":
//	[
//		{
//			"m_ID": <HIDDEN FOR DIFF>,
//			"m_name": "Bone Mask",
//			"m_type": "BoneMask",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": true
//		}
//	],
//	"m_maskID": ""
//}
class CNmGraphDocBoneMaskNode : public CNmGraphDocFlowNode
{
	// MPropertyAttributeEditor = "BoneMaskID()"
	CGlobalSymbol m_maskID;
};
