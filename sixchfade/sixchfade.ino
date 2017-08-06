const int ch1 = 3;
const int ch2 = 5;
const int ch3 = 6;
const int ch4 = 9;
const int ch5 = 10;
const int ch6 = 11;

void setup() {
pinMode(ch1, OUTPUT);
pinMode(ch2, OUTPUT);
pinMode(ch3, OUTPUT);
pinMode(ch4, OUTPUT);
pinMode(ch5, OUTPUT);
pinMode(ch6, OUTPUT);
}
int fadeLevel = 0;
int count = 0;
int redLvl = 255;
int grnLvl = 0;
int bluLvl = 0;

void loop() {
  while(count <=255){
    redLvl -= 1;
    grnLvl+= 1;
    analogWrite(ch1, redLvl);
    analogWrite(ch2, grnLvl);
    count++;
    delay(500);
  }
   while(count>255 && count<=510){
    grnLvl-=1;
    bluLvl+=1;
    analogWrite(ch2, grnLvl);
    analogWrite(ch3, bluLvl);
    count++;
    delay(500);
  }
   while(count>=511&& count<=766){
    bluLvl -= 1;
    redLvl += 1;
    analogWrite(ch3,bluLvl);
    analogWrite(ch1,redLvl);
    count++;
    delay(500);
  }
   if(count<=767){
	count =0;
  }  
}
