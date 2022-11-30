#include<Servo.h>
Servo myservo;
int pos = 0;
int val;
int motor = 8;
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
#include <TinyGPS.h>
#include <SoftwareSerial.h>
SoftwareSerial mySerial(9, 10);
byte tx=1;
TinyGPS gps; //Creates a new instance of the TinyGPS object
const int SPEAKER = 6;
const int LED_RED = 7;
const int LED_YELLOW = 10;
int Relay=7;
int tempC_1 = 0; //set initial tempC 0° for all LM35
int smkC_1 = 0; //set initial tempC 0º for all MQ 2
const int SensorPin1 = A0; //input sensor pin
const int SensorPin2 = A1;
String textForSMS;
void setup()
{
pinMode(motor, OUTPUT);
pinMode(tx, OUTPUT);
pinMode(Relay, OUTPUT);
myservo.attach(13);
pinMode(SPEAKER, OUTPUT);
lcd.begin(14, 2);
delay(100);
pinMode(SensorPin1, INPUT);
pinMode(SensorPin2, INPUT);
pinMode(SPEAKER, OUTPUT);
pinMode(LED_RED, OUTPUT);
pinMode(LED_YELLOW, OUTPUT); //Set control pins to be outputs
