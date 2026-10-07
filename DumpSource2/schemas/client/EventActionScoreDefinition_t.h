class EventActionScoreDefinition_t
{
	uint32 unActionScore;
	uint32 unActionScoreRepeatInterval;
	CUtlString strRewardName;
	CUtlString strRewardDescription;
	CUtlString strRewardImage;
	CUtlString strRewardClass;
	CUtlString strRewardSnippet;
	CUtlString strAchievementCategory;
	bool bIsAchievement;
	bool bShowAchievementQuantity;
	CUtlVector< EventGrantDefinition_t* > vecRewards;
	CUtlVector< EventActionScoreDefinition_t::RelatedAction_t > vecRelatedActions;
};
