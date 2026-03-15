// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropVariable_TraceNoHit",
//	"m_nElementID": -1,
//	"m_VariableName": "",
//	"m_bExposeAsParameter": false,
//	"m_DisplayName": "",
//	"m_HideExpression": "",
//	"m_ReadOnlyExpression": "",
//	"m_DefaultValue": "NOTHING"
//}
// MPropertyFriendlyName = "Trace Miss Behavior"
// MPropertyDescription = "Specified what to do when a trace does not hit a surface."
// MVDataClassGroup (UNKNOWN FOR PARSER)
class CSmartPropVariable_TraceNoHit : public CSmartPropVariable
{
	TraceNoHitResult_t m_DefaultValue;
};
