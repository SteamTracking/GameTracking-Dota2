// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropOperation_SetMateraialGroupChoice",
//	"m_bEnabled": true,
//	"m_VariableName": "",
//	"m_SelectionMode": "RANDOM",
//	"m_ChoiceSelection": 0,
//	"m_MaterialGroupChoices":
//	[
//	]
//}
// MPropertyFriendlyName = "Set Material Group Choice"
// MPropertyDescription = "Picks a material group from a set of choices and assigns that material group to a specified variable."
// MVDataClassGroup (UNKNOWN FOR PARSER)
class CSmartPropOperation_SetMateraialGroupChoice : public CSmartPropOperation
{
	// MPropertyDescription = "Material group variable to set to the selected choice."
	// MPropertyAttributeEditor = "SmartPropItemNameEditor( Variable:MaterialGroup )"
	// MPropertyProvidesEditContextString = "ToolEditContext_ID_SmartProp_Variable"
	CUtlString m_VariableName;
	// MPropertyFriendlyName = "Selection Mode"
	// MPropertyDescription = "Specifies how the material group is to be selected from the authored set of choices"
	CSmartPropAttributeChoiceSelectionMode m_SelectionMode;
	// MPropertyFriendlyName = "Choice Index"
	// MPropertyDescription = "Specifies the index of the material group choice to pick"
	// MPropertySuppressExpr = "( m_SelectionMode != SPECIFIC )"
	CSmartPropAttributeInt m_ChoiceSelection;
	// MPropertyAutoExpandSelf
	CUtlVector< MaterialGroupChoice_t > m_MaterialGroupChoices;
};
