// MGetKV3ClassDefaults = null
class PhysObjectHeader_t
{
	PhysInterfaceId_t type;
	CHandle< C_BaseEntity > hEntity;
	CUtlSymbolLarge fieldName;
	int32 nObjects;
	CUtlSymbolLarge modelName;
	AABB_t bbox;
	physics_save_sphere_t sphere;
	int32 iCollide;
};
