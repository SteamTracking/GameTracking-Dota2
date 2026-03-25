// MGetKV3ClassDefaults = {
//	"m_pOriginatingInfo":
//	{
//		"_class": "CTakeDamageInfo",
//		"m_vecDamageForce":
//		[
//			0.000000,
//			0.000000,
//			0.000000
//		],
//		"m_vecDamagePosition": null,
//		"m_vecReportedPosition": null,
//		"m_vecDamageDirection":
//		[
//			0.000000,
//			0.000000,
//			0.000000
//		],
//		"m_hInflictor": null,
//		"m_hAttacker": null,
//		"m_hAbility": null,
//		"m_flDamage": 0.000000,
//		"m_flTotalledDamage": 0.000000,
//		"m_bitsDamageType": "",
//		"m_iDamageCustom": 0,
//		"m_iAmmoType": "",
//		"m_flOriginalDamage": 0.000000,
//		"m_bShouldBleed": false,
//		"m_bShouldSpark": false,
//		"m_nDamageFlags": "",
//		"m_bitsDotaDamageType": 0,
//		"m_nDotaDamageCategory": 0,
//		"m_flCombatLogCreditFactor": 1.000000,
//		"m_iRecord": 0,
//		"m_iHitGroupId": "HITGROUP_INVALID",
//		"m_DestructibleHitGroupRequests":
//		[
//		]
//	},
//	"m_DestructibleHitGroupRequests":
//	[
//	],
//	"m_nHealthLost": 0,
//	"m_nHealthBefore": 0,
//	"m_flDamageDealt": 0.000000,
//	"m_flPreModifiedDamage": 0.000000,
//	"m_nTotalledHealthLost": 0,
//	"m_flTotalledDamageDealt": 0.000000,
//	"m_flTotalledPreModifiedDamage": 0.000000,
//	"m_flNewDamageAccumulatorValue": 0.000000,
//	"m_nDamageFlags": "",
//	"m_bWasDamageSuppressed": false,
//	"m_bSuppressFlinch": false,
//	"m_nOverrideFlinchHitGroup": "HITGROUP_INVALID"
//}
class CTakeDamageResult
{
	// MKV3TransferSaveOpsForField = "GetTakeDamageConstPtrSaveRestoreOps"
	CTakeDamageInfo* m_pOriginatingInfo;
	CUtlLeanVector< DestructiblePartDamageRequest_t > m_DestructibleHitGroupRequests;
	int32 m_nHealthLost;
	int32 m_nHealthBefore;
	float32 m_flDamageDealt;
	float32 m_flPreModifiedDamage;
	int32 m_nTotalledHealthLost;
	float32 m_flTotalledDamageDealt;
	float32 m_flTotalledPreModifiedDamage;
	float32 m_flNewDamageAccumulatorValue;
	TakeDamageFlags_t m_nDamageFlags;
	bool m_bWasDamageSuppressed;
	bool m_bSuppressFlinch;
	HitGroup_t m_nOverrideFlinchHitGroup;
};
