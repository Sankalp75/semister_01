#include <stdio.h>

int main() {
    int n;
    float sum = 0, average;

    printf("Enter number of machines: ");
    scanf("%d", &n);
    
    float output[n];  

    for (int i = 0; i < n; i++) {
        printf("Enter daily output of machine %d (in units): ", i + 1);
        scanf("%f", &output[i]);
        sum += output[i];
    }
    average = sum / n;
    printf("\nDaily Output of Machines:\n");
    for (int i = 0; i < n; i++) {
        printf("Machine %d: %.2f units\n", i + 1, output[i]);
    }

    printf("\nAverage Production: %.2f units\n", average);

    return 0;
}
