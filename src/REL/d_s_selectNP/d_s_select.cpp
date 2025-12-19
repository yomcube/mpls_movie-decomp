#include "types.h"
#include <game/bases/d_s_select.hpp>
#include <game/framework/f_base.hpp>
#include <game/framework/f_profile.hpp>

extern void (*lbl_8023FDE8)();

extern void fn_8000AC10(u8);
namespace dSys_c {
    extern void setFrameRate(unsigned char);
}

BASE_PROFILE(SELECT, dScSelect_c);

void dScSelect_c::callback() {}

int dScSelect_c::create() {
    lbl_8023FDE8 = &callback;
    dSys_c::setFrameRate(1);
    return SUCCEEDED;
}

int dScSelect_c::doDelete() {
    lbl_8023FDE8 = nullptr;
    return SUCCEEDED;
}
int dScSelect_c::execute() {
    fn_8000AC10(unk_64);
    return SUCCEEDED;
}

int dScSelect_c::draw() {
    return SUCCEEDED;
}

dScSelect_c::~dScSelect_c() {}
