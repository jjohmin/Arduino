int seg[8] = { 2, 3, 4, 5, 6, 7, 8, 9 };
int arr[10][8] = {
  { 1, 1, 1, 1, 1, 1, 0, 1 },
  { 0, 1, 1, 0, 0, 0, 0, 1 },
  { 1, 1, 0, 1, 1, 0, 1, 1 },
  { 1, 1, 1, 1, 0, 0, 1, 1 },
  { 0, 1, 1, 0, 0, 1, 1, 1 },
  { 1, 0, 1, 1, 0, 1, 1, 1 },
  { 1, 0, 1, 1, 1, 1, 1, 1 },
  { 1, 1, 1, 0, 0, 0, 0, 1 },
  { 1, 1, 1, 1, 1, 1, 1, 1 },
  { 1, 1, 1, 0, 0, 1, 1, 1 }
};
int i;

void setup() {
  for (i = 0; i < 8; i++) {
    pinMode(seg[i], OUTPUT);
  }
}

void loop() {
  for (int j = 0; j <= 9; j++) {
    for (i = 0; i < 8; i++) {
      digitalWrite(seg[i], !arr[j][i]);
    }
    delay(1000);
  }
}