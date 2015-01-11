#pragma once

// ----------------------------------------------------------------------------
// Generated by MyGUI's LayoutEditor using RoR's code templates.
// Find the templates at [repository]/tools/MyGUI_LayoutEditor/
//
// IMPORTANT:
// Do not modify this code directly. Create a derived class instead.
// ----------------------------------------------------------------------------

#include "ForwardDeclarations.h"
#include "BaseLayout.h"

namespace RoR
{

namespace GUI
{
	
ATTRIBUTE_CLASS_LAYOUT(SimUtilsLayout, "Utils.layout");
class SimUtilsLayout : public wraps::BaseLayout
{

public:

	SimUtilsLayout(MyGUI::Widget* _parent = nullptr);
	virtual ~SimUtilsLayout();

protected:

	//%LE Widget_Declaration list start
	ATTRIBUTE_FIELD_WIDGET_NAME(SimUtilsLayout, m_fpscounter_box, "fpscounter_box");
	MyGUI::ImageBox* m_fpscounter_box;

	ATTRIBUTE_FIELD_WIDGET_NAME(SimUtilsLayout, m_cur_fps, "cur_fps");
	MyGUI::EditBox* m_cur_fps;

	ATTRIBUTE_FIELD_WIDGET_NAME(SimUtilsLayout, m_avg_fps, "avg_fps");
	MyGUI::EditBox* m_avg_fps;

	ATTRIBUTE_FIELD_WIDGET_NAME(SimUtilsLayout, m_worst_fps, "worst_fps");
	MyGUI::EditBox* m_worst_fps;

	ATTRIBUTE_FIELD_WIDGET_NAME(SimUtilsLayout, m_best_fps, "best_fps");
	MyGUI::EditBox* m_best_fps;

	ATTRIBUTE_FIELD_WIDGET_NAME(SimUtilsLayout, m_triangle_count, "triangle_count");
	MyGUI::EditBox* m_triangle_count;

	ATTRIBUTE_FIELD_WIDGET_NAME(SimUtilsLayout, m_batch_count, "batch_count");
	MyGUI::EditBox* m_batch_count;

	ATTRIBUTE_FIELD_WIDGET_NAME(SimUtilsLayout, m_truckinfo_box, "truckinfo_box");
	MyGUI::ImageBox* m_truckinfo_box;

	ATTRIBUTE_FIELD_WIDGET_NAME(SimUtilsLayout, m_truck_name, "truck_name");
	MyGUI::EditBox* m_truck_name;

	ATTRIBUTE_FIELD_WIDGET_NAME(SimUtilsLayout, m_truck_stats, "truck_stats");
	MyGUI::EditBox* m_truck_stats;

	//%LE Widget_Declaration list end
};

} // namespace GUI

} // namespace RoR

