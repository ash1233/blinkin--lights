
int sauce = 12;
int sink= 11;
int ash =6;
int jam = 5;
int bread = 4;


// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(sauce, OUTPUT);
  pinMode(sink , OUTPUT); 
 pinMode (ash, OUTPUT);//make sink and ash low
pinMode (jam, OUTPUT); 
pinMode (bread, OUTPUT);
  digitalWrite(sink, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(ash , LOW);
}

void loop() {
  digitalWrite(sauce, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(jam , HIGH);
  delay(1);               // wait for a second
  digitalWrite(sauce, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(jam, LOW);
  digitalWrite (bread, HIGH);
  delay(1);               // wait for a second
}
