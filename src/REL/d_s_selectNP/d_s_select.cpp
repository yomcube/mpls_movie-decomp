#include <game/bases/d_s_select.hpp>
#include <game/framework/f_base.hpp>
#include <game/framework/f_profile.hpp>

BASE_PROFILE(ROOM, dScSelect_c);

void dScSelect_c::callback() {}

int dScSelect_c::create() { return SUCCEEDED; }
int dScSelect_c::doDelete() { return SUCCEEDED; }
int dScSelect_c::execute() { return SUCCEEDED; }
int dScSelect_c::draw() { return SUCCEEDED; }

dScSelect_c::~dScSelect_c() {}
