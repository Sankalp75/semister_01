#include <stdio.h>
struct Car {
    char model[100];
    int engineCapacity; 
    float fuelEfficiency;
};
void inputCar(struct Car *c, int index) {
    printf("\nEnter details for Car %d:\n", index + 1);
    printf("Model Name: ");
    scanf(" %[^\n]", c->model);   
    printf("Engine Capacity (cc): ");
    scanf("%d", &c->engineCapacity);
    printf("Fuel Efficiency (km/l): ");
    scanf("%f", &c->fuelEfficiency);
}
void displayCar(struct Car c, int index) {
    printf("\nCar %d Information:\n", index + 1);
    printf("Model: %s\n", c.model);
    printf("Engine Capacity: %d cc\n", c.engineCapacity);
    printf("Fuel Efficiency: %.2f km/l\n", c.fuelEfficiency);
}

int main() {
    struct Car cars[2];
    float averageEfficiency;
    for (int i = 0; i < 2; i++) {
        inputCar(&cars[i], i);
    }
    for (int i = 0; i < 2; i++) {
        displayCar(cars[i], i);
    }
    averageEfficiency = (cars[0].fuelEfficiency + cars[1].fuelEfficiency) / 2.0;
    printf("\nAverage Fuel Efficiency of Both Cars: %.2f km/l\n", averageEfficiency);
    return 0;
}
