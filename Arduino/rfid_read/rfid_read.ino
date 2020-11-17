int count = 0; 
char c; 
String id;

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  while(Serial.available()>0)
  {
    c = Serial.read();
   count++;
   id += c;
   if(count == 12)  
    {
      Serial.print(id);
      break;
      /*
      if(id=="xxxxxxxxxxxx")
      {
      //put your condition here
      }  */
    }
  }
  count = 0;
  id="";
  delay(500);
  // put your main code here, to run repeatedly:

}
