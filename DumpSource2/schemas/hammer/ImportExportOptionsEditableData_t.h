class ImportExportOptionsEditableData_t
{
	// MPropertyFriendlyName = "Export Props"
	bool bExportProps;
	// MPropertyFriendlyName = "Export Hidden Objects"
	bool bExportHidden;
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
