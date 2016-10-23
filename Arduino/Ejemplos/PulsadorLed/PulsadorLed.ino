int buttonPin = 2; // número del pin para el botón
int ledPin =  13;  // número del pin del LED

int buttonState = 0;  // estado del botón (0 ó LOW es apagado y 1 ó HIGH es encendido)
int estado = 0; 
void setup() {
 // Se identifica el pin 13 como salida
 pinMode(ledPin, OUTPUT);      
 // Se identifica el pin 2 como entrada
 pinMode(buttonPin, INPUT);    
}

void loop(){
 // Leemos si el botón en pin2 está abierto o cerrado
 buttonState = digitalRead(buttonPin);

if (buttonState == HIGH) {

  estado = 1-estado;
  
  }
 // Si está siendo pulsado es HIGH
 if (estado == HIGH) {    
   // Y el LED se enciende    
   digitalWrite(ledPin, HIGH);  
 }
 else {
   // Si no es asi, se apaga
   digitalWrite(ledPin, LOW);
 }

}


