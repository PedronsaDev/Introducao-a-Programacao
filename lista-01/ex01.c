// Exercicio 01:
//
// Faça um programa que receba um tempo medido em horas 
// (dois números inteiros, representando as horas e os minutos, separados por um espaço), 
// calcule e imprima esse tempo em minutos.

#include <stdio.h>


int main(){

	int horas, minutos;
	scanf("%d %d", &horas, &minutos);
	
	int resultado = (horas*60) + minutos;
	printf("%d", resultado);

	return 0;
}
