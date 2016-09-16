/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using MPLAB(c) Code Configurator

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 3.16
        Device            :  PIC16F1937
        Driver Version    :  2.00
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.20
*/

/*
    (c) 2016 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/

#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */
void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    unsigned char escape = 27; // Caracter de escape para limpiar el terminal
    LATCbits.LATC0 = 0; // Trigguer apagado
    T1CON = 0b00100000; // FOSC / 4 Y que el preescaler 1:4; Iniciamoa Con el TMR1ON Apagado
    unsigned int conteo; // Variable para poner el valor del Timer 1
    float distancia; // Variable donde se calcula la distancia recibida
    while (1)
    {
        TMR1H = 0x00; // Se carga La parte Alta del Timer 1;
        TMR1L = 0x00; // Se carga la Parte Baja del Timer 1
        conteo = 0; // Garantizo que conteo sea 0;
        LATCbits.LATC0 = 1; // Activamos el Pulso en el Trigguer
        __delay_us(12); //Esperamos 12 Micro Segundos, Minimo deben ser 10.
        LATCbits.LATC0 = 0; // Apagamos el Pulso del trigguer
        while (!PORTCbits.RC1); // Esperamos que el Echo se active para poder empezar la cuenta
        TMR1ON = 1; // Ponemos a contar el Timer 1
        while (PORTCbits.RC1 && !TMR1IF); // Hasta que no se apague el ECHO o Se Desborde el Timer esperamos
        TMR1ON = 0; // Apagamos el Conteo.
        if(!TMR1IF){
            conteo | = TMR1H << 8; // Tomamos la parte alta de Tmr1 y lo ponemos en el nibble alto de conteo
            conteo | = TMR1L; // Tomamos la parte baja de TMR1 y lo ponemos en el nibble bajo de conteo
        }else{
            conteo = 0;
            TMR1IF = 0;
        }
        distancia = (conteo * 0.8)  / 58;
        if(distancia < 10){
            LATDbits.LATD4 = 1;
        }else{
            LATDbits.LATD4 = 0;
        }
        printf("%c", escape);
        __delay_ms(80);
        printf("La Distancia Es: %5.1f", distancia); 
        __delay_ms(900);
    }
}
/**
 End of File
*/