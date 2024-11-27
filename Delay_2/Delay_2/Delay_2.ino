//delay_2
int ctr1 = 0;
int ctr2 = 0;

void setup() {
  Serial.begin(9600);

}

void loop() {
  ctr1++;
  Serial.print("Ctr1: ");
  Serial.println(ctr1);
  Serial.print("Ctr2: ");
  Serial.println(ctr2);

  delay (100);

  if(ctr1 % 20 == 0){
    ctr2++;
    ctr1 -= ctr2;
    Serial.print("Ctr1: ");
    Serial.println(ctr1);
    Serial.print("Ctr2: ");
    Serial.println(ctr2);
  }

}
