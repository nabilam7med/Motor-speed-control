int trig =7;
int echo =6;
int motor =5;
int speed;
long duration,distance;
void setup(){
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
  pinMode(5, OUTPUT);
}
void loop(){
digitalWrite(trig, LOW);
delayMicroseconds(2);
digitalWrite(trig, HIGH);
delayMicroseconds(10);
digitalWrite(trig, LOW);
duration = pulseIn(echo, HIGH);
distance = (duration/2) * 0.0343;
  int Speed = map(speed, 0, 1023, 0, 255);
  analogWrite(5, Speed);
  if(distance>=20&&distance<=300){
 analogWrite(5, 255);
  }
  else{
    analogWrite(5, 0);
  }}
