int ledarray[] = {13, 12, 11, 10, 9, 8};

void setup(){
  	Serial.begin(9600);
  	for(byte i = 0; i <= 6; i++) {
      pinMode(ledarray[i], OUTPUT);
  }
}

void loop(){
  for(byte i = 0; i <= 6; i++) {
      digitalWrite(ledarray[i],HIGH);
      delay(100);
      digitalWrite(ledarray[i],LOW);   
  }
  aufleuchten();
}

void aufleuchten(){
  digitalWrite(ledarray[0],HIGH);
  digitalWrite(ledarray[1],HIGH);
  digitalWrite(ledarray[2],HIGH);
  digitalWrite(ledarray[3],HIGH);
  digitalWrite(ledarray[4],HIGH);
  digitalWrite(ledarray[5],HIGH);
  delay(500);
  digitalWrite(ledarray[0],LOW);
  digitalWrite(ledarray[1],LOW);
  digitalWrite(ledarray[2],LOW);
  digitalWrite(ledarray[3],LOW);
  digitalWrite(ledarray[4],LOW);
  digitalWrite(ledarray[5],LOW);

}