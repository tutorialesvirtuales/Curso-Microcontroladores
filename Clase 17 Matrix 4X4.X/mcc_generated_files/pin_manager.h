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
unsigned char digito = 5;
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RB4 aliases
#define IO_RB4_TRIS               TRISB4
#define IO_RB4_LAT                LATB4
#define IO_RB4_PORT               RB4
#define IO_RB4_WPU                WPUB4
#define IO_RB4_ANS                ANSB4
#define IO_RB4_SetHigh()    do { LATB4 = 1; } while(0)
#define IO_RB4_SetLow()   do { LATB4 = 0; } while(0)
#define IO_RB4_Toggle()   do { LATB4 = ~LATB4; } while(0)
#define IO_RB4_GetValue()         PORTBbits.RB4
#define IO_RB4_SetDigitalInput()    do { TRISB4 = 1; } while(0)
#define IO_RB4_SetDigitalOutput()   do { TRISB4 = 0; } while(0)

#define IO_RB4_SetPullup()    do { WPUB4 = 1; } while(0)
#define IO_RB4_ResetPullup()   do { WPUB4 = 0; } while(0)
#define IO_RB4_SetAnalogMode()   do { ANSB4 = 1; } while(0)
#define IO_RB4_SetDigitalMode()   do { ANSB4 = 0; } while(0)


// get/set IO_RB5 aliases
#define IO_RB5_TRIS               TRISB5
#define IO_RB5_LAT                LATB5
#define IO_RB5_PORT               RB5
#define IO_RB5_WPU                WPUB5
#define IO_RB5_ANS                ANSB5
#define IO_RB5_SetHigh()    do { LATB5 = 1; } while(0)
#define IO_RB5_SetLow()   do { LATB5 = 0; } while(0)
#define IO_RB5_Toggle()   do { LATB5 = ~LATB5; } while(0)
#define IO_RB5_GetValue()         PORTBbits.RB5
#define IO_RB5_SetDigitalInput()    do { TRISB5 = 1; } while(0)
#define IO_RB5_SetDigitalOutput()   do { TRISB5 = 0; } while(0)

#define IO_RB5_SetPullup()    do { WPUB5 = 1; } while(0)
#define IO_RB5_ResetPullup()   do { WPUB5 = 0; } while(0)
#define IO_RB5_SetAnalogMode()   do { ANSB5 = 1; } while(0)
#define IO_RB5_SetDigitalMode()   do { ANSB5 = 0; } while(0)


// get/set IO_RB6 aliases
#define IO_RB6_TRIS               TRISB6
#define IO_RB6_LAT                LATB6
#define IO_RB6_PORT               RB6
#define IO_RB6_WPU                WPUB6
#define IO_RB6_SetHigh()    do { LATB6 = 1; } while(0)
#define IO_RB6_SetLow()   do { LATB6 = 0; } while(0)
#define IO_RB6_Toggle()   do { LATB6 = ~LATB6; } while(0)
#define IO_RB6_GetValue()         PORTBbits.RB6
#define IO_RB6_SetDigitalInput()    do { TRISB6 = 1; } while(0)
#define IO_RB6_SetDigitalOutput()   do { TRISB6 = 0; } while(0)

#define IO_RB6_SetPullup()    do { WPUB6 = 1; } while(0)
#define IO_RB6_ResetPullup()   do { WPUB6 = 0; } while(0)


// get/set IO_RB7 aliases
#define IO_RB7_TRIS               TRISB7
#define IO_RB7_LAT                LATB7
#define IO_RB7_PORT               RB7
#define IO_RB7_WPU                WPUB7
#define IO_RB7_SetHigh()    do { LATB7 = 1; } while(0)
#define IO_RB7_SetLow()   do { LATB7 = 0; } while(0)
#define IO_RB7_Toggle()   do { LATB7 = ~LATB7; } while(0)
#define IO_RB7_GetValue()         PORTBbits.RB7
#define IO_RB7_SetDigitalInput()    do { TRISB7 = 1; } while(0)
#define IO_RB7_SetDigitalOutput()   do { TRISB7 = 0; } while(0)

#define IO_RB7_SetPullup()    do { WPUB7 = 1; } while(0)
#define IO_RB7_ResetPullup()   do { WPUB7 = 0; } while(0)


