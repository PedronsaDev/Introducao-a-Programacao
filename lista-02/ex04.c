// Exercicio 04:
//
// Obi-Ruan Kanobison estava em casa procurando algo interessante para brincar 
// e no meio de suas buscas encontrou um antigo jogo de tabuleiro do seu pai: 
// o Buraco da Lacraia. Ele tentou de diversas formas ganhar o jogo, 
// mas não conseguiu passar pelo labirinto. Desesperado, ele pediu a você para fazer 
// um programa que o ajude a achar a saída sem cair nos buracos.
//
// O jogo tem um início, passagens indicadas por números e uma saída ("Fim"). 
// Ajude o personagem de Obi, o Doutor Pompis, a achar a saída. 
// Contudo, tenha cuidado, pois cada caminho sem saída acaba no buraco das lacraias.

#include <stdio.h>

int main() {
    int caminho;
    scanf("%d", &caminho);

    if (caminho == 3) {
        scanf("%d", &caminho);
        if (caminho == 5) {
            scanf("%d", &caminho);
            if (caminho == 9) {
                scanf("%d", &caminho);
                if (caminho == 0) {
                    printf("Parabens!\n");
                } else if (caminho == 17) {
                    printf("Caiu no Buraco!\n");
                } else {
                    printf("Caminho Invalido!\n");
                }
            } else if (caminho == 7) {
                printf("Caiu no Buraco!\n");
            } else {
                printf("Caminho Invalido!\n");
            }
        } else if (caminho == 11) {
            printf("Caiu no Buraco!\n");
        } else {
            printf("Caminho Invalido!\n");
        }
    } else if (caminho == 2) {
        scanf("%d", &caminho);
        if (caminho == 6) {
            scanf("%d", &caminho);
            if (caminho == 8) {
                scanf("%d", &caminho);
                if (caminho == 0) {
                    printf("Parabens!\n");
                } else if (caminho == 12) {
                    printf("Caiu no Buraco!\n");
                } else {
                    printf("Caminho Invalido!\n");
                }
            } else if (caminho == 4) {
                printf("Caiu no Buraco!\n");
            } else {
                printf("Caminho Invalido!\n");
            }
        } else {
            printf("Caminho Invalido!\n");
        }
    } else if (caminho == 1) {
        printf("Caiu no Buraco!\n");
    } else {
        printf("Caminho Invalido!\n");
    }

    return 0;
}
