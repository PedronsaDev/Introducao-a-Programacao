// Exercicio 09:
//
// Dona Lurdina, uma senhora de 85 anos, é uma ávida colecionadora de moedas 
// e possui uma aversão a notas, porém tal excentricidade dificulta seus pagamentos. 
// Seu neto, Guitarvo sempre encarregado de contar as moedas para ajudar a avó, 
// sabendo que você é um habilidoso programador, pediu sua ajuda. 
// Faça um programa que calcule a quantidade mínima de moedas que Lurdina terá que utilizar, 
// dado um valor em centavos.

#include <stdio.h>


int main(){

    int valorCentavos;
    scanf("%d", &valorCentavos);
    
    int numeroMoedas = 0;
    
    // Estrutura do while loop:
    //
    // while(condicao)
    // {
    //      codigo;
    // }
    //
    // Obs: caso o bloco tenha apenas uma linha de codigo
    // nao eh necessario usar chaves apenas indentacao.

    while(valorCentavos > 0){
        // Caso valorCentavos for maior ou igual x
        // subtraimos x de valorCentavos.
        // Case valorCentavos seja menor que x
        // vamos para a poxima condicao(else).
        if(valorCentavos >= 100)
            valorCentavos -= 100;
        else if(valorCentavos >= 50)
            valorCentavos -= 50;
        else if(valorCentavos >= 25)
            valorCentavos -= 25;
        else if(valorCentavos >= 10)
            valorCentavos -= 10;
        else if(valorCentavos >= 5)
            valorCentavos -= 5;
        else
            valorCentavos -= 1; // ou valorCentavos--;
        // Usamos a estrutura if, else if e else
        // pois ela funciona de forma seletora
        // portanto se uma dessas condicoes acontece
        // as condicoes sucessoras nao serao checadas.

        numeroMoedas++;
    }

    printf("%d", numeroMoedas);

    return 0;
}
