const int Buzzer = 1;
const int TS_Button = 2;
const int Start_button = 3;
const int Relay = 0;

int TS_Button_value , Start_button_value , Relay_value;
const int Brake_pressed = A0;
float brakepressure;
int threshold;

void setup() 
  {
    pinMode(TS_Button,INPUT);
    pinMode(Start_button,INPUT);
    pinMode(Relay,OUTPUT);
    pinMode(Brake_pressed,INPUT);
    pinMode(Buzzer,OUTPUT);
    Serial.begin( 9600 );
  }

void loop()
 {
    TS_Button_value =digitalRead(TS_Button);
    Start_button_value =digitalRead(Start_button);
    Relay_value = digitalRead(Relay);

    float brakepressure = analogRead(Brake_pressed); 
    int brake_value = (brakepressure > threshold) ? 1 : 0;  
    // convert the brake value into 0 or 1 based on the threshold

    if (TS_Button_value==HIGH)
    {
      {
            if (Start_button_value==HIGH)
       {
              if (brake_value==1)
                {
                  digitalWrite(Buzzer,HIGH);
                  delay(3000);
                    digitalWrite(Buzzer,LOW);
                    digitalWrite(Relay,HIGH);
                      Serial.print(" Relay Status ");
                      Serial.print(Relay);
                }
        }
      }
    }
        else (Relay,LOW);
     
  }
