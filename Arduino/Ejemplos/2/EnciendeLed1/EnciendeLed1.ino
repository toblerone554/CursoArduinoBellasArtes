/*
Enciende un LED de la placa por un segundo y lo apaga por el mismo tiempo
*/
//------------------------------------
//Función principal
//------------------------------------
void setup()
// Se ejecuta cada vez que el Arduino se inicia
{
  
// Inicializa el pin 13 como una salida el led de la placa
pinMode(13,OUTPUT); 
}
//------------------------------------
//Función cíclica
//------------------------------------
void loop()
// Esta función se mantiene ejecutando continuamente
{
// Enciende el led de la placa cuando recibe corriente
digitalWrite(13,HIGH); // Enciende el LED
// Tiempo de espera de 1000 milisegundos(1s = 1000ms)
delay(1000);
// Apaga el led de la placa 
digitalWrite(13,LOW);
// Tiempo de espera de 1000 milisegundos(1s = 1000ms)
delay(1000);
}
// Fin del programa
