int kled=2;
int yled=3;
int butonpin=4;
int buton_durum;
int buzzerpin=5;

void setup() 
{
  pinMode(kled,OUTPUT);
  pinMode(yled,OUTPUT);
  pinMode(buzzerpin,OUTPUT);
  pinMode(butonpin,INPUT);

}

void loop() 
{
  buton_durum = digitalRead(butonpin);
  
  if(buton_durum==HIGH)
  {
    digitalWrite(kled,HIGH);
    digitalWrite(buzzerpin,HIGH);
    digitalWrite(yled,LOW);
  }

  else
  {
    digitalWrite(kled,LOW);
    digitalWrite(buzzerpin,LOW);
    digitalWrite(yled,HIGH);
  }
}
