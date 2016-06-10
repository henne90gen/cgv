#include "gl_view.h"

namespace cgv {
	namespace render {
		namespace gl {

gl_view::gl_view()
{
	z_near = 0.0001;
	z_far = 100;
}

double gl_view::get_z_near() const 
{
	return z_near; 
}

void gl_view::set_z_near(double z) 
{
	z_near = z; 
}

double gl_view::get_z_far() const 
{
	return z_far; 
}

void gl_view::set_z_far(double z) 
{
	z_far = z; 
}

///
void gl_view::set_scene_extent(const box_type& _box)
{
	scene_extent = _box;
}

///
gl_view::box_type gl_view::get_scene_extent() const
{
	return scene_extent;
}

void gl_view::set_default_view()
{
	set_view_dir(0, 0, -1);
	set_view_up_dir(0, 1, 0);
	set_focus(scene_extent.get_center());
	set_y_extent_at_focus(0.75*scene_extent.get_extent()(1));
}


		}
	}
}