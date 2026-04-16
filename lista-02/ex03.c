// Exercicio 03:
//
// O Dilema do Prisioneiro é um famoso experimento mental relacionado à Teoria dos Jogos. 
// Uma variação deste, conhecido como Impasse Mexicano, consiste no seguinte:
//
// Alejandro, Blanca, Casimiro e Dorotea apontam armas uns para os outros 
// e possuem a escolha de Guardar (G) suas armas ou Atirar (A).
//
// A consequência de suas escolhas ocorre segundo estas regras: 
// * Se todos Guardarem, ninguém morre; 
// * Se alguns, mas não todos, Atirarem, os que Guardaram morrem; 
// * Se todos Atirarem, todos morrem.

#include <stdio.h>

int main(){
    char a, b, c, d;
    
    scanf(" %c", &a);
    scanf(" %c", &b);
    scanf(" %c", &c);
    scanf(" %c", &d);

    if (a == 'A' && b == 'A' && c == 'A' && d == 'A') {         // Todos atiram
        printf("Alejandro morreu.\n");
        printf("Blanca morreu.\n");
        printf("Casimiro morreu.\n");
        printf("Dorotea morreu.\n");
    } else if (a == 'G' && b == 'G' && c == 'G' && d == 'G') {  // Ninguem atira
        printf("Ninguém morreu.\n");
    } else {                                                    // Alguns atiram
        if (a == 'G') printf("Alejandro morreu.\n");
        if (b == 'G') printf("Blanca morreu.\n");
        if (c == 'G') printf("Casimiro morreu.\n");
        if (d == 'G') printf("Dorotea morreu.\n");
    }

    return 0;
}
