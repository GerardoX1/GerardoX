int dato1 = 0;
int dato2 = 0;
int datos[]={dato1,dato2};

void setup() {
  // put your setup code here, to run once:
Serial.begin (9600);
}

void loop() {
  // put your main code here, to run repeatedly:

dato1 = analogRead(0);
dato2 = analogRead(1);

datos[0]=dato1;
datos[1]=dato2;

Serial.print("A0");
Serial.print(datos[0]);
Serial.print("A1");
Serial.println(datos[1]);


}
