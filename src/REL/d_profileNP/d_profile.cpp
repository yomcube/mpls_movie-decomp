#include <game/bases/d_profile.hpp>

const fProfile::fBaseProfile_c *profileList[] = {
    &g_profile_P0,
    &g_profile_P1,
    &g_profile_P2,
    &g_profile_P3,
    &g_profile_P4,
    &g_profile_P5,
    &g_profile_P6,
    &g_profile_P7,
    &g_profile_P8,
    &g_profile_P9,
    &g_profile_P10,
    &g_profile_P11,
    &g_profile_P12
};

void finalizeProlog() {
    fProfile::sProfileList = &profileList;
}

void finalizeEpilog() {
    fProfile::sProfileList = nullptr;
}
