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
	OverworldSplineInfo_t m_splineInfo; // = { "m_flEndOffset": 0, "m_flEndTangent": 0.5, "m_flStartOffset": 0, "m_flStartTangent": 0.5 }
	// MPropertyAttributeRange = "-180 180"
	float32 m_flCurveAngle;
	// MPropertyDescription = ""
	CUtlVector< CUtlString > m_vecRequiredTokenNames;
};
