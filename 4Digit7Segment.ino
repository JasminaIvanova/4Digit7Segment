#define A 2
#define B 3
#define C 4
#define D 5
#define E 6
#define F 7
#define C3 8
#define C4 9

 
void setup() {
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(C3, OUTPUT);
  pinMode(C4, OUTPUT);
}

void loop() {
  digitalWrite(C3,HIGH);
  digitalWrite(C4,LOW);
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,LOW);
  digitalWrite(E,LOW);
  digitalWrite(F,LOW);
  delay(1);
  digitalWrite(C3,LOW);
  digitalWrite(C4,HIGH);
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  delay(1);

}
