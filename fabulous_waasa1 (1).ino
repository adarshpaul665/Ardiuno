
int LED1=4,LED2=3,LED3=7;
void setup() 
{  
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}


void loop() {
  digitalWrite(LED1, HIGH);
  delay(2000);                      
  digitalWrite(LED2, HIGH);  
  delay(2000);  
  digitalWrite(LED3, HIGH);
  delay(2000);
}