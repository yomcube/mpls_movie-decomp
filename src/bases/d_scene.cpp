#include "game/framework/f_profile.hpp"
#include "game/mLib/m_fader_base.hpp"
#include <game/bases/d_scene.hpp>
#include <game/bases/d_fader.hpp>
#include <game/bases/d_reset.hpp>
#include <game/framework/f_base.hpp>
#include <game/framework/f_profile_name.hpp>
#include <game/mLib/m_fader.hpp>

extern "C" ProfileName lbl_8023FE38;
extern "C" dScene_c *fn_800072D0(unsigned short, unsigned long, unsigned short); // createRoot__7dBase_cFUsUlUs (?)
extern "C" u16 lbl_8023F59E, lbl_8023FE30, lbl_8023F59C;

dScene_c::dScene_c() {
    mProcControl |= ROOT_DISABLE_EXECUTE | ROOT_DISABLE_DRAW;
}

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

void dScene_c::postCreate(fBase_c::MAIN_STATE_e state) {
    if (state == SUCCESS) {
        dReset::Manage_c *manage = dReset::Manage_c::GetInstance();
        manage->SetSoftResetFinish();
    }
    fBase_c::postCreate(state);
}

int dScene_c::preDelete() {
    return fBase_c::preDelete() != NOT_READY;
}

void dScene_c::postDelete(fBase_c::MAIN_STATE_e state) {
    if (state == SUCCESS) {
        m_otherSceneFlg = 0;
        dReset::Manage_c *manage = dReset::Manage_c::GetInstance();
        manage->PostDeleteScene();
    }
    fBase_c::postDelete(state);
}

int dScene_c::preExecute() {
    if (fBase_c::preExecute() == NOT_READY) {
        return NOT_READY;
    }

    if (m_nextScene != fProfile::INVALID) {
        // Prepare to go to next scene
        if (mFader_c::isStatus(mFaderBase_c::HIDDEN)) {
            dFader_c::startFadeOut(m_fadeOutFrame); // Initiate fade out if not started yet
            mFader_c::mFader->setFrame(lbl_8023F59E);
            mFader_c::mFader->fadeOut();
        } else if (mFader_c::isStatus(mFaderBase_c::OPAQUE)) {
            deleteRequest(); // Delete this scene if the fade has completed
        }
        return NOT_READY;
    }

    if (isProcControlFlag(ROOT_DISABLE_EXECUTE)) {
        if (!checkChildProcessCreateState()) {
            // We may run the execute and draw steps of this base and its children from now on
            clearProcControlFlag(ROOT_DISABLE_EXECUTE);
            clearProcControlFlag(ROOT_DISABLE_DRAW);
        }
        return NOT_READY;
    }

    if (mFader_c::isStatus(mFaderBase_c::OPAQUE)) {
        // Begin fade in if needed, also initialize sound objects
        dFader_c::startFadeOut(lbl_8023FE30);
        mFader_c::mFader->setFrame(lbl_8023F59C);
        mFader_c::mFader->fadeIn();
    }

    return SUCCEEDED;
}

void dScene_c::postExecute(fBase_c::MAIN_STATE_e state) {
    if (state != CANCELED) {
        dReset::Manage_c *manage = dReset::Manage_c::GetInstance();
        manage->SetSoftResetScene();
    }
    fBase_c::postExecute(state);
}

int dScene_c::preDraw() {
    return fBase_c::preDraw() != NOT_READY;
}

void dScene_c::postDraw(fBase_c::MAIN_STATE_e state) {
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

    dScene_c *newScene = (dScene_c *) fn_800072D0(m_nextScene, 0, SCENE);
    if (newScene != nullptr) {
        m_nextScene = fProfile::INVALID;
        m_otherSceneFlg = true;
        return newScene;
    }

    return nullptr;
}



dScene_c::~dScene_c() {}
