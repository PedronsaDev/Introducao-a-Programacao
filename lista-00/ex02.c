// Exercicio 01:
//
// Marcos trabalha como personal trainer e está cansado de 
// calcular o IMC de seus alunos pela calculadora do computador. 
// Ajude-o criando um programa que, dado o peso P em kilogramas 
// e a altura H de uma pessoa em metros, calcule qual é o Indice 
// de Massa Corporal IMC dessa pessoa.

#include <stdio.h>


int main(){

    float peso, altura;
    scanf("%f %f", &peso, &altura);

    float imc = peso/(altura*altura);
    printf("RESULTADO IMC: %.2f", imc);
    
    return 0;
}
