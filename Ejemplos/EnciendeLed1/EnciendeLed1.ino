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
pinMode(5,OUTPUT); // Inicializa el pin 13 como una salida
}
//------------------------------------
//Función cíclica
//------------------------------------
void loop()
// Esta función se mantiene ejecutando
{
// cuando este energizado el Arduino
digitalWrite(13,HIGH); // Enciende el LED
delay(1000);
// Temporiza un segundo (1s = 1000ms)
digitalWrite(13,LOW);
// Apaga el LED
delay(1000);
// Temporiza un segundo (1s = 1000ms)
}
// Fin del programa
