// MGetKV3ClassDefaults = {
//	"m_nHitGroup": "HITGROUP_INVALID",
//	"m_nDamageLevel": -1,
//	"m_nDesiredHealth": 0,
//	"m_nDestroyFlags": "GenerateBreakpieces|SetBodyGroupAndCollisionState|EnableFlinches",
//	"m_nDamageType": "DMG_BLAST",
//	"m_flBreakDamage": 0.000000,
//	"m_flBreakDamageRadius": 24.000000,
//	"m_vWsBreakDamageOrigin": null,
//	"m_vWsBreakDamageForce":
//	[
//		1.000000,
//		0.000000,
//		0.000000
//	]
//}
class DestructiblePartDamageRequest_t
{
	HitGroup_t m_nHitGroup;
	int32 m_nDamageLevel;
	uint16 m_nDesiredHealth;
	EDestructibleParts_DestroyParameterFlags m_nDestroyFlags;
	DamageTypes_t m_nDamageType;
	float32 m_flBreakDamage;
	float32 m_flBreakDamageRadius;
	VectorWS m_vWsBreakDamageOrigin;
	Vector m_vWsBreakDamageForce;
};
