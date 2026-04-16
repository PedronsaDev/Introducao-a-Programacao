// Exercicio 04:
//
// Matias é um estudante de BCC que, assim como você, precisa encarar várias 
// disciplinas de matemática. Rotineiramente, ele precisa calcular valores 
// de funções do segundo grau e, como qualquer ser humano, acaba cometendo 
// pequenos erros de cálculo. Ajude Matias, criando um programa que calcula 
// o valor de uma função do segundo grau (f(x)) dado um valor de x. 
// Lembre-se que uma função do segundo grau é dada por: f(x)=ax2+bx+c.

#include <stdio.h>


int main(){

	double a, b, c, x; 
	scanf("%lf %lf %lf %lf", &a, &b, &c, &x);

	// Usando a biblioteca <math.h>: 
	// resultado = a*pow(x,2) + b*x + c;
    double resultado = a*(x*x) + b*x + c;

	printf("%.2f", resultado);
}
