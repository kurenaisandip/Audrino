
/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial

/* Fill in information from Blynk Device Info here */
#define BLYNK_TEMPLATE_ID "TMPL6tHJGJq_M"
#define BLYNK_TEMPLATE_NAME "New"
#define BLYNK_AUTH_TOKEN "6vdFxBl0wVZJnB_ov2vdm5HOVXNwUYSC"


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Virinchi LAB";
char pass[] = "tech&inovation";
char auth[] = "6vdFxBl0wVZJnB_ov2vdm5HOVXNwUYSC";


int relay1 = 2;  //D6 pin changed from 12 to 2 
BLYNK_WRITE(V0) {
  int led1 = param.asInt();
  digitalWrite(relay1, led1);
  Serial.println(led1);
}


void setup() {
  // Debug console
  Serial.begin(9600);
  pinMode(relay1, OUTPUT);

  digitalWrite(relay1, LOW);
 
  Blynk.begin(auth, ssid, pass);
}

void loop() {
  Blynk.run();
}
