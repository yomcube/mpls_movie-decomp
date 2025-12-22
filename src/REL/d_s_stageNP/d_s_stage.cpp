#include <game/bases/d_s_stage.hpp>
#include <game/framework/f_base.hpp>
#include <game/framework/f_profile.hpp>

extern void fn_8000C4B0();
extern void fn_8000C500();
extern void fn_8000B680();

BASE_PROFILE(STAGE, dScStage_c);

int dScStage_c::execute() {
    fn_8000C4B0();
    fn_8000C500();
    fn_8000B680();
    return SUCCEEDED;
}

int dScStage_c::draw() {
    return SUCCEEDED;
}

void dScStage_c::deleteReady() {}

dScStage_c::~dScStage_c() {}
