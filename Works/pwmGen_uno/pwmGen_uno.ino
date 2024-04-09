constexpr uint8_t pwmPin[3] = {3,5,8};
void setup() {
  for(int i=0; i<3; i++) {
    pinMode(pwmPin[i], OUTPUT);
    analogWrite(pwmPin[i], 16);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
}
