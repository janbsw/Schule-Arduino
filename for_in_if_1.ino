int ledarray[] = {13, 12, 11, 10, 9};
int i = 0;
int  = 5;

void setup(){
  	Serial.begin(9600);
  
  	for(byte i = 0; i <= 5; i++) {
      pinMode(ledarray[i], OUTPUT);
  }
}

void loop(){
nevereverdothis(i, end);
}


void nevereverdothis(int i, int end){ 
	if(i < end){ 
		digitalWrite(ledarray[i],HIGH);
     	delay(100);
     	digitalWrite(ledarray[i],LOW);   
		nevereverdothis(i+1, end);
      	//Bitte nicht angewöhnen, würde man so nicht machen lg Jan
	} 
} 