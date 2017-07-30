//Setup it up
void setup(){

}

//Assign those pins
const int dim1=A1;
const int ch1=4;


int dim1Intensity = 0;

// Loop it
void loop(){

//Assign them variables
int dim1read = analogRead(dim1);
int ch1pwm = map(dim1read, 0, 1023, 0, 255);
if(dim1read != dim1Intensity){
	dim1Intensity = dim1read;
	analogWrite(ch1, ch1pwm);
		}

delay(30);
		
}
