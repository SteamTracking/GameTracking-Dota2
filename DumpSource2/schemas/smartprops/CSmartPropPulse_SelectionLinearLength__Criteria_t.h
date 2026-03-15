class CSmartPropPulse_SelectionLinearLength::Criteria_t
{
	// MPropertyDescription = "Specifies the length of the line that will be taken up if this element is selected."
	float32 m_flLength;
	// MPropertyDescription = "Can this object be scaled. If enabled the minimum and maximum lengths must be set to specify the size range of allowable scale."
	bool m_bAllowScale;
	// MPropertyFriendlyName = "Minimum length"
	// MPropertySuppressExpr = "m_bAllowScale == false"
	// MPropertyDescription = "Minimum allowable length for the object. Must be <= length. If length is 100 and minimum length is 20, then the object may be assigned a scale in the rage [ 0.2, 1.0 ]."
	float32 m_flMinLength;
	// MPropertyFriendlyName = "Maximum length"
	// MPropertySuppressExpr = "m_bAllowScale == false"
	// MPropertyDescription = "Maximum allowable length for the object. Must be >= length. If length is 100 and maximum length is 160, then the object may be assigned a scale in the rage [ 1.0, 1.6 ]."
	float32 m_flMaxLength;
};
