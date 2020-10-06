char i ;
void setup() 
{
  Serial.begin(9600);
  
  // put your setup code here, to run once:

}

void loop() {
  if(Serial.available()>0)
  {
    while(Serial.available()>0)
    {
      i=Serial.read();
    }
  // put your main code here, to run repeatedly:

Serial.write(i);
Serial.println();
delay(100);
}
}
