#include <dht.h>




dht DHT;

#define DHT11_PIN 7
#define LEDpin 13

/*temperature monitor
 * read DHT temp and activate a lED at particular temperatures
 */

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13, OUTPUT);
}

void loop() {{
  // put your main code here, to run repeatedly:
int chk = DHT.read11(DHT11_PIN);
  Serial.print("Temperature = ");
  Serial.println(DHT.temperature);
  Serial.print("Humidity = ");
  Serial.println(DHT.humidity);
  delay(2000);
}
if (DHT.temperature >= 26) digitalWrite(13, HIGH);
else digitalWrite(13, LOW);
delay(1000);
}
