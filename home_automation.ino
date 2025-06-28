int a=0;
void setup(){
  pinMode(7,OUTPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  if(Serial.available()){
  	a=Serial.parseInt();
    if(a==1){
      digitalWrite(7,1);
    }
    else if(a==2){
      digitalWrite(7,0);
    }
    else if(a==3){
      digitalWrite(9,HIGH);
    }
    else if(a==4){
      digitalWrite(9,LOW);
    }
    Serial.println(a);
  }
}