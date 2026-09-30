// MPropertyFriendlyName = "Tags"
// MWorkshopFileListerFilterAllowMultiple
// MHasKV3TransferPolymorphicClassname
class CTagsWorkshopFileFilter : public IWorkshopFileListerFilter
{
	CUtlVector< CUtlString > m_tags;
};
