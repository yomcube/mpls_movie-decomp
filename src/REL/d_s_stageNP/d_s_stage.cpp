#include <game/bases/d_s_stage.hpp>
#include <game/framework/f_base.hpp>
#include <game/framework/f_profile.hpp>

BASE_PROFILE(STAGE, dScStage_c);

int dScStage_c::draw() {
    return fBase_c::SUCCEEDED;
}

void dScStage_c::deleteReady() {}

dScStage_c::~dScStage_c() {}
