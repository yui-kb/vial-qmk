// Copyright 2023 Yui (@Yui)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define USB_CFG_DMINUS_BIT 0
#define USB_COUNT_SOF 0

#define USB_INTR_CFG_SET (1 << ISC01)
#define USB_INTR_ENABLE_BIT INT0
#define USB_INTR_PENDING_BIT INTF0
#define USB_INTR_VECTOR INT0_vect
