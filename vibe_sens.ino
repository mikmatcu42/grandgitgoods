const int vibpin = 1;
int samplert = 1000;



void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(5,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
int vibes = analogRead(vibpin);

Serial.println(vibes);
Serial.println(" ");
delay(samplert);


}
