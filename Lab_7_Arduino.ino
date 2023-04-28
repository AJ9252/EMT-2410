int led = D16;
int pot = A0;
int bright;

void setup() {
  pinMode(pot, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  bright = analogRead(pot);
  analogWrite(led, bright);
}