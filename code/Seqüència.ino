
//PROGRAMA 4 - Seqüència  - GERARD NASARRE
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
  digitalWrite(9, HIGH);                         
  delay (2000);
  digitalWrite(9, LOW);
  digitalWrite(A3, HIGH);
  delay (1000);
  digitalWrite(A3, LOW);                         
  digitalWrite(7, HIGH);
  delay (500);
  digitalWrite(7, LOW);
  digitalWrite(3, HIGH);
  delay (250);
  digitalWrite(3, LOW);
  delay (1500);               
}
