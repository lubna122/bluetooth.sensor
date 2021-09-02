#include <Servo.h>
Servo servomotor;
int pos=100;
void setup() {
  // put your setup code here, to run once:
servomotor.attach(3);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (pos =0; pos<=180; pos++){
servomotor.write(pos);
delay(15);
}
delay(1000);
for (pos=180; pos>=0; pos--){
  servomotor.write(pos);
  delay(15);
}
delay(1000);
}
