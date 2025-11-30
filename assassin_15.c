#include <stdio.h>

int main() {
    int n, maxIndex = 0;
    float efficiency[100]; 

    printf("Enter number of machines: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter efficiency of machine %d (%%): ", i + 1);
        scanf("%f", &efficiency[i]);
    }
    for (int i = 1; i < n; i++) {
        if (efficiency[i] > efficiency[maxIndex]) {
            maxIndex = i;
        }
    }
    printf("\nEfficiency of Machines:\n");
    for (int i = 0; i < n; i++) {
        printf("Machine %d: %.2f %%\n", i + 1, efficiency[i]);
    }
    printf("\nMachine %d has the maximum efficiency: %.2f %%\n", 
           maxIndex + 1, efficiency[maxIndex]);

    return 0;
}
