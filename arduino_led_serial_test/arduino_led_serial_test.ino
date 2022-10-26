
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  // initialize Serial;
  Serial.begin(9600);
}

void loop() {
  /*---
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(2000);                 
  digitalWrite(LED_BUILTIN, LOW); 
  delay(2000);
  ---*/  
                   
  // send "Cris" via serial to host pc;
  // ASCII Table at: https://www.rapidtables.com/code/text/ascii-table.html
  //
  //                               Dec   Hex   Binary  HTML  Char  Description
  Serial.print("C");  delay(5); // 67    43  01000011  &#67;   C   Capital C
  Serial.print("r");  delay(5); // 114   72  01110010  &#114;  r   Small r
  Serial.print("i");  delay(5); // 105   69  01101001  &#105;  i   Small i
  Serial.print("s");  delay(5); // 115   73  01110011  &#115;  s   Small s
  Serial.println();   delay(20);// 13    0D  00001101  &#13;   CR  Carriage Return
  //                            // 10    0A  00001010  &#10;   LF  Line Feed
}
