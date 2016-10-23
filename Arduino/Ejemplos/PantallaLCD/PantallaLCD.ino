#define DHTTYPE DHT11  // DHT 11

DHT dht(DHTPIN, DHTTYPE);


void setup() {
  
  Serial.begin(9600); // iniciar el puerto serie para imprimir los valores
  Serial.println("DHTxx test!"); // imprimir esta frase
  dht.begin(); // iniciar el sensor
  
}


void loop() {

  delay(2000);  // leemos los datos cada 2 segundos
   
  float h = dht.readHumidity();
  // lee los valores de la humedad 
  
  float t = dht.readTemperature();
    // lee la temperatura en grados Celsius (por defecto)
    
  float f = dht.readTemperature(true);
   // lee la temperatura como Fahrenheit (es Fahrenheit = verdadero)
   
  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println("Failed to read from DHT sensor!");
    return; // si no toma ningun valor, imprimir fallo al leer el sensor
  }

  Serial.print("Humidity: "); // imprimir humedad con su valor de la variable h
  Serial.print(h);
  Serial.print(" %\t"); // imprimir el signo de porcentaje
  Serial.print("Temperature: "); // imprimir temperatura y el valor de la temperatura 
  Serial.print(t);
  Serial.print(" *C "); // imprimir la letra c de grados celsuis
  Serial.print(f);
  Serial.print(" *F\t"); // imprimir en grados fahrenheit 
  Serial.println(" "); // espacio en blanco
  
}  

