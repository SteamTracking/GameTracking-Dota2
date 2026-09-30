// MVDataRoot
class CShmupPathEvent
{
	EShmupPathEventType m_type; // = "k_eShmupPathEventType_Invalid"
	int32 m_nBulletPatternIndex;
	float32 m_flTime; // = -1
	// MPropertySuppressExpr = "m_type != k_eShmupPathEventType_Speed"
	float32 m_flSpeed;
};
