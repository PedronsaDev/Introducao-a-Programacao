// Exercicio 06:
//
// Escreva um programa que receba o valor do salário de 
// um funcionário e o valor do salário mı́nimo. 
// Calcule e imprima quantos salários mı́nimos ganha esse funcionário.

#include <stdio.h>


int main()
{
    float salario, salarioMinimo;
    scanf("%f %f", &salario, &salarioMinimo);

    // Essa eh meio autoexplicativa
    float resultado = salario / salarioMinimo;
    printf("%.2f", resultado);

    return 0;
}
