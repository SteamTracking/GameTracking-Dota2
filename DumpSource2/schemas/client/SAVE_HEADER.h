// MGetKV3ClassDefaults = {
//	"m_saveId": 0,
//	"m_version": 0,
//	"m_nConnectionCount": 0,
//	"m_nMapVersion": 0,
//	"m_sSpawnGroupName": "",
//	"m_vecWorldOffset":
//	[
//		0.000000,
//		0.000000,
//		0.000000,
//		0.000000,
//		0.000000,
//		0.000000,
//		0.000000,
//		0.000000,
//		0.000000,
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_flSaveTime": 0.000000
//}
class SAVE_HEADER
{
	int32 m_saveId;
	int32 m_version;
	int32 m_nConnectionCount;
	int32 m_nMapVersion;
	CUtlString m_sSpawnGroupName;
	matrix3x4a_t m_vecWorldOffset;
	float32 m_flSaveTime;
};
