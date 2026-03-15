enum AssetEditInfoFilterFunc_t : uint32_t
{
	// MPropertyFriendlyName = "=="
	ASSET_FILTER_EQUAL = 0,
	// MPropertyFriendlyName = "!="
	ASSET_FILTER_NOT_EQUAL = 1,
	// MPropertyFriendlyName = "== (or missing)"
	ASSET_FILTER_EQUAL_OR_MISSING = 2,
	// MPropertyFriendlyName = "!= (or missing)"
	ASSET_FILTER_NOT_EQUAL_OR_MISSING = 3,
	// MPropertyFriendlyName = "<"
	ASSET_FILTER_LESS = 4,
	// MPropertyFriendlyName = "<="
	ASSET_FILTER_LESS_EQUAL = 5,
	// MPropertyFriendlyName = ">"
	ASSET_FILTER_GREATER = 6,
	// MPropertyFriendlyName = ">="
	ASSET_FILTER_GREATER_EQUAL = 7,
	// MPropertyFriendlyName = "contains"
	ASSET_FILTER_CONTAINS = 8,
	// MPropertyFriendlyName = "doesn't contain"
	ASSET_FILTER_DOES_NOT_CONTAIN = 9,
	// MPropertyFriendlyName = "references or depends on asset"
	ASSET_FILTER_DEPREF_ASSET = 10,
	// MPropertyFriendlyName = "referenced or depended-on by asset"
	ASSET_FILTER_DEPREF_BY_ASSET = 11,
	// MPropertyFriendlyName = "parents asset"
	ASSET_FILTER_PARENTS_ASSET = 12,
	// MPropertyFriendlyName = "parented by asset"
	ASSET_FILTER_PARENTED_BY_ASSET = 13,
	// MPropertyFriendlyName = "references subasset"
	ASSET_FILTER_REF_SUBASSET = 14,
	// MPropertyFriendlyName = "defines subasset"
	ASSET_FILTER_DEF_SUBASSET = 15,
	// MPropertyFriendlyName = "references or depends on asset (exact)"
	ASSET_FILTER_EXACT_DEPREF_ASSET = 16,
	// MPropertyFriendlyName = "referenced or depended-on by asset (exact)"
	ASSET_FILTER_EXACT_DEPREF_BY_ASSET = 17,
	// MPropertyFriendlyName = "parents asset (exact)"
	ASSET_FILTER_EXACT_PARENTS_ASSET = 18,
	// MPropertyFriendlyName = "parented by asset (exact)"
	ASSET_FILTER_EXACT_PARENTED_BY_ASSET = 19,
	// MPropertyFriendlyName = "references subasset (exact)"
	ASSET_FILTER_EXACT_REF_SUBASSET = 20,
	// MPropertyFriendlyName = "defines subasset (exact)"
	ASSET_FILTER_EXACT_DEF_SUBASSET = 21,
	ASSET_FILTER_FUNC_COUNT = 22,
};
