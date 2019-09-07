void setup_load() {
  scale1.begin(DOUT1, CLK1);
  scale2.begin(DOUT2, CLK2);
  scale3.begin(DOUT3, CLK3);
  scale4.begin(DOUT4, CLK4);

  scale1.set_scale();
  scale1.tare();
  scale2.set_scale();
  scale2.tare();
  scale3.set_scale();
  scale3.tare();
  scale4.set_scale();
  scale4.tare();
}

void baca() {
  scale1.set_scale(calibration_factor);
  scale2.set_scale(calibration_factor);
  scale3.set_scale(calibration_factor);
  scale4.set_scale(calibration_factor);

  berat1 = scale1.get_units(), 4;
  berat2 = scale2.get_units(), 4;
  berat3 = scale3.get_units(), 4;
  berat4 = scale4.get_units(), 4;

  berat1 = (-(berat1))-60;
  berat2 = 79;
  berat3 = (-(berat3))-60;
  berat4 = (-(berat4))-60;
  delay(50);

}

