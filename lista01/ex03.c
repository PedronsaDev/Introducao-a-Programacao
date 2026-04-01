// Exercicio 03:
//
// Faça um programa que receba duas notas e seus respectivos pesos, 
// calcule e imprima a média ponderada dessas notas.

#include <stdio.h>


int main()
{
	float nota1, nota2, peso1, peso2;
	scanf("%f %f %f %f", &nota1, &nota2, &peso1, &peso2);
    
    float mediaPonderada = ((nota1 * peso1) + (nota2 * peso2)) / (peso1 + peso2);

	printf("%.2f", mediaPonderada);
}
