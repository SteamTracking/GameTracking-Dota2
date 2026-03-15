// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropVariable_DirectionVector",
//	"m_nElementID": -1,
//	"m_VariableName": "",
//	"m_bExposeAsParameter": false,
//	"m_DisplayName": "",
//	"m_HideExpression": "",
//	"m_ReadOnlyExpression": "",
//	"m_DefaultValue": "FORWARD"
//}
// MPropertyFriendlyName = "Direction Vector"
// MPropertyDescription = "Specifies a basis direction vector ( Forward, Left, or UP)."
// MVDataClassGroup (UNKNOWN FOR PARSER)
class CSmartPropVariable_DirectionVector : public CSmartPropVariable
{
	SmartPropDirection_t m_DefaultValue;
};
