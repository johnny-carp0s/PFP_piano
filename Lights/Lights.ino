int pin1 = 10;
int pin2 = 9;
int pin3 = 8;
int pin4 = 7;
int pin5 = 6;

int LED[19][2] = {{pin1, pin2},{pin2, pin1},{pin2, pin3},{pin3, pin2},{pin3, pin4},{pin4, pin3},
{pin4, pin5},{pin5, pin4},{pin1, pin3},{pin3, pin1},{pin2, pin4},{pin4, pin2},{pin3, pin5},{pin5, pin3},
{pin1, pin4},{pin4, pin1},{pin2, pin5},{pin5, pin2},{pin1 ,pin5}};


void buttonLED(int LEDn, int LEDs){

  int LEDi = LEDn - 1;

  if(LEDs == HIGH){
    pinMode(LED[LEDi][0], OUTPUT);
    pinMode(LED[LEDi][1], OUTPUT);

    digitalWrite(LED[LEDi][0],HIGH);
    digitalWrite(LED[LEDi][1],LOW);
  }
  else{
    pinMode(LED[LEDi][0], INPUT);
    pinMode(LED[LEDi][1], INPUT);
  }

}
