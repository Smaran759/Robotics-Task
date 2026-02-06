int led = 8; //declaring the output pin for the led
int button = 8; //declaring the input pin for the push button

void setup() { //setting pins
  pinMode(led, OUTPUT); 
  pinMode(button, INPUT_PULLUP);
}

void loop() {
  int state = digitalRead(button); //Reads the state of the push button
  
  if(state == LOW){  //Checks if the button is pressed or not
   digitalWrite(led, HIGH); //Turns the LED On
   delay(500);
   digitalWrite(led, LOW); //Turns the LED Off
   delay(550);
  }
}
