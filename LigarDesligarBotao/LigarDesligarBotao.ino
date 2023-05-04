void setup() {
  pinMode(2, INPUT);
  pinMode(10, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  if (digitalRead(2) < HIGH) {
    digitalWrite(10, HIGH);
  } else {
    digitalWrite(10, LOW);
  }

  delay(10);
  // put your main code here, to run repeatedly:

}
