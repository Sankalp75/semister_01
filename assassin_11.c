#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    double T1, T2;
    const double K = 237.0;   
    const double L = 0.01;   
    const double A = 1.0;    
    double Q;

    fp = fopen("wall.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open wall.txt\n");
        return 1;
    }
    if (fscanf(fp, "%lf %lf", &T1, &T2) != 2) {
        printf("Error: Could not read temperatures from wall.txt\n");
        fclose(fp);
        return 1;
    }

    fclose(fp);

    Q = K * A * (T1 - T2) / L;
    printf("Inner Surface Temperature (T1): %.2f °C\n", T1);
    printf("Outer Surface Temperature (T2): %.2f °C\n", T2);
    printf("Heat Transfer Rate (Q): %.2f W\n", Q);

    return 0;
}
