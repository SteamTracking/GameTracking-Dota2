// MGetKV3ClassDefaults = {
//	"nHitGroup": "HITGROUP_GENERIC",
//	"nDamageLevel": 0,
//	"nDamageLevelsRemaining": 0,
//	"nPrevDamageLevel": 0
//}
class CBaseModelEntity::OnDamageLevelChangedArgs_t
{
	HitGroup_t nHitGroup;
	int32 nDamageLevel;
	int32 nDamageLevelsRemaining;
	int32 nPrevDamageLevel;
};
