// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_CycleCondition",
//	"m_comparisonOp": "COMPARISON_EQUALS",
//	"m_comparisonString": "",
//	"m_comparisonValue": 0.000000,
//	"m_comparisonValueType": "COMPARISONVALUETYPE_FIXEDVALUE",
//	"m_comparisonParamName": "",
//	"m_comparisonParamID":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	}
//}
// MPropertyFriendlyName = "Cycle Condition"
class CAnimGraphDoc_CycleCondition : public CAnimGraphDoc_Condition
{
	Comparison_t m_comparisonOp;
	CUtlString m_comparisonString;
	float32 m_comparisonValue;
	ComparisonValueType m_comparisonValueType;
	CUtlString m_comparisonParamName;
	AnimParamID m_comparisonParamID;
};
