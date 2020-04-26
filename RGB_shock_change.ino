#define redpin 9
#define greenpin 10
#define bluepin 11
#define shock 3 
int val;
int r = 0;
int b = 0;
int g = 0;
int i = 0;

void setup() {
Serial.begin(9600);
pinMode(redpin , OUTPUT);
pinMode(greenpin , OUTPUT);
pinMode(bluepin , OUTPUT);
pinMode (shock, INPUT);
}

void loop() {
  val = digitalRead (shock);
  if (val == HIGH ){
    analogWrite(redpin , r);
    analogWrite(bluepin , b);
    analogWrite(greenpin , g);
    }
  if (val == LOW){
     i ++;
     delay(500);
     if (i == 7){
        i = 0;
        r = 0;
        g = 0; 
        b = 0;    
     }
   }
   //change LED color to RED
  if (i == 1){
    r = 250;
    g = 0;
    b = 0;
  }
  //change LED color to BLUE
  if (i == 2){
    r = 0;
    g = 0;
    b = 250;
  }
  //change LED color to GREEN
  if (i == 3){
    r = 0;
    g = 250;
    b = 0;
  }
  //change LED color to YELLOW
  if (i == 4){
    r = 250;
    g = 250;
    b = 0;
  }
  //change LED color to WHITE
  if (i == 5){
    r = 250;
    g = 250;
    b = 250;
  }
  //change LED color to PURPLE
  if (i == 6){
    r = 250;
    g = 0;
    b = 250;
  }
Serial.println(i);
}
