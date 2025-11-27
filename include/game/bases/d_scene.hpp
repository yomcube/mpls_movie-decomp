#pragma once
#include "game/framework/f_profile.hpp"
#include <game/bases/d_base.hpp>

class dScene_c : public fBase_c {
public:
    dScene_c();
    virtual int preCreate();
    virtual void postCreate(fBase_c::MAIN_STATE_e);
    virtual int preDelete();
    virtual void postDelete(fBase_c::MAIN_STATE_e);
    virtual int preExecute();
    virtual void postExecute(fBase_c::MAIN_STATE_e);
    virtual int preDraw();
    virtual void postDraw(fBase_c::MAIN_STATE_e);

    static void setStartScene();
    static dScene_c *createNextScene(); ///< Creates and returns a root base for the next scene.

    /// @brief Attempts to prepare the transition to a new scene.
    /// @details If the game is resetting, the transition is not performed unless forceChange is @p true.
    /// @param nextScene The next scene's profile name.
    /// @param param The next scene's parameters.
    /// @param forceChange If the transition should always be performed.
    static void setNextScene(ProfileName nextScene, unsigned long param, bool forceChange);

    void *mpPhase; // TODO: sPhase_c *

    static u32 mPara; ///< The parameters for the next scene.
    static ProfileName m_nextScene; ///< The profile name of the next scene.
    static ProfileName m_nowScene; ///< The profile name of the current scene.
    static ProfileName m_oldScene; ///< The profile name of the previous scene.
    static bool m_otherSceneFlg; ///< Whether the next scene has already been created.

    static u16 m_fadeInFrame; ///< The duration of the next fade-in.
    static u16 m_fadeOutFrame; ///< The duration of the next fade-out.
    static u16 m_isAutoFadeIn; ///< If a fade-in should automatically be performed on scene load.
};
