class PulseDocVCDAnchorInfo_t
{
	CUtlString m_Name;
	bool m_bArrivalOptionsAreExternal;
	SharedMovementGait_t m_nGaitOverride; // = "eInvalid"
	ChoreoLocatorArrivalOptionFlags_t m_nArrivalOptions;
	float32 m_flSpeedScale; // = 1
};
