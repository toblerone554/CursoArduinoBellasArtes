/*
Enciende un LED conectado al pin 5 y lo apaga por el mismo tiempo
*/
//------------------------------------
//Función principal
//------------------------------------
void setup()
// Se ejecuta cada vez que el Arduino se inicia
{
  
// Inicializa el pin 5 como una salida el led de la placa
pinMode(5,OUTPUT); 
}
//------------------------------------
//Función cíclica
//------------------------------------
void loop()
// Esta función se mantiene ejecutando continuamente
{
// Enciende el led de la placa cuando recibe corriente
digitalWrite(5,HIGH); // Enciende el LED
// Tiempo de espera de 1000 milisegundos(1s = 1000ms)
delay(1000);
// Apaga el led de la placa 
digitalWrite(5,LOW);
// Tiempo de espera de 1000 milisegundos(1s = 1000ms)
delay(1000);
}
// Fin del programa
