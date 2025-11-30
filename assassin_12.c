#include <stdio.h>
struct Machine {
    char name[100];
    float powerRating;   // in kW
    float efficiency;    // in %
};
void inputMachine(struct Machine *m, int index) {
    printf("\nEnter details for Machine %d:\n", index + 1);
    printf("Machine Name: ");
    scanf(" %[^\n]", m->name);
    printf("Power Rating (kW): ");
    scanf("%f", &m->powerRating);
    printf("Efficiency (%%): ");
    scanf("%f", &m->efficiency);
}
void displayMachine(struct Machine m, int index) {
    printf("\nMachine %d Information:\n", index + 1);
    printf("Name: %s\n", m.name);
    printf("Power Rating: %.2f kW\n", m.powerRating);
    printf("Efficiency: %.2f %%\n", m.efficiency);
}

int main() {
    struct Machine machines[3];
    int maxIndex = 0, minIndex = 0;

    for (int i = 0; i < 3; i++) {
        inputMachine(&machines[i], i);
    }
    for (int i = 1; i < 3; i++) {
        if (machines[i].efficiency > machines[maxIndex].efficiency) {
            maxIndex = i;
        }
        if (machines[i].efficiency < machines[minIndex].efficiency) {
            minIndex = i;
        }
    }
    printf("\n--- All Machines ---");
    for (int i = 0; i < 3; i++) {
        displayMachine(machines[i], i);
    }
    printf("\n--- Most Efficient Machine ---");
    displayMachine(machines[maxIndex], maxIndex);

    printf("\n--- Least Efficient Machine ---");
    displayMachine(machines[minIndex], minIndex);

    return 0;
}
