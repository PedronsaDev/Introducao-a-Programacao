// Exercicio 08:
//
// Pedrinho é um menino que só sabe pensar em problemas matemáticos. 
// Dessa vez, ele quer somar os números em um intervalo natural fechado 
// com quantidade par de elementos, iniciado por 1 e terminado por n.

#include <stdio.h>


int main()
{
    int n;
    scanf("%d", &n);

    int somaA = 0;
    int somaB = 0;
    
    int meio = n/2;

    // Estrutuda do for loop:
    //
    // for (inicializacao; condicao; incremento)
    // {
    //      codigo
    // }
    //
    // Obs: caso o bloco tenha apenas uma linha de codigo
    // nao eh necessario usar chaves apenas indentacao.


    // Aqui inicializamos i = 1, pois nao precisamos do valor zero
    // e vamos ate o meio == n/2. ex: n == 8; meio == n/2 == 4;
    for(int i = 1; i <= meio; i++)
        somaA += i;
        // somamos o valor de i pois ele representa 
        // a posicao que estamos.

    // Aqui comecamos pelo meio + 1 pois ja somamos ate o meio
    // e vamos ate n. Usamos i <= n porque precisamos incluir n.
    for(int i = meio + 1; i <= n; i++)
        somaB += i;

    printf("%d\n", somaA);
    printf("%d", somaB);

    return 0;
}
