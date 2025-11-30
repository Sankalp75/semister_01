#include <stdio.h>
struct WindTurbine {
    char model[100];
    float rotorDiameter;  
    float outputPower;     
};
void inputTurbine(struct WindTurbine *t, int index) {
    printf("\nEnter details for Wind Turbine %d:\n", index + 1);
    printf("Model Name: ");
    scanf(" %[^\n]", t->model);   
    printf("Rotor Diameter (m): ");
    scanf("%f", &t->rotorDiameter);
    printf("Output Power (kW): ");
    scanf("%f", &t->outputPower);
}
void displayTurbine(struct WindTurbine t, int index) {
    printf("\nWind Turbine %d Information:\n", index + 1);
    printf("Model: %s\n", t.model);
    printf("Rotor Diameter: %.2f m\n", t.rotorDiameter);
    printf("Output Power: %.2f kW\n", t.outputPower);
}

int main() {
    struct WindTurbine turbines[2];
    float averageOutput;
    for (int i = 0; i < 2; i++) {
        inputTurbine(&turbines[i], i);
    }
    for (int i = 0; i < 2; i++) {
        displayTurbine(turbines[i], i);
    }


    averageOutput = (turbines[0].outputPower + turbines[1].outputPower) / 2.0;
    printf("\nAverage Output Power of Both Turbines: %.2f kW\n", averageOutput);
    return 0;
}
