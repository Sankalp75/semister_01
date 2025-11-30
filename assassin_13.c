#include <stdio.h>
struct WeatherStation {
    char stationName[100];
    char city[100];
    float temperature;   
};
void inputStation(struct WeatherStation *ws, int index) {
    printf("\nEnter details for Weather Station %d:\n", index + 1);
    printf("Station Name: ");
    scanf(" %[^\n]", ws->stationName); 
    printf("City: ");
    scanf(" %[^\n]", ws->city);
    printf("Temperature (°C): ");
    scanf("%f", &ws->temperature);
}
void displayStation(struct WeatherStation ws, int index) {
    printf("\nWeather Station %d Information:\n", index + 1);
    printf("Station Name: %s\n", ws.stationName);
    printf("City: %s\n", ws.city);
    printf("Temperature: %.2f °C\n", ws.temperature);
}

int main() {
    struct WeatherStation stations[3];
    int maxIndex = 0, minIndex = 0;

    for (int i = 0; i < 3; i++) {
        inputStation(&stations[i], i);
    }
    for (int i = 1; i < 3; i++) {
        if (stations[i].temperature > stations[maxIndex].temperature) {
            maxIndex = i;
        }
        if (stations[i].temperature < stations[minIndex].temperature) {
            minIndex = i;
        }
    }
    printf("\n--- All Weather Stations ---");
    for (int i = 0; i < 3; i++) {
        displayStation(stations[i], i);
    }
    printf("\n--- Station with Highest Temperature ---");
    displayStation(stations[maxIndex], maxIndex);

    printf("\n--- Station with Lowest Temperature ---");
    displayStation(stations[minIndex], minIndex);

    return 0;
}
