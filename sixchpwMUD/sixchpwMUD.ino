void setup(){
}

const int dim1=A0;
const int dim2=A1;
const int dim3=A2;
const int dim4=A3;
const int dim5=A4;
const int dim6=A5;

const int ch1=3;
const int ch2=5;
const int ch3=6;
const int ch4=9;
const int ch5=10;
const int ch6=11;

int dim1Intensity=0;
int dim2Intensity=0;
int dim3Intensity=0;
int dim4Intensity=0;
int dim5Intensity=0;
int dim6Intensity=0;

int ch1Intensity=0;
int ch2Intensity=0;
int ch3Intensity=0;
int ch4Intensity=0;
int ch5Intensity=0;
int ch6Intensity=0;

void loop(){
//Serial in for troubleshooting purposes comment out to turn off
Serial.begin(9600);

//Read/Write Channel 1 Intensity
dim1Intensity=analogRead(dim1);
ch1Intensity=map(dim1Intensity,0,1023,0,255);
analogWrite(ch1,ch1Intensity);
Serial.println("Channel 1 dim, int");
Serial.println(dim1Intensity, ch1Intensity);

//Read/Write Channel 2 Intensity
dim2Intensity=analogRead(dim2);
ch2Intensity=map(dim2Intensity,0,1023,0,255);
analogWrite(ch2,ch2Intensity);
Serial.println("Channel 2 dim, int");
Serial.println(dim2Intensity, ch2Intensity);

//Read/Write Channel 3 Intensity
dim3Intensity=analogRead(dim3);
ch3Intensity=map(dim3Intensity,0,1023,0,255);
analogWrite(ch3,ch3Intensity);
Serial.println("Channel 3 dim, int");
Serial.println(dim3Intensity, ch3Intensity);

//Read/Write Channel 4 Intensity
dim4Intensity=analogRead(dim4);
ch4Intensity=map(dim4Intensity,0,1023,0,255);
analogWrite(ch4,ch4Intensity);
Serial.println("channel4 dim, int");
Serial.println(dim4Intensity, ch4Intensity);

//Read/Write Channel 5 Intensity
dim5Intensity=analogRead(dim5);
ch5Intensity=map(dim5Intensity,0,1023,0,255);
analogWrite(ch5,ch5Intensity);
Serial.println("Channel 5 dim, int");
Serial.println(dim5Intensity, ch5Intensity);


//Read/Write Channel 6 Intensity
dim6Intensity=analogRead(dim6);
ch6Intensity=map(dim6Intensity,0,1023,0,255);
analogWrite(ch6,ch6Intensity);
Serial.println("CHannel 6 dim, int");
Serial.println(dim6Intensity, ch6Intensity);

//2 millisecond delay to settle A>D converter
delay(2);

}
