// MGetKV3ClassDefaults = {
//	"_class": "CCopyRecipientFilter",
//	"m_Flags": 0,
//	"m_Recipients":
//	[
//	],
//	"m_slotPlayerExcludedDueToPrediction": -1
//}
class CCopyRecipientFilter
{
	int32 m_Flags;
	CUtlVector< CPlayerSlot > m_Recipients;
	CPlayerSlot m_slotPlayerExcludedDueToPrediction;
};
