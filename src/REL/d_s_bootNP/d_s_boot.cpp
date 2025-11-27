#include <game/bases/d_s_boot.hpp>
#include <game/framework/f_base.hpp>
#include <game/framework/f_profile.hpp>

ACTOR_PROFILE(BOOT, dScBoot_c, 0);

int dScBoot_c::draw() { return SUCCEEDED; }

dScBoot_c::~dScBoot_c() {}
