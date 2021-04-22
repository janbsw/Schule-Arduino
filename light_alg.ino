int pinabfolge[] = { 7, 8, 4 };
int delayvoran[] = { 500, 500, 200 };
int delayabfolge[] = { 500, 30, 200 };
int started[sizeof(pinabfolge) / sizeof(pinabfolge[0])];
int startedtime[sizeof(pinabfolge) / sizeof(pinabfolge[0])];
int nt;
bool working = true;

void setup()
{
	Serial.begin(9600);
for (byte i = 0; i < (sizeof(pinabfolge) / sizeof(pinabfolge[0])); i++)
{
	started[i] = 0;
	pinMode(pinabfolge[i], OUTPUT);
}
  if(sizeof(delayvoran) / sizeof(delayvoran[0])< sizeof(pinabfolge) / sizeof(pinabfolge[0])){
	working = false;
  }
  if(sizeof(delayabfolge) / sizeof(delayabfolge[0])< sizeof(pinabfolge) / sizeof(pinabfolge[0])){
	working = false;
  }
}
void loop(){
  while(working){
	lightalg();
  }
}

void lightalg()
{
	nt = millis();
	for (byte i = 0; i < (sizeof(pinabfolge) / sizeof(pinabfolge[0])); i++)
	{
		Serial.println(started[i]);
		if (started[i] == 0)
		{
			if (delayvoranf(i) < nt)
			{
				digitalWrite(pinabfolge[i], HIGH);
				started[i] = 1;
				startedtime[i] = millis();
			}
		}
		else if (started[i] >= 1)
		{
			if (nt > startedtime[i] + delayabfolge[i])
			{
				digitalWrite(pinabfolge[i], LOW);
			}
		}
	}
}

int delayvoranf(int place)
{
	int delayadd = 0;
	for (int i = 0; i <= place; i++)
	{
		delayadd = delayadd + delayvoran[i];
	}

	Serial.println(delayadd);
	return (delayadd);
}
