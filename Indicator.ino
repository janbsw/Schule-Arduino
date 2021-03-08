float vout = 0.0;
int value = 0;
int pins[]={2,3,4,5,6,7};
int valarr[] = {0,1,2,3,4,5};
int fov = 0;
void setup(){
  pinMode(A0, INPUT);
  for(int i=0;i<=5;i++){
  pinMode(pins[i],OUTPUT);
  }
  Serial.begin(9600);
}

void loop(){
  value = analogRead(A0);
  vout = value * 5.0/1024;
  
  for(int num=0;num<=6;num++){
    if(valarr[num]-0.1 >= vout){
  		fov = num-1;
    	break;
    }
    ledmanager(fov);
  } 
}


void ledmanager(int numl){
  for(int i=0;i<=numl;i++){
    Serial.println(i);
    digitalWrite(pins[i],HIGH);
  }
  
  for(int i=5-numl;i<=5;i++){
    digitalWrite(pins[i],LOW);
  }
}