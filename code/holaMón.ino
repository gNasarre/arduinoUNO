
//PROGRAMA 1 - HOLA MÓN - GERARD NASARRE
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
  digitalWrite(3, HIGH);                         
  digitalWrite(7, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(A3, HIGH);
  delay(1000);                         
  digitalWrite(3, LOW);                         
  digitalWrite(7, LOW);
  digitalWrite(9, LOW);
  digitalWrite(A3, LOW);
  delay(1000);
                          
}
