int Pushbutton = 10;
int Count = 0;

void setup() {
  pinMode(Pushbutton, INPUT);
  Serial.begin(9600);
  Serial.println("PUSH BUTTON COUNTER");
}

void loop() {
  int currentbutton = digitalRead(Pushbutton);
  if (currentbutton == HIGH ) {
    Count++;
    Serial.print("Count = ");
    Serial.println(Count);
    delay(200);
  }
}
