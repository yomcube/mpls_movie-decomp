#include <game/bases/d_s_p1.hpp>
#include <game/framework/f_base.hpp>
#include <game/framework/f_profile.hpp>

extern void fn_8000B680();
extern u32 lbl_8023FDE8;
namespace dSys_c {
    extern void setFrameRate(unsigned char);
}

BASE_PROFILE(P1, dScP1_c);

int dScP1_c::create() {
    fn_8000B680();
    dSys_c::setFrameRate(1);
    return SUCCEEDED;
}
int dScP1_c::doDelete() {
    lbl_8023FDE8 = 0;
    return SUCCEEDED;
}
int dScP1_c::execute() {
    fn_8000B680();
    return SUCCEEDED;
}
int dScP1_c::draw() {
    return SUCCEEDED;
}
void dScP1_c::deleteReady() {}

dScP1_c::~dScP1_c() {}