// get/set IO_RD0 aliases
#define IO_RD0_TRIS               TRISD0
#define IO_RD0_LAT                LATD0
#define IO_RD0_PORT               RD0
#define IO_RD0_ANS                ANSD0
#define IO_RD0_SetHigh()    do { LATD0 = 1; } while(0)
#define IO_RD0_SetLow()   do { LATD0 = 0; } while(0)
#define IO_RD0_Toggle()   do { LATD0 = ~LATD0; } while(0)
#define IO_RD0_GetValue()         PORTDbits.RD0
#define IO_RD0_SetDigitalInput()    do { TRISD0 = 1; } while(0)
#define IO_RD0_SetDigitalOutput()   do { TRISD0 = 0; } while(0)

#define IO_RD0_SetAnalogMode()   do { ANSD0 = 1; } while(0)
#define IO_RD0_SetDigitalMode()   do { ANSD0 = 0; } while(0)


// get/set IO_RD1 aliases
#define IO_RD1_TRIS               TRISD1
#define IO_RD1_LAT                LATD1
#define IO_RD1_PORT               RD1
#define IO_RD1_ANS                ANSD1
#define IO_RD1_SetHigh()    do { LATD1 = 1; } while(0)
#define IO_RD1_SetLow()   do { LATD1 = 0; } while(0)
#define IO_RD1_Toggle()   do { LATD1 = ~LATD1; } while(0)
#define IO_RD1_GetValue()         PORTDbits.RD1
#define IO_RD1_SetDigitalInput()    do { TRISD1 = 1; } while(0)
#define IO_RD1_SetDigitalOutput()   do { TRISD1 = 0; } while(0)

#define IO_RD1_SetAnalogMode()   do { ANSD1 = 1; } while(0)
#define IO_RD1_SetDigitalMode()   do { ANSD1 = 0; } while(0)


// get/set IO_RD2 aliases
#define IO_RD2_TRIS               TRISD2
#define IO_RD2_LAT                LATD2
#define IO_RD2_PORT               RD2
#define IO_RD2_ANS                ANSD2
#define IO_RD2_SetHigh()    do { LATD2 = 1; } while(0)
#define IO_RD2_SetLow()   do { LATD2 = 0; } while(0)
#define IO_RD2_Toggle()   do { LATD2 = ~LATD2; } while(0)
#define IO_RD2_GetValue()         PORTDbits.RD2
#define IO_RD2_SetDigitalInput()    do { TRISD2 = 1; } while(0)
#define IO_RD2_SetDigitalOutput()   do { TRISD2 = 0; } while(0)

#define IO_RD2_SetAnalogMode()   do { ANSD2 = 1; } while(0)
#define IO_RD2_SetDigitalMode()   do { ANSD2 = 0; } while(0)


// get/set IO_RD3 aliases
#define IO_RD3_TRIS               TRISD3
#define IO_RD3_LAT                LATD3
#define IO_RD3_PORT               RD3
#define IO_RD3_ANS                ANSD3
#define IO_RD3_SetHigh()    do { LATD3 = 1; } while(0)
#define IO_RD3_SetLow()   do { LATD3 = 0; } while(0)
#define IO_RD3_Toggle()   do { LATD3 = ~LATD3; } while(0)
#define IO_RD3_GetValue()         PORTDbits.RD3
#define IO_RD3_SetDigitalInput()    do { TRISD3 = 1; } while(0)
#define IO_RD3_SetDigitalOutput()   do { TRISD3 = 0; } while(0)

#define IO_RD3_SetAnalogMode()   do { ANSD3 = 1; } while(0)
#define IO_RD3_SetDigitalMode()   do { ANSD3 = 0; } while(0)


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


// get/set IO_RD5 aliases
#define IO_RD5_TRIS               TRISD5
#define IO_RD5_LAT                LATD5
#define IO_RD5_PORT               RD5
#define IO_RD5_ANS                ANSD5
#define IO_RD5_SetHigh()    do { LATD5 = 1; } while(0)
#define IO_RD5_SetLow()   do { LATD5 = 0; } while(0)
#define IO_RD5_Toggle()   do { LATD5 = ~LATD5; } while(0)
#define IO_RD5_GetValue()         PORTDbits.RD5
#define IO_RD5_SetDigitalInput()    do { TRISD5 = 1; } while(0)
#define IO_RD5_SetDigitalOutput()   do { TRISD5 = 0; } while(0)

