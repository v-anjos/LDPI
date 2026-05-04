#include <stdio.h>

int main() {

float salario, novoSalario, valorDeAumento; 
int percentual;

scanf("%f", &salario);

if (salario >= 0.0 && salario <= 400.00)
{
    percentual = 15;
    valorDeAumento = salario * 0.15;
    novoSalario = salario + valorDeAumento;
    
    printf("Novo salario: %.2f\n", novoSalario);
    printf("Reajuste ganho: %.2f\n", valorDeAumento);
    printf("Em percentual: %.d %%\n", percentual);

}else if (salario >= 400.01 && salario <= 800.00)
{
    percentual = 12;
    valorDeAumento = salario * 0.12;
    novoSalario = salario + valorDeAumento;
    
    printf("Novo salario: %.2f\n", novoSalario);
    printf("Reajuste ganho: %.2f\n", valorDeAumento);
    printf("Em percentual: %.d %%\n", percentual);

}else if (salario >= 800.01 && salario <= 1200.00)
{
    percentual = 10;
    valorDeAumento = salario * 0.10;
    novoSalario = salario + valorDeAumento;
    
    printf("Novo salario: %.2f\n", novoSalario);
    printf("Reajuste ganho: %.2f\n", valorDeAumento);
    printf("Em percentual: %.d %%\n", percentual);

}else if (salario >=1200.01 && salario <= 2000.00)
{
    percentual = 7;
    valorDeAumento = salario * 0.07;
    novoSalario = salario + valorDeAumento;
    
    printf("Novo salario: %.2f\n", novoSalario);
    printf("Reajuste ganho: %.2f\n", valorDeAumento);
    printf("Em percentual: %.d %%\n", percentual);

}else{

    percentual = 4;
    valorDeAumento = salario * 0.04;
    novoSalario = salario + valorDeAumento;
    
    printf("Novo salario: %.2f\n", novoSalario);
    printf("Reajuste ganho: %.2f\n", valorDeAumento);
    printf("Em percentual: %.d %%\n", percentual);    
}
    return 0;
}
