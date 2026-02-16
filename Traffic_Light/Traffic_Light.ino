int redLED=7;
int yellowLED=6; 
int greenLED=5;

int buttonPin=2;

int green=2500;
int yellow=2500;
int red=5000;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED,OUTPUT);
  pinMode(yellowLED,OUTPUT);
  pinMode(greenLED,OUTPUT);
  pinMode(buttonPin,INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(buttonPin)==HIGH){
    digitalWrite(redLED,LOW);
    digitalWrite(yellowLED,LOW);
    digitalWrite(greenLED,HIGH);

    //delay(green);
  }else{
    //green
    digitalWrite(redLED,LOW);
    digitalWrite(yellowLED,LOW);
    digitalWrite(greenLED,HIGH);
    delay(green);

    //yellow
    digitalWrite(yellowLED,HIGH);
    digitalWrite(greenLED,LOW);
    delay(yellow);

    //red
    digitalWrite(yellowLED,LOW);
    digitalWrite(redLED,HIGH);
    delay(red);
  }

}
