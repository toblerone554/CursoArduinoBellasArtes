//Coche fantastico1
int Semaforo1CocheRojo = 3;
int Semaforo1CocheAmarillo = 4;
int Semaforo1CocheVerde = 5;
int Semaforo1PeatonRojo = 6;
int Semaforo1PeatonVerde = 7;
int Semaforo2CocheRojo = 8;
int Semaforo2CocheAmarillo = 9;
int Semaforo2CocheVerde = 10;
int Semaforo2PeatonRojo = 11;
int Semaforo2PeatonVerde = 12;

int espera = 3000; // El tiempo que se esperara
void setup(){
pinMode(Semaforo1CocheRojo, OUTPUT); // Configuración de los PIN como salida
pinMode(Semaforo1CocheAmarillo, OUTPUT);
pinMode(Semaforo1CocheVerde, OUTPUT);
pinMode(Semaforo1PeatonRojo, OUTPUT);
pinMode(Semaforo1PeatonVerde, OUTPUT);
pinMode(Semaforo2CocheRojo, OUTPUT);
pinMode(Semaforo2CocheAmarillo, OUTPUT);
pinMode(Semaforo2CocheVerde, OUTPUT);
pinMode(Semaforo2PeatonRojo, OUTPUT);
pinMode(Semaforo2PeatonVerde, OUTPUT);

}
void loop() {

//PRIMERO
digitalWrite(Semaforo1CocheVerde, HIGH); // Enciende y apaga secuencialmente los LEDs
digitalWrite(Semaforo1PeatonRojo, HIGH);

digitalWrite(Semaforo2CocheRojo, HIGH);
digitalWrite(Semaforo2PeatonVerde, HIGH);

delay(espera);

//SEGUNDO
digitalWrite(Semaforo1CocheVerde, LOW); // Enciende y apaga secuencialmente los LEDs
digitalWrite(Semaforo1CocheAmarillo, HIGH); // Enciende y apaga secuencialmente los LEDs
digitalWrite(Semaforo1PeatonRojo, HIGH);

digitalWrite(Semaforo2CocheRojo, HIGH);
digitalWrite(Semaforo2PeatonVerde, HIGH);

delay(espera);

//TERCERO
digitalWrite(Semaforo1CocheVerde, LOW); // Enciende y apaga secuencialmente los LEDs
digitalWrite(Semaforo1CocheAmarillo, LOW); // Enciende y apaga secuencialmente los LEDs
digitalWrite(Semaforo1CocheRojo, HIGH); // Enciende y apaga secuencialmente los LEDs
digitalWrite(Semaforo1PeatonVerde, HIGH);

digitalWrite(Semaforo2CocheRojo, LOW);
digitalWrite(Semaforo2CocheAmarillo, HIGH);
digitalWrite(Semaforo2PeatonVerde, LOW);
digitalWrite(Semaforo2PeatonRojo, HIGH);
delay(espera);

//Cuarto
digitalWrite(Semaforo1CocheVerde, LOW); // Enciende y apaga secuencialmente los LEDs
digitalWrite(Semaforo1CocheAmarillo, LOW); // Enciende y apaga secuencialmente los LEDs
digitalWrite(Semaforo1CocheRojo, HIGH); // Enciende y apaga secuencialmente los LEDs
digitalWrite(Semaforo1PeatonVerde, HIGH);

digitalWrite(Semaforo2CocheRojo, LOW);
digitalWrite(Semaforo2CocheAmarillo, LOW);
digitalWrite(Semaforo2CocheVerde, HIGH);
digitalWrite(Semaforo2PeatonVerde, LOW);
digitalWrite(Semaforo2PeatonRojo, HIGH);
delay(espera);

// QUINTO

digitalWrite(Semaforo1CocheVerde, LOW); // Enciende y apaga secuencialmente los LEDs
digitalWrite(Semaforo1CocheAmarillo, HIGH); // Enciende y apaga secuencialmente los LEDs
digitalWrite(Semaforo1CocheRojo, LOW); // Enciende y apaga secuencialmente los LEDs
digitalWrite(Semaforo1PeatonVerde, LOW);
digitalWrite(Semaforo1PeatonVerde, HIGH);


digitalWrite(Semaforo2CocheRojo, LOW);
digitalWrite(Semaforo2CocheAmarillo, LOW);
digitalWrite(Semaforo2CocheAmarillo, HIGH);
digitalWrite(Semaforo2PeatonVerde, LOW);
digitalWrite(Semaforo2PeatonRojo, HIGH);
delay(espera);


}
