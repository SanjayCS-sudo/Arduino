// Define the Arduino pins connected to the 7-segment display segments
const int a = 13;
const int b = 12;
const int c = 11;
const int d = 10;
const int e = 9;
const int f = 8;
const int g = 7;

// Define the binary patterns for numbers 1 to 9
const byte segmentPatterns[9] = {
  0b01100000, // 1 -> segments b and c
  0b11011010, // 2 -> segments a, b, d, e, g
  0b11110010, // 3 -> segments a, b, c, d, g
  0b01100110, // 4 -> segments b, c, f, g
  0b10110110, // 5 -> segments a, c, d, f, g
  0b10111110, // 6 -> segments a, c, d, e, f, g
  0b11100000, // 7 -> segments a, b, c
  0b11111110, // 8 -> segments a, b, c, d, e, f, g
  0b11110110  // 9 -> segments a, b, c, d, f, g
};

void setup() {
  // Set all segment pins as outputs
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

void loop() {
  for (int i = 0; i < 9; i++) {
    displayNumber(i + 1);
    delay(1000); // Display each number for 1 second
  }
}

void displayNumber(int num) {
  if (num < 1 || num > 9) return; // Ignore numbers out of range

  byte segments = segmentPatterns[num - 1];

  // Set each segment according to the pattern
  digitalWrite(a, bitRead(segments, 0));
  digitalWrite(b, bitRead(segments, 1));
  digitalWrite(c, bitRead(segments, 2));
  digitalWrite(d, bitRead(segments, 3));
  digitalWrite(e, bitRead(segments, 4));
  digitalWrite(f, bitRead(segments, 5));
  digitalWrite(g, bitRead(segments, 6));
}
