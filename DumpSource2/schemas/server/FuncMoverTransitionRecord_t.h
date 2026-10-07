class FuncMoverTransitionRecord_t
{
	int32 nId; // = -1
	CHandle< CPathMover > hSourcePath;
	float32 flSourceT;
	bool bSourceReversing;
	CHandle< CPathMover > hDestPath;
	float32 flDestT;
	bool bDestReversing;
};
