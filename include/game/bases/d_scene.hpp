#pragma once
#include <game/bases/d_base.hpp>

class dScene_c : public dBase_c {
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
};
