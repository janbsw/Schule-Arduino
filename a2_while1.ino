int i= 0;
bool running = true;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  while(i<55){
    i++;
    Serial.println(i);
  }
  	while(running){
  		Serial.println("fertig");
    	running = !running;
  }
}