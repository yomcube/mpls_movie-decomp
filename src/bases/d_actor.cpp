#include <game/bases/d_actor.hpp>
#include <game/bases/d_base.hpp>
#include <game/framework/f_base.hpp>
#include <types.h>

const mVec3_c *dActor_c::m_tmpCtPosP;
const mAng3_c *dActor_c::m_tmpCtAngleP;

dActor_c::dActor_c() {
    if (m_tmpCtPosP != nullptr) {
        mPos = *m_tmpCtPosP;
    }
    if (m_tmpCtAngleP != nullptr) {
        mAngle = *m_tmpCtAngleP;
        mAngle3D = *m_tmpCtAngleP;
    }
}

int dActor_c::preCreate() {
    if (fBase_c::preCreate() == NOT_READY) {
        return NOT_READY;
    }
    mLastPos = mPos;
    return SUCCEEDED;
}
void dActor_c::postCreate(fBase_c::MAIN_STATE_e state) {
    return fBase_c::postCreate(state);
}

int dActor_c::preDelete() {
    return fBase_c::preDelete() != NOT_READY;
}
void dActor_c::postDelete(fBase_c::MAIN_STATE_e state) {
    return fBase_c::postDelete(state);
}

int dActor_c::preExecute() {
    if (fBase_c::preExecute() == NOT_READY) {
        return NOT_READY;
    }
    mLastPos = mPos;
    return SUCCEEDED;
}
void dActor_c::postExecute(fBase_c::MAIN_STATE_e state) {
    return fBase_c::postExecute(state);
}

int dActor_c::preDraw() {
    return fBase_c::preDraw() != NOT_READY;
}
void dActor_c::postDraw(fBase_c::MAIN_STATE_e state) {
    return fBase_c::postDraw(state);
}

void dActor_c::setTmpCtData(const mVec3_c* pos, const mAng3_c* ang) {
    m_tmpCtPosP = pos;
    m_tmpCtAngleP = ang;
}

dActor_c *dActor_c::construct(ProfileName profName, dBase_c *parent, unsigned long param, const mVec3_c *position, const mAng3_c *rotation) {
    setTmpCtData(position, rotation);
    return (dActor_c*)dBase_c::createBase(profName, parent, param, 2);
}

dActor_c::~dActor_c() {}
