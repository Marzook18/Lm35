// By Marzook Marzook
//Code 1:
float LM35 = 6;
float LM35S;
void setup() {
  pinMode(LM35, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  LM35S = analogRead(LM35);
  float tempc = LM35S * 500 / 1023;
  float tempf= tempc *1.8 +32;
  Serial.print("The Temperature In Celsius Is :");
  Serial.println(tempc);
  Serial.print("The Tempreature In Fahrenhiet Is :");
  Serial.println(tempf);
  delay(500);

}
//Code 2:
float LM35 = A0;
float LM35S;
void setup() {
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  LM35S = analogRead(LM35);
  float tempc = LM35S * 500 / 1023;
  float tempf= tempc *1.8 +32;
  Serial.print("The Temperature In Celsius Is :");
  Serial.println(tempc);
  Serial.print("The Tempreature In Fahrenhiet Is :");
  Serial.println(tempf);
  delay(500);

}
