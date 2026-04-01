#include <stdio.h>

// Exercicio 08:
//
//Pedrinho é um menino que só sabe pensar em problemas matemáticos. 
//Dessa vez, ele quer somar os números em um intervalo natural fechado 
//com quantidade par de elementos, iniciado por 1 e terminado por n.

int main()
{
    int n;
    scanf("%d", &n);

    int somaA = 0;
    int somaB = 0;
    
    int meio = n/2;

    for(int i = 1; i <= meio; i++)
        somaA += i;

    for(int i = meio + 1; i <= n; i++)
        somaB += i;

    printf("%d\n", somaA);
    printf("%d", somaB);

    return 0;
}
