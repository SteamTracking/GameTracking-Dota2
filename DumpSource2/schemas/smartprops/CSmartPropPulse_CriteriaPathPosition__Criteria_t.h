class CSmartPropPulse_CriteriaPathPosition::Criteria_t
{
	// MPropertyDescription = "Specifies the method to use to determine which positions this element should be placed at along the path."
	SmartPropPathPositions_t m_PlaceAtPositions;
	// MPropertySuppressExpr = "( m_PlaceAtPositions == ALL ) || ( m_PlaceAtPositions == START_AND_END ) || ( m_PlaceAtPositions == CONTROL_POINTS )"
	// MPropertyDescription = "Specifies the spacing between positions. For example, a value of 1 will place the element at very position, 2 every other position, 3 every third position"
	int32 m_nPlaceEveryNthPosition;
	// MPropertySuppressExpr = "( m_PlaceAtPositions == ALL ) || ( m_PlaceAtPositions == START_AND_END ) || ( m_PlaceAtPositions == CONTROL_POINTS )"
	// MPropertyDescription = "Specifies an offset to use when determining the Nth position to place an element at. For example if placing at every third position with an offset of 0, an element will appear at positions 1, 4, 7, and so on. But if an offset of 2 is set instead of 0, then an element will appear at positions 3, 6, and 9 and so on."
	int32 m_nNthPositionIndexOffset;
	// MPropertyDescription = "Should this element be placed at the first positions on the path"
	bool m_bAllowAtStart;
	// MPropertyDescription = "Should this element be placed at the last positions on the path"
	bool m_bAllowAtEnd;
};
