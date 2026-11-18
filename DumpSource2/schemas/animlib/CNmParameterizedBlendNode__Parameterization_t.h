class CNmParameterizedBlendNode::Parameterization_t
{
	CUtlLeanVectorFixedGrowable< CNmParameterizedBlendNode::BlendRange_t, 5 > m_blendRanges;
	Range_t m_parameterRange; // = { "m_flMax": -340282349999999991754788743781432688640, "m_flMin": 340282349999999991754788743781432688640 }
};
