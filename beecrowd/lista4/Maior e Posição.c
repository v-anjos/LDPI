#include <stdio.h>

int main() {

    int i, n;
    int maior, posicao;

    for(i = 1; i <= 100; i++) {
        scanf("%d", &n);

        if(i == 1) {
            maior = n;
            posicao = i;
        } else {
            if(n > maior) {
                maior = n;
                posicao = i;
            }
        }
    }

    printf("%d\n", maior);
    printf("%d\n", posicao);

    return 0;
}
