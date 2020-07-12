int echoPin=9;
int trigPin=8;
long duration;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(echoPin, INPUT);
pinMode(trigPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);
Serial.println(duration);
delay(500);
}
