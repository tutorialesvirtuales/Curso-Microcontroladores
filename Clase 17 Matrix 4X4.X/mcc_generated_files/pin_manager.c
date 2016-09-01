/**
  Generated Pin Manager File

  Company:
    Microchip Technology Inc.

  File Name:
    pin_manager.c

  Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 3.16
        Device            :  PIC16F1937
        Driver Version    :  1.02
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

#include <xc.h>
#include "pin_manager.h"

void PIN_MANAGER_Initialize(void) {
    LATB = 0x0;
    WPUE = 0x8;
    LATA = 0x0;
    ANSELE = 0x6;
    LATE = 0x0;
    LATD = 0x0;
    LATC = 0x0;
    ANSELA = 0x3F;
    ANSELB = 0xF;
    ANSELD = 0x0;
    WPUB = 0xFF;
    TRISD = 0x0;
    TRISE = 0xE;
    TRISB = 0xFF;
    TRISC = 0xFF;
    TRISA = 0xFF;

    OPTION_REGbits.nWPUEN = 0x0;
    APFCON = 0x00;

    // interrupt on change for group IOCBF - flag
    IOCBFbits.IOCBF4 = 0; // Pin : RB4
    IOCBFbits.IOCBF5 = 0; // Pin : RB5
    IOCBFbits.IOCBF6 = 0; // Pin : RB6
    IOCBFbits.IOCBF7 = 0; // Pin : RB7

    // interrupt on change for group IOCBN - negative
    IOCBNbits.IOCBN4 = 1; // Pin : RB4
    IOCBNbits.IOCBN5 = 1; // Pin : RB5
    IOCBNbits.IOCBN6 = 1; // Pin : RB6
    IOCBNbits.IOCBN7 = 1; // Pin : RB7

    // interrupt on change for group IOCBP - positive
    IOCBPbits.IOCBP4 = 0; // Pin : RB4
    IOCBPbits.IOCBP5 = 0; // Pin : RB5
    IOCBPbits.IOCBP6 = 0; // Pin : RB6
    IOCBPbits.IOCBP7 = 0; // Pin : RB7

    INTCONbits.IOCIE = 1; // Enable IOCI interrupt 


}

void PIN_MANAGER_IOC(void) {
    // interrupt on change for group IOCBF
    if (IOCBFbits.IOCBF4 == 1) {
        if (PORTDbits.RD4 == 0)
            digito = 1;
        if (PORTDbits.RD5 == 0)
            digito = 4;
        if (PORTDbits.RD6 == 0)
            digito = 7;
        if(PORTDbits.RD7 == 0)
            digito = 11;
        IOCBFbits.IOCBF4 = 0;
    }
    if (IOCBFbits.IOCBF5 == 1) {
        if (PORTDbits.RD4 == 0)
            digito = 2;
        if (PORTDbits.RD5 == 0)
            digito = 5;
        if (PORTDbits.RD6 == 0)
            digito = 8;
        if(PORTDbits.RD7 == 0)
            digito = 0;
        IOCBFbits.IOCBF5 = 0;
    }
    if (IOCBFbits.IOCBF6 == 1) {
        if (PORTDbits.RD4 == 0)
            digito = 3;
        if (PORTDbits.RD5 == 0)
            digito = 6;
        if (PORTDbits.RD6 == 0)
            digito = 9;
        if(PORTDbits.RD7 == 0)
            digito = 12;
        IOCBFbits.IOCBF6 = 0;
    }
    if (IOCBFbits.IOCBF7 == 1) {
        IOCBFbits.IOCBF7 = 0;
    }
}