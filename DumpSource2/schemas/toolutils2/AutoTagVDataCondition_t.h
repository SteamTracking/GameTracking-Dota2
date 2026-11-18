class AutoTagVDataCondition_t
{
	// MPropertyDescription = "The VData file to read"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCVDataResource > > m_SourceFile;
	// MPropertyDescription = "The key whose value must match the asset name (ie. something like 'm_Model' if you want to apply this tag to .vmdl assets that are referenced by the vdata file)
//Use '/' to reach into sub-blocks, e.g. 'm_Content/m_strName', and '*' to search every element of an array, e.g. 'm_Levels/*/m_strName'."
	CKV3MemberNameWithStorage m_AssetKey;
	// MPropertyDescription = "Optional additional keys to check, in the same form as the main key (e.g. 'm_Content/m_strName')"
	// MPropertyAutoExpandSelf
	CUtlVector< CUtlString > m_AlternateAssetKeys;
	// MPropertyDescription = "This expression determines whether the tag should actually be applied to an asset
//It will be evaluated against vdata entries where the key matches the asset - if any of them evaluate to true the tag will be applied.
//The expression is evaluated against the top-level vdata entry, even when the key reaches into a sub-block, so refer to sub-block fields by their full path. Expressions separate members with '.' (e.g. 'm_Content.m_bFoo').
//Most simple expressions involving the VData keys are supported. Use 'true' to tag unconditionally."
	CUtlString m_Expression;
};
