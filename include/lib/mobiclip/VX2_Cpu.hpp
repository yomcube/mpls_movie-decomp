#pragma once

class CpuFunction {
public:
    void *getcaps_c;
    void *clearstate_c;
};

void *GetCaps_C();
void ClearState_C();
void InitCpu(CpuFunction&);
