//milis
unsigned long previousTime = 0;
int contador = 0;

void setup() {
  Serial.begin(9600);

}

void loop() {
  unsigned long currentTime = millis();

  if (currentTime - previousTime >= 1000){
    previousTime = currentTime;
    Serial.println(contador);
    contador++;
  }
}
