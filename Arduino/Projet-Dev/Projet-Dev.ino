//#include <Process.h>
//#include <FileIO.h>


#include "DHT.h"
#define DHTPIN 12
#define DHTTYPE DHT22 
DHT dht(DHTPIN, DHTTYPE);



void setup() {
 
  Serial.begin(115200);

  //FileSystem.begin();
  dht.begin();
  delay(100);
}

void loop() {
  delay(2000);

 float h = dht.readHumidity();
 float t = dht.readTemperature();

 if (isnan(h) || isnan(t) )
 {
   Serial.println("Failed to read from DHT sensor!");
   return;
 }


//Tentative d'écriture dans un fichier texte 
//File file = FileSystem.open("/mnt/sd/arduino/‪test.txt", FILE_WRITE);

 
 //Affichages :
 Serial.print("Humidite: ");
 Serial.print(h);
 Serial.print(" %\t");
 Serial.print("Temperature: ");
 Serial.print(t);
 Serial.println(" *C ");

 //Tentative d'écriture dans un fichier texte
 //Serial.println(file);
 //if(file){
 //file.print("Humidite: ");
 //file.print(h);
 //file.println(" %");
 //file.print("Temperature: ");
 //file.print(t);
 //file.println(" *C ");
 //file.close();
//}

}
