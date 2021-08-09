char incomingChar;
int pin = 13;
int reg = 200;
int lng = 600;



void setup() {
  pinMode(pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    incomingChar = Serial.read();
    
    if (isUpperCase(incomingChar)) {
      incomingChar ^= 32;  
    }
    Serial.print(incomingChar);
    letter(incomingChar);
    digitalWrite(pin, LOW);
    delay(lng);
    
      
  }
}

void dot() {
  digitalWrite(pin, HIGH);
  delay(reg);
  digitalWrite(pin, LOW);
  delay(reg);
}

void dash() {
  digitalWrite(pin, HIGH);
  delay(lng);
  digitalWrite(pin, LOW);
  delay(reg);
}

void letter(char nextChar) {
  switch (nextChar) {
        case 'a':
          dot();
          dash();
          break;
         case 'b':
          dash();
          dot();
          dot();
          dot();
          break;
         case 'c':
          dash();
          dot();
          dash();
          dot();
          break;
         case 'd':
          dash();
          dot();
          dot();
          break;
         case 'e':
          dot();
          break;
         case 'f':
          dot();
          dot();
          dash();
          dot();
          break;
         case 'g':
          dash();
          dash();
          dot();
          break;
         case 'h':
          dot();
          dot();
          dot();
          dot();
          break;
         case 'i':
          dot();
          dot();
          break;
         case 'j':
          dot();
          dash();
          dash();
          dash();
          break;
         case 'k':
          dash();
          dot();
          dash();
          break;
         case 'l':
          dot();
          dash();
          dot();
          dot();
          break;
         case 'm':
          dash();
          dash();
          break;
         case 'n':
          dash();
          dot();
          break;
         case 'o':
          dash();
          dash();
          dash();
          break;
         case 'p':
          dot();
          dash();
          dash();
          dot();
          break;
         case 'q':
          dash();
          dash();
          dot();
          dash();
          break;
         case 'r':
          dot();
          dash();
          dot();
          break;
         case 's':
          dot();
          dot();
          dot();
          break;
         case 't':
          dash();
          break;
         case 'u':
          dot();
          dot();
          dash();
          break;
         case 'v':
          dot();
          dot();
          dot();
          dash();
          break;
         case 'w':
          dot();
          dash();
          dash();
          break;
         case 'x':
          dash();
          dot();
          dot();
          dash();
          break;
         case 'y':
          dash();
          dot();
          dash();
          dash();
          break;
         case 'z':
          dash();
          dash();
          dot();
          dot();
          break;
         case ' ':
          digitalWrite(pin, LOW);
          delay(lng);
          delay(lng);
          delay(reg);
          break;
      }
}
