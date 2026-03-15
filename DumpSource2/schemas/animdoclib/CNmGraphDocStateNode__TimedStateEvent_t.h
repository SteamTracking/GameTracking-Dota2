// MGetKV3ClassDefaults = {
//	"m_ID": <HIDDEN FOR DIFF>,
//	"m_type": "TimeElapsed",
//	"m_comparisonOperator": "LessThanEqual",
//	"m_flTimeValueSeconds": 0.200000
//}
// MPropertyAutoExpandSelf
class CNmGraphDocStateNode::TimedStateEvent_t
{
	// MPropertyAttributeEditor = "AnimGraphID()"
	CGlobalSymbol m_ID;
	CNmGraphDocStateNode::TimedStateEventType_t m_type;
	CNmStateNode::TimedEvent_t::Comparison_t m_comparisonOperator;
	float32 m_flTimeValueSeconds;
};
