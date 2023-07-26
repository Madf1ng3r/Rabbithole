//#include <iostream>
//#include "curl.h"
//#include "json.hpp"
//
//using json = nlohmann::json;
//// Schreibfunktion für cURL, um die empfangenen Daten zu speichern
//size_t WriteCallback(char* contents, size_t size, size_t nmemb, std::string* buffer)
//{
//    buffer->append(contents, size * nmemb);
//    return size * nmemb;
//}
//// Funktion zum Abrufen des Witzes von der Witz-API
//std::string getJokeFromAPI()
//{
//    std::string joke;
//    // cURL-Initialisierung
//    CURL* curl = curl_easy_init();
//    if (curl) {
//        // URL der Witz-API
//        std::string url = "https://witzapi.de/api/joke/random";
//        // cURL-Optionen setzen
//        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
//        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
//        // Empfangspuffer
//        std::string buffer;
//        // Schreibfunktion für cURL setzen
//        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
//        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &buffer);
//        // HTTP-Anfrage senden und Antwort empfangen
//        CURLcode res = curl_easy_perform(curl);
//        if (res == CURLE_OK) {
//            // JSON-Daten in ein JSON-Objekt parsen
//            json jsonData = json::parse(buffer);
//            // Den Witz aus dem JSON-Objekt extrahieren
//            joke = jsonData["text"];
//        }
//        // cURL aufräumen
//        curl_easy_cleanup(curl);
//    }
//    return joke;
//}
//int funmain()
//{
//    char userInput;
//    do {
//        std::cout << "Möchtest du einen zufälligen Witz anzeigen lassen? (j/n): ";
//        std::cin >> userInput;
//
//        if (userInput == 'j' || userInput == 'J') {
//            std::string joke = getJokeFromAPI();
//            std::cout << "Witz: " << joke << std::endl;
//        }
//    } while (userInput != 'n' && userInput != 'N');
//    return 0;
//}