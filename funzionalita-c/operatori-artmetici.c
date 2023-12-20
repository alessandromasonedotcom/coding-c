#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float a;
    float b;
    float c;

    printf("Dammi a:");
    scanf("%f", &a);
    printf("\n");
    printf("Dammi b:");
    scanf("%f", &b);
    printf("\n");
    c = a + b;
    printf("Addizione: %f\n", c);
    c = a - b;
    printf("Sottrazione: %f\n", c);
    c = a * b;
    printf("Moltiplicazione: %f\n", c);
    a = a / b;
    printf("Divisione: %f", c);

    system("pause");
    return 0;
}