#define IO_RD5_SetAnalogMode()   do { ANSD5 = 1; } while(0)
#define IO_RD5_SetDigitalMode()   do { ANSD5 = 0; } while(0)


// get/set IO_RD6 aliases
#define IO_RD6_TRIS               TRISD6
#define IO_RD6_LAT                LATD6
#define IO_RD6_PORT               RD6
#define IO_RD6_ANS                ANSD6
#define IO_RD6_SetHigh()    do { LATD6 = 1; } while(0)
#define IO_RD6_SetLow()   do { LATD6 = 0; } while(0)
#define IO_RD6_Toggle()   do { LATD6 = ~LATD6; } while(0)
#define IO_RD6_GetValue()         PORTDbits.RD6
#define IO_RD6_SetDigitalInput()    do { TRISD6 = 1; } while(0)
#define IO_RD6_SetDigitalOutput()   do { TRISD6 = 0; } while(0)

#define IO_RD6_SetAnalogMode()   do { ANSD6 = 1; } while(0)
#define IO_RD6_SetDigitalMode()   do { ANSD6 = 0; } while(0)


// get/set IO_RD7 aliases
#define IO_RD7_TRIS               TRISD7
#define IO_RD7_LAT                LATD7
#define IO_RD7_PORT               RD7
#define IO_RD7_ANS                ANSD7
#define IO_RD7_SetHigh()    do { LATD7 = 1; } while(0)
#define IO_RD7_SetLow()   do { LATD7 = 0; } while(0)
#define IO_RD7_Toggle()   do { LATD7 = ~LATD7; } while(0)
#define IO_RD7_GetValue()         PORTDbits.RD7
#define IO_RD7_SetDigitalInput()    do { TRISD7 = 1; } while(0)
#define IO_RD7_SetDigitalOutput()   do { TRISD7 = 0; } while(0)

#define IO_RD7_SetAnalogMode()   do { ANSD7 = 1; } while(0)
#define IO_RD7_SetDigitalMode()   do { ANSD7 = 0; } while(0)


// get/set IO_RE0 aliases
#define IO_RE0_TRIS               TRISE0
#define IO_RE0_LAT                LATE0
#define IO_RE0_PORT               RE0
#define IO_RE0_ANS                ANSE0
#define IO_RE0_SetHigh()    do { LATE0 = 1; } while(0)
#define IO_RE0_SetLow()   do { LATE0 = 0; } while(0)
#define IO_RE0_Toggle()   do { LATE0 = ~LATE0; } while(0)
#define IO_RE0_GetValue()         PORTEbits.RE0
#define IO_RE0_SetDigitalInput()    do { TRISE0 = 1; } while(0)
#define IO_RE0_SetDigitalOutput()   do { TRISE0 = 0; } while(0)

#define IO_RE0_SetAnalogMode()   do { ANSE0 = 1; } while(0)
#define IO_RE0_SetDigitalMode()   do { ANSE0 = 0; } while(0)



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

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCBF4 pin functionality
 * @Example
    IOCBF4_ISR();
 */
void IOCBF4_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCBF4 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCBF4 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF4_SetInterruptHandler(MyInterruptHandler);

*/
void IOCBF4_SetInterruptHandler(void* InterruptHandler);

