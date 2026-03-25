// MGetKV3ClassDefaults = {
//	"_class": "CNmFloatSpringNode::CDefinition",
//	"m_nNodeIdx": -1,
//	"m_flStartValue": 0.000000,
//	"m_flHertz": 4.000000,
//	"m_flDampingRatio": 0.700000,
//	"m_nInputValueNodeIdx": -1,
//	"m_bUseStartValue": false
//}
class CNmFloatSpringNode::CDefinition : public CNmFloatValueNode::CDefinition
{
	float32 m_flStartValue;
	float32 m_flHertz;
	float32 m_flDampingRatio;
	int16 m_nInputValueNodeIdx;
	bool m_bUseStartValue;
};
