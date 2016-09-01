/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 3.16
        Device            :  PIC16F1937
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.20

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RB0 aliases
#define IO_RB0_TRIS               TRISB0
#define IO_RB0_LAT                LATB0
#define IO_RB0_PORT               RB0
#define IO_RB0_WPU                WPUB0
#define IO_RB0_ANS                ANSB0
#define IO_RB0_SetHigh()    do { LATB0 = 1; } while(0)
#define IO_RB0_SetLow()   do { LATB0 = 0; } while(0)
#define IO_RB0_Toggle()   do { LATB0 = ~LATB0; } while(0)
#define IO_RB0_GetValue()         PORTBbits.RB0
#define IO_RB0_SetDigitalInput()    do { TRISB0 = 1; } while(0)
#define IO_RB0_SetDigitalOutput()   do { TRISB0 = 0; } while(0)

#define IO_RB0_SetPullup()    do { WPUB0 = 1; } while(0)
#define IO_RB0_ResetPullup()   do { WPUB0 = 0; } while(0)
#define IO_RB0_SetAnalogMode()   do { ANSB0 = 1; } while(0)
#define IO_RB0_SetDigitalMode()   do { ANSB0 = 0; } while(0)


// get/set IO_RB1 aliases
#define IO_RB1_TRIS               TRISB1
#define IO_RB1_LAT                LATB1
#define IO_RB1_PORT               RB1
#define IO_RB1_WPU                WPUB1
#define IO_RB1_ANS                ANSB1
#define IO_RB1_SetHigh()    do { LATB1 = 1; } while(0)
#define IO_RB1_SetLow()   do { LATB1 = 0; } while(0)
#define IO_RB1_Toggle()   do { LATB1 = ~LATB1; } while(0)
#define IO_RB1_GetValue()         PORTBbits.RB1
#define IO_RB1_SetDigitalInput()    do { TRISB1 = 1; } while(0)
#define IO_RB1_SetDigitalOutput()   do { TRISB1 = 0; } while(0)

#define IO_RB1_SetPullup()    do { WPUB1 = 1; } while(0)
#define IO_RB1_ResetPullup()   do { WPUB1 = 0; } while(0)
#define IO_RB1_SetAnalogMode()   do { ANSB1 = 1; } while(0)
#define IO_RB1_SetDigitalMode()   do { ANSB1 = 0; } while(0)


// get/set IO_RB2 aliases
#define IO_RB2_TRIS               TRISB2
#define IO_RB2_LAT                LATB2
#define IO_RB2_PORT               RB2
#define IO_RB2_WPU                WPUB2
#define IO_RB2_ANS                ANSB2
#define IO_RB2_SetHigh()    do { LATB2 = 1; } while(0)
#define IO_RB2_SetLow()   do { LATB2 = 0; } while(0)
#define IO_RB2_Toggle()   do { LATB2 = ~LATB2; } while(0)
#define IO_RB2_GetValue()         PORTBbits.RB2
#define IO_RB2_SetDigitalInput()    do { TRISB2 = 1; } while(0)
#define IO_RB2_SetDigitalOutput()   do { TRISB2 = 0; } while(0)

#define IO_RB2_SetPullup()    do { WPUB2 = 1; } while(0)
#define IO_RB2_ResetPullup()   do { WPUB2 = 0; } while(0)
#define IO_RB2_SetAnalogMode()   do { ANSB2 = 1; } while(0)
#define IO_RB2_SetDigitalMode()   do { ANSB2 = 0; } while(0)


// get/set IO_RB3 aliases
#define IO_RB3_TRIS               TRISB3
#define IO_RB3_LAT                LATB3
#define IO_RB3_PORT               RB3
#define IO_RB3_WPU                WPUB3
#define IO_RB3_ANS                ANSB3
#define IO_RB3_SetHigh()    do { LATB3 = 1; } while(0)
#define IO_RB3_SetLow()   do { LATB3 = 0; } while(0)
#define IO_RB3_Toggle()   do { LATB3 = ~LATB3; } while(0)
#define IO_RB3_GetValue()         PORTBbits.RB3
#define IO_RB3_SetDigitalInput()    do { TRISB3 = 1; } while(0)
#define IO_RB3_SetDigitalOutput()   do { TRISB3 = 0; } while(0)

