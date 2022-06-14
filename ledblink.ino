int led =12;
int led1=13;
int led2=7;
void setup()
{
  
  pinMode(led,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
}
void loop()
{
  //RED LED
 digitalWrite(led,HIGH);
  delay(5000);
    digitalWrite(led,LOW);
 

  //YELLOW LED
  digitalWrite(led1,HIGH);
  delay(2000);
  digitalWrite(led1,LOW);
  delay(2000);

  //GREEN LED
  digitalWrite(led2,HIGH);
  delay(3000);
  digitalWrite(led2,LOW);
  delay(3000);
}
