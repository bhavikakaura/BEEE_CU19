//LED_SMART_PHONE
char junk;
String inputString="";
void setup(){
 Serial.begin(9600);
 pinMode(13, OUTPUT);
}
void loop(){
  if(Serial.available()){
  while(Serial.available()){
      char inChar = (char)Serial.read();
      inputString += inChar;   
    }
    Serial.println(inputString);
    while (Serial.available() > 0){ 
    junk = Serial.read() ; }
    if(inputString == "a"){ 
      digitalWrite(13, HIGH);  
    }else if(inputString == "b"){  
      digitalWrite(13, LOW);
    }
    inputString = "";
  }
}
