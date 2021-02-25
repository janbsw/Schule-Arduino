int i= 0;
int p1 = 0;
int p2 = 0;
bool running = true;


void setup()
{
  Serial.begin(9600);
}

void loop(){
  while(p1 == p2){
  gen();
  }
  while(running){
    Serial.println("Person 1:");
    Serial.println(p1);
    Serial.println("Person 2:");
    Serial.println(p2);
    running = !running;
	}
}
  


int gen(){
  p1 = random(0,21);
  p2 = random(0,21);
}