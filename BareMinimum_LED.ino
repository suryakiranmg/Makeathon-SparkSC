void setup() {
  // put your setup code here, to run once:
//To TurnON the LEDs on digital IOs
pinMode(13, OUTPUT);
digitalWrite(13, HIGH);
pinMode(12, OUTPUT);
digitalWrite(12, HIGH);
pinMode(11, OUTPUT);
digitalWrite(11, HIGH);
pinMode(10, OUTPUT);
digitalWrite(10, HIGH);
pinMode(9, OUTPUT);
digitalWrite(9, HIGH);
pinMode(8, OUTPUT);
digitalWrite(8, HIGH);

//Temp sensor TMP36GZ
pinMode(A5,INPUT); // Configuring pin A1 as input
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

}
