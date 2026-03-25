// MGetKV3ClassDefaults = {
//	"_class": "CFileTypeWorkshopFileFilter",
//	"m_fileTypes":
//	[
//	]
//}
// MPropertyFriendlyName = "File Type"
class CFileTypeWorkshopFileFilter : public IWorkshopFileListerFilter
{
	CUtlVector< EWorkshopFileType > m_fileTypes;
};
