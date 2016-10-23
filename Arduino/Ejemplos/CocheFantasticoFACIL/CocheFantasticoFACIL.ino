//Coche fantastico1
int pin2 = 2;
int pin3 = 3;
int pin4 = 4;
int pin5 = 5;
int pin6 = 6;
int pin7 = 7;
int espera = 70; // El tiempo que se esperara
void setup(){
pinMode(pin2, OUTPUT); // Configuración de los PIN como salida
pinMode(pin3, OUTPUT);
pinMode(pin4, OUTPUT);
pinMode(pin5, OUTPUT);
pinMode(pin6, OUTPUT);
pinMode(pin7, OUTPUT);
}
void loop() {
digitalWrite(pin2, HIGH); // Enciende y apaga secuencialmente los LEDs
delay(espera);
digitalWrite(pin2, LOW);
delay(espera);
digitalWrite(pin3, HIGH);
delay(espera);
digitalWrite(pin3, LOW);
delay(espera);
digitalWrite(pin4, HIGH);
delay(espera);
digitalWrite(pin4, LOW);
delay(espera);
digitalWrite(pin5, HIGH);
delay(espera);
digitalWrite(pin5, LOW);
delay(espera);
digitalWrite(pin6, HIGH);
delay(espera);
digitalWrite(pin6, LOW);
delay(espera);
digitalWrite(pin7, HIGH);
delay(espera);
digitalWrite(pin7, LOW);
delay(espera);
digitalWrite(pin6, HIGH);
delay(espera);
digitalWrite(pin6, LOW);
delay(espera);
digitalWrite(pin5, HIGH);
delay(espera);
digitalWrite(pin5, LOW);
delay(espera);
digitalWrite(pin4, HIGH);
delay(espera);
digitalWrite(pin4, LOW);
delay(espera);
digitalWrite(pin3, HIGH);
delay(espera);
digitalWrite(pin3, LOW);
delay(espera);
}

