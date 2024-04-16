const int LED_PIN = 25;
const int BTN_PIN = 21;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BTN_PIN, INPUT);

  Serial.begin(115200);
}

void loop() {
  // === LED BLINK : 2s CYCLE ===
  // digitalWrite(LED_PIN, HIGH);
  // delay(2000);
  // digitalWrite(LED_PIN, LOW);
  // delay(2000);

  // === LED WHEN BTN PRESSED ===
  // Serial.println(digitalRead(BTN_PIN));
  // if (digitalRead(BTN_PIN) == HIGH) {
  //   digitalWrite(LED_PIN, HIGH);
  // } else {
  //   digitalWrite(LED_PIN, LOW);
  // }

  // === LED 5s ACTIVE ON BTN PRESS ===
  // if (digitalRead(BTN_PIN) == HIGH) {
  //   digitalWrite(LED_PIN, HIGH);
  //   delay(5000);
  //   digitalWrite(LED_PIN, LOW);
  // } 

  // === LED SWITCH ON BTN PRESS ===

  bool LED_STATE = 0;
  if (digitalRead(BTN_PIN) == HIGH) {
    Serial.println(LED_STATE);
    if (LED_STATE == 0) {
      LED_STATE = 1;
      digitalWrite(LED_PIN, 1);
    } else {
      LED_STATE = 0;
      digitalWrite(LED_PIN, 0);
    }
    delay(500);
  }

}

