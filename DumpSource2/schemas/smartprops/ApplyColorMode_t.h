enum ApplyColorMode_t : uint32_t
{
	// MPropertyFriendlyName = "Multiply object tint"
	// MPropertyDescription = "Multiply with the object level color tint and replace the current color value."
	MULTIPLY_OBJECT = 0,
	// MPropertyFriendlyName = "Multiply current tint"
	// MPropertyDescription = "Multiply with the current color tint value."
	MULTIPLY_CURRENT = 1,
	// MPropertyFriendlyName = "Replace tint"
	// MPropertyDescription = "Replace the current color tint value completely, overwriting any object level tint."
	REPLACE = 2,
};
