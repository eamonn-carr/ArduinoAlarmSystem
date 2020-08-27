
/*
 Motion Sensitive Alarm System
 By Jack Scut and Eamonn Carr
 06/03/2019
*/

int potPin = A3;
int buzPin = 3;
int ledPin = 2;
int pirPin = 4;
int potvolt = 0;
int val = 0;

void setup(){
  
  pinMode(ledPin, OUTPUT);
  pinMode(pirPin, INPUT);
  pinMode(buzPin, OUTPUT);
  pinMode(potPin, INPUT);
  Serial.begin(9600);
    
    }

void loop(){
  potvolt = analogRead(A3);               //Potentiometetr is used as switch to arm the alarm

  val = digitalRead(pirPin);
    if (potvolt > 700){
      digitalRead (pirPin);               //If PIR Sensor detects Motion alarm is triggered, LED and buzzer flash on adn off for 5 seconds
        if (val == HIGH){                 
          for(int i =0;i < 4; i++){
            digitalWrite (ledPin, HIGH);
            delay (50);
            digitalWrite (ledPin, LOW);
            delay (50);
            digitalWrite (buzPin, HIGH);
            delay (50);
            digitalWrite (buzPin, LOW);
            delay (50);
                                    }
                      }
          }
    else digitalWrite (ledPin, LOW);{
      digitalWrite (buzPin, LOW);
    }
}