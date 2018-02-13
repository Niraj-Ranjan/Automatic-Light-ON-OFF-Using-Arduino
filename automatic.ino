int trigger_pin = 2;
int echo_pin = 3;
int c=0;
boolean a=true;


int time;

int distance; 




void setup ( ) {

        Serial.begin (9600); 

        pinMode (trigger_pin, OUTPUT); 

        pinMode (echo_pin, INPUT);
pinMode(13, OUTPUT);
    



}




void loop ( ) {

   digitalWrite (trigger_pin, LOW);

    delayMicroseconds (2);

    digitalWrite (trigger_pin, HIGH);
    delayMicroseconds (10);
    digitalWrite (trigger_pin, LOW);

    time = pulseIn (echo_pin, HIGH);
    

    distance = (time * 0.034) / 2;

    if (distance <= 25) 

        {

          if(a)
          {
             digitalWrite(13, HIGH); 
             a=false;
             delay(500);
             
             }

             else if(!a)
             {
               digitalWrite(13, LOW); 
               a=true;
               delay(500);
               
               
               }

          
        }

        delay(500);


        
          }