/**
  @Summary
    Dynamic Interrupt Handler for IOCBF4 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCBF4_SetInterruptHandler() method.
    This handler is called every time the IOCBF4 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF4_SetInterruptHandler(IOCBF4_InterruptHandler);

*/
void (*IOCBF4_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCBF4 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCBF4_SetInterruptHandler() method.
    This handler is called every time the IOCBF4 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF4_SetInterruptHandler(IOCBF4_DefaultInterruptHandler);

*/
void IOCBF4_DefaultInterruptHandler(void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCBF5 pin functionality
 * @Example
    IOCBF5_ISR();
 */
void IOCBF5_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCBF5 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCBF5 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF5_SetInterruptHandler(MyInterruptHandler);

*/
void IOCBF5_SetInterruptHandler(void* InterruptHandler);

/**
  @Summary
    Dynamic Interrupt Handler for IOCBF5 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCBF5_SetInterruptHandler() method.
    This handler is called every time the IOCBF5 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF5_SetInterruptHandler(IOCBF5_InterruptHandler);

*/
void (*IOCBF5_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCBF5 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCBF5_SetInterruptHandler() method.
    This handler is called every time the IOCBF5 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF5_SetInterruptHandler(IOCBF5_DefaultInterruptHandler);

*/
void IOCBF5_DefaultInterruptHandler(void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCBF6 pin functionality
 * @Example
    IOCBF6_ISR();
 */
void IOCBF6_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCBF6 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCBF6 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF6_SetInterruptHandler(MyInterruptHandler);

*/
void IOCBF6_SetInterruptHandler(void* InterruptHandler);

/**
  @Summary
    Dynamic Interrupt Handler for IOCBF6 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCBF6_SetInterruptHandler() method.
    This handler is called every time the IOCBF6 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF6_SetInterruptHandler(IOCBF6_InterruptHandler);

*/
void (*IOCBF6_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCBF6 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCBF6_SetInterruptHandler() method.
    This handler is called every time the IOCBF6 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF6_SetInterruptHandler(IOCBF6_DefaultInterruptHandler);

*/
void IOCBF6_DefaultInterruptHandler(void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCBF7 pin functionality
 * @Example
    IOCBF7_ISR();
 */
void IOCBF7_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCBF7 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCBF7 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF7_SetInterruptHandler(MyInterruptHandler);

*/
void IOCBF7_SetInterruptHandler(void* InterruptHandler);

/**
  @Summary
    Dynamic Interrupt Handler for IOCBF7 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCBF7_SetInterruptHandler() method.
    This handler is called every time the IOCBF7 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF7_SetInterruptHandler(IOCBF7_InterruptHandler);

*/
void (*IOCBF7_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCBF7 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCBF7_SetInterruptHandler() method.
    This handler is called every time the IOCBF7 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF7_SetInterruptHandler(IOCBF7_DefaultInterruptHandler);

*/
void IOCBF7_DefaultInterruptHandler(void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCBN4 pin functionality
 * @Example
    IOCBN4_ISR();
 */
void IOCBN4_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCBN4 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCBN4 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCBN4_SetInterruptHandler(MyInterruptHandler);

*/
void IOCBN4_SetInterruptHandler(void* InterruptHandler);

/**
  @Summary
    Dynamic Interrupt Handler for IOCBN4 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCBN4_SetInterruptHandler() method.
    This handler is called every time the IOCBN4 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBN4_SetInterruptHandler(IOCBN4_InterruptHandler);

*/
void (*IOCBN4_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCBN4 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCBN4_SetInterruptHandler() method.
    This handler is called every time the IOCBN4 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBN4_SetInterruptHandler(IOCBN4_DefaultInterruptHandler);

*/
void IOCBN4_DefaultInterruptHandler(void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCBN5 pin functionality
 * @Example
    IOCBN5_ISR();
 */
void IOCBN5_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCBN5 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCBN5 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCBN5_SetInterruptHandler(MyInterruptHandler);

*/
void IOCBN5_SetInterruptHandler(void* InterruptHandler);

/**
  @Summary
    Dynamic Interrupt Handler for IOCBN5 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCBN5_SetInterruptHandler() method.
    This handler is called every time the IOCBN5 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBN5_SetInterruptHandler(IOCBN5_InterruptHandler);

*/
void (*IOCBN5_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCBN5 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCBN5_SetInterruptHandler() method.
    This handler is called every time the IOCBN5 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBN5_SetInterruptHandler(IOCBN5_DefaultInterruptHandler);

*/
void IOCBN5_DefaultInterruptHandler(void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCBN6 pin functionality
 * @Example
    IOCBN6_ISR();
 */
void IOCBN6_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCBN6 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCBN6 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCBN6_SetInterruptHandler(MyInterruptHandler);

*/
void IOCBN6_SetInterruptHandler(void* InterruptHandler);

/**
  @Summary
    Dynamic Interrupt Handler for IOCBN6 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCBN6_SetInterruptHandler() method.
    This handler is called every time the IOCBN6 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBN6_SetInterruptHandler(IOCBN6_InterruptHandler);

*/
void (*IOCBN6_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCBN6 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCBN6_SetInterruptHandler() method.
    This handler is called every time the IOCBN6 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBN6_SetInterruptHandler(IOCBN6_DefaultInterruptHandler);

*/
void IOCBN6_DefaultInterruptHandler(void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCBN7 pin functionality
 * @Example
    IOCBN7_ISR();
 */
void IOCBN7_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCBN7 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCBN7 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCBN7_SetInterruptHandler(MyInterruptHandler);

*/
void IOCBN7_SetInterruptHandler(void* InterruptHandler);

/**
  @Summary
    Dynamic Interrupt Handler for IOCBN7 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCBN7_SetInterruptHandler() method.
    This handler is called every time the IOCBN7 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBN7_SetInterruptHandler(IOCBN7_InterruptHandler);

*/
void (*IOCBN7_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCBN7 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCBN7_SetInterruptHandler() method.
    This handler is called every time the IOCBN7 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBN7_SetInterruptHandler(IOCBN7_DefaultInterruptHandler);

*/
void IOCBN7_DefaultInterruptHandler(void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCBP4 pin functionality
 * @Example
    IOCBP4_ISR();
 */
void IOCBP4_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCBP4 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCBP4 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCBP4_SetInterruptHandler(MyInterruptHandler);

*/
void IOCBP4_SetInterruptHandler(void* InterruptHandler);

/**
  @Summary
    Dynamic Interrupt Handler for IOCBP4 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCBP4_SetInterruptHandler() method.
    This handler is called every time the IOCBP4 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBP4_SetInterruptHandler(IOCBP4_InterruptHandler);

*/
void (*IOCBP4_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCBP4 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCBP4_SetInterruptHandler() method.
    This handler is called every time the IOCBP4 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBP4_SetInterruptHandler(IOCBP4_DefaultInterruptHandler);

*/
void IOCBP4_DefaultInterruptHandler(void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCBP5 pin functionality
 * @Example
    IOCBP5_ISR();
 */
void IOCBP5_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCBP5 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCBP5 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCBP5_SetInterruptHandler(MyInterruptHandler);

*/
void IOCBP5_SetInterruptHandler(void* InterruptHandler);

/**
  @Summary
    Dynamic Interrupt Handler for IOCBP5 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCBP5_SetInterruptHandler() method.
    This handler is called every time the IOCBP5 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBP5_SetInterruptHandler(IOCBP5_InterruptHandler);

*/
void (*IOCBP5_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCBP5 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCBP5_SetInterruptHandler() method.
    This handler is called every time the IOCBP5 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBP5_SetInterruptHandler(IOCBP5_DefaultInterruptHandler);

*/
void IOCBP5_DefaultInterruptHandler(void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCBP6 pin functionality
 * @Example
    IOCBP6_ISR();
 */
void IOCBP6_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCBP6 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCBP6 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCBP6_SetInterruptHandler(MyInterruptHandler);

*/
void IOCBP6_SetInterruptHandler(void* InterruptHandler);

/**
  @Summary
    Dynamic Interrupt Handler for IOCBP6 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCBP6_SetInterruptHandler() method.
    This handler is called every time the IOCBP6 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBP6_SetInterruptHandler(IOCBP6_InterruptHandler);

*/
void (*IOCBP6_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCBP6 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCBP6_SetInterruptHandler() method.
    This handler is called every time the IOCBP6 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBP6_SetInterruptHandler(IOCBP6_DefaultInterruptHandler);

*/
void IOCBP6_DefaultInterruptHandler(void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCBP7 pin functionality
 * @Example
    IOCBP7_ISR();
 */
void IOCBP7_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCBP7 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCBP7 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCBP7_SetInterruptHandler(MyInterruptHandler);

*/
void IOCBP7_SetInterruptHandler(void* InterruptHandler);

/**
  @Summary
    Dynamic Interrupt Handler for IOCBP7 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCBP7_SetInterruptHandler() method.
    This handler is called every time the IOCBP7 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBP7_SetInterruptHandler(IOCBP7_InterruptHandler);

*/
void (*IOCBP7_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCBP7 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCBP7_SetInterruptHandler() method.
    This handler is called every time the IOCBP7 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBP7_SetInterruptHandler(IOCBP7_DefaultInterruptHandler);

*/
void IOCBP7_DefaultInterruptHandler(void);





#endif // PIN_MANAGER_H
/**
 End of File
*/