// Exercio 06:
//
// Cheetara e Panthro gostam de jogar pedra, papel e tesoura. 
// Entretanto, perceberam que conseguem jogar apenas quando ambos 
// estão juntos presencialmente. Para acabar com essa limitação, 
// pediram a você, programador(a) serelepe, para fazer um programa 
// que simule o jogo, de tal forma que eles possam jogar quando quiserem, 
// presencialmente ou não.
//
// Antes de construir o jogo completo, você decide fazer uma versão MVP 
// (Minimum Viable Product) em C para testar as suas habilidades.

#include <stdio.h>

int main() {
    char p, c;
    scanf(" %c %c", &p, &c);

    // Checamos se as combinacoes jogadas sao validas
    if ((p == 'R' || p == 'P' || p == 'S') && (c == 'R' || c == 'P' || c == 'S')) {
        // Caso forem iguas empate
        if (p == c) {
            printf("EMPATE\n");
        } else {
            // Sempre que essa condicao for falsa garantimos que p ganha
            if ((p == 'R' && c == 'P') || (p == 'P' && c == 'S') || (p == 'S' && c == 'R')) {
                printf("CHEETARA\n");
            } else {
                printf("PANTHRO\n");
            }
        } 
    } else {
        printf("INVALIDA\n");
    }

    return 0;
}
