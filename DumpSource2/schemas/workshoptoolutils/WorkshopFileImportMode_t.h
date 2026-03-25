enum WorkshopFileImportMode_t : uint32_t
{
	// MPropertyFriendlyName = "Create New"
	// MWorkshopEnumeratorColor (UNKNOWN FOR PARSER)
	eWorkshopFileImportMode_CreateNew = 0,
	// MPropertyFriendlyName = "Update Existing"
	// MWorkshopEnumeratorColor (UNKNOWN FOR PARSER)
	eWorkshopFileImportMode_UpdateExisting = 1,
	// MPropertyFriendlyName = "Skip"
	eWorkshopFileImportMode_Skip = 2,
	// MPropertySuppressEnumerator
	eWorkshopFileImportMode_Count = 3,
};
