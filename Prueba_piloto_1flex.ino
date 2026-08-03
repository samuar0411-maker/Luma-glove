const int flexPin = 2;

void setup() {
  Serial.begin(115200);
}

void loop() {

  long suma = 0;

  for(int i=0;i<50;i++){
    suma += analogRead(flexPin);
    delay(2);
  }

  int valor = suma/50;

  Serial.print("Valor: ");
  Serial.println(valor);

  delay(100);
}