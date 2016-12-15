// Flame Sensor Module
// Henry's Bench

int LED = 13; // Use the onboard Uno LED
int isFlamePin = 7;  // This is our input pin
int isFlame = HIGH;  // HIGH MEANS NO FLAME

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(isFlamePin, INPUT);
  Serial.begin(9600);
  
}

void loop() 
  isFlame = digitalRead(isFlamePin);
  if (isFlame== LOW)
  {
    Serial.println("FLAME, FLAME, FLAME");
    digitalWrite(LED, HIGH);
  }
  else
  {
    Serial.println("no flame");
    digitalWrite(LED, LOW);
  }

