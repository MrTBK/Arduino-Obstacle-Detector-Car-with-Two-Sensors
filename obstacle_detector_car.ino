int trig1=4;
int echo1=7;
int trig2=11;
int echo2=3;
int in1 = 5;      
int in2 = 6;    
int in3 = 9;      
int in4 = 10; 
int d1;
int d2;
long x1;
long x2;

void setup() {
    pinMode(trig1, OUTPUT);
    digitalWrite(trig1,LOW);
    pinMode(trig2, OUTPUT);
    digitalWrite(trig2,LOW);
    pinMode(echo1, INPUT);
    pinMode(echo2, INPUT);
    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
    pinMode(in3, OUTPUT);
    pinMode(in4, OUTPUT);
    Serial.begin(9600); 
}

void loop() {
    delay(300);
    digitalWrite(trig1,HIGH);
    delayMicroseconds(10);
    digitalWrite(trig1,LOW);
    x1=pulseIn(echo1,HIGH);
    d1=x1/58;
    Serial.print("d1=");
    Serial.println(d1);
    digitalWrite(trig2,HIGH);
    delayMicroseconds(10);
    digitalWrite(trig2,LOW);
    x2=pulseIn(echo2,HIGH);
    d2=x2/58;   
    Serial.print("d2=");
    Serial.println(d2);
    if (d1>20 && d2>20){
      analogWrite(in1, 120);
      analogWrite(in2, 0);
      analogWrite(in3, 120);
    }
    else if(d1<=20 && d2>20){
      analogWrite(in4, 0);
      analogWrite(in1, 0);
      analogWrite(in2, 0);
      analogWrite(in3, 0);
      analogWrite(in4, 0);
      delay(50);
      analogWrite(in1, 0);
      analogWrite(in2, 120);
      analogWrite(in3, 0);
      analogWrite(in4, 0);
      delay(400);
      analogWrite(in1, 0);
      analogWrite(in2, 0);
      analogWrite(in3, 0);
      analogWrite(in4, 0);
      delay(100);}
    else if(d1>20 && d2<=20){
      analogWrite(in4, 0);
      analogWrite(in1, 0);
      analogWrite(in2, 0);
      analogWrite(in3, 0);
      analogWrite(in4, 0);
      delay(50);
      analogWrite(in1, 0);
      analogWrite(in2, 0);
      analogWrite(in3, 0);
      analogWrite(in4, 120);
      delay(400);
      analogWrite(in1, 0);
      analogWrite(in2, 0);
      analogWrite(in3, 0);
      analogWrite(in4, 0);
      delay(100);
    }else if(d1<=10 && d2<=10){
      analogWrite(in4, 0);
      analogWrite(in1, 0);
      analogWrite(in2, 0);
      analogWrite(in3, 0);
      analogWrite(in4, 0);
      delay(50);
      analogWrite(in1, 0);
      analogWrite(in2, 120);
      analogWrite(in3, 0);
      analogWrite(in4, 120);
      delay(400);
      analogWrite(in1, 0);
      analogWrite(in2, 0);
      analogWrite(in3, 0);
      analogWrite(in4, 0);
      delay(100);
    
    }
    else if(d1<=20 && d2<=20){
      analogWrite(in4, 0);
      analogWrite(in1, 0);
      analogWrite(in2, 0);
      analogWrite(in3, 0);
      analogWrite(in4, 0);
      delay(50);
      analogWrite(in1, 120);
      analogWrite(in2, 0);
      analogWrite(in3, 0);
      analogWrite(in4, 120);
      delay(200);
      analogWrite(in1, 0);
      analogWrite(in2, 0);
      analogWrite(in3, 0);
      analogWrite(in4, 0);
      delay(100);
    }
}
