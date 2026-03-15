// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropPulse_SmartProp",
//	"m_nEditorNodeID": -1,
//	"m_hSmartProp": ""
//}
// MPropertyFriendlyName = "Smart Prop Reference"
class CSmartPropPulse_SmartProp : public CPulseCell_BaseFlow
{
	// MPropertyDescription = "Name of the target smart prop resource (.vsmart) to evaluate."
	CStrongHandle< InfoForResourceTypeCSmartProp > m_hSmartProp;
};
