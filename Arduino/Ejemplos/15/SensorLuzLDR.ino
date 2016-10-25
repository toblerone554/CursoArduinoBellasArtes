//Monitorizamos el valor que lee el sensor de luz
//conectado al arduino

// Asociamos la fotocelula(LDR) a una entrada analogica

#define LDR 0

//Definimos la velocidad de comunicación entre arduino
//y ordenador

#define Velocidad_Com 9600

//Definicion de variables

int valor;

int valor_ajustado;

void setup() {
  
// Iniciamos la comunicacion a la velocidad seleccionada

Serial.begin(Velocidad_Com);
    
}

void loop(){
  
//Almacenamos la lectura de la entrada analogica en la variable

valor = analogRead(LDR);

//Ajustamos el valor leido al rango de 0 a 100

valor_ajustado = map(valor, 0, 1023, 0, 100);

//Enviamos la informacion al ordenador

Serial.print("El nivel de luz es de :");
Serial.print(valor_ajustado);
Serial.println("%");

//Dejamos un tiempo para ver las medidas de forma correcta

delay(100);
  
}

