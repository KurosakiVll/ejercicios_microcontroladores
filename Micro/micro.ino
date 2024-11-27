//micro
unsigned long previuosCtr1 = 0;
unsigned long previousCtr2 = 0;
const unsigned long intervalCtr1 = 100000;
const unsigned long intervalCtr2 = 2000000;

int ctr1 = 0;
int ctr2 = 0;

void setup() {
  Serial.begin(9600);

}

void loop() {
  unsigned long currentMicros = micros();

  if(currentMicros - previuosCtr1 >= intervalCtr1){
    previuosCtr1 = currentMicros;
    ctr1++;
    Serial.print("Ctr1: ");
    Serial.println(ctr1);
    Serial.print("Ctr2: ");
    Serial.println(ctr2);
  }

  if(currentMicros - previousCtr2 >= intervalCtr2){
    previousCtr2 = currentMicros;
    ctr2++;
    ctr1-=ctr2;
    /*Serial.print("C1: ");
    Serial.print(ctr1);
    Serial.print(" C2: ");
    Serial.println(ctr2);*/
  }

}
