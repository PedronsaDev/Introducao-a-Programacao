// Exercicio 10:
//
// Sr. Dônaldis, dono de um fast-food local, decidiu adotar um sistema de senhas 
// em sua lanchonete para atender o enorme número de pedidos no horário de almoço.
// As senhas são compostas de 3 letras maiúsculas de A a Z, 
// sendo que quando chegam na letra Z retornam à letra A e fazem a letra à sua 
// esquerda avançar uma para frente, conforme o exemplo a seguir.

// AAA → AAB → AAC → ⋯ → AAZ → ABA → ⋯

//Sabendo disso, escreva um programa que, sabendo a senha atual, 
//calcule quantas senhas faltam para chegar na sua vez.

#include <stdio.h>
#include <string.h>


int main()
{
    char senhaAtual[4];
    char suaSenha[4];

    // Nao eh necessario usar "&" pois strings sao ponteiros(endereco e memoria)
    scanf("%3s %3s", senhaAtual, suaSenha);

    int numeroSenhas = 0;

    while(strcmp(senhaAtual, suaSenha) != 0)
    {
        senhaAtual[2]++;

        if(senhaAtual[2] > 'Z')
        {
            senhaAtual[2] = 'A';
            senhaAtual[1]++;

            if(senhaAtual[1] > 'Z')
            {
                senhaAtual[1] = 'A';
                senhaAtual[0]++;

                if(senhaAtual[0] > 'Z')
                    senhaAtual[0] = 'A';
            }
        }

        numeroSenhas++;
    }

    printf("%d", numeroSenhas);

    return 0;
}
