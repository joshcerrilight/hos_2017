//Board setup for digispark at digistump.com/wiki/digispark/tutorials/connecting
//Windows drivers can be found at 'https://github.com/digistump/DigistumpArduino/releases//
void setup() {
  // put your setup code here, to run once:
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int  numBlinks = 36;
  for(int i=0; i<numBlinks; i++) {
    for(int j=0; j<i; j++) {
      digitalWrite(0, HIGH);
      digitalWrite(1, HIGH);
      delay(500);
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      delay(500);
  }
  delay(1000);
  }
}

