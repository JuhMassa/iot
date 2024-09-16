int buzzer = 8;
int redPin = 9;
int greenPin = 10;
int bluePin = 12;

int notas[] = {262, 294, 330, 349, 392}; // C, D, E, F, G
int cores[5][3] = {
  {255, 0, 0},   // Vermelho para C
  {0, 255, 0},   // Verde para D
  {0, 0, 255},   // Azul para E
  {255, 255, 0}, // Amarelo para F
  {255, 0, 255}  // Magenta para G
};

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  
  pinMode(buzzer, OUTPUT);
}

void loop() {
  for (int i = 0; i < 5; i++) {
    tone(buzzer, notas[i]);

    setColor(cores[i][0], cores[i][1], cores[i][2]);

    delay(1000);

    noTone(buzzer);
    delay(500);
  }
}

void setColor(int red, int green, int blue) {
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}
