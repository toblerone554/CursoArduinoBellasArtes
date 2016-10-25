#define RGB_ROJO 9
#define RGB_VERDE 10
#define RGB_BLUE 11

void setup() {

pinMode (RGB_ROJO, OUTPUT);
pinMode (RGB_VERDE, OUTPUT);
pinMode (RGB_BLUE, OUTPUT);


}

void loop() {

digitalWrite(RGB_ROJO, HIGH);
digitalWrite(RGB_VERDE,LOW);
digitalWrite(RGB_BLUE,LOW);
delay (1000);


digitalWrite(RGB_ROJO,LOW);
digitalWrite(RGB_VERDE,HIGH);
digitalWrite(RGB_BLUE,LOW);
delay (1000);


digitalWrite(RGB_ROJO, LOW);
digitalWrite(RGB_VERDE,LOW);
digitalWrite(RGB_BLUE,HIGH);
delay (1000);

}
