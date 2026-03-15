// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_TimeCondition",
//	"m_comparisonOp": "COMPARISON_GREATER_OR_EQUAL",
//	"m_comparisonString": ""
//}
// MPropertyFriendlyName = "Time Condition"
class CAnimGraphDoc_TimeCondition : public CAnimGraphDoc_Condition
{
	Comparison_t m_comparisonOp;
	CUtlString m_comparisonString;
};
