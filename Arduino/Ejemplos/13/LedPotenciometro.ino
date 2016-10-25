/* Control de brillo de un led con potenciometro
 *  
 *  Leemos el valor entregado por el potenciometro
 *  conectado a una entrada analogica y ajustamos el brillo del led
 */
 
#define LED 2


//Asociamos el potenciometro con una entrada analogica
#define POT 0

//Definimos una variable para almacenar la medida
int medida_pot;


//Definimos una variable para almacenar la medida
int valor_pwm;

void setup() {

//Configuramos nuestro led como salida
pinMode(LED,OUTPUT);

}

void loop() {

//Almacenamos la lectura de la entrada analogica
medida_pot = analogRead(POT);

//Ajustamos el rango de la entrada analogica al de la salida PWM

valor_pwm = map(medida_pot, 0, 1023, 0, 255);

//Enviamos el valor a la salida PWM
analogWrite(LED,valor_pwm);

}
