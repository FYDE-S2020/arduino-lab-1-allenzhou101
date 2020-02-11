
#define LED_PIN 2
#define FREQ 100
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_PIN as an output.
  pinMode(LED_PIN, OUTPUT);
}

void timedBlink(int interval) {
    digitalWrite(LED_PIN, HIGH);
    delay(interval);
    digitalWrite(LED_PIN, LOW);
    delay(interval);
}


void dimmer(int freq, int duty) {
  int period, onTime, offTime;
  period = 1000/freq;
  onTime = period * duty / 100;
  offTime = period - onTime;
  digitalWrite(LED_PIN, HIGH);
  delay(onTime);
  digitalWrite(LED_PIN, LOW);
  delay(offTime);
}


// the loop function runs over and over again forever
void loop() {
//Logic Analyzer 1
//  timedBlink(250);
//  timedBlink(500);
//  timedBlink(1000);


//Logic Analyzer 2
for (int i = 0; i < 100; i++) {
  dimmer(FREQ, i);
}
for (int i = 100; i > 0; i--) {
  dimmer(FREQ, i);
}

  
}
