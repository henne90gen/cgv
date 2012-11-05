#define _USE_MATH_DEFINES
#include <cmath>

#include <cgv/base/abst_signal.h>
#include <cgv/base/bool_signal.h>
#include <cgv/base/method_interface_impl.h>
#include <cgv/base/rebind.h>
#include <cgv/base/signal.h>
#include <cgv/media/illum/light_source.tih>
#include <cgv/media/illum/obj_material.tih>
#include <cgv/media/illum/phong_material.tih>
#include <cgv/media/color_model.tih>
#include <cgv/render/gl/gl_implicit_surface_drawable.tih>
#include <cgv/type/traits/method_pointer.h>
#include <cgv/type/invalid_type.h>
#include <cgv/type/traits/function_pointer.h>
#include <cgv/type/traits/method_pointer.h>

#include <cgv/base/action.h>
#include <cgv/render/drawable.h>
#include <cgv/render/shader_program.h>
#include <cgv/render/textured_material.h>
#include <cgv/utils/scan.h>
#include <cgv/media/image/image_writer.h>
#include <cgv/utils/token.h>
#include <cgv/utils/tokenizer.h>
#include <cgv/gui/event_handler.h>
#include <cgv/math/vec.h>
#include <cgv/math/mat.h>
#include <cgv/os/clipboard.h>
#include <cgv/render/gl/gl.h>
#include <cgv/type/info/show_type.h>
#include <cgv/math/marching_cubes.h>
#include <cgv/math/dual_contouring.h>
#include <cgv/base/rebind.h>
#include <cgv/base/group.h>
#include <cgv/base/attach_slot.h>
#include <cgv/base/find_action.h>
#include <cgv/render/view.h>
#include <cgv/data/import.h>
#include <cgv/utils/big_binary_file.h>
#include <cgv/base/abst_signal.h>
#include <cgv/base/action.h>
#include <cgv/base/bool_combiner.h>
#include <cgv/base/named.h>
#include <cgv/base/register.h>
#include <cgv/base/traverser.h>
#include <cgv/data/data_view.h>
#include <cgv/gui/provider.h>
#include <cgv/gui/gui_driver.h>
#include <cgv/media/image/image_reader.h>
#include <cgv/media/image/image_writer.h>
#include <cgv/utils/scan.h>
#include <cgv/utils/convert.h>
#include <cgv/utils/advanced_scan.h>
#include <cgv/type/variant.h>
#include <cgv/type/info/type_interface.h>
#include <cgv/type/info/compound_interface.h>
#include <cgv/type/info/name_type.h>
#include <cgv/type/info/type_name.h>
#include <cgv/type/info/type_id.h>
#include <cgv/utils/bit_operations.h>
#include <cgv/utils/file.h>
#include <cgv/utils/dir.h>
#include <cgv/gui/application.h>
#include <cgv/gui/trigger.h>
#include <cgv/gui/event_handler.h>
#include <cgv/base/base.h>
#include <cgv/base/base_generator.h>
#include <cgv/type/variant.h>
#include <cgv/utils/convert.h>
#include <cgv/gui/layout.h>
#include <cgv/gui/resizable.h>
#include <cgv/gui/layout_inline.h>
#include <cgv/gui/layout_spacings.h>
#include <cgv/gui/layout_table.h>
#include <cgv/gui/mouse_event.h>
#include <cgv/gui/provider.h>
#include <cgv/os/mutex.h>
#include <cgv/gui/gui_creator.h>
#include <cgv/gui/provider.h>
#include <cgv/math/solve_polynom.h>
#include <cgv/media/font/font.h>
#include <cgv/media/font/font_server.h>
#include <cgv/media/font/font_server.h>
#include <cgv/utils/ostream_printf.h>
#include <cgv/type/info/compound_interface_impl.h>
#include <cgv/type/info/enum_interface_impl.h>
#include <cgv/data/import.h>
#include <cgv/gui/file_dialog.h>
#include <cgv/type/standard_types.h>
#include <cgv/type/info/type_interface_impl.h>
#include <cgv/type/info/type_interface_traits.h>
#include <cgv/type/info/name_type.h>
#include <cgv/type/info/compound_interface.h>
#include <cgv/type/info/enum_interface.h>
#include <cgv/type/info/serialization_interface.h>
#include <cgv/math/random.h>
#include <cgv/utils/dir.h>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <stack>
#include <set>
#include <sstream>
#include <limits>
#include <fstream>
#include <time.h>
#include <stdlib.h>
#include <memory.h>