#define enA 10 // Enable1 L298 Pin enA 
#define in1 9  // Motor1 L298 Pin in1 
#define in2 8  // Motor1 L298 Pin in2 
#define in3 7  // Motor2 L298 Pin in3 
#define in4 6  // Motor2 L298 Pin in4 
#define enB 5  // Enable2 L298 Pin enB 

#define R_S A0 // IR sensor Right
#define L_S A1 // IR sensor Left

void setup() {
  pinMode(R_S, INPUT);  
  pinMode(L_S, INPUT);  

  pinMode(enA, OUTPUT); 
  pinMode(in1, OUTPUT); 
  pinMode(in2, OUTPUT); 
  pinMode(in3, OUTPUT); 
  pinMode(in4, OUTPUT); 
  pinMode(enB, OUTPUT); 

  analogWrite(enA, 80); 
  analogWrite(enB, 80); 
  delay(1000);
}

void loop() {
  int right = digitalRead(R_S);
  int left = digitalRead(L_S);

  if (right == 0 && left == 0) forward();
  else if (right == 1 && left == 0) turnRight();
  else if (right == 0 && left == 1) turnLeft();
  else if (right == 1 && left == 1) stop();
}

void forward() {
  digitalWrite(in1, HIGH); 
  digitalWrite(in2, LOW);  
  digitalWrite(in3, LOW);  
  digitalWrite(in4, HIGH); 
}

void turnRight() {
  digitalWrite(in1, LOW);  
  digitalWrite(in2, HIGH); 
  digitalWrite(in3, LOW);  
  digitalWrite(in4, HIGH); 
}

void turnLeft() {
  digitalWrite(in1, HIGH); 
  digitalWrite(in2, LOW);  
  digitalWrite(in3, HIGH); 
  digitalWrite(in4, LOW);  
}

void stop() {
  digitalWrite(in1, LOW); 
  digitalWrite(in2, LOW); 
  digitalWrite(in3, LOW); 
  digitalWrite(in4, LOW); 
}