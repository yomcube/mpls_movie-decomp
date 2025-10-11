#include <game/bases/d_profile.hpp>

const fProfile::fBaseProfile_c *profileList[] = {
    &g_profile_STAGE,
    &g_profile_P1,
    &g_profile_P2,
    &g_profile_P3,
    &g_profile_P4,
    &g_profile_P5,
    &g_profile_P6,
    &g_profile_P7,
    &g_profile_AC_SAMPLE,
    &g_profile_ROOM,
    &g_profile_SELECT,
    &g_profile_BOOT,
    &g_profile_CAMERA
};

void finalizeProlog() {
    fProfile::sProfileList = &profileList;
}

void finalizeEpilog() {
    fProfile::sProfileList = nullptr;
}
