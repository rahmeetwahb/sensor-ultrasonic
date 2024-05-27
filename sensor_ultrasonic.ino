const int TRIGPIN = D1;
const int ECHOPIN = D2;
long timer;
int distance;

void setup() {
  Serial.begin(9600);
  pinMode(ECHOPIN, INPUT);
  pinMode(TRIGPIN, OUTPUT);

}

void loop() {
  digitalWrite(TRIGPIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIGPIN, HIGH);
  delayMicroseconds(2);
  digitalWrite(TRIGPIN, LOW);

  timer = pulseIn(ECHOPIN, HIGH);
  distance = timer/58;
  delay(1000);

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.print("cm");
  Serial.println();

}
