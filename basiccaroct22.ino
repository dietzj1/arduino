// Left motor pins

#define ENA 11 	// ENA speed pin for left motor
#define IN1 6   	// IN1 on Motor controller board
#define IN2 5   	// IN2

// Right motor pins
#define ENB  10	// ENB speed pin for right motor
#define IN3 4       // IN3 on Motor controller board
#define IN4 3       // IN4

//create speed variables
int rightSpeed; 
int leftSpeed;

void setup() {

//sets up right motor
  pinMode(ENA, OUTPUT);//Pins 10 and 11 are the PWM pins that control speed
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

//sets up left motor
  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT); 
  pinMode(IN4, OUTPUT);

  analogWrite(ENA, 200); //set speed to midrange
  analogWrite(ENB, 200); //set speed to midrange

}

void loop()  {

 forward();
 delay(1000);
 backward();
 delay(1000);
 halt();
 delay(1000);

  }


void forward() {

//left motor forward
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);  

//right motor forward
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);  

}

 
void backward() {

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH); 

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);

}

void halt() {

//left motor stop
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH); 

// right motor stop
  digitalWrite(IN3, HIGH); 
  digitalWrite(IN4, HIGH); 

}