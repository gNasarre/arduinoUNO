
//PROGRAMA 3 - TON=1s, TOFF=0,5s  - GERARD NASARRE
//curs 2019-20, 1r CFGS Electromedicina Clínica, Mòdul 09
                     
void setup() 
{
  pinMode(3, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(A3, OUTPUT);
}

void loop() 
{
  allON();
  delay(1000);
  allOFF();
  delay(500);                          
}

void allON()
{
  digitalWrite(3,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(A3,HIGH);
}

void allOFF()
{
  digitalWrite(3,LOW);
  digitalWrite(7,LOW);
  digitalWrite(9,LOW);
  digitalWrite(A3,LOW);
}
