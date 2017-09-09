void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  float AI0_TP = analogRead(A0);
  float transPressure = (AI0_TP/1023);
  Serial.println(transPressure);
  //Serial.println(AI0_TP);
  delay(1);

}
