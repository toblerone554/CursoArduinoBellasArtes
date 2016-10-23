/*
-----------------------------------
Hola Mundo
-----------------------------------
Enciende un LED por un segundo y lo apaga por el mismo tiempo
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
// cuando este energizado el Arduino
digitalWrite(5,HIGH); // Enciende el LED
delay(1000);
// Temporiza un segundo (1s = 1000ms)
digitalWrite(5,LOW);
// Apaga el LED
delay(1000);
// Temporiza un segundo (1s = 1000ms)

digitalWrite(6,HIGH); // Enciende el LED
delay(1000);
// Temporiza un segundo (1s = 1000ms)
digitalWrite(6,LOW);
// Apaga el LED
delay(1000);
// Temporiza un segundo (1s = 1000ms)

digitalWrite(7,HIGH); // Enciende el LED
delay(1000);
// Temporiza un segundo (1s = 1000ms)
digitalWrite(7,LOW);
// Apaga el LED
delay(1000);
// Temporiza un segundo (1s = 1000ms)

}
// Fin del programa