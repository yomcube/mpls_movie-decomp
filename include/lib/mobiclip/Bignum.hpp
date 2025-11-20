#pragma once
#include <lib/mobiclip//Digits.hpp>
#include <types.h>

class Bignum {
public:
    Bignum();
    ~Bignum();

    Digits *digits;
    u32 _4;
    u32 _8;
    u32 _C;
};

u8 BitsUsed(u32);
