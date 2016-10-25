/*

Enciende y apaga tres leds
*/
//------------------------------------
//Función principal
//------------------------------------
void setup()
// Se ejecuta cada vez que el Arduino se inicia
{
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);


}
//------------------------------------
//Función cíclica
//------------------------------------
void loop()
// Esta función se mantiene ejecutando
{

// Enciende el LED
digitalWrite(5,HIGH); 

// Pasa un segundo
delay(1000);

// Apaga el LED
digitalWrite(5,LOW);

// Pasa un segundo
delay(1000);


// Enciende el LED
digitalWrite(6,HIGH); 

// Pasa un segundo
delay(1000);

// Apaga el LED
digitalWrite(6,LOW);

// Pasa un segundo
delay(1000);


// Enciende el LED
digitalWrite(7,HIGH); 

// Pasa un segundo
delay(1000);

// Apaga el LED
digitalWrite(7,LOW);

// Pasa un segundo
delay(1000);


}
// Fin del programa
