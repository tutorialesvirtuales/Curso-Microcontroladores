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
#include "I2C.h"

void escribe_eeprom(uint16_t direccion, unsigned char dato); //prototipo de función
//para escribir o enviar datos a la memoria EEPROM 24CXX

unsigned char leer_eeprom(uint16_t direccion); //prototipo de función para leer

//Función para enviar o escribir datos en la memoria EEPROM 24C32
//creada con las funciones que están en el archivo de cabecera i2c.h
//la función se le ha llamado escribe_eeprom, hay que darle dos parámetros
//el primero es la dirección del registro de la memoria EEPROM donde se quiere
//esccribir el dato, y el segundo el dato a ser escrito

void escribe_eeprom(uint16_t direccion, unsigned char dato) {
    i2c_inicia_com(); //inicia la comunicación serial i2C PIC

    i2c_envia_dato(0xa0); //envía la dirección del esclavo con el que el maestro se
    //se quiere comunicar, en este cado de la EEPROM de quien su
    //dirección es de 7 bits (1010000) junto con el bit 0
    //que es el que le indica al esclavo que el maestro quiere
    //enviar o escribir un dato en la EEPROM,
    //por lo que se envia 10100000 que en hexadecimal es 0xa0

    //lo que sigue es enviar la dirección del registro de la memoria EEPROM donde se
    //escribirá el dato enviado por el maestro PIC16F1937, como estas direcciones en
    //la EEPROM 24C32 son de 2 bytes, se envía primero la parte alta de esta dirección
    //y luego la parte baja de esta dirección
    i2c_envia_dato(direccion >> 8); //envia parte alta de la direccion del registro
    //de la EEPROM donde se guardará el dato
    i2c_envia_dato(direccion); //envia parte baja de la direccion del registro
    //de la EEPROM donde se guardará el dato

    //Lo que sigue es enviar el dato a la dirección del registro de la memoria EEPROM
    //donde se guardará el dato.
    i2c_envia_dato(dato); //envia o escribe el dato en la dirección del registro
    //elegido de la memoria EEPROM

    //una vez que el esclavo recibe el dato se terminará la comunicación I2C PIC
    i2c_detener(); //finaliza la comunicación I2C PIC
}

unsigned char leer_eeprom(uint16_t direccion) {
    unsigned char dato; //variable donde se guardará el dato leído desde la EEPROM

    i2c_inicia_com(); //inicia la comunicación serial i2C PIC

    i2c_envia_dato(0xa0); //envía la dirección del esclavo con el que el maestro se
    //se quiere comunicar, en este cado de la EEPROM de quien su
    //dirección es de 7 bits (1010000) junto con el bit 0
    //que es el que le indica al esclavo que el maestro quiere
    //enviar o escribir un dato en la EEPROM,
    //por lo que se envia 10100000 que en hexadecimal es 0xa0

    //lo que sigue es enviar la dirección del registro de la memoria EEPROM de donde
    //el maestro PIC16F1937 leerá o recibirá el dato, como estas direcciones en
    //la EEPROM 24C32 son de 2 bytes, se envía primero la parte alta de esta dirección
    //y luego la parte baja de esta dirección
    i2c_envia_dato(direccion >> 8); //envia la parte alta de la direccion del registro
    //de la EEPROM de donde se leerá el dato
    i2c_envia_dato(direccion); //envia la parte baja de la direccion del registro
    //de la EEPROM de donde se leerá el dato

    //lo que sigue una vez que ya se le dijo al esclavo donde se leerá es reiniciar la
    //comunicación serial I2C PIC
    i2c_reinicia_com(); //reinicia la comunicación I2C PIC

    //a continuación se vuelve a enviar la dirección del esclavo con el que el maestro se
    //está comunicanco, en este cado de la EEPROM de quien su dirección es de 7 bits (1010000)
    //pero esta vez junto con el bit 1 que es el que le indica al esclavo que el maestro
    //quiere leer o recibir un dato de la EEPROM, por lo que se envia 10100001
    //que en hexadecimal es 0xa1
    i2c_envia_dato(0xa1); //dirección de la eeprom junto con el 1 para lectura

    //luego se lee el dato de la ubicación de la memoria elegida de la EEPROM
    //y se guarda en la variable dato creada en un inicio dentro de esta función
    dato = i2c_recibe_dato(); //lectura del dato de la ubicación de la memoria elegida

    //una vez que el maestro lee o recibe el dato se terminará la comunicación I2C PIC
    i2c_detener(); //finaliza la comunicación I2C PIC

    return dato; //la función devolverá el dato leído desde la EEPROM y guardado en
    //la variable dato
}

/*
                         Main application
 */
void main(void) {
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
    i2c_iniciar(); // Iniciar Micro con Bus I2C
    while (1) {
        if (!PORTBbits.RB0) {//Se graba cuando se presiona el RB0
            __delay_ms(20); //Antirrebote
            if (PORTBbits.RB0) {// Garantizo que ya soltaron el pulsador
                LATDbits.LATD4 = 1;
                printf("\r\n Grabacion Iniciada");
                for (int i = 0; i <= 4000; i++) {//en las direccienes que van desde 0 a 50
                    char Rx = EUSART_Read();
                    escribe_eeprom(i, Rx); //de la EEPROM se enviarán o escribirán sus
                    //mismas direccione
                    if (Rx == '@') {
                        printf("\r\n  Los Datos Fueron guardados correctamente \r\n");
                        break;
                    }
                } //a que reciba bien los datos
                LATDbits.LATD4 = 0;
                printf("\r\n Grabacion Finalizada");
            }
        }
        if (!PORTBbits.RB1) {//Se graba cuando se presiona el RB0
            __delay_ms(20);
            if (PORTBbits.RB1) {// Garantizo que ya soltaron el pulsador
                printf("\r\n Lectura iniciada \r\n");
                for (int i = 0; i <= 4000; i++) {//para las direcciones de memoria de la EEPROM
                    unsigned char dato = leer_eeprom(i);
                    if (dato == '@') {
                        break;
                    }
                    printf("%c", dato);
                }
                printf("\r\n Lectura finalizada \r\n");
            }
        }
    }
}
/**
 End of File
 */