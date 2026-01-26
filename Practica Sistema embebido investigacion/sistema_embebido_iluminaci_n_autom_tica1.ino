int ldr = A0;
int led = 9;
int valorLuz = 0;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  valorLuz = analogRead(ldr);
  Serial.println(valorLuz);

  if (valorLuz < 500) {   // poca luz
    digitalWrite(led, HIGH);
  } else {                // mucha luz
    digitalWrite(led, LOW);
  }

  delay(200);
}
