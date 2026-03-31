#pragma once

/* #define EE_HANDS */
#define MASTER_LEFT
/* #define MASTER_RIGHT */

// Split settings
/* #define SERIAL_USART_DRIVER PIO0 */
#define SERIAL_USART_DRIVER SIOD0
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1
/* #define SERIAL_PIO_USE_PIO1 */
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2000
/* #define SPLIT_LAYER_STATE_ENABLE */
/* #define SERIAL_USART_PIN_SWAP */
/* #define SERIAL_USART_SPEED 1 */
#define SERIAL_DEBUG
#define SPLIT_WATCHDOG_ENABLE

// Matrix (Left side default)
#define MATRIX_ROWS 8
#define MATRIX_COLS 10

#define MATRIX_ROW_PINS { GP29, GP28, GP27, GP26 }
#define MATRIX_COL_PINS { GP3, GP4, GP5, GP6, GP7 }

/* #define DIODE_DIRECTION COL2ROW */

// Right side override
#define MATRIX_ROW_PINS_RIGHT { GP3, GP4, GP5, GP6 }
#define MATRIX_COL_PINS_RIGHT { GP29, GP28, GP27, GP26, GP15 }

// Encoders
#define ENCODER_A_PINS { GP10 }
#define ENCODER_B_PINS { GP9 }
#define ENCODER_RESOLUTIONS { 4 }
#define ENCODER_A_PINS_RIGHT { GP9 }
#define ENCODER_B_PINS_RIGHT { GP10 }
#define ENCODER_RESOLUTIONS_RIGHT { 4 }

// Tapping
#define TAPPING_TERM 200
#define FLOW_TAP_TERM 150
