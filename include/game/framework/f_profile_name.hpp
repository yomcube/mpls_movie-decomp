#pragma once

namespace fProfile {

    /// @brief A name of a profile. Can be used to index into fProfile::sProfileList.
    /// @ingroup profile
    enum PROFILE_NAME_e {
        PROFILE_0,
        PROFILE_1,
        PROFILE_2,
        PROFILE_3,
        PROFILE_4,
        PROFILE_5,
        PROFILE_6,
        PROFILE_7,
        PROFILE_8,
        PROFILE_9,
        PROFILE_10,
        PROFILE_11,
        PROFILE_12,

        // Not a profile, only used to get the number of profiles!
        /// @brief The total number of profiles.
        /// @details This value varies across New Super Mario Bros. Wii versions due to profiles added
        /// later in development.
        PROFILE_COUNT,
        INVALID = PROFILE_COUNT
    };

    namespace DRAW_ORDER {
        /// @brief The draw order for the profiles.
        /// @ingroup profile
        enum DRAW_ORDER_e {
            PROFILE_0,
            PROFILE_1,
            PROFILE_2,
            PROFILE_3,
            PROFILE_4,
            PROFILE_5,
            PROFILE_6,
            PROFILE_7,
            PROFILE_8,
            PROFILE_9,
            PROFILE_10,
            PROFILE_11,
            PROFILE_12
        };
    }
}
