  #include<time.h> 
  
  int tempSens = 0;
  int measuredelay = 5000;
  
void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600); //starts to read serial input
  long unsigned times = millis();
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int tempV = analogRead(tempSens); //makes variable storing value of sensor 
  long unsigned times = millis(); //Reference timestamp
  
  String tempCalculate();
{
  for (int entry = 0; entry<1000; entry++)
    {

      String tempout = " ";
      int tempV = analogRead(tempSens); //makes variable storing value of sensor 
      long unsigned times = millis(); //Reference timestamp
      Serial.print("Entry Number "); Serial.println(entry);
  
      Serial.print(times); Serial.println(" milliseconds since program start"); 
  
      float voltage = tempV*5.000;  //Gives actual voltage reading
      voltage /= 1024.0; // Reason for this is the range for actual voltage
  
      Serial.print(voltage); Serial.println(" volts"); //prints voltage

      float tempC = (voltage - 0.5) * 100; //converts voltage to actual temp in Celsius
      Serial.print(tempC); Serial.println(" degrees C"); //prints degrees in C 

      float tempF = (tempC * 9.0/5.0) + 32.0;
      Serial.print(tempF); Serial.println(" degrees F"); //prints degrees in F

      Serial.println(" ");
      delay(measuredelay);
    }
  }
}
