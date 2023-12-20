#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a;
    int b;
    float c;
    float d;
    int e;
    float f;

    printf("Dammi a: ");
    scanf("%d", &a);
    printf("\n");
    printf("Dammi b: ");
    scanf("%d", &b);
    printf("\n");

    c = (float)a / b;
    printf("Risulato con davanti il calcolo 'float' %f", c);
    printf("\n");
    c = a / b;
    printf("Risulato senza 'float' %f", c);
    printf("\n");

    system("pause");
    system("cls");
    printf("Dammi d: ");
    scanf("%f", &d);
    printf("\n");
    e = d;
    printf("parte intera: %d", e);
    f = d - e;
    printf("\n");
    printf("parte decimale: %f", f);
    system("pause");
    return 0;
}