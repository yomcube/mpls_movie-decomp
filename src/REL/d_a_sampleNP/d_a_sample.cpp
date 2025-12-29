#include <game/bases/d_a_sample.hpp>
#include <game/framework/f_base.hpp>
#include <game/framework/f_profile.hpp>

BASE_PROFILE(AC_SAMPLE, dAcSample_c);

int dAcSample_c::create() {
    fn_7_180();
    return SUCCEEDED;
}
int dAcSample_c::doDelete() { return SUCCEEDED; }
int dAcSample_c::execute() { return SUCCEEDED; }
int dAcSample_c::draw() { return SUCCEEDED; }

dAcSample_c::~dAcSample_c() {}

void fn_7_180() {}
