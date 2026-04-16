// Exercicio 07:
//
// Escreva um programa que receba o valor de um depósito 
// e o valor da taxa de juros entre 0.0 (0%) e 1.0 (100%).
// Calcule e imprima o valor do rendimento e o valor total depois do rendimento.

#include <stdio.h>


int main(){

    int valorDeposito;
    float taxaJuros;

    scanf("%d %f", &valorDeposito, &taxaJuros);

    // Essa tbm eh autoexplicativa
    float rendimento = valorDeposito * taxaJuros;
    float valorTotal = valorDeposito + rendimento; 

    printf("%.2f\n", rendimento);
    printf("%.2f", valorTotal);

    return 0;
}

