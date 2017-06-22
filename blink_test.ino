//Bootloader Blink Test for Digispark//

/*Must burn bootloader before the sketch will work. 

Bootloader Install/Settings:

digistump.com/wiki/digispark/tutorials/connecting*/

void setup(){
pinMode(0, OUTPUT);
pinMode(1, OUTPUT);
}

void loop(){
	digitalWrite(0,HIGH);
	digitalWrite(1,HIGH);
	delay(500);
	digitalWrite(0, LOW);
	digitalWrite(1, LOW);
	delay(1000);
	digitalWrite(0, HIGH);
	digitalWrite(1, HIGH);
	delay(500);
	digitalWrite(0, LOW);
	digitalWrite(1, LOW);
	delay(500);
	digitalWrite(0, HIGH);
	digitalWrite(1, HIGH);
	delay(500);
	digitalWrite(0, LOW);
	digitalWrite(1, LOW);
	delay(1000);
	digitalWrite(0, HIGH);
	digitalWrite(1, HIGH);
	delay(500);
	digitalWrite(0, LOW);
	digitalWrite(1, LOW);
	delay(500);
	digitalWrite(0, HIGH);
	digitalWrite(1, HIGH);
	delay(500);
	digitalWrite(0, LOW);
	digitalWrite(1, LOW);
	delay(500);
	digitalWrite(0, HIGH);
	digitalWrite(1, HIGH);
	delay(500);
	digitalWrite(0, LOW);
	digitalWrite(1, LOW);
	delay(1000);
}
