/**
  Generated Pin Manager File

  Company:
    Microchip Technology Inc.

  File Name:
    pin_manager.c

  Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65.2
        Device            :  PIC16F1937
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.45
        MPLAB             :  MPLAB X 4.15

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include <xc.h>
#include "pin_manager.h"
#include "stdbool.h"


void PIN_MANAGER_Initialize(void)
{
    /**
    LATx registers
    */
    LATE = 0x01;
    LATD = 0x00;
    LATA = 0x00;
    LATB = 0x00;
    LATC = 0x00;

    /**
    TRISx registers
    */
    TRISE = 0x0E;
    TRISA = 0xFF;
    TRISB = 0xFF;
    TRISC = 0xFF;
    TRISD = 0x00;

    /**
    ANSELx registers
    */
    ANSELD = 0x00;
    ANSELB = 0x0F;
    ANSELE = 0x06;
    ANSELA = 0x3F;

    /**
    WPUx registers
    */
    WPUE = 0x00;
    WPUB = 0xF0;
    OPTION_REGbits.nWPUEN = 0;



    /**
    APFCONx registers
    */
    APFCON = 0x00;

    /**
    IOCx registers 
    */
    //interrupt on change for group IOCBF - flag
    IOCBFbits.IOCBF4 = 0;
    //interrupt on change for group IOCBF - flag
    IOCBFbits.IOCBF5 = 0;
    //interrupt on change for group IOCBF - flag
    IOCBFbits.IOCBF6 = 0;
    //interrupt on change for group IOCBF - flag
    IOCBFbits.IOCBF7 = 0;
    //interrupt on change for group IOCBN - negative
    IOCBNbits.IOCBN4 = 1;
    //interrupt on change for group IOCBN - negative
    IOCBNbits.IOCBN5 = 1;
    //interrupt on change for group IOCBN - negative
    IOCBNbits.IOCBN6 = 1;
    //interrupt on change for group IOCBN - negative
    IOCBNbits.IOCBN7 = 1;
    //interrupt on change for group IOCBP - positive
    IOCBPbits.IOCBP4 = 0;
    //interrupt on change for group IOCBP - positive
    IOCBPbits.IOCBP5 = 0;
    //interrupt on change for group IOCBP - positive
    IOCBPbits.IOCBP6 = 0;
    //interrupt on change for group IOCBP - positive
    IOCBPbits.IOCBP7 = 0;
   
    // Enable IOCI interrupt 
    INTCONbits.IOCIE = 1; 
    
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

/**
 End of File
*/