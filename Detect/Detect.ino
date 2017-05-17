const byte digi = 10;
const byte ano = A0;
const byte analyse = 7;
int val;

void setup(){ 
  pinMode(analyse,INPUT);
  pinMode(digi,OUTPUT);
  Serial.begin(9600);
  digitalWrite(digi, HIGH);
  }

void loop(){
  boolean val= digitalRead(analyse);
  Serial.print(val);
  delay(1000);
  if(val){
    digitalWrite(digi,HIGH);
    }else if(!val){
      digitalWrite(digi,LOW);
      }
// if (Serial.available()){
//  val = Serial.read();
//  if(val == '1'){
//    digitalWrite(digi,HIGH);
//    Serial.print("MODA ON");
//    }else if(val == '0'){
//      digitalWrite(digi,LOW);
//      Serial.print("MODA OFF");
//      }
//  }
  }
