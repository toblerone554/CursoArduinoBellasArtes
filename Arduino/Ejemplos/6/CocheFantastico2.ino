//Coche fantastico 2

// En este ejercicio vamos a usar un array. 

// Un array es un conjunto de datos del mismo tipo ordenados de forman líneal uno después de otro. 
// Los componentes de un array se han de referenciar por medio del nombre del array y un índice de desplazamiento para indicar el componente deseado.

// Define el array de pines con todos los pines a usar, en lugar de uno a uno
int pinArray[] = {2, 3, 4, 5, 6, 7}; 

// Creamos una variable llamada contador que va pasando por cada uno de nuestros pines que hemos puesto en el array
int count = 0;

// Definimos el tiempo de espera
int espera = 70;

void setup(){

//Usaremos un FOR, que nos permite aumentar poco a poco nuestro contador para poner todos los pines de salida
  
for (count=0;count<6;count++){ 

// Configuramos todos los PINs como salida
pinMode(pinArray[count], OUTPUT);
}
}
void loop() { 

//Usaremos un FOR, que nos permite aumentar poco a poco nuestro contador e ir encendiendo nuestros leds
for (count=0;count<6;count++) { 

// Recorrido de ida de encendido 
digitalWrite(pinArray[count], HIGH); 

//Tiempo de espera
delay(espera);

// Recorrido de vuelta de apagado 
digitalWrite(pinArray[count], LOW);

//Tiempo de espera
delay(espera);
}

//Usaremos un FOR, que nos permite aumentar poco a poco nuestro contador e ir encendiendo nuestros leds
 // en sentido inverso
for (count=5;count>=0;count--) {

// Recorrido de vuelta de encendido 
digitalWrite(pinArray[count], HIGH); 

//Tiempo de espera
delay(espera);

// Recorrido de vuelta de apagado 
digitalWrite(pinArray[count], LOW);

//Tiempo de espera
delay(espera);
}
}

