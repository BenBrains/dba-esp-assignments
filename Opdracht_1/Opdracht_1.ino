const int LED_PIN = 25;
const int BTN_PIN = 21;

bool IN_USE = false;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BTN_PIN, INPUT);

  Serial.begin(115200);
}

void loop() {
  // === 1. LED BLINK : 2s CYCLE ===
  // digitalWrite(LED_PIN, HIGH);
  // delay(2000);
  // digitalWrite(LED_PIN, LOW);
  // delay(2000);

  // === 2. LED WHEN BTN PRESSED ===
  // Serial.println(digitalRead(BTN_PIN));
  // if (digitalRead(BTN_PIN) == HIGH) {
  //   digitalWrite(LED_PIN, HIGH);
  // } else {
  //   digitalWrite(LED_PIN, LOW);
  // }

  // === 3. LED 5s ACTIVE ON BTN PRESS ===
  // if (digitalRead(BTN_PIN) == HIGH) {
  //   digitalWrite(LED_PIN, HIGH);
  //   delay(5000);
  //   digitalWrite(LED_PIN, LOW);
  // }

  // === 4. LED SWITCH ON BTN PRESS ===
  if (IN_USE && digitalRead(BTN_PIN)) {
    IN_USE = false;
    digitalWrite(LED_PIN, !digitalRead(LED_PIN));
  } else if (!digitalRead(BTN_PIN)) {
    IN_USE = true;
  }
}
