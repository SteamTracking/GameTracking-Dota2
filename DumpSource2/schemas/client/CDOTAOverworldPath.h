// MGetKV3ClassDefaults = {
//	"m_unID": 0,
//	"m_unNodeStart": 0,
//	"m_unNodeEnd": 0,
//	"m_strPathHiddenUntilEventAction": "",
//	"m_unCost": 0,
//	"m_splineInfo":
//	{
//		"m_flStartTangent": 0.500000,
//		"m_flEndTangent": 0.500000,
//		"m_flStartOffset": 0.000000,
//		"m_flEndOffset": 0.000000
//	},
//	"m_flCurveAngle": 0.000000,
//	"m_vecRequiredTokenNames":
//	[
//	]
//}
// MVDataRoot
class CDOTAOverworldPath
{
	// MVDataUniqueMonotonicInt = "_editor/next_id_path"
	// MPropertyAttributeEditor = "locked_int()"
	OverworldPathID_t m_unID;
	// MPropertyDescription = ""
	OverworldNodeID_t m_unNodeStart;
	// MPropertyDescription = ""
	OverworldNodeID_t m_unNodeEnd;
	// MPropertyDescription = "An event action used to determine."
	CUtlString m_strPathHiddenUntilEventAction;
	// MPropertyDescription = ""
	uint8 m_unCost;
	OverworldSplineInfo_t m_splineInfo;
	// MPropertyAttributeRange = "-180 180"
	float32 m_flCurveAngle;
	// MPropertyDescription = ""
	CUtlVector< CUtlString > m_vecRequiredTokenNames;
};
