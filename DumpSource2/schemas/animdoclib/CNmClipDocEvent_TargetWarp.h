// MGetKV3ClassDefaults = {
//	"_class": "CNmClipDocEvent_TargetWarp",
//	"m_flStartTime": 0.000000,
//	"m_flDuration": 0.000000,
//	"m_rule": "WarpXYZ",
//	"m_algorithm": "Bezier"
//}
class CNmClipDocEvent_TargetWarp : public CNmClipDocEvent
{
	NmTargetWarpRule_t m_rule;
	NmTargetWarpAlgorithm_t m_algorithm;
};
