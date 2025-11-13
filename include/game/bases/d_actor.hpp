#pragma once
#include <game/framework/f_base.hpp>

// TODO: proper inheritance, etc.
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
};
