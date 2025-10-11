#include <game/bases/d_room.hpp>
#include <game/framework/f_profile.hpp>

CUSTOM_BASE_PROFILE(ROOM, dRoom_c, fProfile::ROOM, fProfile::DRAW_ORDER::ROOM);

int dRoom_c::create() { return 1; }
int dRoom_c::doDelete() { return 1; }
int dRoom_c::execute() { return 1; }
int dRoom_c::draw() { return 1; }

dRoom_c::~dRoom_c() {}
