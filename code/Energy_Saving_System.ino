// ------------------------------------------------------
// PROJECT: ENERGY-SAVING FAN + LIGHT SYSTEM
// AUTHOR: SATYAM BHARDWAJ (NIT Patna)
// COMPONENTS: TMP36 (A0), LDR (A1), DC Motor (D3), LED (D9)
// ------------------------------------------------------

const int TMP36_PIN = A0;  // Temperature sensor (TMP36)
const int LDR_PIN   = A1;  // Light sensor (LDR)
const int FAN_PIN   = 3;   // DC Motor (Fan) - PWM control
const int BULB_PIN  = 9;   // LED (Light) - PWM control

// Temperature range for fan speed control
const float MIN_TEMP = 25.0;  // Minimum temperature (°C)
const float MAX_TEMP = 30.0;  // Maximum temperature (°C)

// LDR range for brightness control
const int MIN_LDR = 100;   // Bright condition (lower value = more light)
const int MAX_LDR = 900;   // Dark condition (higher value = less light)

void setup() {
  Serial.begin(9600);
  pinMode(FAN_PIN, OUTPUT);
  pinMode(BULB_PIN, OUTPUT);
  Serial.println("=== Smart Energy-Saving System Started ===");
}

void loop() {
  // 🌡 Read Temperature from TMP36
  int tempValue = analogRead(TMP36_PIN);
  float voltage = tempValue * (5.0 / 1023.0);
  float temperatureC = (voltage - 0.5) * 100.0;  // Convert to Celsius

  // 🔆 Read Light Level from LDR
  int ldrValue = analogRead(LDR_PIN);

  // -------------------------------
  // FAN SPEED CONTROL (PWM)
  // -------------------------------
  // Map temperature range to PWM (0–255)
  int fanSpeed = map(temperatureC, MIN_TEMP, MAX_TEMP, 0, 255);
  fanSpeed = constrain(fanSpeed, 0, 255);
  analogWrite(FAN_PIN, fanSpeed);

  // -------------------------------
  // BULB BRIGHTNESS CONTROL (PWM)
  // -------------------------------
  // Map LDR range to PWM brightness (inverted mapping)
  int lightBrightness = map(ldrValue, MIN_LDR, MAX_LDR, 0, 255);
  lightBrightness = constrain(lightBrightness, 0, 255);
  analogWrite(BULB_PIN, lightBrightness);

  // -------------------------------
  // Serial Monitor Display
  // -------------------------------
  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.print(" °C | Fan Speed: ");
  Serial.print(fanSpeed);
  Serial.print(" | LDR Value: ");
  Serial.print(ldrValue);
  Serial.print(" | Bulb Brightness: ");
  Serial.println(lightBrightness);

  delay(500);  // Delay for smooth readings
}
