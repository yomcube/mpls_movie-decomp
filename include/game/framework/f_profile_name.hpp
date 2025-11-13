#pragma once

namespace fProfile {

    /// @brief A name of a profile. Can be used to index into fProfile::sProfileList.
    /// @ingroup profile
    enum PROFILE_NAME_e {
        STAGE,
        PROFILE_1,
        PROFILE_2,
        PROFILE_3,
        PROFILE_4,
        PROFILE_5,
        PROFILE_6,
        PROFILE_7,
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
            PROFILE_1,
            PROFILE_2,
            PROFILE_3,
            PROFILE_4,
            PROFILE_5,
            PROFILE_6,
            PROFILE_7,
            AC_SAMPLE,
            ROOM,
            BOOT,
            SELECT,
            CAMERA,
            STAGE
        };
    }
}
