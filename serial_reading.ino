int redpin = 8; //Establish port for red LED
int yelpin = 4; //Esablish port for yellow LED
int waitTimeonY = 250; //Yellow time on
int waitTimeoffY = 250; //Yellow time off
int waitTimeonR = 250; //Red time on
int waitTimeoffR = 250; //Red time off
int numredlink = 5;
int numyellink =5;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(redpin,OUTPUT);
  pinMode(yelpin,OUTPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  
  for (int j=0; j<numredlink; j++) 
  {
    Serial.println(j);
    digitalWrite(redpin,HIGH);
    delay(waitTimeonR);
    digitalWrite(redpin,LOW);
    delay(waitTimeoffR);
     
  }
  Serial.println(" ");
  for (int j=0; j<numredlink; j++)
  {
    digitalWrite(yelpin,HIGH);
    delay(waitTimeonY);
    digitalWrite(yelpin,LOW);
    delay(waitTimeoffY);
  }
}
