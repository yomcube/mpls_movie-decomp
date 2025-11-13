#include <game/bases/d_a_sample.hpp>
#include <game/framework/f_profile.hpp>

BASE_PROFILE(AC_SAMPLE, daSample_c);

int daSample_c::create() { return 1; }
int daSample_c::doDelete() { return 1; }
int daSample_c::execute() { return 1; }
int daSample_c::draw() { return 1; }

daSample_c::~daSample_c() {}
