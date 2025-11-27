#pragma once
#include <types.h>

struct mVec3_c {
    f32 x, y, z;
};

struct mAng {
    mAng() {}
    mAng(s16 x) : mAngle(x) {}
    operator s16() { return mAngle; }
    bool chase(short target, short step);
    mAng abs() const;
    mAng &operator+=(const mAng &v) { mAngle += v.mAngle; return *this; }
    mAng &operator-=(const mAng &v) { mAngle -= v.mAngle; return *this; }
    mAng operator+() const { return *this; }
    mAng operator-() const { return mAng(-mAngle); }
    mAng operator+(const mAng &v) const { return mAng(mAngle + v.mAngle); }
    mAng operator-(const mAng &v) const { return mAng(mAngle - v.mAngle); }
    float sin() const;
    float cos() const;
    s16 mAngle;
};

class mAng3_c {
public:
    mAng3_c() {}
    mAng3_c(const s16 *p) { x = p[0]; y = p[1]; z = p[2]; }
    mAng3_c(s16 fx, s16 fy, s16 fz) { x = fx; y = fy; z = fz; }
    static mAng3_c onlyY(s16 fy) {
        mAng3_c tmp;
        tmp.y = fy; tmp.x = tmp.z = mAng(0);
        return tmp;
    }
    mAng3_c(mAng fx, mAng fy, mAng fz) : x(fx), y(fy), z(fz) {}
    mAng3_c(const mAng3_c &v) : x(v.x), y(v.y), z(v.z) {}
    mAng3_c *operator=(const mAng3_c &v) { x = v.x; y = v.y; z = v.z; return this; }
    mAng3_c &operator+=(const mAng3_c &v) { x += v.x; y += v.y; z += v.z; return *this; }
    mAng3_c &operator-=(const mAng3_c &v) { x -= v.x; y -= v.y; z -= v.z; return *this; }
    mAng3_c operator+() const { return *this; }
    mAng3_c operator-() const { return mAng3_c(-x, -y, -z); }
    mAng3_c operator+(const mAng3_c &v) const { return mAng3_c(x + v.x, y + v.y, z + v.z); }
    mAng3_c operator-(const mAng3_c &v) const { return mAng3_c(x - v.x, y - v.y, z - v.z); }
    mAng x;
    mAng y;
    mAng z;
    static mAng3_c Zero;
    static mAng3_c Ex;
    static mAng3_c Ey;
    static mAng3_c Ez;
};

typedef struct _GXColor {
    u8 r, g, b, a;
} GXColor;

namespace dReset {
    class Manage_c {
    public:
        enum Mode_e {
            NORMAL, SOFT_RESET, HBM_WAIT, DISK_WAIT, FATAL_ERROR, SAFETY_WAIT, NO_CHANGE
        };
        enum Exec_e {
            RESTART_GAME, REBOOT_SYSTEM, RETURN_WII_MENU, RETURN_DATA_MANAGER, POWER_OFF, NONE
        };
        void SetSoftResetFinish();
        void SetSoftResetScene();
        void PostDeleteScene();
        void BootComplete();
        void PermitSoftReset(bool);
        bool IsFaderBlank() const;
        void ActiveSaveWindow(bool);
        bool isSafetyWait() const { return mModeInit == SAFETY_WAIT || mModeProc == SAFETY_WAIT; }
        void/*EGG::Heap*/ *mpHeap;
        void/*EGG::ColorFader*/ *mpColorFader;
        int mModeProc;
        int mModeInit;
        int mPrevMode;
        int mExecMode;
        bool mHbmReset;
        bool mHbmReturnMenu;
        bool mResetCallbackCalled;
        bool mPowerCallbackCalled;
        bool mInteriorReturnDataManager;
        u32 mHbmResetTypeMaybe;
        u32 mHbmPowerOffTypeMaybe;
        int mSoftResetStateMaybe;
        bool mSoftResetPermitted;
        bool mUnknown2D;
        bool mSoftResetRequested;
        bool mFadeOutRequested;
        bool mUnknown30;
        void *mpAudioResetFunc;
        void *mpAudioExitFunc;
        bool mBootCompleted;
        bool mExecutingFade;
        bool mUnknown3E;
        static dReset::Manage_c* GetInstance();
    };
} // namespace dReset
