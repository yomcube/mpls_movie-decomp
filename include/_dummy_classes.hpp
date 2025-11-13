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
