//echo
void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    char input = Serial.read();
    if (isUpperCase(input)) {
      input = toLowerCase(input);
    } else if (isLowerCase(input)) {
      input = toUpperCase(input);
    }
    Serial.write(input);
  }
}


