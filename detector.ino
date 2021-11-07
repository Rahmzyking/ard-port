int sensorPin = A0;
int sensorValue;
int limit = 40;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
sensorValue = analogRead(sensorPin);
Serial.print("Sensor Value : ");
Serial.println(sensorValue);

if (sensorValue>limit){
  digitalWrite(13, HIGH);
  }
  else{
    digitalWrite(13, LOW);
  }

  delay(1000);
}
