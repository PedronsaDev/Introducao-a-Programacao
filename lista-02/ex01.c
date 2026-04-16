// Exercicio 01:
//
// Guilherme é um estudante que deseja descobrir a sua média final na matéria de GAAL, 
// para isso, ele teve a ideia de pedir para você, nobre programador, 
// que fizesse um programa que a calculasse. Para isso, Guilherme lhe passou algumas 
// informações a respeito de como funciona o cálculo da média final:
//
// São realizadas um total de 3 provas comuns e 1 prova substitutiva
// Caso a nota da prova substitutiva seja superior a alguma das notas anteriores, ela será usada no lugar da prova de menor desempenho
// As 3 notas que serão usadas possuem o mesmo peso
//
// O aluno será aprovado caso sua média final seja igual ou maior que 6, caso contrário, ele será reprovado.

#include <stdio.h>


int main(){
    float nota1, nota2, nota3, sub;

    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);
    scanf("%f", &sub);

    // Verificamos o menor e substituimos pela sub se for menor
    if (nota1 <= nota2 && nota1 <= nota3){
        if (nota1 < sub) nota1 = sub;
    } else if (nota2 <= nota1 && nota2 <= nota3){
        if (nota2 < sub) nota2 = sub;
    } else if (nota3 < nota1 && nota3 < nota2){
        if (nota3 < sub) nota3 = sub;
    }

    float media = (nota1 + nota2 + nota3) / 3;

    printf("Media Final: %.2f\n", media);
    if (media >= 6.0f) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}
