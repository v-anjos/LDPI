#include <stdio.h>

int main() {
    double valor_lido;
    int total_centavos;

    // Lendo o valor como double para maior precisão
    if (scanf("%lf", &valor_lido) != 1) return 0;

    // Convertendo para centavos (adicionamos 0.5 para evitar erros de arredondamento)
    total_centavos = (int)(valor_lido * 100 + 0.5);

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", total_centavos / 10000);
    total_centavos %= 10000;

    printf("%d nota(s) de R$ 50.00\n", total_centavos / 5000);
    total_centavos %= 5000;

    printf("%d nota(s) de R$ 20.00\n", total_centavos / 2000);
    total_centavos %= 2000;

    printf("%d nota(s) de R$ 10.00\n", total_centavos / 1000);
    total_centavos %= 1000;

    printf("%d nota(s) de R$ 5.00\n", total_centavos / 500);
    total_centavos %= 500;

    printf("%d nota(s) de R$ 2.00\n", total_centavos / 200);
    total_centavos %= 200;

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", total_centavos / 100);
    total_centavos %= 100;

    printf("%d moeda(s) de R$ 0.50\n", total_centavos / 50);
    total_centavos %= 50;

    printf("%d moeda(s) de R$ 0.25\n", total_centavos / 25);
    total_centavos %= 25;

    printf("%d moeda(s) de R$ 0.10\n", total_centavos / 10);
    total_centavos %= 10;

    printf("%d moeda(s) de R$ 0.05\n", total_centavos / 5);
    total_centavos %= 5;

    printf("%d moeda(s) de R$ 0.01\n", total_centavos);

    return 0;
}
