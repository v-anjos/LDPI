#include <stdio.h>

int main() {

    int T;
    int A, B, C, D, E;
    int contador = 0;

    scanf("%d", &T);
    scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);

    if (A == T) contador++;
    if (B == T) contador++;
    if (C == T) contador++;
    if (D == T) contador++;
    if (E == T) contador++;

    printf("%d\n", contador);

    return 0;
}
