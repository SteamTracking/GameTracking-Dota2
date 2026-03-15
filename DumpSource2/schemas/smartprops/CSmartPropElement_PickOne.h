// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropElement_PickOne",
//	"m_nElementID": -1,
//	"m_bEnabled": true,
//	"m_sLabel": "",
//	"m_SelectionCriteria":
//	[
//	],
//	"m_Modifiers":
//	[
//	],
//	"m_Children":
//	[
//	],
//	"m_SelectionMode": "RANDOM",
//	"m_SpecificChildIndex": 0,
//	"m_OutputChoiceVariableName": "",
//	"m_bConfigurable": true,
//	"m_vHandleOffset":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_HandleColor":
//	[
//		144,
//		144,
//		144
//	],
//	"m_HandleSize": 9,
//	"m_HandleShape": "SQUARE"
//}
// MPropertyFriendlyName = "Select Single Child"
// MPropertyDescription = "An element which selects a single choice from its set of child choices."
class CSmartPropElement_PickOne : public CSmartPropElement_Group
{
	// MPropertyDescription = "Specifies how the initial selection of a choice should be handled."
	CSmartPropAttributeChoiceSelectionMode m_SelectionMode;
	// MPropertyFriendlyName = "Specific Child"
	// MPropertyDescription = "Specifies the index of the child to pick."
	// MPropertySuppressExpr = "( m_SelectionMode != SPECIFIC )"
	CSmartPropAttributeInt m_SpecificChildIndex;
	// MPropertyFriendlyName = "Choice Output Variable"
	// MPropertyDescription = "If a variable name is specified, sets the value of that variable to the index of the selected choice"
	// MPropertyAttributeEditor = "SmartPropItemNameEditor( Variable:Integer )"
	CUtlString m_OutputChoiceVariableName;
	// MPropertyDescription = "Should a control to select the specific choice be shown when this prop is placed in Hammer."
	CSmartPropAttributeBool m_bConfigurable;
	// MPropertyGroupName = "Handle Settings"
	// MPropertyReadonlyExpr = "m_bConfigurable == false"
	// MPropertyDescription = "Specifies an offset in the local space of the element to apply to the configuration handle."
	CSmartPropAttributeVector m_vHandleOffset;
	// MPropertyGroupName = "Handle Settings"
	// MPropertyReadonlyExpr = "m_bConfigurable == false"
	// MPropertyDescription = "Color to use to display the configuration handle."
	CSmartPropAttributeColor m_HandleColor;
	// MPropertyGroupName = "Handle Settings"
	// MPropertyReadonlyExpr = "m_bConfigurable == false"
	// MPropertyDescription = "Size of the configuration handle."
	CSmartPropAttributeInt m_HandleSize;
	// MPropertyGroupName = "Handle Settings"
	// MPropertyReadonlyExpr = "m_bConfigurable == false"
	// MPropertyDescription = "Shape of the configuration handle to display."
	ConfigurationHandleShape_t m_HandleShape;
};
