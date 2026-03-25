// MGetKV3ClassDefaults = {
//	"m_sGroupName": "",
//	"m_sEntityLumpName": "",
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
//	"m_bClientSpawnGroup": false,
//	"m_bSuppressAllEntities": false
//}
class SPAWNGROUP_HEADER
{
	CUtlString m_sGroupName;
	CUtlString m_sEntityLumpName;
	matrix3x4a_t m_vecWorldOffset;
	bool m_bClientSpawnGroup;
	bool m_bSuppressAllEntities;
};
