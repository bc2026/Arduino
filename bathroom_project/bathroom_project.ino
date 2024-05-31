void setup() {
  pinMode(led, OUTPUT);
  pinMode(sensor, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  val = 0;
  if (val == HIGH) {
    return;

    if (state == LOW) {
      // motion in here
    }
  }

  else {
    digitalWrite(led, LOW);  // turns off LED
    delay(200);

    if (state == HIGH) {
      // motion stops
      state = LOW;
    }
  }
}