#define IO_RB3_SetPullup()    do { WPUB3 = 1; } while(0)
#define IO_RB3_ResetPullup()   do { WPUB3 = 0; } while(0)
#define IO_RB3_SetAnalogMode()   do { ANSB3 = 1; } while(0)
#define IO_RB3_SetDigitalMode()   do { ANSB3 = 0; } while(0)


// get/set IO_RB3 aliases
#define IO_RB3_TRIS               TRISB3
#define IO_RB3_LAT                LATB3
#define IO_RB3_PORT               RB3
#define IO_RB3_WPU                WPUB3
#define IO_RB3_ANS                ANSB3
#define IO_RB3_SetHigh()    do { LATB3 = 1; } while(0)
#define IO_RB3_SetLow()   do { LATB3 = 0; } while(0)
#define IO_RB3_Toggle()   do { LATB3 = ~LATB3; } while(0)
#define IO_RB3_GetValue()         PORTBbits.RB3
#define IO_RB3_SetDigitalInput()    do { TRISB3 = 1; } while(0)
#define IO_RB3_SetDigitalOutput()   do { TRISB3 = 0; } while(0)

#define IO_RB3_SetPullup()    do { WPUB3 = 1; } while(0)
#define IO_RB3_ResetPullup()   do { WPUB3 = 0; } while(0)
#define IO_RB3_SetAnalogMode()   do { ANSB3 = 1; } while(0)
#define IO_RB3_SetDigitalMode()   do { ANSB3 = 0; } while(0)


// get/set IO_RB3 aliases
#define IO_RB3_TRIS               TRISB3
#define IO_RB3_LAT                LATB3
#define IO_RB3_PORT               RB3
#define IO_RB3_WPU                WPUB3
#define IO_RB3_ANS                ANSB3
#define IO_RB3_SetHigh()    do { LATB3 = 1; } while(0)
#define IO_RB3_SetLow()   do { LATB3 = 0; } while(0)
#define IO_RB3_Toggle()   do { LATB3 = ~LATB3; } while(0)
#define IO_RB3_GetValue()         PORTBbits.RB3
#define IO_RB3_SetDigitalInput()    do { TRISB3 = 1; } while(0)
#define IO_RB3_SetDigitalOutput()   do { TRISB3 = 0; } while(0)

#define IO_RB3_SetPullup()    do { WPUB3 = 1; } while(0)
#define IO_RB3_ResetPullup()   do { WPUB3 = 0; } while(0)
#define IO_RB3_SetAnalogMode()   do { ANSB3 = 1; } while(0)
#define IO_RB3_SetDigitalMode()   do { ANSB3 = 0; } while(0)


// get/set IO_RD4 aliases
#define IO_RD4_TRIS               TRISD4
#define IO_RD4_LAT                LATD4
#define IO_RD4_PORT               RD4
#define IO_RD4_ANS                ANSD4
#define IO_RD4_SetHigh()    do { LATD4 = 1; } while(0)
#define IO_RD4_SetLow()   do { LATD4 = 0; } while(0)
#define IO_RD4_Toggle()   do { LATD4 = ~LATD4; } while(0)
#define IO_RD4_GetValue()         PORTDbits.RD4
#define IO_RD4_SetDigitalInput()    do { TRISD4 = 1; } while(0)
#define IO_RD4_SetDigitalOutput()   do { TRISD4 = 0; } while(0)

#define IO_RD4_SetAnalogMode()   do { ANSD4 = 1; } while(0)
#define IO_RD4_SetDigitalMode()   do { ANSD4 = 0; } while(0)



/**
 * @Param
    none
 * @Returns
    none
 * @Description
    GPIO and peripheral I/O initialization
 * @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);





#endif // PIN_MANAGER_H
/**
 End of File
*/