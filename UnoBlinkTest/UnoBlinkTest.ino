void setup(){
  pinMode(13, OUTPUT);
}
void loop(){
  int numBlinks = 36;
  for(int i=0; i<numBlinks; i++){
    for(int j=0; j<i; j++){
      digitalWrite(13, HIGH);
      delay(500);
      digitalWrite(13, LOW);
      delay(500);
    }
delay(1000);
}
}
