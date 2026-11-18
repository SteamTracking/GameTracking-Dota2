// MHasKV3TransferPolymorphicClassname
class C_OP_SetControlPointFromRenderAttribute : public CParticleFunctionPreEmission
{
	// MPropertyFriendlyName = "input control point number (entity to read from)"
	int32 m_nCPInput;
	// MPropertyFriendlyName = "output control point number"
	int32 m_nCPOutput; // = 1
	// MPropertyFriendlyName = "output component (0 = X, 1 = Y, 2 = Z)"
	int32 m_nComponent;
	// MPropertyFriendlyName = "render attribute name"
	char[128] m_pszAttributeName;
	// MPropertyFriendlyName = "default value (no entity / attribute)"
	float32 m_flDefaultValue;
};
