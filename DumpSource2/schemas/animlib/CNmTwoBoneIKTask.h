class CNmTwoBoneIKTask : public CNmPoseTask
{
	int32 m_nEffectorBoneIdx;
	int32 m_nEffectorTargetBoneIdx;
	CTransform m_targetTransform;
};
