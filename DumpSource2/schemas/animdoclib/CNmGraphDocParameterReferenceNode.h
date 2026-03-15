// MGetKV3ClassDefaults = {
//	"_class": "CNmGraphDocParameterReferenceNode",
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
//	],
//	"m_parameterUUID": "00000000-0000-0000-0000-000000000000",
//	"m_parameterValueType": "Unknown",
//	"m_parameterName": "",
//	"m_parameterGroupName": ""
//}
class CNmGraphDocParameterReferenceNode : public CNmGraphDocFlowNode
{
	V_uuid_t m_parameterUUID;
	NmGraphValueType_t m_parameterValueType;
	CUtlString m_parameterName;
	CUtlString m_parameterGroupName;
};
