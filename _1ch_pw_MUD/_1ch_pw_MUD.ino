//Setup it up
void setup(){
Serial.begin(9600);
}

//Assign those pins
const int dim1=5;
const int ch1=0;


int dim1Intensity = 0;

// Loop it
void loop(){

//Assign them variables
int dim1read = analogRead(dim1);
int ch1pwm = map(dim1read, 0, 995, 255, 10);
int ch1Intensity=map(ch1pwm, 10, 255,1, 100); 
if(dim1read != dim1Intensity){
	dim1Intensity = dim1read;
	analogWrite(ch1, ch1pwm);
		}
int ch1info[]={
dim1Intensity, ch1pwm, ch1Intensity
		};
Serial.println("Dimmer 1, Ch1 PWM, Ch1 Intensity");

int i;
for(i = 0;i<3;i=i+1){
	Serial.println(ch1info[i]);
		};

delay(30);
		
}
