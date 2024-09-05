int redPin = 9;   
int greenPin = 10;
int bluePin = 11;  

void setup() {
  
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  
 
  Serial.begin(9600);
}

void loop() {
  
  setColor(255, 0, 0); 
  Serial.println("Cor: Vermelho");
  delay(500); 

  
  setColor(0, 255, 0); 
  Serial.println("Cor: Verde");
  delay(500);

  
  setColor(0, 0, 255); 
  Serial.println("Cor: Azul");
  delay(500);

  
  setColor(255, 255, 0); 
  Serial.println("Cor: Amarelo");
  delay(500);

  
  setColor(0, 255, 255); 
  Serial.println("Cor: Ciano");
  delay(500);

 
  setColor(255, 0, 255); 
  Serial.println("Cor: Magenta");
  delay(500);

 
  setColor(255, 255, 255); 
  Serial.println("Cor: Branco");
  delay(500);
}


void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}
