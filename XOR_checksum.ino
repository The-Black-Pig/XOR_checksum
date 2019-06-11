// calculates the checksum of any given ASCII string using XOR
// sketch by Steve Clements 2019

char myArray[] = "arduino"; //the string source for the checksum
byte xorTemp;

void setup() {
  Serial.begin(9600);

}

void loop() {
  // print first character ASCII decimal value
  xorTemp = byte(myArray[0]);
  Serial.println(xorTemp);
  
  // process the remaining string characters
  for(int i = 1; i < sizeof(myArray) - 1; i++){
    xorTemp ^= byte(myArray[i]);
    Serial.println(xorTemp);
    delay(250);
    }
  Serial.print("The checksum equals ");Serial.println(xorTemp, HEX);

}
