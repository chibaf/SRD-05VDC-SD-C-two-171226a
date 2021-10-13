int Relay = 12;

void setup() 
{ 
    pinMode(Relay, OUTPUT); //Set Pin12 as output 
    pinMode(13, OUTPUT);
}

void loop() 
{ 
    digitalWrite(Relay, HIGH); //Turn off relay 
    digitalWrite(13, HIGH);
    delay(1000); 
    digitalWrite(Relay, LOW); //Turn on relay 
    digitalWrite(13, LOW);
    delay(1000); 
}
