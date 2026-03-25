enum GraphCanvasInteractionPriority_t : uint32_t
{
	NONINTERACTIVE = -9999,
	GROUP = 0,
	BASE = 1,
	DRAG_HANDLE = 2,
	RESIZE_EDGE = 3,
	RESIZE_CORNER = 4,
	ADD_FLOW = 5,
	PORT = 6,
	ANCHOR = 7,
};
