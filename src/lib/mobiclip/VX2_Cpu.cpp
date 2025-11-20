#include <lib/mobiclip/VX2_Cpu.hpp>
#include <types.h>

void *GetCaps_C() {
    return nullptr;
}
void ClearState_C() {}
void InitCpu(CpuFunction& cpufunction) {
    cpufunction.getcaps_c = (void *)GetCaps_C;
    cpufunction.clearstate_c = (void *)ClearState_C;
}
