
int lastSent = 0;
const int TWO = 2;

void setup() {
  Serial.begin(9600);
  pinMode(TWO, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);
  pinMode(13, INPUT);
}

void loop() {
   if(digitalRead(TWO) == HIGH && lastSent != TWO) {
      lastSent = TWO;
      Serial.println(TWO);
   }
}
