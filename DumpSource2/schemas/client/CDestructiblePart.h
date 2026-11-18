// MModelGameData
// MFgdHelper = "game_data_list{ key = 'CDestructiblePart' }"
class CDestructiblePart
{
	// MPropertySuppressField
	CGlobalSymbol m_DebugName;
	// MPropertyStartGroup = "+Hitgroup"
	// MPropertyDescription = "The hitgroup this is related to."
	HitGroup_t m_nHitGroup; // = "HITGROUP_GENERIC"
	// MPropertyDescription = "Start as the only part: every other part starts hidden, using its own destroyed body group value, with its hit group and physics off. The first damage destroys this part, brings the others back, and a hit on this part goes to the part nearest it. Give this part one hull and a body group holding the whole intact mesh."
	// MPropertyFriendlyName = "Intact Proxy For Other Parts"
	bool m_bIsIntactProxy;
	// MPropertyDescription = "Do we disable the hitgroup and physics bodies tagged with said hitgroup when all damage levels are destroyed?"
	// MPropertySuppressExpr = "m_bIsIntactProxy == true"
	// MPropertyFriendlyName = "Disable Hit Group & Remove Tagged Physics Bodies When Destroyed"
	bool m_bDisableHitGroupWhenDestroyed; // = true
	// MPropertyDescription = "Other hitgroups to destroy when this one is fully destroyed.  Useful for chaining destructibles like blowing up the lower arm when the upper arm dies."
	// MPropertySuppressExpr = "m_bIsIntactProxy == true"
	CUtlVector< HitGroup_t > m_nOtherHitgroupsToDestroyWhenFullyDestructed;
	// MPropertyStartGroup = "+Gibbing"
	// MPropertyDescription = "Only allow this part to be destroyed when gibbing.  Useful for special case gibbing breakables like torsos."
	// MPropertySuppressExpr = "m_bIsIntactProxy == true"
	bool m_bOnlyDestroyWhenGibbing;
	// MPropertyStartGroup = "+Model Setup/+Body Group"
	// MPropertyDescription = "Body group to set when this damage level is broken."
	// MPropertyAttributeEditor = "ModelDocPicker( MODELDOC_PICK_TYPE_BODY_GROUP )"
	CGlobalSymbol m_sBodyGroupName;
	// MPropertyStartGroup = ""
	// MPropertyDescription = "The various damage levels for this hitgroup."
	// MPropertyFriendlyName = "Damage Levels"
	// MPropertyAutoExpandSelf
	CUtlVector< CDestructiblePart_DamageLevel > m_DamageLevels;
};
