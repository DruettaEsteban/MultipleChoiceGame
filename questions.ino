const int buttonA = 8;
const int buttonB = 7;
const int buttonC = 4;
const int buttonD = 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9800);
  while(!Serial){
    ;
  }
  pinMode(buttonA, INPUT_PULLUP);
  pinMode(buttonB, INPUT_PULLUP);
  pinMode(buttonC, INPUT_PULLUP);
  pinMode(buttonD, INPUT_PULLUP);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  /*
  if(Serial.available() >0){
    byte incomingByte = Serial.read();
    if(incomingByte != - 1){
      Serial.print("I received: ");
      Serial.println(incomingByte);
    }
  }
  */

  if(digitalRead(buttonA) == LOW){
    Serial.println(0);
  }
  if(digitalRead(buttonB) == LOW){
    Serial.println(1);
  }
  if(digitalRead(buttonC) == LOW){
    Serial.println(2);
  }
  if(digitalRead(buttonD) == LOW){
    Serial.println(3);
  }
  delay(100);
  
  /*
  int buttonState = digitalRead(buttonYes) && digitalRead(buttonNo) && digitalRead(buttonReset);
  if(buttonState == HIGH){
    digitalWrite(ledPin, LOW);
  }else{
    digitalWrite(ledPin, HIGH);
  }
  */

}
