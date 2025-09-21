#pragma once
#include <game/framework/f_base.hpp>

extern void *lbl_2_data_8;
struct unkstruct0 {
    void *_0;
    s8 _4;
};
void fn_2_F0(unkstruct0 *);
void *fn_2_110(void *ptr, int param2); // NSMBW FUN_80913e10

const float lbl_2_rodata_0[6] = {
    0.0f, 10.0f, 1.0f, 150.0f, 50.0f, 100000.0f
};
const float lbl_2_rodata_18 = 20.0f;
const float lbl_2_rodata_1C = 180.0f;

class dCamera_c : public fBase_c {
public:
    /* 0x000 0x064 */ void *_0;
    /* 0x004 0x068 */ u8 _pad0[0x18 - 0x4];
    /* 0x018 0x07C */ float _18;
    /* 0x01C 0x080 */ float _1C;
    /* 0x020 0x084 */ u8 _pad1[0x110 - 0x20];
    /* 0x110 0x174 */ float _110;
    /* 0x114 0x178 */ float _114;
    /* 0x118 0x17C */ float _118;
    /* 0x11C 0x180 */ float _11C;
    /* 0x120 0x184 */ s16 _120;
    /* 0x124 0x186 */ s16 _122;

	virtual int create();
	virtual int doDelete();
	virtual int execute();
	virtual int draw();

    int fn_2_4D0();
	
	~dCamera_c();
};

void fn_2_570(); // NSMBW FUN_80914630
