    
/*
 * Test code to log serial data to file using putty 
 * Developed by Precize Labs
 * Contact us @ support@precizelabs.com
 * https://precizelabs.com
 * 
 * Developer Ajmal Muhammad P
 * Date created: 01-Oct-2020
 */
 
uint32_t iCntr;

void setup() {
  iCntr = 1;
  Serial.begin(9600);
  while (!Serial);

  Serial.println(F("Initialized . . . !"));
}

void loop() {
  delay(1000);
  Serial.print(F("Line Number: "));
  Serial.println(iCntr++);
}
