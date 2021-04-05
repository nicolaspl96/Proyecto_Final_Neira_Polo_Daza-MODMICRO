/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

#define SOPT5_UART0RXSRC_UART_RX 0x00u /*!<@brief UART0 receive data source select: UART0_RX pin */
#define SOPT5_UART0TXSRC_UART_TX 0x00u /*!<@brief UART0 transmit data source select: UART0_TX pin */

/*! @name PORTB1 (number 17), J8[2]/ADC0_SE5/CMP0_IN3/UART0_TX/UART0_RX
  @{ */

/* Symbols to be used with PORT driver */
#define UART_INITPINS_DEBUG_UART0_TX_PORT PORTB               /*!<@brief PORT peripheral base pointer */
#define UART_INITPINS_DEBUG_UART0_TX_PIN 1U                   /*!<@brief PORT pin number */
#define UART_INITPINS_DEBUG_UART0_TX_PIN_MASK (1U << 1U)      /*!<@brief PORT pin mask */
                                                              /* @} */

/*! @name PORTB2 (number 18), J8[1]/ADC0_SE4/UART0_RX/UART0_TX
  @{ */

/* Symbols to be used with PORT driver */
#define UART_INITPINS_DEBUG_UART0_RX_PORT PORTB               /*!<@brief PORT peripheral base pointer */
#define UART_INITPINS_DEBUG_UART0_RX_PIN 2U                   /*!<@brief PORT pin number */
#define UART_INITPINS_DEBUG_UART0_RX_PIN_MASK (1U << 2U)      /*!<@brief PORT pin mask */
                                                              /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void UART_InitPins(void);

/*! @name PORTB10 (number 13), J7[1]/LEDRGB_BLUE/ADC0_SE9
  @{ */

/* Symbols to be used with GPIO driver */
#define LED_LED_BLUE_FGPIO FGPIOB              /*!<@brief FGPIO peripheral base pointer */
#define LED_LED_BLUE_GPIO GPIOB                /*!<@brief GPIO peripheral base pointer */
#define LED_LED_BLUE_GPIO_PIN_MASK (1U << 10U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define LED_LED_BLUE_PORT PORTB                /*!<@brief PORT peripheral base pointer */
#define LED_LED_BLUE_PIN 10U                   /*!<@brief PORT pin number */
#define LED_LED_BLUE_PIN_MASK (1U << 10U)      /*!<@brief PORT pin mask */
                                               /* @} */

/*! @name PORTB7 (number 2), J8[8]/LEDRGB_GREEN
  @{ */

/* Symbols to be used with GPIO driver */
#define LED_LED_GREEN_FGPIO FGPIOB             /*!<@brief FGPIO peripheral base pointer */
#define LED_LED_GREEN_GPIO GPIOB               /*!<@brief GPIO peripheral base pointer */
#define LED_LED_GREEN_GPIO_PIN_MASK (1U << 7U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define LED_LED_GREEN_PORT PORTB               /*!<@brief PORT peripheral base pointer */
#define LED_LED_GREEN_PIN 7U                   /*!<@brief PORT pin number */
#define LED_LED_GREEN_PIN_MASK (1U << 7U)      /*!<@brief PORT pin mask */
                                               /* @} */

/*! @name PORTB6 (number 1), J8[7]/LEDRGB_RED/LPTMR0_ALT3
  @{ */

/* Symbols to be used with GPIO driver */
#define LED_LED_RED_FGPIO FGPIOB             /*!<@brief FGPIO peripheral base pointer */
#define LED_LED_RED_GPIO GPIOB               /*!<@brief GPIO peripheral base pointer */
#define LED_LED_RED_GPIO_PIN_MASK (1U << 6U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define LED_LED_RED_PORT PORTB               /*!<@brief PORT peripheral base pointer */
#define LED_LED_RED_PIN 6U                   /*!<@brief PORT pin number */
#define LED_LED_RED_PIN_MASK (1U << 6U)      /*!<@brief PORT pin mask */
                                             /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void LED_InitPins(void);

/*! @name PORTB3 (number 23), J7[10]/I2C0_SCL/UART0_TX
  @{ */

/* Symbols to be used with PORT driver */
#define I2C_INITPINS_ACCEL_SCL_PORT PORTB               /*!<@brief PORT peripheral base pointer */
#define I2C_INITPINS_ACCEL_SCL_PIN 3U                   /*!<@brief PORT pin number */
#define I2C_INITPINS_ACCEL_SCL_PIN_MASK (1U << 3U)      /*!<@brief PORT pin mask */
                                                        /* @} */

/*! @name PORTB4 (number 24), J7[9]/I2C0_SDA/UART0_RX
  @{ */

/* Symbols to be used with PORT driver */
#define I2C_INITPINS_ACCEL_SDA_PORT PORTB               /*!<@brief PORT peripheral base pointer */
#define I2C_INITPINS_ACCEL_SDA_PIN 4U                   /*!<@brief PORT pin number */
#define I2C_INITPINS_ACCEL_SDA_PIN_MASK (1U << 4U)      /*!<@brief PORT pin mask */
                                                        /* @} */

/*! @name PORTA9 (number 20), J10[5]/ADC0_SE2/I2C1_SDA
  @{ */

/* Symbols to be used with PORT driver */
#define I2C_INITPINS_EXT_SDA_PORT PORTA               /*!<@brief PORT peripheral base pointer */
#define I2C_INITPINS_EXT_SDA_PIN 9U                   /*!<@brief PORT pin number */
#define I2C_INITPINS_EXT_SDA_PIN_MASK (1U << 9U)      /*!<@brief PORT pin mask */
                                                      /* @} */

/*! @name PORTA8 (number 19), J10[6]/ADC0_SE3/I2C1_SCL
  @{ */

/* Symbols to be used with PORT driver */
#define I2C_INITPINS_EXT_SCL_PORT PORTA               /*!<@brief PORT peripheral base pointer */
#define I2C_INITPINS_EXT_SCL_PIN 8U                   /*!<@brief PORT pin number */
#define I2C_INITPINS_EXT_SCL_PIN_MASK (1U << 8U)      /*!<@brief PORT pin mask */
                                                      /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void I2C_InitPins(void);

/*! @name PORTA10 (number 21), J8[5]/IRQ_8
  @{ */

/* Symbols to be used with GPIO driver */
#define MMA8451_INITPINS_ACCEL_IRQ_8_FGPIO FGPIOA              /*!<@brief FGPIO peripheral base pointer */
#define MMA8451_INITPINS_ACCEL_IRQ_8_GPIO GPIOA                /*!<@brief GPIO peripheral base pointer */
#define MMA8451_INITPINS_ACCEL_IRQ_8_GPIO_PIN_MASK (1U << 10U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define MMA8451_INITPINS_ACCEL_IRQ_8_PORT PORTA                /*!<@brief PORT peripheral base pointer */
#define MMA8451_INITPINS_ACCEL_IRQ_8_PIN 10U                   /*!<@brief PORT pin number */
#define MMA8451_INITPINS_ACCEL_IRQ_8_PIN_MASK (1U << 10U)      /*!<@brief PORT pin mask */
                                                               /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void MMA8451_InitPins(void);

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void ADC_InitPins(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
