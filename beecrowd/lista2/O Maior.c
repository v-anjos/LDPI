#include <stdio.h>
#include <math.h>

int main(){
	int cont, MaiorAB, a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	
	MaiorAB = (a + b + abs(a-b))/2;
	
	MaiorAB = (c + MaiorAB + abs(c - MaiorAB))/2;
	printf("%d eh o maior\n", MaiorAB);
	
	return 0;
}
