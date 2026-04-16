// Exercicio 10:
//
// José gosta muito de matemática e está estudando geometria analítica 
// na sua graduação. Durante o semestre ele se deparou com o estudo das retas, 
// e a posição relativa entre elas no plano. Quando temos duas retas, 
// conseguimos definir se elas são paralelas, perpendiculares ou concorrentes 
// usando seu coeficiente angular.

// Para auxiliar na correção de alguns exercícios sobre o tema, 
// José pediu para você, um curioso desenvolvedor, que criasse um sistema 
// que trabalhe com duas opções. Na primeira, a partir do coeficiente 
// angular de duas retas, o sistema verifique qual a posição relativa entre elas. 
// Na segunda, a partir de 4 pontos, dois de cada reta, o sistema verifique 
// qual a posição relativa entre essas retas.

#include <stdio.h>

int main() {
    char opcao;
    float m1, m2;

    scanf(" %c", &opcao);

    if (opcao == 'A') {
        // Coeficientes diretos
        float cm1, cm2;
        scanf("%f %f", &cm1, &cm2);
        m1 = cm1;
        m2 = cm2;
    } 
    else if (opcao == 'B') {
        // 4 pontos (x1, y1, x2, y2) para cada reta
        float x1, y1, x2, y2, x3, y3, x4, y4;
        scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
        scanf("%f %f %f %f", &x3, &y3, &x4, &y4);

        // (y2-y1)/(x2-x1)
        m1 = (y2 - y1) / (x2 - x1);
        m2 = (y4 - y3) / (x4 - x3);
    } 
    else {
        printf("OPCAO INVALIDA\n");
        return 0;
    }

    // Verificacao da posicao relativa
    if (m1 == m2) {
        printf("RETAS PARALELAS\n");
    } 
    else if (m1 * m2 == -1) {
        printf("RETAS PERPENDICULARES\n");
    } 
    else {
        printf("RETAS CONCORRENTES\n");
    }

    return 0;
}
