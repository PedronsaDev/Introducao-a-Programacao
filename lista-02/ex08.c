// Exercicio 08:
//
// Muitas empresas vêm adotando os métodos de drive-thru e delivery. 
// Além de poder manter o comércio funcionando com medidas de segurança, 
// também é possível tornar a interação cliente-loja mais eficiente. 
// Neste contexto, a Marmiteria do Seu Jorge decidiu criar um sistema 
// para poder coletar os pedidos dos clientes online. 
// Foi solicitada a sua ajuda, programador serelepe, 
// para criar um programa que receba os pedidos e calcule o valor total da marmitex.

#include <stdio.h>

int main() {
    char tamanho, guarnicao1, guarnicao2;
    int arroz, feijao, talher;
    double valor;
    scanf(" %c %d %d", &tamanho, &arroz, &feijao);

    if (tamanho == 'p') {
        scanf(" %c", &guarnicao1);
    } else {
        scanf(" %c %c", &guarnicao1, &guarnicao2);
    }

    scanf(" %d", &talher);

    if (guarnicao1 == 'p') {
        valor += 1.0f;
    } else if (guarnicao1 == 'c') {
        valor += 2.0f;
    }

    if (tamanho == 'p') {
        valor += 12.0f;
    } else {
        if (tamanho == 'm') {
            valor += 16.0f;
        } else if (tamanho == 'g') {
            valor += 18.0f;
        }

        if (guarnicao2 == 'p') {
            valor += 1.0f;
        } else if (guarnicao2 == 'c') {
            valor += 2.0f;
        }
    }

    if (arroz == 0) {
        valor -= 2.0f;
    }

    if (feijao == 0) {
        valor -= 2.5f;
    }

    if (talher == 1) {
        valor += 0.5f;
    }

    printf("R$ %.2lf\n", valor);

    return 0;
}

