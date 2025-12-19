#pragma once

namespace fProfile {

    /// @brief A name of a profile. Can be used to index into fProfile::sProfileList.
    /// @ingroup profile
    enum PROFILE_NAME_e {
        STAGE,
        P1,
        P2,
        P3,
        P4,
        P5,
        P6,
        P7,
        AC_SAMPLE,
        ROOM,
        SELECT,
        BOOT,
        CAMERA,

        // Not a profile, only used to get the number of profiles!
        /// @brief The total number of profiles.
        PROFILE_COUNT,
        INVALID = PROFILE_COUNT
    };

    namespace DRAW_ORDER {
        /// @brief The draw order for the profiles.
        /// @ingroup profile
        enum DRAW_ORDER_e {
            P1,
            P2,
            P3,
            P4,
            P5,
            P6,
            P7,
            AC_SAMPLE,
            ROOM,
            BOOT,
            SELECT,
            CAMERA,
            STAGE
        };
    }
}
