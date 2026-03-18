#include <stdio.h>

int main() {
    float A, B, C;

    scanf("%f %f %f", &A, &B, &C);

    // condição de existência de triângulo
    if (A + B > C && A + C > B && B + C > A) {
        float perimetro = A + B + C;
        printf("Perimetro = %.1f\n", perimetro);
    } else {
        float area = ((A + B) * C) / 2.0;
        printf("Area = %.1f\n", area);
    }

    return 0;
}
