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
// Incluimos a biblioteca de strings para utilizar
// a funcao strcmp, que compara duas strings.
#include <string.h>


int main(){

    // O uso de colchetes([]) define que estamos criando um vetor/array de elementos
    // neste caso criamos um vetor de caracteres(string).
    char senhaAtual[4];
    char suaSenha[4];

    // Nao eh necessario usar "&" pois strings sao ponteiros(endereco e memoria).
    scanf("%3s %3s", senhaAtual, suaSenha);

    int numeroSenhas = 0;

    // Enquanto a senhaAtual for diferente da suaSenha
    // continue o loop.
    //
    // A funcao strcmp retorna 1 ou -1 se as strings
    // sao diferentes e 0 se forem iguais.
    while(strcmp(senhaAtual, suaSenha) != 0){
        // Aqui incrementamos uma letra do elemento de indice [2]
        // da string. 
        // Ex: AAA -> AAB
        //     012    012
        senhaAtual[2]++;

        // Checamos se o elemento de indice [2] eh igual a 'Z'.
        if(senhaAtual[2] > 'Z'){
            // Caso seja verdade voltamos o valor dele para 'A'
            // e incrementamos o valor do elemento de indice [1].
            // Ex: AAZ -> ABA
            //     012    012
            senhaAtual[2] = 'A';
            senhaAtual[1]++;

            // Repetimos isso sucetivamente para os outros elementos.
            if(senhaAtual[1] > 'Z'){
                senhaAtual[1] = 'A';
                senhaAtual[0]++;

                if(senhaAtual[0] > 'Z')
                    senhaAtual[0] = 'A';
            }
        }

        // a cada variacao incrementamos o numero de senhas
        // entre as senhas dadas.
        numeroSenhas++;
    }

    printf("%d", numeroSenhas);

    return 0;
}
