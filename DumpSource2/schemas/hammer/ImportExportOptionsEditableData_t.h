class ImportExportOptionsEditableData_t
{
	// MPropertyFriendlyName = "Export Props"
	bool bExportProps;
	// MPropertyFriendlyName = "Export Hidden Objects"
	bool bExportHidden;
	// MPropertyFriendlyName = "Export Bones (FBX only)"
	// MPropertyDescription = "Export the bones of models. Only supported by FBX export"
	bool bExportBones;
	// MPropertyFriendlyName = "Export Skinning (FBX only)"
	// MPropertyDescription = "Export the skinning of models. Only supported by FBX export, Requires exporting bones. NOTE: exporting skinning can generate an FBX with skinned and un-skinned objects, which can cause problems if referenced by a vmdl."
	bool bExportSkinning;
	// MPropertyFriendlyName = "Export FBX Embed Textures From Content If Available"
	// MPropertySuppressField
	bool bExportFbxEmbedTextures;
	// MPropertyFriendlyName = "Export Hammer Units To FBX Units"
	ImportExportOptionsEditableData_t::ExportFbxUnit_t nExportFbxUnit;
	// MPropertyFriendlyName = "Export Default Format"
	ImportExportOptionsEditableData_t::ExportDefaultFormat_t nExportDefaultFormat;
	// MPropertyFriendlyName = "Export Encoding"
	ImportExportOptionsEditableData_t::ExportEncoding_t nExportEncoding;
};
