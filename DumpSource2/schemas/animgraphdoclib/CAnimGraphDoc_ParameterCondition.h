// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_ParameterCondition",
//	"m_paramName": "",
//	"m_paramID":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_comparisonOp": "COMPARISON_EQUALS",
//	"m_comparisonValue":
//	{
//		"m_nType": 0
//	},
//	"m_comparisonString": ""
//}
// MPropertyFriendlyName = "Parameter Condition"
class CAnimGraphDoc_ParameterCondition : public CAnimGraphDoc_Condition
{
	CUtlString m_paramName;
	AnimParamID m_paramID;
	Comparison_t m_comparisonOp;
	CAnimVariant m_comparisonValue;
	CUtlString m_comparisonString;
};
