// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropFilter_VariableValue",
//	"m_bEnabled": true,
//	"m_VariableComparison":
//	{
//		"m_Name": "",
//		"m_Value": null,
//		"m_Comparison": "EQUAL"
//	}
//}
// MPropertyFriendlyName = "Filter: Variable Value"
// MPropertyDescription = "Compares the current value of a variable to the specified value. If the comparison is false the element evaluation is stopped."
// MVDataClassGroup (UNKNOWN FOR PARSER)
class CSmartPropFilter_VariableValue : public CSmartPropFilter
{
	CSmartPropVariableComparison m_VariableComparison;
};
