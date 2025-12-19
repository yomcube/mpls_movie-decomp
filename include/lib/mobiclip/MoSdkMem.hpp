#pragma once
#include <lib/rvl/mem/MEMHeapCommon.h>
#include <types.h>

void MOiSetAllocator(MEMAllocator*);
MEMAllocator* MOiGetAllocator();
void* MOiAlloc(u32);
void MOiFree(void*);
