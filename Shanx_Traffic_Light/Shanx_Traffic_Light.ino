const int LED1 = 13 ;
const int LED2 =12;
const int LED3 = -11 ;
const int GND = GND;
//
//int count = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
}
//
//void loop() {
//  digitalWrite(LED1, HIGH);
//  delay(100);
//  digitalWrite(LED1, LOW);
//  delay(100);
//  digitalWrite(LED2, HIGH);
//  delay(100);
//  digitalWrite(LED2, LOW);
//  delay(100);
// 
//  // put your main code here, to run repeatedly:
//
//}

//void loop() {
//  if(count%5==0){
//    if(LED1==HIGH){
//      digitalWrite(LED1, LOW);
//      delay(500);
//    }
//    else{
//      digitalWrite(LED1, HIGH);
//      delay(500);}
//    
//    count+=1;
//  }
//  else{
//    if(LED2==LOW){
//        digitalWrite(LED2, HIGH);
//        delay(100);
//    }
//    else {
//        digitalWrite(LED2, LOW);
//        delay(100);}
//  
//    count+=1;
//  }
//  
//}

void loop() {
  digitalWrite(LED1, HIGH);
  delay(100);
  digitalWrite(LED1, LOW);
  delay(100);
  digitalWrite(LED2, HIGH);
  delay(100);
  digitalWrite(LED2, LOW);
  delay(100);
  digitalWrite(LED3, HIGH);
  delay(100);
  digitalWrite(LED3, LOW);
  delay(100);
}
