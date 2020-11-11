// Mikrokontroler : Arduino Pro Mini
// my youtube channel : https://www.youtube.com/channel/UCniLVwpCgk57zdEST4DfzAQ
// My Instagram : robotik_arduino_indonesia
// Source This Code :


char ground[8] = {8,9,10,11,12,13,A0,A1};

char ALPHA[] = {
124,102,102,124,120,108,102,0, 0,0,                  //R           
  60,102,102,102,102,102,60,0, 0,0,       //o     
124,102,102,124,102,102,124,0,0,0,         //b   
60,102,102,102,102,102,60,0, 0,0,        //o
  126,24,24,24,24,24,24,0, 0,0,           //t     
126,24,24,24,24,24,24,0, 0,0,                       //i  
  102,108,120,112,120,108,102,0, 0,0,                 //k 
24,60,102,126,102,102,102,0,0,0,             // A
  124,102,102,124,120,108,102,0, 0,0,                  //R    
    120,108,102,102,102,108,120,0, 0,0,          // D
      102,102,102,102,102,102,60,0, 0,0,           // U
        60,24,24,24,24,24,60,0, 0,0,                 // I      
  102,118,126,126,110,102,102,0, 0,0,          // N
  60,102,102,102,102,102,60,0, 0,           // O
  0,0,0,0,0,0,0,0,0,0,0
};
void setup() 
{
  for (int x=8;x<14;x++)
  {
    pinMode(x, OUTPUT);
  }
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  
  for (int i=0;i<8;i++)
  {
    digitalWrite(ground[i],HIGH);
  }
  DDRD = 0xFF;
  PORTD =0;
}

void loop() 
{
  for(int x=0;x<142;x++)
  {
    for(int a=0;a<20;a++)
    {
 for          (int i=0;i<8;i++)
          { 
             digitalWrite(ground[i],LOW);
             PORTD = ALPHA[i+x];
            delay(1);
            digitalWrite(ground[i],HIGH);
          }    
    }
  }
  delay(1000);
}
