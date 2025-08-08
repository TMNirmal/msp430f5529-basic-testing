/*
 * main.c - Blink LED Example for MSP430F5529 LaunchPad
 *
 * Toggles the onboard red LED (P1.0) with a fixed delay.
 *
 * Board:   MSP430F5529 LaunchPad
 * Author:  Nirmal Thyvalappil Muraleedharan
 * Date:    2025-08-08
 * License: MIT
 *
 * How to use:
 *   - Build and upload to your MSP430F5529 LaunchPad using Code Composer Studio.
 *   - The red LED (P1.0) will blink at a regular interval.
 */

#include <msp430.h>

void main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // Stop watchdog timer

    P1DIR |= BIT0;              // Set P1.0 (LED1) as output

    while (1)
    {
        P1OUT ^= BIT0;          // Toggle P1.0 (LED1)
        __delay_cycles(100000); // Delay (adjust value for blink speed)
    }
}
