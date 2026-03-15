// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropFilter_Expression",
//	"m_bEnabled": true,
//	"m_Expression": ""
//}
// MPropertyFriendlyName = "Filter: Expression"
// MPropertyDescription = "Evaluates the specified expression, if the result of the expression is false evaluation of the element is stopped."
// MVDataClassGroup (UNKNOWN FOR PARSER)
class CSmartPropFilter_Expression : public CSmartPropFilter
{
	// MPropertyAttributeEditor = "SmartPropAttributeEditor(expression)"
	CUtlString m_Expression;
};
