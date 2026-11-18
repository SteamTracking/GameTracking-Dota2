// MHasKV3TransferPolymorphicClassname
class CBaseEventDefinition
{
	EventStartTimestamp_t m_rtEventStartTime;
	EventEndTimestamp_t m_rtEventEndTime;
	EventEndTimestamp_t m_rtEventExpireTime;
	EventStartTimestamp_t m_rtEventStartTimeDev;
	EventEndTimestamp_t m_rtEventEndTimeDev;
	EventEndTimestamp_t m_rtEventExpireTimeDev;
	bool m_bExperimentalUsesDevTiming;
	bool m_bMustBeOwned; // = true
	uint32 m_unDefaultEventPoints;
	uint32 m_unEventPointsPerLevel;
};
