void inisial_lcd() {
  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0); sprintf(buff, "Bismillahhirrahman.."); lcd.print(buff);
  lcd.setCursor(0, 1); sprintf(buff, "     ..nirrahim     "); lcd.print(buff);
  lcd.setCursor(0, 2); sprintf(buff, "  PKM KC PIMNAS 32  "); lcd.print(buff);
  lcd.setCursor(0, 3); sprintf(buff, "    - REOMAJAS -    "); lcd.print(buff);
  delay(500);
  lcd.setCursor(0, 0); sprintf(buff, "  Please Wait ...   "); lcd.print(buff);
  lcd.setCursor(0, 1); sprintf(buff, "                    "); lcd.print(buff);
  delay(500);
}

void tampilnilai() {
  lcd.setCursor(0, 0); sprintf(buff, " Ayo Hitung Nutrisi "); lcd.print(buff);
  lcd.setCursor(0, 1); sprintf(buff, "  Dengan REOMAJAS : "); lcd.print(buff);
  lcd.setCursor(0, 2); sprintf(buff, "Box1:%4d ", berat1); lcd.print(buff);
  lcd.setCursor(11, 2); sprintf(buff,"Box2:%4d ", berat2); lcd.print(buff);
  lcd.setCursor(0, 3); sprintf(buff, "Box3:%4d ", berat3); lcd.print(buff);
  lcd.setCursor(11, 3); sprintf(buff,"Box4:%4d ", berat4); lcd.print(buff);
}

void Akirim() {
  delay(200);
  lcd.setCursor(0, 2); sprintf(buff, "                    "); lcd.print(buff);
  lcd.setCursor(0, 3); sprintf(buff, "Mengirim Data..     ", berat1); lcd.print(buff);
  lcd.setCursor(0, 3); sprintf(buff, "Mengirim Data...    ", berat1); lcd.print(buff);
  delay(200);
  lcd.setCursor(0, 3); sprintf(buff, "Mengirim Data....   ", berat1); lcd.print(buff);
  delay(200);
  lcd.setCursor(0, 3); sprintf(buff, "Mengirim Data.....  ", berat1); lcd.print(buff);
  delay(200);
  lcd.setCursor(0, 3); sprintf(buff, "Mengirim Data.......", berat1); lcd.print(buff);
 kirimKeDatabase();
}

void Akirim1() {
  delay(200);
  lcd.setCursor(0, 0); sprintf(buff, " DATA BERAT (gr)"); lcd.print(buff);
  lcd.setCursor(0, 1); sprintf(buff, "W1:%4d ", berat1); lcd.print(buff);
  lcd.setCursor(9, 1); sprintf(buff, "W2:%4d ", berat2); lcd.print(buff);
  delay(1000);
  lcd.clear();
  lcd.setCursor(0, 0); sprintf(buff, "Mengirim Data "); lcd.print(buff);
  lcd.setCursor(0, 1); sprintf(buff, "Mhn Tunggu  "); lcd.print(buff);
  delay(600);
  lcd.setCursor(0, 0); sprintf(buff, "Mengirim Data."); lcd.print(buff);
  lcd.setCursor(0, 1); sprintf(buff, "Mhn Tunggu.."); lcd.print(buff);
  delay(600);
  lcd.clear();
  lcd.setCursor(0, 0); sprintf(buff, "   Sukses!!   "); lcd.print(buff);
}

