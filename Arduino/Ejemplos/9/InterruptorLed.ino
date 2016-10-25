 /*

           En este proyecto generaremos distintos colores 
           utilizando un led rgb

           usaremos una funcion para generar los colores

         */

         int pinLedR = 11;  // pin Rojo del led RGB 
         int pinLedV = 10;  // pin Verde del led RGB
         int pinLedA = 9;   // pin Azul del led RGB
     
         int pausa = 1000;
     
         void setup(){ 
           pinMode(pinLedR, OUTPUT);    // pone el pinLedR como output
           pinMode(pinLedV, OUTPUT);    // pone el pinLedV como output
           pinMode(pinLedA, OUTPUT);    // pone el pinLedA como output
   }
     
         void loop(){ 
           //  colores basicos:
           color(255, 0, 0);   // rojo
           delay(pausa);       // delay por pausa
           color(255,0,255);    // verde
           delay(pausa);       // delay por pausa
           color(0, 0, 255);   // azul
           delay(pausa);       // delay por pausa
        
      
   }  
         
         // funcion para generar colores
         void color (int rojo, int verde, int azul) {    
           analogWrite(pinLedR, rojo); 
           analogWrite(pinLedV, verde);
           analogWrite(pinLedA, azul);
   } 
       

