#define R 13
#define G 9
#define B 6

const int pinoBuzzer = 2; 

int inches = 0;

int cm = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  return pulseIn(echoPin, HIGH);
}

void controlLeds() {
  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);
}
void setup()
{
  Serial.begin(9600);
  
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);

}

void loop()
{
  // measure the ping time in 
  cm = 0.01723 * readUltrasonicDistance(5, 7);
  // convert to inches by dividing by 2.54
  inches = (cm / 2.54);
  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.println("cm");
  delay(100); // Wait for 100 millisecond(s)

  if(cm <= 10){
    controlLeds();
    digitalWrite(R, HIGH);
  }else if (cm <= 20){
    controlLeds();
    digitalWrite(G, HIGH);
  }else if (cm >= 30) {
    controlLeds();
    digitalWrite(B, HIGH);
  }
  
  
  
}