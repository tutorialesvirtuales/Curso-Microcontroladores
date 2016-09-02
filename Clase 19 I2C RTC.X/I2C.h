/*
 *Funcion que se encarga de iniciar el Bus i2C
 */
void i2c_iniciar(){
    TRISCbits.TRISC3=1; //pin SCL como una entrada digital
    TRISCbits.TRISC4=1; //pin SDA como una entrada digital
    SSPSTAT=0b10000000; // velocidad standar, bus I2C
    SSPCON=0b00101000;  // I2C PIC habilitado en modo maestro velocidad=Fosc/(4*SSPADD+1)
    SSPCON2=0b00000000; // comunicación I2C no iniciada
    SSPADD=49;           //para una velocidad de 100Kbps con un oscilador de 20Mhz
}

////////////////////////////////////////////////////////////
// Función de espera: mientras se esté iniciada una comunicación,
// esté habilitado una recepción, esté habilitado una parada
// esté habilitado un reinicio de la comunicación, esté iniciada
// una comunicación o se este transmitiendo, el IC2 PIC se esperará
// antes de realizar algún trabajo
 
void i2c_espera(){
    while((SSPCON2 & 0b00011111) || (SSPSTAT & 0b00000100));
}

/////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
// Función de inicio de la comunicación I2C PIC

void i2c_inicia_com() {
    i2c_espera();        //espera que se cumplan las condiciones adecuadas
    SSPCON2bits.SEN = 1; //inicia la comunicación i2c
}

/////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
// Función de reinicio de la comunicación I2C PIC

void i2c_reinicia_com(){
    i2c_espera();         //espera que se cumplan las condiciones adecuadas
    SSPCON2bits.RSEN = 1; //reinicia la comunicación i2c
}

/////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
// Función de parada de la comunicación I2C PIC

void i2c_detener() {
    i2c_espera();        //espera que se cumplan las condiciones adecuadas
    SSPCON2bits.PEN = 1; //detener la comunicación i2c
}

//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////
//Función de transmisión de datos del maestro al esclavo
//esta función devolverá un 0 si el esclavo a recibido 
//el dato

unsigned char i2c_envia_dato(unsigned char dato) {
    i2c_espera();   //espera que se cumplan las condiciones adecuadas
    SSPBUF = dato;  //cargar en el registro SSPBUF el dato a enviar
    return  ACKSTAT;//devuelve un 0 si la transmisión es correcta
}

//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////
//Función de recepción de datos enviados por el esclavo al maestro
//esta función es para leer los datos que están en el esclavo

unsigned char i2c_recibe_dato(){

    unsigned char datoleido; //variable para guardar el dato que se reciba o lea
                             //del esclavo

    i2c_espera();         //espera que se cumplan las condiciones adecuadas
    SSPCON2bits.RCEN = 1; //reinicia la comunicación i2c, ya que la comunicación
                          //se ha tenido que iniciar antes, para enviar la
                          //dirección del esclavo y del registro a leer
    
    i2c_espera();         //espera que se cumplan las condiciones adecuadas
    datoleido = SSPBUF;   //el dato recibido en el registro SSPBUF
                          //se guarda en la variable datoleido

    i2c_espera();         //espera que se cumplan las condiciones adecuadas

    SSPCON2bits.ACKDT = 1;  //el maestro lo pone a 1 después de leer o recibir el dato, 
                            //luego el maestro habilitará ACKAEN y enviará al esclavo
                            //el ACKDT para indicarle al esclavo que ya no se leerán
                            //mas datos

    SSPCON2bits.ACKEN = 1;//inicia secuencia final de reconocimiento de SDA y SCL por 
                          //parte del maestro para enviarle al esclavo el valor de ACKDT
                          //en este caso le enviará un 1 para decirle que ya no se 
                          //recibirán mas datos 
    return datoleido;
}