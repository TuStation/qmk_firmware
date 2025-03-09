// Copyright 2025 TuSation
// SPDX-License-Identifier: GPL-2.0-or-later
#include "quantum.h"


void board_init(void) {
    // JTAG-DP Disabled and SW-DP Disabled
    RCC->APB2ENR |= 0x01;
    AFIO->MAPR = (AFIO->MAPR & ~AFIO_MAPR_SWJ_CFG_Msk) | AFIO_MAPR_SWJ_CFG_DISABLE;
}
