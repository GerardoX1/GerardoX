int dato =0;

void setup(){
  Serial.begin (9600);
}

void loop(){
  dato =analogRead(0);
  Serial.println (dato);
}

