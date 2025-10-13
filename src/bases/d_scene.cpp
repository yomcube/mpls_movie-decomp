#include "game/framework/f_profile.hpp"
#include <game/bases/d_scene.hpp>
#include <game/framework/f_base.hpp>

extern "C" ProfileName lbl_8023FE38;
extern "C" dScene_c *fn_800072D0(unsigned short, unsigned long, unsigned short); // d/fBase_c::createRoot

dScene_c::dScene_c() {}

int dScene_c::preCreate() {
    if (fBase_c::preCreate() == NOT_READY) {
        return NOT_READY;
    }
    if (lbl_8023FE38 != 0) {
        lbl_8023FE38 -= 1;
        return NOT_READY;
    }
    return SUCCEEDED;
}

int dScene_c::preDelete() {
    return fBase_c::preDelete() != NOT_READY;
}

int dScene_c::preDraw() {
    return fBase_c::preDraw() != NOT_READY;
}

void dScene_c::setStartScene() {
    m_nextScene = 11;
    m_otherSceneFlg = 0;
}

dScene_c *dScene_c::createNextScene() {
    if (m_otherSceneFlg || m_nextScene == fProfile::INVALID) {
        return nullptr;
    }

    dScene_c *newScene = (dScene_c *) fn_800072D0(m_nextScene, 0, SCENE);
    if (newScene != nullptr) {
        m_nextScene = fProfile::INVALID;
        m_otherSceneFlg = true;
        return newScene;
    }

    return nullptr;
}



dScene_c::~dScene_c() {}
