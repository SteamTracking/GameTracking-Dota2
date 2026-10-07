enum VertexAttachmentAlignModeSchema_t : uint32_t
{
	// MPropertyFriendlyName = "Surface Normal"
	// MPropertyDescription = "Orient +X along the surface normal, using the mesh tangent for a secondary axis (world up as a fallback)."
	VTX_ATTACH_ALIGN_NORMAL = 0,
	// MPropertyFriendlyName = "Model"
	// MPropertyDescription = "Use the identity orientation (model space, Z up)."
	VTX_ATTACH_ALIGN_MODEL = 1,
};
