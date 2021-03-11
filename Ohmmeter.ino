float inputv = 5.0;
int res2= 100;
long value = 0;

void setup(){  
  Serial.begin(9600);
}



void loop(){
  resistor();
}

void resistor(){
  value = analogRead(A0);
  float voltage1 = inputv-value/1024.0*inputv;
  float voltage2 = inputv-voltage1;
  int res1 = res2*(voltage1/voltage2);
      
  Serial.println(res1);
}  