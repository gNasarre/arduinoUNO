
//SENSOR DE LUZ - GERARD NASARRE

unsigned int NIVELL_LLUM=0;
unsigned int NIVELL_LLUM_RAW=0;
unsigned int POCALLUM=45;
unsigned int LLUMNORMAL=70;

void setup ()
{
  Serial.begin(115200);
  pinMode(3,OUTPUT); 
  pinMode(A3,OUTPUT);
}
void loop ()
{
NIVELL_LLUM_RAW= analogRead(A0);
NIVELL_LLUM= map(NIVELL_LLUM_RAW,482,149,0,100);
Serial.println(NIVELL_LLUM);

if(NIVELL_LLUM<=POCALLUM)
{
digitalWrite(3,HIGH);
digitalWrite(A3,HIGH);
}
if(POCALLUM<NIVELL_LLUM<LLUMNORMAL)
{
digitalWrite(3,HIGH);  
digitalWrite(A3,LOW);
}
if(NIVELL_LLUM>LLUMNORMAL)
{
digitalWrite(3,LOW);  
digitalWrite(A3,LOW); 
}
delay (100);
}
