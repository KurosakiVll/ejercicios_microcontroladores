//7- App
bool publis = false;
unsigned long lastTime = 0;
int interval = 1000;
bool alterMode = false;
int value = 1;

void setup() {
  Serial.begin(9600);
  Serial.println("Escribir h de help!");
}

void loop() {
  if(Serial.available()){
    String choice = Serial.readStringUntil('\n');

    if (choice == "H" || choice == "h"){
      Serial.println("Menú: ");
      Serial.println("h/h ayuda");
      Serial.println("START/Start: Inciar");
      Serial.println("STOP/stop: Detener");
      Serial.println("T/t: Cambiar frecuencia de 1 a 10 HZ");
      Serial.println("M/m: Cambiar modos fijo/alternativo");
    }else if (choice == "START" || choice == "start"){
      publis = true;
    }else if (choice == "STOP" || choice == "stop"){
      publis = false;
    }else if (choice == "T" || choice == "t"){
      if (interval == 1000) {
        interval = 100;
      } else {
        interval = 1000; 
      }
    }else if (choice == "M" || choice == "m"){
      alterMode = !alterMode;
    }
  }

  if (publis && millis() - lastTime >= interval){
    lastTime = millis();
    if(alterMode){
      value = !value;
      }
    Serial.println(value);      
    }
}