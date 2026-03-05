#include <stdio.h> //inclusão das bibliotecas, math.n será biblioteca que nos permitira ver o valor absoluto da diferença entre dois numeros
#include <math.h>

int main(){
	int cont, MaiorAB, a, b, c; //Declaração de variaveis 
	
	scanf("%d %d %d", &a, &b, &c); //Leitura dos valores armazenados nass variaveis
	
	MaiorAB = (a + b + abs(a-b))/2; //Calculo do maior valor entre os valores armazenados em a e b, armazenado em MaiorAB
	
	MaiorAB = (c + MaiorAB + abs(c - MaiorAB))/2; //calculo do maior valor entre os valores armazenao em C e MaiorAB, armazeando novamente em MaiorAB
	printf("%d eh o maior\n", MaiorAB);
	
	return 0;
}
