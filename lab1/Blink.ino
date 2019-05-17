//Practica para apagar y encender un LED
int ledPin = 23;//Esta es la variable que guardara el numero del pin

void setup() {
  pinMode(ledPin, OUTPUT);//Define como salida el numero del pin
}

void loop() {
  digitalWrite(ledPin, HIGH);  //Enciende el led en el nivel High (5V)
  delay(1000);                       // Espera un segundo
  digitalWrite(ledPin, LOW);    // Enciende el led en el nivel Low (0V)
  delay(1000);                       // Espera un segundo
}
