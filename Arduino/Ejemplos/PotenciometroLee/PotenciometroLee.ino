/* Leemos el valor que nos da el potenciometro
 * conectado a una entrada analogica y enviamos dicha
 * lectura por el puerto usb para verlo por el ordenador
 */

//Asociamos el potenciometro con una entrada analogica
#define POT 0

//Definimos la velocidad de comunicacion entre Arduino y el ordenador
#define VELOCIDAD_COM 9600

//Definimos una variable para almacenar la medida
int valor;

void setup() {

//Iniciamos la comunicacion a la velocidad establecida
Serial.begin(VELOCIDAD_COM);
  
}

void loop() {

//Almacenamos la lectura de la entrada analogica
valor = analogRead(POT);

//Enviamos la informacion al ordenador
Serial.print("La medida es de: ");

Serial.println(valor);

//Esperamos un poco para leer bien las medidas
delay(100);

}
