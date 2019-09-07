void setup_esp() {
  mySerial.begin(115200);
  WiFi.init(&mySerial);

  // check for the presence of the shield
  if (WiFi.status() == WL_NO_SHIELD) {
    Serial.println("WiFi shield not present");
    // don't continue
    while (true);
  }

  // attempt to connect to WiFi network
  while ( status != WL_CONNECTED) {
    Serial.print("Attempting to connect to WPA SSID: ");
    Serial.println(ssid);
    // Connect to WPA/WPA2 network
    status = WiFi.begin(ssid, pass);
  }

  // you're connected now, so print out the data
  Serial.println("You're connected to the network");

  printWifiStatus();
  waktuMulai = millis();

}

bool kirimKeDatabase()
{
  lcd.clear();
  Serial.println();
  Serial.println("Starting connection to server...");
  // if you get a connection, report back via serial
  if (client.connect(server, 80)) {
    Serial.println("Connected to server");
    // Make a HTTP request

    // parameter 1
    client.print("GET /uu/uu?b1=");
    client.print(berat1);
    client.print("&b2=");
    client.print(berat2);
    client.print("&b3=");
    client.print(berat3);
    client.print("&b4=");
    client.print(berat4);

    client.println(" HTTP/1.1");
    client.print("Host: ");
    client.println(server);
    client.println("Connection: close");
    client.println();

    return true;
  }
  return false;
}


void printWifiStatus()
{
  // print the SSID of the network you're attached to
  Serial.print("SSID: ");
  Serial.println(WiFi.SSID());

  // print your WiFi shield's IP address
  IPAddress ip = WiFi.localIP();
  Serial.print("IP Address: ");
  Serial.println(ip);

  // print the received signal strength
  long rssi = WiFi.RSSI();
  Serial.print("Signal strength (RSSI):");
  Serial.print(rssi);
  Serial.println(" dBm");

  IPAddress gateway = WiFi.gatewayIP();
  Serial.print("gateway:");
  Serial.print(gateway);
  Serial.println(" ");
}
