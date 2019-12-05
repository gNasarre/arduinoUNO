
//PROGRAMA 5 - 4 FUNCIONS LÓGIQUES - GERARD NASARRE
//curs 2019-20, 1r CFGS Electromedicina Clínica, Mòdul 09

//variables
boolean Q3=0;
boolean Q7=0;
boolean Q9=0;
boolean QA3=0;

boolean I2=0;
boolean I8=0;
boolean IA1=0;
boolean IA2=0;


void setup() 
{
  //configure outputs
  pinMode(3, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(A3, OUTPUT);
  
  //in boot, all outputs low
  digitalWrite(3,LOW);
  digitalWrite(7,LOW);
  digitalWrite(9,LOW);
  digitalWrite(A3,LOW);
  
  //configure inputs
  pinMode(2, INPUT);
  pinMode(8, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);

}

void loop() 
{
 //read inputs 
 I2=digitalRead(2);
 I8=digitalRead(8);
 IA1=digitalRead(A1);
 IA2=digitalRead(A2); 
 
  //********logics equations************
  Q3=I2&&I8&&IA1&&IA2;
  Q7=I2||I8||IA1||IA2;
  Q9=(I2&&I8)||(IA1||IA2);
  QA3=!(I2&&I8)||!IA1||!A2;
  //************************************
  
  //write outputs
  digitalWrite(3, Q3);
  digitalWrite(7, Q7);
  digitalWrite(9, Q9);
  digitalWrite(A3, QA3);
    
}
