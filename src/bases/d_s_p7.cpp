#include <game/bases/d_s_p7.hpp>
#include <game/framework/f_base.hpp>
#include <game/framework/f_profile.hpp>

BASE_PROFILE(P7, dScP7_c);

int dScP7_c::create() {
    return SUCCEEDED;
}
int dScP7_c::doDelete() {
    return SUCCEEDED;
}
extern u32 lbl_8023FE64;
int dScP7_c::execute() {
    lbl_8023FE64 = 1;
    return SUCCEEDED;
}
int dScP7_c::draw() {
    return SUCCEEDED;
}
void dScP7_c::deleteReady() {}

dScP7_c::~dScP7_c() {}
