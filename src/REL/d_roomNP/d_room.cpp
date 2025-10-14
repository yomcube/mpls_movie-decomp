#include <game/bases/d_room.hpp>
#include <game/framework/f_base.hpp>
#include <game/framework/f_profile.hpp>

CUSTOM_BASE_PROFILE(P9, dRoom_c, 9, 8);

int dRoom_c::create() { return SUCCEEDED; }
int dRoom_c::doDelete() { return SUCCEEDED; }
int dRoom_c::execute() { return SUCCEEDED; }
int dRoom_c::draw() { return SUCCEEDED; }

dRoom_c::~dRoom_c() {}
