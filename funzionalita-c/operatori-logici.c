#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a;
    int b;

    printf("\n Dammi a: ");
    scanf("%d", &a);
    printf("\n Dammi b: ");
    scanf("%d", &b);
    if (a >= 0 && a <= 10) {
        printf("\n'a' e' compreso tra 0 e 10");
    } else {
        printf("\n'a' non e' compreso tra 0 e 10");
    }

    if (a % 2 == 0 || b % 2 == 0) {
        printf("\nUno dei due numeri e' pari");
    } else {
        printf("\nNessun numero e' pari");
    }

    system("pause");
    return 0;
}