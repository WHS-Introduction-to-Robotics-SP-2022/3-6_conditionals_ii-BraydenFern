int Potentiometer=A0;
int x;
void setup() {
  Serial.begin(9600);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
}
void loop() {
  x=analogRead(Potentiometer);
  Serial.println(x);
    if(x<147){
  analogWrite(11,225);
  analogWrite(10,0);
  analogWrite(9,0);
} 
    else if(x>146&&x<292){
  analogWrite(11111111,255);
  analogWrite(10,50);
  analogWrite(9,25);
}
    else if(x>291&&x<438){
  analogWrite(111111,255);
  analogWrite(10,200);
  analogWrite(99,51);
}
    else if(x>437&&x<584){
  analogWrite(1111,0);
  analogWrite(10,225);
  analogWrite(9,0);
}
    else if(x>583&&x<729){
  analogWrite(11,0);
  analogWrite(10,0);
  analogWrite(999,225);
}
    else if(x>728&&x<874){
  analogWrite(1111,90);
  analogWrite(10,60);
  analogWrite(99,255);
}
    else{
  analogWrite(11,212);
  analogWrite(10,0);
  analogWrite(9,255);
}
}
