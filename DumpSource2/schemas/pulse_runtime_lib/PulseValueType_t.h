enum PulseValueType_t : uint32_t
{
	// MPropertyFriendlyName = "Void"
	PVAL_VOID = -1,
	// MPropertyFriendlyName = "Boolean"
	PVAL_BOOL = 0,
	// MPropertyFriendlyName = "Integer"
	PVAL_INT = 1,
	// MPropertyFriendlyName = "Float"
	PVAL_FLOAT = 2,
	// MPropertyFriendlyName = "String"
	PVAL_STRING = 3,
	// MPropertyFriendlyName = "Vector2D"
	PVAL_VEC2 = 4,
	// MPropertyFriendlyName = "Vector"
	PVAL_VEC3 = 5,
	// MPropertyFriendlyName = "Angle"
	PVAL_QANGLE = 6,
	// MPropertyFriendlyName = "World Vector"
	PVAL_VEC3_WORLDSPACE = 7,
	// MPropertyFriendlyName = "Vector4D"
	PVAL_VEC4 = 8,
	// MPropertyFriendlyName = "Transform"
	PVAL_TRANSFORM = 9,
	// MPropertyFriendlyName = "World Transform"
	PVAL_TRANSFORM_WORLDSPACE = 10,
	// MPropertyFriendlyName = "Color"
	PVAL_COLOR_RGB = 11,
	// MPropertyFriendlyName = "Game Time"
	PVAL_GAMETIME = 12,
	// MPropertyFriendlyName = "Entity Handle"
	PVAL_EHANDLE = 13,
	// MPropertyFriendlyName = "Resource"
	PVAL_RESOURCE = 14,
	// MPropertyFriendlyName = "Resource Name"
	PVAL_RESOURCE_NAME = 15,
	// MPropertyFriendlyName = "SoundEvent Instance Handle"
	PVAL_SNDEVT_GUID = 16,
	// MPropertyFriendlyName = "SoundEvent"
	PVAL_SNDEVT_NAME = 17,
	// MPropertyFriendlyName = "Entity Name"
	PVAL_ENTITY_NAME = 18,
	// MPropertyFriendlyName = "Leaf Type"
	PVAL_LEAF = 19,
	// MPropertyFriendlyName = "Material Group"
	PVAL_MODEL_MATERIAL_GROUP = 20,
	// MPropertySuppressEnumerator
	PVAL_CURSOR_FLOW = 21,
	// MPropertyFriendlyName = "Variant"
	// MPropertySuppressEnumerator
	PVAL_VARIANT = 22,
	// MPropertyFriendlyName = "Unknown"
	// MPropertySuppressEnumerator
	PVAL_UNKNOWN = 23,
	// MPropertyFriendlyName = "Enum"
	PVAL_ENUM = 24,
	// MPropertyFriendlyName = "Panorama Panel Handle"
	PVAL_PANORAMA_PANEL_HANDLE = 25,
	// MPropertyFriendlyName = "Array"
	PVAL_ARRAY = 26,
	// MPropertySuppressEnumerator
	// MPropertyFriendlyName = "Particle Object"
	PVAL_PARTICLE_EHANDLE = 27,
	// MPropertyFriendlyName = "Anim Sequence"
	PVAL_ANIM_SEQUENCE = 28,
	// MPropertyFriendlyName = "VData Choice"
	PVAL_VDATA_CHOICE = 29,
	// MPropertySuppressEnumerator
	PVAL_COUNT = 30,
};
