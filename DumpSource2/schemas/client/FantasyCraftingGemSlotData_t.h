// MPropertyAutoExpandSelf
class FantasyCraftingGemSlotData_t
{
	// MPropertyDescription = "Gem Slot"
	FantasyGemSlot_t m_unGemSlot;
	// MPropertyDescription = "Gem Type"
	Fantasy_Gem_Type m_eGemType; // = "FANTASY_GEM_TYPE_RUBY"
	// MPropertyDescription = "Minimum tablet level to unlock this type of gem, -1 or 0 for always unlocked"
	int32 m_nRequiredTabletLevel; // = -1
};
