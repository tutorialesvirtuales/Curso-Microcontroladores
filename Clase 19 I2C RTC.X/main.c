

#include "mcc_generated_files/mcc.h"
#include "I2C.h"

/*
 * Se encarga de escribir en el RTC
 */
void escribe_rtc(unsigned char direccion, unsigned char dato) {
    i2c_inicia_com();
    i2c_envia_dato(0xD0); // Codigo del RTC
    i2c_envia_dato(direccion);
    i2c_envia_dato(dato);
    i2c_detener();
}

/*
 * Se encarga de leer una posicion del RTC
 */
unsigned char leer_rtc(unsigned char direccion) {
    unsigned char dato;
    i2c_inicia_com();
    i2c_envia_dato(0xD0); // Codigo del RTC
    i2c_envia_dato(direccion);
    i2c_reinicia_com();
    i2c_envia_dato(0xD1);
    dato = i2c_recibe_dato();
    i2c_detener();
    return dato;
}

/*
 * Seteo los datos del Reloj
 */
unsigned char setReloj(unsigned char direccion) {
    unsigned char dato;
    for (int i = 0; i <= 1; i++) {//en las direccienes que van desde 0 a 50
        char Rx = EUSART_Read();
        if (Rx >= 48 && Rx <= 57) {
            if (!i) {
                dato = ((Rx - 48) & 0x0F) << 4;
            } else {
                dato | = (Rx - 48) & 0x0F;
            }
        } else {
            i = -1;
            printf("\r\n Solo se permiten numeros \r\n");
            printf("\r\n Vuelva a grabar los datos \r\n");
        }
    }
    escribe_rtc(direccion, dato);
    return dato;
}

/*
 * Toma un dato del RTC y lo devuleve en decimal
 */
unsigned char convertirDato(unsigned char dato) {
    unsigned char datoR = 0;
    datoR = (dato & 0xF0) >> 4;
    datoR = (datoR * 10) + (dato & 0x0F);
    return datoR;
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
    i2c_iniciar();
    unsigned char segundos;
    unsigned char minutos;
    unsigned char horas;
    unsigned char dia;
    unsigned char mes;
    unsigned char anio;
    while (1) {
        if (!PORTBbits.RB0) {//Se graba cuando se presiona el RB0
            __delay_ms(20); //Antirrebote
            while (!PORTBbits.RB0);
            LATDbits.LATD4 = 1;
            printf("\r\n Inicio del Seteo de Hora");
            printf("\r\n Envie los segundos Ej: 13 \r\n");
            unsigned char dato = 0;
            dato = setReloj(0x00); //Setea segundos
            printf("\r\n Los segundos recibidos fueron %x", dato);
            ///////Seccion minutos/////
            printf("\r\n Envie los Minutos Ej: 25 \r\n");
            dato = setReloj(0x01);
            printf("\r\n Los Minutos recibidos fueron %x", dato);
            //// Seccion Horas ///
            printf("\r\n Envie las Horas en formato 24 Ej: 15 \r\n");
            dato = setReloj(0x02);
            printf("\r\n Las Horas recibidas fueron %x", dato);
            /// Dia de la semana ///
            printf("\r\n Envie el dia de la semana siendo domingo 01 y Sabado 07. Ej Martes= 03 \r\n");
            dato = setReloj(0x03);
            printf("\r\n El dia de la semana recibido fue %x", dato);
            /// Dia del Mes ///
            printf("\r\n Envie el dia del mes. Ej 28 \r\n");
            dato = setReloj(0x04);
            printf("\r\n El dia del mes recibido fue %x", dato);
            /// Envie el numero del mes
            printf("\r\n Envie el numero del mes. Ej 05 para mayo \r\n");
            dato = setReloj(0x05);
            printf("\r\n El Numero del mes recibido fue %x", dato);
            /// Numero del Año ///
            printf("\r\n Envie el numero del año. Ej 16 para 2016 \r\n");
            dato = setReloj(0x06);
            printf("\r\n El año recibido fue %x", dato);
            LATDbits.LATD4 = 0;
            printf("\r\n Seteo de Hora Finalizado");
        }
        unsigned char escape = 27;
        segundos = convertirDato(leer_rtc(0x00));
        minutos = convertirDato(leer_rtc(0x01));
        horas = convertirDato(leer_rtc(0x02));
        dia = convertirDato(leer_rtc(0x04));
        mes = convertirDato(leer_rtc(0x05));
        anio = convertirDato(leer_rtc(0x06));
        printf("%c", escape);
        __delay_ms(80);
        printf(" La Hora es:    %02d:%02d:%02d", horas, minutos, segundos);
        printf("\r\n La fecha es: %02d / %02d / 20%02d", dia, mes, anio);
        __delay_ms(900);
    }
}
/**
 End of File
 */