#pragma once
#include <types.h>
#include <game/framework/f_base.hpp>

const float lbl_2_rodata_0[6] = {
    0.0f, 10.0f, 1.0f, 150.0f, 50.0f, 100000.0f
};
const float lbl_2_rodata_18 = 20.0f;
const float lbl_2_rodata_1C = 180.0f;

class dCamera_c : public fBase_c {
public:
	virtual int create();
	virtual int doDelete();
	virtual int execute();
	virtual int draw();
	
    int ctorCont();

	~dCamera_c();

protected:
    u8 _64[0x150 - 0x64]; // TODO
    f32 _150;
    f32 _154;
    u8 _158[0x174 - 0x158];
    f32 _174;
    f32 _178;
    f32 _17C;
    f32 _180;
    s16 _184;
    u16 _186;
};
