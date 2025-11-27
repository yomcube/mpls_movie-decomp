#pragma once
#include <game/framework/f_base.hpp>
#include <types.h>

class dBase_c {
public:
    static int loadAsyncCallback();
    static void unloadCallback();
    static void initLoader();
    static dBase_c *createBase(ProfileName profName, dBase_c *parent, unsigned long param, u8 groupType);
    static dBase_c *createRoot(ProfileName profName, unsigned long param, u8 groupType);
};
