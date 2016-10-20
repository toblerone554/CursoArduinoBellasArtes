//Coche fantastico 2

int pinArray[] = {2, 3, 4, 5, 6, 7}; // Define el array de pines
int count = 0;
// Contador
int espera = 70;
// Temporizador
void setup(){
for (count=0;count<6;count++){ // Configuramos todos los PINs
pinMode(pinArray[count], OUTPUT);
}
}
void loop() { // Enciende y apaga secuencialmente los LEDs
for (count=0;count<6;count++) { // utilizando la secuencia de control for(;;)
digitalWrite(pinArray[count], HIGH); // Recorrido de ida
delay(espera);
digitalWrite(pinArray[count], LOW);
delay(espera);
}
for (count=5;count>=0;count--) {
digitalWrite(pinArray[count], HIGH); // Recorrido de vuelta
delay(espera);
digitalWrite(pinArray[count], LOW);
delay(espera);
}
}

