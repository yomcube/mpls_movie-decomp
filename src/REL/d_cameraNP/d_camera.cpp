#include <game/bases/d_camera.hpp>
#include <game/bases/d_heap_alloc.hpp>
#include <game/framework/f_profile.hpp>

extern "C" void fn_8000AC30(void *);
extern "C" void fn_80132400(float, void *);

void fn_2_F0(unkstruct0 *r3) {
    r3->_0 = &lbl_2_data_8;
    r3->_4 = 1;
}

void *fn_2_110(void *ptr, int param2) {
    if ((ptr != nullptr) && (param2 > 0)) {
        delete ptr;
    }
    return ptr;
}

CUSTOM_BASE_PROFILE(P12, dCamera_c, 12, 11);

int dCamera_c::create() {
    fn_8000AC30(this);
    fn_80132400(lbl_2_rodata_0[4], &_0);
    _18 = lbl_2_rodata_0[2];
    _1C = lbl_2_rodata_0[5];
    return 1;
}

int dCamera_c::doDelete() {
    fn_8000AC30(nullptr);
    return 1;
}

int dCamera_c::execute() {}
int dCamera_c::draw() {}

int dCamera_c::fn_2_4D0() {
    _110 = lbl_2_rodata_1C;
    _114 = lbl_2_rodata_0[0];
    _118 = lbl_2_rodata_0[0];
    _11C = lbl_2_rodata_0[0];
    _120 = -0x2500;
    _122 = 0;
    return 1;
}

dCamera_c::~dCamera_c() {}
