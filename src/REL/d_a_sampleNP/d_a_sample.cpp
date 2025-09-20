#include <game/bases/d_a_sample.hpp>
#include <game/framework/f_profile.hpp>

CUSTOM_BASE_PROFILE(P8, daSample_c, 8, 7);

int daSample_c::create() {
    fn_7_180();
    return 1;
}
int daSample_c::doDelete() { return 1; }
int daSample_c::execute() { return 1; }
int daSample_c::draw() { return 1; }

daSample_c::~daSample_c() {}

void fn_7_180() {}
