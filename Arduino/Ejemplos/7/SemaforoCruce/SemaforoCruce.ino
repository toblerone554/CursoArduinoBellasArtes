//Creamos las variables para cada uno de los elementos

//Semaforo de coches 1 con sus tres colores
int Semaforo1CocheRojo = 3;
int Semaforo1CocheAmarillo = 4;
int Semaforo1CocheVerde = 5;

//Semaforo de Peatones 1 con sus dos colores
int Semaforo1PeatonRojo = 6;
int Semaforo1PeatonVerde = 7;

//Semaforo de coches 2 con sus tres colores 
int Semaforo2CocheRojo = 8;
int Semaforo2CocheAmarillo = 9;
int Semaforo2CocheVerde = 10;

//Semaforo de Peatones 2 con sus dos colores
int Semaforo2PeatonRojo = 11;
int Semaforo2PeatonVerde = 12;

int espera = 3000; // El tiempo que se esperara
void setup(){

//Establecemos los pines que vamos a usar como salidas
pinMode(Semaforo1CocheRojo, OUTPUT); 
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

//Primero coche 1 verde, peaton 1 rojo, coche 2 rojo, peaton verde
digitalWrite(Semaforo1CocheVerde, HIGH); 
digitalWrite(Semaforo1PeatonRojo, HIGH);

digitalWrite(Semaforo2CocheRojo, HIGH);
digitalWrite(Semaforo2PeatonVerde, HIGH);

delay(espera);


//Segundo semaforo coche 1 se apaga el verde y se enciende el amarillo , se apaga verde peaton 1 y se enciende el rojo
// y el semaforo 2 de coche y peaton siguen iguales 
digitalWrite(Semaforo1CocheVerde, LOW); // Enciende y apaga secuencialmente los LEDs
digitalWrite(Semaforo1CocheAmarillo, HIGH); // Enciende y apaga secuencialmente los LEDs
digitalWrite(Semaforo1PeatonRojo, HIGH);

digitalWrite(Semaforo2CocheRojo, HIGH);
digitalWrite(Semaforo2PeatonVerde, HIGH);

delay(espera);


//Tercero se apaga el amarillo del coche 1 y se enciende el rojo, se apaga el rojo del peaton 1 y se enciende el verde
// Y el semaforo 2 de coche se apaga el rojo y se enciende el amarillo, y peaton 2 se apaga el verde y se enciende el rojo
digitalWrite(Semaforo1CocheAmarillo, LOW); 
digitalWrite(Semaforo1CocheRojo, HIGH); 
digitalWrite(Semaforo1PeatonRojo, LOW);
digitalWrite(Semaforo1PeatonVerde, HIGH);

digitalWrite(Semaforo2CocheRojo, LOW);
digitalWrite(Semaforo2CocheAmarillo, HIGH);
digitalWrite(Semaforo2PeatonVerde, LOW);
digitalWrite(Semaforo2PeatonRojo, HIGH);
delay(espera);





//Cuarto: se apaga el rojo y se enciende el amarillo del semaforo coche 1, se apaga el verde de peaton 1 y se enciende el rojo, 
// se apaga el amarillo y se enciende el rojo de semaforo coche 2 y se apaga el rojo y se enciende el verde del peaton 2
digitalWrite(Semaforo1CocheAmarillo, HIGH); 
digitalWrite(Semaforo1CocheRojo, LOW); 
digitalWrite(Semaforo1PeatonVerde, LOW);
digitalWrite(Semaforo1PeatonRojo,HIGH);

digitalWrite(Semaforo2CocheRojo, HIGH);
digitalWrite(Semaforo2CocheAmarillo, LOW);
digitalWrite(Semaforo2PeatonVerde, HIGH);
digitalWrite(Semaforo2PeatonRojo, LOW);
delay(espera);



// Quinto se apaga el amarillo y se enciende el verde del semaforo coche 1 y el de peaton sigue rojo,
// semaforo dos coche sigue rojo y verde peaton 2

digitalWrite(Semaforo1CocheAmarillo, LOW); 
digitalWrite(Semaforo1CocheVerde, HIGH); 
digitalWrite(Semaforo1PeatonRojo,HIGH);

digitalWrite(Semaforo2CocheRojo, HIGH);
digitalWrite(Semaforo2PeatonVerde, HIGH);
delay(espera);




}
