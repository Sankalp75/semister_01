#include <stdio.h>
struct SolarPanel {
    char model[100];
    float capacity;    
    float dailyOutput;    
};
void inputPanel(struct SolarPanel *p, int index) {
    printf("\nEnter details for Solar Panel %d:\n", index + 1);
    printf("Model Name: ");
    scanf(" %[^\n]", p->model); 
    printf("Capacity (in kW): ");
    scanf("%f", &p->capacity);
    printf("Daily Power Output (in kWh): ");
    scanf("%f", &p->dailyOutput);
}
void displayPanel(struct SolarPanel p, int index) {
    printf("\nSolar Panel %d Information:\n", index + 1);
    printf("Model: %s\n", p.model);
    printf("Capacity: %.2f kW\n", p.capacity);
    printf("Daily Output: %.2f kWh\n", p.dailyOutput);
}

int main() {
    struct SolarPanel panels[2];
    float averageOutput;
    for (int i = 0; i < 2; i++) {
        inputPanel(&panels[i], i);
    }
    for (int i = 0; i < 2; i++) {
        displayPanel(panels[i], i);
    }
    averageOutput = (panels[0].dailyOutput + panels[1].dailyOutput) / 2.0;
    printf("\nAverage Daily Power Output of Both Panels: %.2f kWh\n", averageOutput);
    return 0;
}
