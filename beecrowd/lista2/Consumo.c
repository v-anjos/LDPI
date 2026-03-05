# include <stdio.h>

int main(){
	float Y, d;
	int X;
	
	scanf("%d", &X);
	scanf("%f", &Y);
	d = X / Y;
	
	printf("%.3f km/l\n", d);
	
	
	return 0;
}
