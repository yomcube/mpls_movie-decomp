#include "game/framework/f_profile_name.hpp"
#include <game/bases/d_camera.hpp>
#include <game/framework/f_base.hpp>
#include <game/framework/f_profile.hpp>

BASE_PROFILE(CAMERA, dCamera_c);

extern "C" void fn_8000AC30();
int dCamera_c::execute() {
    fn_8000AC30();
    return SUCCEEDED;
}

int dCamera_c::ctorCont() {
    _174 = lbl_2_rodata_1C;
    _178 = lbl_2_rodata_0[0];
    _17C = lbl_2_rodata_0[0];
    _180 = lbl_2_rodata_0[0];;
    _184 = -0x2500;
    _186 = 0;
    return SUCCEEDED;
}

dCamera_c::~dCamera_c() {}
