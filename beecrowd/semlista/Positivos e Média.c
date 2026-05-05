#include <stdio.h>
 
int main() {
    int i, cont = 0;
    float n, soma = 0.0, media;

    for (i = 0; i < 6; i++) {
        scanf("%f", &n);

        if (n > 0) {
            cont++;
            soma += n;
        }
    }

    media = soma / cont;

    printf("%d valores positivos\n", cont);
    printf("%.1f\n", media);

    return 0;
}
