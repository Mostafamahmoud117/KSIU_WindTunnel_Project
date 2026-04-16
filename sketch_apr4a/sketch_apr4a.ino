#define VFD_V1_pin 18
#define Relay_pin

void setup() {
  // put your setup code here, to run once:
  ledcAttach(VFD_V1_pin,5000,8);
 
  Serial.begin(115200);
  
  
}

void loop() {
  // put your main code here, to run repeatedly:

  ledcWrite(VFD_V1_pin,100);
  
  delay(10); // this speeds up the simulation
}
