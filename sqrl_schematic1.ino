// C++ code
//

int Test;
void setup()
{
pinMode(4, INPUT); // Left Sensor
pinMode(2, INPUT); // RIght Sensor
pinMode(5, OUTPUT);// En 1, Left Motor
pinMode(6, OUTPUT); //in 1a
pinMode(7, OUTPUT); //in 1b
pinMode(9, OUTPUT); //in 2a
pinMode(10, OUTPUT); //in 2b
pinMode(8, OUTPUT);// En 2, Right Motor
digitalWrite(5, HIGH); 
digitalWrite(8, HIGH); 
}


void forward()
{digitalWrite(6, HIGH);
 digitalWrite(7, LOW);
 digitalWrite(9, LOW);
 digitalWrite(10, HIGH);}

void turnRight()
{digitalWrite(6, LOW);
 digitalWrite(7, HIGH);
 digitalWrite(9, LOW);
 digitalWrite(10, HIGH);}

void turnLeft()
{digitalWrite(6, HIGH);
 digitalWrite(7, LOW);
 digitalWrite(9, HIGH);
 digitalWrite(10, LOW);}

void stop()
{digitalWrite(6, LOW);
 digitalWrite(7, LOW);
 digitalWrite(9, LOW);
 digitalWrite(10, LOW);}


void loop() 
{Test = digitalRead(2); // if sensor detects IR, it becomes LOW
  if(Test==LOW) // if sensor detects IR, it moves (white)
  {forward();
   delay(1000);}
  else{stop();}} // else it stops