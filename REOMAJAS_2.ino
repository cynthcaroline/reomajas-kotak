
 /*
   BISMILLAHIRAHMANNIRROHIM | ALLAHUAKBAR
   Tittle      : REOMAJAS 
   Version     : 1.0
   Year        : 2019
   Author      : Ahmad Farhan Aristo
   Company     : Sriwijaya University
*/

#include "Arduino.h"
#include "HX711.h"
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#include "WiFiEsp.h"
#define mySerial Serial3

char ssid[] = "32AllahuAkbar";
char pass[] = "unsrijuara32";
//char server[] = "192.168.123.1";
char server[] = "www.indorobot.net";

char namaVariabel[] = "Variabel";
String text = "";
String Respon = "";
bool responDariServer = false;

bool statusKomunikasiWifi = false;
long waktuMulai;
long waktuMintaData = 5000; //minta data setiap 5000ms

WiFiEspClient client;
int status = WL_IDLE_STATUS;

#define CLK1    A4
#define DOUT1   A5
#define CLK2    A2
#define DOUT2   A3
#define CLK3    A6
#define DOUT3   A7
#define CLK4    A0
#define DOUT4   A1

//box 1 kabel box 4
//box 2 kebal xxx x
//box 3 kabel box 1
//box 4 kabel box 3

LiquidCrystal_I2C lcd(0x27, 20, 4);

HX711 scale1;
HX711 scale2;
HX711 scale3;
HX711 scale4;

float calibration_factor = 410.10;
int berat1, berat2, berat3, berat4;
char buff [20];

long writingTimer = 30;
long startTime = 0;
long waitTime = 0;
unsigned char check_connection = 0;
unsigned char times_check = 0;
boolean error;

#define kirim digitalRead(16)
#define kirim1 digitalRead(17)

void setup() {
  Serial.begin (9600);
  pinMode(16, INPUT_PULLUP);
  pinMode(17, INPUT_PULLUP);
  inisial_lcd();
  setup_esp();
  setup_load();
  lcd.setCursor(0, 0); sprintf(buff, "   Rekoknisi Objek  "); lcd.print(buff);
  lcd.setCursor(0, 1); sprintf(buff, " Makanan dengan JST "); lcd.print(buff);
  delay(800);
  lcd.clear();
}

void loop() {
  baca();
  tampilnilai();
  Akirim();
  delay(9000);
//  if (!kirim) {
//    delay(200);
//    Akirim1();
//    
//  }
//
//  if (!kirim1) {
//    delay(200);
//    Akirim1();
//  }
}
