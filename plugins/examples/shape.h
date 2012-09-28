#pragma once

#include <cgv/base/node.h>
#include <cgv/signal/abst_signal.h>	/// the tacker class is declared in abst_signal 
#include <cgv/gui/event_handler.h>
#include <cgv/render/drawable.h>
#include <cgv/gui/provider.h>

/// example for the implementation of a cgv node that handles events and renders a selectable shape
class shape : 
	public cgv::base::group,          /// derive from node to integrate into global tree structure and to store a name
	public cgv::gui::event_handler,  /// derive from handler to receive events and to be asked for a help string
	public cgv::render::drawable,    /// derive from drawable for drawing the cube
	public cgv::gui::provider
{
private:
	/// flag used to store state of collapsable gui node
	bool node_flag;
protected:
	/// resolution of smooth shapes
	int resolution;
	/// different shape types
	enum Shape { CUBE, PRI, TET, OCT, DOD, ICO, CYL, CONE, DISK, ARROW, SPHERE, STRIP } shp;
	/// store rotation angle
	double ax, ay;
	/// store location along x-axis
	double x;
	bool no_flat;
	/// directly select the cube shape
	void select_cube(cgv::gui::button&);
	/// directly select the prism shape
	void select_prism(cgv::gui::button&);
	/// directly select the tet shape
	void select_tet(cgv::gui::button&);
	/// directly select the oct shape
	void select_oct(cgv::gui::button&);
	/// directly select the sphere shape
	void select_sphere(cgv::gui::button&);
	void select_strip(cgv::gui::button&);
public:
	/// construct from name which is necessary construction argument to node
	shape(const char* name);
	/// optional method of base
	void stream_stats(std::ostream& os);
	/// necessary method of event_handler
	bool handle(cgv::gui::event& e);
	/// necessary method of event_handler
	void stream_help(std::ostream& os);
	/// optional method of drawable
	void draw(cgv::render::context&);
	/// return a path in the main menu to select the gui
	std::string get_menu_path() const;
	/// you must overload this for gui creation
	void create_gui();
};
