int tasterstatus=0;
int frq=0;
int ledstatus= 0;
int lt = 0;
int mypins[] = {9,11,12,6};
void setup()
{
    pinMode(mypins[1], OUTPUT);
    pinMode(mypins[2], OUTPUT);
    pinMode(mypins[0], OUTPUT);

    pinMode(mypins[3], INPUT);
    Serial.begin(9600);
}

void loop()
{
    int t = millis();
    tasterstatus=digitalRead(6);
    Serial.println(t);
    Serial.println(lt);
    if (tasterstatus == HIGH)
    {
        frq ++;
        delay(100);
    }
    if(frq == 0) {
        if(t > lt + 100) {
            if(ledstatus == 0) {
                digitalWrite(11, HIGH);
                ledstatus++;
                lt = millis();
            } else {
                digitalWrite(11, LOW);
                ledstatus = 0;
                lt = millis();
            }


        }

    } else if(frq == 1) {
        if(t > lt + 1000) {
            if(ledstatus == 0) {
                digitalWrite(11, HIGH);
                ledstatus++;
                lt = millis();
            } else {
                digitalWrite(11, LOW);
                ledstatus = 0;
                lt = millis();
            }


        } else if(frq == 2) {
            if(t > lt + 2000) {
                if(ledstatus == 0) {
                    digitalWrite(11, HIGH);
                    ledstatus++;
                    lt = millis();
                } else {
                    digitalWrite(11, LOW);
                    ledstatus = 0;
                    lt = millis();
                }
            }
            if(frq > 2) {
                frq = 0;
            }
        }
    }
}