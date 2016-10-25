
         int pinLedR = 11;  // pin Rojo del led RGB 
         int pinLedV = 10;  // pin Verde del led RGB
         int pinLedA = 9;   // pin Azul del led RGB
     
         void setup(){ 
           pinMode(pinLedR, OUTPUT);    // pone el pinLedR como output
           pinMode(pinLedV, OUTPUT);    // pone el pinLedV como output
           pinMode(pinLedA, OUTPUT);    // pone el pinLedA como output

           randomSeed(analogRead(A0));  // inicializamos el generador de numeros aleatorios
   }
     
         void loop(){ 
           //  generamos los numeros para los tres colores
           int rojo  = random(0, 256);   // generamos el valor del rojo       
           int verde = random(0, 256);   // generamos el valor del verde       
           int azul  = random(0, 256);   // generamos el valor del azul

           color(rojo, verde, azul);     // llamamos a la funcion color()

           delay(random(500, 1000));     // delay por un pausa aleatoria
   }  
         
         // funcion para generar colores
         void color (int rojo, int verde, int azul) {    
           analogWrite(pinLedR, rojo); 
           analogWrite(pinLedV, verde);
           analogWrite(pinLedA, azul);
   } 
        

