#include "game/framework/f_base.hpp"
#include <game/bases/d_base.hpp>
#include <types.h>

int dBase_c::loadAsyncCallback() {
    return 2;
}

void dBase_c::unloadCallback() {}

void dBase_c::initLoader() {
    fBase_c::sLoadAsyncCallback = loadAsyncCallback;
    fBase_c::sUnloadCallback = unloadCallback;
}

dBase_c *dBase_c::createBase(ProfileName profName, dBase_c *parent, unsigned long param, u8 groupType) {
    fBase_c::createChild(profName, (fBase_c*)parent, param, groupType);
}

dBase_c *dBase_c::createRoot(ProfileName profName, unsigned long param, u8 groupType) {
    fBase_c::createRoot(profName, param, groupType);
}
