// Copyright 2022 Sleepdealer (@Sleepdealr)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#pragma once

#define AUDIO_PIN B7
#ifdef AUDIO_ENABLE
#   define ZELDA_TREASURE  \
    Q__NOTE(_G5),     \
    Q__NOTE(_A5),    \
    Q__NOTE(_B5),     \
    Q__NOTE(_CS6),    \
    Q__NOTE(_G5),     \
    Q__NOTE(_A5),    \
    Q__NOTE(_B5),     \
    Q__NOTE(_CS6),    \
    Q__NOTE(_GS5),     \
    Q__NOTE(_AS5),     \
    Q__NOTE(_C6),     \
    Q__NOTE(_D6),  \
    Q__NOTE(_GS5),     \
    Q__NOTE(_AS5),     \
    Q__NOTE(_C6),     \
    Q__NOTE(_D6), \
    Q__NOTE(_A5),    \
    Q__NOTE(_B5),     \
    Q__NOTE(_CS6),    \
    Q__NOTE(_DS6),  \
    Q__NOTE(_A5),    \
    Q__NOTE(_B5),     \
    Q__NOTE(_CS6),    \
    Q__NOTE(_DS6),  \
    Q__NOTE(_AS5),    \
    Q__NOTE(_C6),     \
    Q__NOTE(_D6),    \
    Q__NOTE(_E6),  \
    Q__NOTE(_AS5),    \
    Q__NOTE(_C6),     \
    Q__NOTE(_D6),    \
    Q__NOTE(_E6),  \
    Q__NOTE(_B5),    \
    Q__NOTE(_CS6),     \
    Q__NOTE(_DS6),    \
    Q__NOTE(_F6),  \
    Q__NOTE(_C6),    \
    Q__NOTE(_D6),     \
    Q__NOTE(_E6),    \
    Q__NOTE(_FS6),  \
    Q__NOTE(_CS6),    \
    Q__NOTE(_DS6),     \
    Q__NOTE(_F6),    \
    Q__NOTE(_G6),  \
    Q__NOTE(_D6),     \
    Q__NOTE(_E6),    \
    Q__NOTE(_FS6),  \
    Q__NOTE(_GS6),  \
    S__NOTE(_REST),   \
    Q__NOTE(_A6),  \
    Q__NOTE(_AS6),     \
    Q__NOTE(_B6),    \
    H__NOTE(_C7)
    #define STARTUP_SONG SONG(ZELDA_TREASURE)
#endif
