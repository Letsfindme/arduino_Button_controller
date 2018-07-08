int switchState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, INPUT);
//  digitalWrite(1, HIGH);
//  digitalWrite(2, LOW);
//  digitalWrite(3, LOW);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
 
  


 
  for(int i=1;i<=3;i++){
    if ( digitalRead(4)== HIGH ){
        while ( digitalRead(4) == HIGH ){       
        }
        if(switchState == 1){
          switchState=0;
        }
         else{
           switchState=1;
         }
         
        if (switchState == 1){
          while(digitalRead (4)== LOW){
            
          }
          switchState = 0;
        }
       }
    digitalWrite(i,HIGH);
    

    delay(250);
   Serial.println(digitalRead(4));
   Serial.println(switchState);
  }

  for(int i=3;i>=0;i--){  
      if ( digitalRead(4) == HIGH ){
        while ( digitalRead(4) == HIGH ){
        }
       if(switchState == 1){
          switchState = 0;
        }
        else{
          switchState = 1;
        }
        if (switchState == 1){
          while(digitalRead (4)== LOW){
            
          }
          switchState = 0;
        }
       }
  digitalWrite(i,LOW);

  delay(250);
  Serial.println(digitalRead(4));
  Serial.println(switchState);
}

}







    



