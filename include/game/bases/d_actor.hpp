#pragma once
#include <game/bases/d_base.hpp>
#include <game/framework/f_base.hpp>
#include <_dummy_classes.hpp>

class dActor_c : public fBase_c {
public:
    dActor_c();
    virtual int preCreate();
    virtual void postCreate(fBase_c::MAIN_STATE_e);
    virtual int preDelete();
    virtual void postDelete(fBase_c::MAIN_STATE_e);
    virtual int preExecute();
    virtual void postExecute(fBase_c::MAIN_STATE_e);
    virtual int preDraw();
    virtual void postDraw(fBase_c::MAIN_STATE_e);

    static void setTmpCtData(const mVec3_c*, const mAng3_c*);
    static dActor_c *construct(unsigned short, dBase_c*, unsigned long, const mVec3_c*, const mAng3_c*);

    mVec3_c mPos;
    mVec3_c mLastPos;
    mAng3_c mAngle;
    mAng3_c mAngle3D;
    u8 _padding[0x18];

    static const mVec3_c *m_tmpCtPosP;
    static const mAng3_c *m_tmpCtAngleP;  
};
