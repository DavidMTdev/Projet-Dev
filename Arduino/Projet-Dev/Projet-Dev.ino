//#include <Process.h>
//#include <FileIO.h>

//Tentative de connexion en wifi via php 
//#include <ESP8266WiFi.h>
//const char* ssid = "Louis ardilly";
//const char* password = "12345678";
//WiFiServer server(80);

#include "DHT.h"
#define DHTPIN 12
#define DHTTYPE DHT22 
DHT dht(DHTPIN, DHTTYPE);



void setup() {
 
  Serial.begin(115200);
  dht.begin();
  delay(100);


  //Connexion au fichier texte
  //FileSystem.begin();
  
  

  // Connexion wifi
  //Serial.println();
  //Serial.print("Connecting to ");
  //Serial.println(ssid);
  //WiFi.begin(ssid, password);

  // connection  en cours ...
  //while (WiFi.status() != WL_CONNECTED)
  //{
   // delay(500);
   // Serial.print(".");
  //}

  // Wifi connecter
  //Serial.println("WiFi connecter");
 
  // Démmarrage du serveur.
  //server.begin();
  //Serial.println("Serveur demarrer !");
 
  // Affichage de l'adresse IP
  //Serial.print("Utiliser cette adresse URL pour la connexion :");
  //Serial.print("http://");
  //Serial.print(WiFi.localIP());
  //Serial.println("/");
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
 
  //Affichages :
 Serial.print("Humidite: ");
 Serial.print(h);
 Serial.print(" %\t");
 Serial.print("Temperature: ");
 Serial.print(t);
 Serial.println(" *C ");


//Tentative d'écriture dans un fichier texte 
//File file = FileSystem.open("/mnt/sd/arduino/‪test.txt", FILE_WRITE);
 
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




// Connexion WIFI
// WiFiClient client;
  // Vérification si le client est connecter.
  // client = server.available();
  // if (!client)
  // {
  //   return;
  // }
 
  // Attendre si le client envoie des données ...
  // Serial.println("nouveau client");
  // while(!client.available()){
  //   delay(1);
  // }
 
  // String request = client.readStringUntil('\r');
  // Serial.println(request);
  // client.flush();
}
