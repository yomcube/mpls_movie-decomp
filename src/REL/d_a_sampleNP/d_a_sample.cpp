#include <game/bases/d_a_sample.hpp>
#include <game/framework/f_base.hpp>
#include <game/framework/f_profile.hpp>

BASE_PROFILE(AC_SAMPLE, daSample_c);

int daSample_c::create() {
    fn_7_180();
    return SUCCEEDED;
}
int daSample_c::doDelete() { return SUCCEEDED; }
int daSample_c::execute() { return SUCCEEDED; }
int daSample_c::draw() { return SUCCEEDED; }

daSample_c::~daSample_c() {}

void fn_7_180() {}
