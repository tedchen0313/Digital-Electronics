int LED = 13; 
int isObstaclePin = 12;  
int isObstacle = HIGH; 
int motorPin = 11;

int LED2 = 9; 
int isObstaclePin2 = 10;  
int isObstacle2 = HIGH; 

int LED3 = 6; 
int isObstaclePin3 = 7;  
int isObstacle3 = HIGH; 



int isObstaclePin4 = 2; 
int isObstacle4 = HIGH; 
int motorPin4 = 3; 


void setup() {
  pinMode(LED, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(isObstaclePin, INPUT);
  pinMode(isObstaclePin2, INPUT);
  pinMode(isObstaclePin3, INPUT);
  pinMode(isObstaclePin4, INPUT);
  Serial.begin(9600);
  pinMode(motorPin, OUTPUT);
  pinMode(motorPin4, OUTPUT);

  
}

void loop() {
  isObstacle = digitalRead(isObstaclePin);
  if (isObstacle == LOW)
  {
    Serial.println("OBSTACLE!!, OBSTACLE!!");
    digitalWrite(LED, HIGH);
    digitalWrite(motorPin, 200);
  }
  else
  {
    Serial.println("clear");
    digitalWrite(LED, LOW);
    digitalWrite(motorPin, 0);
  }

 //second  
  isObstacle2 = digitalRead(isObstaclePin2);
  if (isObstacle2 == LOW)
  {
    Serial.println("OBSTACLE!!, OBSTACLE!!");
    digitalWrite(LED2, HIGH);
  }
  else
  {
    Serial.println("clear");
    digitalWrite(LED2, LOW);
  }

  //third 
  isObstacle3 = digitalRead(isObstaclePin3);
  if (isObstacle3 == LOW)
  {
    Serial.println("OBSTACLE!!, OBSTACLE!!");
    digitalWrite(LED3, HIGH);
  }
  else
  {
    Serial.println("clear");
    digitalWrite(LED3, LOW);
  }

  isObstacle4 = digitalRead(isObstaclePin4);
  if (isObstacle4 == LOW)
  {
    digitalWrite(motorPin4, 200);
  }
  else
  {
    digitalWrite(motorPin4, 0);
  }
}
