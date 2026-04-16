// Exercicio 01:
//
// Faça um programa que receba três notas de um aluno, 
// calcule e imprima a média aritmética entre essas notas. 

#include <stdio.h>


int main(){

    float nota1, nota2, nota3;
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    float media = (nota1 + nota2 + nota3) / 3;
    printf("%.2f", media);
    
    return 0;
}
