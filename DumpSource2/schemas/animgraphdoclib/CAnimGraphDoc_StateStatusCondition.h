// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_StateStatusCondition",
//	"m_sourceValue": "SourceStateBlendWeight",
//	"m_comparisonValueType": "StateComparisonValue_FixedValue",
//	"m_comparisonFixedValue": 0.000000,
//	"m_comparisonStateValue": "SourceStateBlendWeight",
//	"m_comparisonParamName": "",
//	"m_comparisonParamID":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_comparisonOp": "COMPARISON_EQUALS"
//}
// MPropertyFriendlyName = "State Status Condition"
class CAnimGraphDoc_StateStatusCondition : public CAnimGraphDoc_Condition
{
	StateValue m_sourceValue;
	StateComparisonValueType m_comparisonValueType;
	float32 m_comparisonFixedValue;
	StateValue m_comparisonStateValue;
	CUtlString m_comparisonParamName;
	AnimParamID m_comparisonParamID;
	Comparison_t m_comparisonOp;
};
