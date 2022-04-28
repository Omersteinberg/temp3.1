#include <Adafruit_DHT.h>

//This identifies the primary pin output to be read by the DHT sensor
#define DHTPIN A3    
 
//Defines what the type of the DHT sensor we are using is.
#define DHTTYPE DHT11  

DHT dht(DHTPIN, DHTTYPE);

void setup() 
{
    //begin the reading of temperature values
    dht.begin();
    
}


void loop() 
{
        float temp = dht.getTempCelcius();
        
        Particle.publish("temp", String(temp), PRIVATE);
        delay(30000);

}
