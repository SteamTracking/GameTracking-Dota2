// MGetKV3ClassDefaults = {
//	"m_nContentVersion": 0,
//	"m_nMaxDepth": 32,
//	"m_Variables":
//	[
//	],
//	"m_Choices":
//	[
//	],
//	"m_Children":
//	[
//	],
//	"m_Modifiers":
//	[
//	],
//	"m_hPulseGraph": ""
//}
// MSmartPropClassVersion (UNKNOWN FOR PARSER)
// MVDataRoot
// MVDataSingleton
// MVDataFileExtension = "vsmart"
// MVDataPreviewWidget (UNKNOWN FOR PARSER)
// MVDataGroupNodeClass (UNKNOWN FOR PARSER)
// MVDataUsesComponentEditor
// MPropertyFriendlyName = "Smart Prop Root"
// MPropertyDescription = "Root of a smart prop, contains a list of elements to evaluate."
class CSmartPropRoot
{
	// MPropertyDescription = "Specifies the current version of this smart prop. Any existing references to this smart prop with an older version number will not automatically update."
	int32 m_nContentVersion;
	// MPropertyDescription = "Maximum depth of smart prop evaluation stack during evaluation."
	CSmartPropAttributeInt m_nMaxDepth;
	// MPropertyFriendlyName = "Variables"
	// MVDataPromoteField (UNKNOWN FOR PARSER)
	CUtlVector< CSmartPropVariable* > m_Variables;
	// MPropertyFriendlyName = "Choices"
	// MVDataPromoteField (UNKNOWN FOR PARSER)
	CUtlVector< CSmartPropChoice* > m_Choices;
	// MPropertyDescription = "List of the root level elements making up the smart prop definition, each element may be an entire tree."
	// MVDataPromoteField (UNKNOWN FOR PARSER)
	CUtlVector< CSmartPropElement* > m_Children;
	// MPropertyFriendlyName = "Modifiers"
	// MVDataPromoteField (UNKNOWN FOR PARSER)
	CUtlVector< CSmartPropModifier* > m_Modifiers;
	// MPropertySuppressExpr = "!__IsSmartPropPulseActive"
	CStrongHandle< InfoForResourceTypeIPulseGraphDef > m_hPulseGraph;
};
