// Exercicio 02:
//
// Faça um programa que receba o salário de um funcionário, 
// calcule e imprima o novo salário sabendo-se que este sofreu um aumento de 22%.

#include <stdio.h>


int main()
{
	float salario;
	scanf("%f",&salario);
    
    float resultado = salario + ((salario/100)*22); // ou salario * (1.0+(22/100))
	printf("%.2f", resultado);
}
