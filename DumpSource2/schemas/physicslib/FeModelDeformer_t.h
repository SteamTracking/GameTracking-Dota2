class FeModelDeformer_t
{
	FeModelDeformer_t::FfdLayerZ_t[3] m_FfdZLayers; // = [ { "flGoalStrength": 0, "flScale": 1, "flZin": 0, "flZout": 0 }, { "flGoalStrength": 0, "flScale": 1, "flZin": 0, "flZout": 0 }, { "flGoalStrength": 0, "flScale": 1, "flZin": 0, "flZout": 0 } ]
	float32 m_flDisplayRadius;
	uint32 m_nVertexMapNameHash;
	uint16 m_nVertexMapIndex; // = 65535
	uint16 m_nReferenceNode; // = 65535
	uint32 m_nFlags;
};
