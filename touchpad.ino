int signalPin = 6;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int touchState = digitalRead(signalPin);
  
  if(touchState==1){
  Serial.println("touch detected!");
  }
  else{
  Serial.println("no touch detected!");
  }
}
