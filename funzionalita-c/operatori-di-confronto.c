#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float a;
    float b;

    printf("\nDammi a: ");
    scanf("%f", &a);
    printf("\nDammi b: ");
    scanf("%f", &b);

    if (a < b) {
        printf("\n %f minore di %f", a, b);
    } else {
        printf("\n %f minore di %f", b, a);
    }

    system("pause");
    return 0;
}