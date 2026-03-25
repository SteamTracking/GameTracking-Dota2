// MGetKV3ClassDefaults = {
//	"_class": "CSoundPatch",
//	"m_pitch":
//	{
//		"m_current": 0.000000,
//		"m_target": 0.000000,
//		"m_rate": 0.000000,
//		"m_forceupdate": false
//	},
//	"m_volume":
//	{
//		"m_current": 0.000000,
//		"m_target": 0.000000,
//		"m_rate": 0.000000,
//		"m_forceupdate": false
//	},
//	"m_iszSoundScriptName": "",
//	"m_hEnt": null,
//	"m_isPlaying": 0,
//	"m_Filter":
//	{
//		"_class": "CCopyRecipientFilter",
//		"m_Flags": 0,
//		"m_Recipients":
//		[
//		],
//		"m_slotPlayerExcludedDueToPrediction": -1
//	},
//	"m_flCloseCaptionDuration": 2.000000
//}
class CSoundPatch
{
	CSoundEnvelope m_pitch;
	CSoundEnvelope m_volume;
	// MKV3TransferSaveOpsForField = "GetEngineTimeSaveRestoreOps"
	float32 m_shutdownTime;
	// MKV3TransferSaveOpsForField = "GetEngineTimeSaveRestoreOps"
	float32 m_flLastTime;
	CUtlSymbolLarge m_iszSoundScriptName;
	CHandle< C_BaseEntity > m_hEnt;
	// MNotSaved
	CEntityIndex m_soundEntityIndex;
	// MNotSaved
	VectorWS m_soundOrigin;
	int32 m_isPlaying;
	CCopyRecipientFilter m_Filter;
	float32 m_flCloseCaptionDuration;
	// MNotSaved
	bool m_bUpdatedSoundOrigin;
	// MNotSaved
	CUtlSymbolLarge m_iszClassName;
};
