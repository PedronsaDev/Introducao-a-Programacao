// Exercicio 09:
//
// Josias é um renomado professor de Matemática do ensino fundamental, 
// conhecido sobretudo por sua didática fora dos padrões, 
// sempre inventando novas formas para transmitir o conteúdo de sua 
// matéria aos alunos. Em sua próxima aula de classificação de triângulos, 
// Josias gostaria de contar com a ajuda de um programa de computador capaz 
// de indicar o tipo de um triângulo a partir das medidas de seus três lados. 
// Ele contratou você para ajudá-lo nessa tarefa. Josias precisa que o programa 
// seja capaz de distinguir um triângulo escaleno, isósceles ou equilátero. 
// Não só isso, mas o programa deve funcionar para qualquer combinação de medidas 
// fornecidas para os três lados, mesmo que elas não formem triângulo e, 
// nesse caso, o programa deve imprimir a frase "Nao forma triangulo".
// Abaixo está uma tabela para classificação de triângulos, 
// que Josias também utilizará em sua aula:
//
//  Condição 	            Classificação
//  Lados Diferentes 	    Triângulo escaleno
//  2 Lados Iguais 	        Triângulo isósceles
//  Todos Lados Iguais 	    Triângulo equilátero
//
// Condição para a existência de um triângulo: 
// a medida de qualquer lado deve ser sempre menor que a soma das medidas dos outros dois lados.

#include <stdio.h>

int main() {
    int a, b, c;
    scanf(" %d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        if (a != b && a != c && b != c) {
            printf("Triangulo escaleno");
        } else if (a == b && b == c) {
            printf("Triangulo equilatero");
        } else if (a == b || a == c || b == c) {
            printf("Triangulo isosceles");
        }
    } else {
        printf("Nao forma triangulo\n");
    }

    return 0;
}
