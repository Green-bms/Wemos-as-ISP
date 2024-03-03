
/*
Blink85
Test of two blinking leds with delay time set by a potentiometer for Attiny85 microcontroller

Modified 20/01/2024
Sergio Ghirardelli

 */

void setup() {
  // put your setup code here, to run once:
pinMode(0, OUTPUT);
pinMode(1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int pippo = analogRead(A1);
  int pluto = map (pippo, 0, 1024, 50, 2000);
  
  digitalWrite(0, HIGH);   
  digitalWrite(1, LOW); 
  delay(pluto);                       
  digitalWrite(0, LOW);  
  digitalWrite(1, HIGH);  
  delay(pluto); 

}
