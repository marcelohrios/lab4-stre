int sensor_lumi = 0;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(A0, INPUT);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  sensor_lumi = analogRead(A0);
  if (sensor_lumi < 200) {
    digitalWrite(12, LOW);
    tone(8, 523, 1000); // play tone 60 (C5 = 523 Hz)
  } else {
    digitalWrite(12, HIGH);
  }
  Serial.println(analogRead(A0));
}