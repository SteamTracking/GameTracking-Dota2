// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropPulse_PlaceInSphere",
//	"m_nEditorNodeID": -1,
//	"m_Place":
//	{
//		"m_SourceOutflowName": "",
//		"m_nDestChunk": -1,
//		"m_nInstruction": -1
//	}
//}
// MPropertyFriendlyName = "Place In Radius"
// MPropertyDescription = "An element which places multiple instances of its child elements within a radius."
class CSmartPropPulse_PlaceInSphere : public CPulseCell_BaseFlow
{
	CPulse_OutflowConnection m_Place;
};
