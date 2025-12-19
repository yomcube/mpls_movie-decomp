#pragma once
#include <lib/mobiclip/MoSdkMem.hpp>
#include <types.h>

void DigitsSub(s32, s32, s32, s32);

void* DigitsAlloc(int size) {
    return MOiAlloc(size);
}
void DigitsFree(void* ptr) {
    if (ptr != nullptr) {
        MOiFree(ptr);
    }
}
