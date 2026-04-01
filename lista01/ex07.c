#include <stdio.h>

// Exercicio 08:
//

int main()
{
    int valorDeposito;
    float taxaJuros;
    scanf("%d %f", &valorDeposito, &taxaJuros);

    float rendimento = valorDeposito * taxaJuros;
    float valorTotal = valorDeposito + rendimento; 

    printf("%.2f\n", rendimento);
    printf("%.2f", valorTotal);

    return 0;
}
