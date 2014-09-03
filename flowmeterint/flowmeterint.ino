int sensor= 0;
int value= 0;
unsigned long cnt;
long lastread;
void setup() {
  // put your setup code here, to run once:
  pinMode(sensor, INPUT);
  Serial.begin(9600);
  cnt = 0;
  lastread = millis();
  attachInterrupt(0,count, RISING);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  value= digitalRead(sensor);
  //Serial.println(value);
  if(millis() - lastread > 200)
  {
    Serial.println(cnt);
    cnt = 0;
    lastread = millis();
  }
  //delay(50);
}
void count()
{
  cnt++;
  //Serial.print("i");
}  
