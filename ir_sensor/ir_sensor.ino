int leftir = 13;
int rightir = 12;
int motorR1=10;        // Motor Pins
int motorR2=9;
int motorL1=5;
int motorL2=6;
int m,n;
void setup() {
  Serial.begin(9600);
  pinMode(leftir,INPUT);
  pinMode(rightir, INPUT);
  pinMode(motorR1,OUTPUT);
  pinMode(motorR2,OUTPUT);
  pinMode(motorL1,OUTPUT);
  pinMode(motorL2,OUTPUT);
}
void loop() {
  m = digitalRead(leftir);
  n = digitalRead(rightir);
  
  if(m == 1 && n == 1){
    //Forward
    digitalWrite(motorR1,LOW);
    digitalWrite(motorR2,HIGH);
    digitalWrite(motorL1,LOW);
    digitalWrite(motorL2,HIGH);
  }
  else if(m == 0 && n ==1){
    //Turn Left
    digitalWrite(motorR1,LOW);
    digitalWrite(motorR2,HIGH);
    digitalWrite(motorL1,HIGH);
    digitalWrite(motorL2,LOW);
  }
  else if(m == 1 && n == 0){
    //Turn Right
    digitalWrite(motorR1,HIGH);
    digitalWrite(motorR2,LOW);
    digitalWrite(motorL1,LOW);
    digitalWrite(motorL2,HIGH);
  }
  else{
    //stop
    digitalWrite(motorR1,LOW);
    digitalWrite(motorR2,LOW);
    digitalWrite(motorL1,LOW);
    digitalWrite(motorL2,LOW);
  }

}
