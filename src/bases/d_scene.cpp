
#include "game/framework/f_profile.hpp"
#include <game/bases/d_scene.hpp>
#include <game/bases/d_base.hpp>
#include <game/framework/f_profile_name.hpp>
#include <game/framework/f_base.hpp>
#include <_dummy_classes.hpp>

ProfileName dScene_c::m_nextScene = fProfile::PROFILE_COUNT;
bool dScene_c::m_otherSceneFlg = true;
ProfileName dScene_c::m_nowScene = 0x1E;
ProfileName dScene_c::m_oldScene = 0x1E;

dScene_c::dScene_c() {
    mProcControl |= (ROOT_DISABLE_EXECUTE | ROOT_DISABLE_DRAW);
}

int dScene_c::preCreate() {
    if (fBase_c::preCreate() == NOT_READY) {
        return 0;
    }
    if (m_isAutoFadeIn) {
        m_isAutoFadeIn -= 1;
        return 0;
    }
    return 1;
}

void dScene_c::postCreate(fBase_c::MAIN_STATE_e state) {
    if (state == SUCCESS) {
        dReset::Manage_c::GetInstance()->SetSoftResetFinish();
    }
    fBase_c::postCreate(state);
}

int dScene_c::preDelete() {
    return fBase_c::preDelete() != NOT_READY;
}

void dScene_c::postDelete(fBase_c::MAIN_STATE_e state) {
    if (state == SUCCESS) {
        m_otherSceneFlg = 0;
        dReset::Manage_c::GetInstance()->PostDeleteScene();
    }
    fBase_c::postDelete(state);
}

void dScene_c::postExecute(fBase_c::MAIN_STATE_e state) {
    if (state != CANCELED) {
        dReset::Manage_c::GetInstance()->SetSoftResetScene();
    }
    fBase_c::postExecute(state);
}

int dScene_c::preDraw() {
    return fBase_c::preDraw() != NOT_READY;
}

void dScene_c::postDraw(MAIN_STATE_e state) {
    fBase_c::postDraw(state);
}

void dScene_c::setStartScene() {
    m_nextScene = fProfile::BOOT;
    m_otherSceneFlg = 0;
}

dScene_c *dScene_c::createNextScene() {
    if (m_otherSceneFlg || m_nextScene == fProfile::INVALID) {
        return nullptr;
    }

    dScene_c *newScene = (dScene_c *) dBase_c::createRoot(m_nextScene, 0, SCENE);
    if (newScene != nullptr) {
        m_nextScene = 0xd;
        m_otherSceneFlg = true;
        return newScene;
    }

    return nullptr;
}

void dScene_c::setNextScene(ProfileName nextScene, unsigned long param, bool forceChange) {
    m_nextScene = nextScene;
    m_fadeInFrame = forceChange;
    m_fadeOutFrame = param;
}
