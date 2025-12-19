#pragma once
#include <lib/mobiclip//Digits.hpp>
#include <types.h>

class Bignum {
public:
    Bignum();
    ~Bignum();

    void Prepare(int);
    void Clamp();
    void And(int);

protected:
    s32 *digits;
    s32 _4;
    s32 _8;
    u32 _C;
};

u8 BitsUsed(u32);
